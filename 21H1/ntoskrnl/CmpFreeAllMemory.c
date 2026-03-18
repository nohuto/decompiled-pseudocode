/*
 * XREFs of CmpFreeAllMemory @ 0x1408672F8
 * Callers:
 *     CmShutdownSystem @ 0x140866F58 (CmShutdownSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140621720 (CmpDetachFromRegistryProcess.c)
 *     CmpGetNextActiveHive @ 0x140690FA0 (CmpGetNextActiveHive.c)
 *     CmpDestroyHive @ 0x140715158 (CmpDestroyHive.c)
 *     CmpDumpKeyBodyList @ 0x14086A668 (CmpDumpKeyBodyList.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void CmpFreeAllMemory()
{
  unsigned int v0; // edi
  char v1; // si
  _QWORD *j; // rdx
  __int64 *NextActiveHive; // rbx
  __int64 v4; // r8
  _DWORD *v5; // r9
  int v6; // ecx
  int v7; // eax
  __int64 v8; // r14
  __int64 *v9; // r14
  __int64 v10; // r15
  __int64 i; // rbp
  char v12; // al
  _QWORD *v13; // rcx
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // r8
  _DWORD *v17; // r9
  int v18; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v19[3]; // [rsp+38h] [rbp-50h] BYREF

  memset(v19, 0, sizeof(v19));
  v0 = 0;
  v1 = 0;
  NextActiveHive = CmpGetNextActiveHive(0LL);
  if ( NextActiveHive )
  {
    do
    {
      v6 = *((_DWORD *)NextActiveHive + 412);
      v7 = 0;
      v8 = NextActiveHive[205];
      v18 = 0;
      if ( v6 > 0 )
      {
        v9 = (__int64 *)(v8 + 16);
        v10 = (unsigned int)v6;
        do
        {
          for ( i = *v9; i; i = *(_QWORD *)(i + 8) )
          {
            v12 = v1;
            if ( !v1 )
              v12 = 1;
            v1 = v12;
            CmpDumpKeyBodyList(i - 16, &v18);
          }
          v9 += 3;
          --v10;
        }
        while ( v10 );
        v7 = v18;
      }
      v13 = (_QWORD *)NextActiveHive[198];
      v0 += v7;
      v1 = 0;
      while ( v13 )
      {
        v4 = (__int64)(v13 + 2);
        for ( j = (_QWORD *)v13[2]; j != (_QWORD *)v4; j = (_QWORD *)*j )
        {
          if ( j[6] )
          {
            v14 = v1;
            if ( !v1 )
              v14 = 1;
            v1 = v14;
          }
        }
        v13 = (_QWORD *)*v13;
      }
      CmpAttachToRegistryProcess((__int64)v19, (__int64)j, v4, v5);
      CmpDestroyHive((volatile signed __int32 *)NextActiveHive);
      CmpDetachFromRegistryProcess((__int64)v19, v15, v16, v17);
      NextActiveHive = CmpGetNextActiveHive((struct _EX_RUNDOWN_REF *)NextActiveHive);
    }
    while ( NextActiveHive );
    if ( v0 )
      KeBugCheckEx(0x51u, 0xFuLL, 1uLL, v0, 0LL);
  }
  ExFreePoolWithTag(CmpNameCacheTable, 0);
}
