/*
 * XREFs of CmpFreeAllMemory @ 0x14086BDF8
 * Callers:
 *     CmShutdownSystem @ 0x14086BA58 (CmShutdownSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     CmpGetNextActiveHive @ 0x140667750 (CmpGetNextActiveHive.c)
 *     CmpDetachFromRegistryProcess @ 0x1406E589C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpDestroyHive @ 0x1407293E8 (CmpDestroyHive.c)
 *     CmpDumpKeyBodyList @ 0x14086EDA8 (CmpDumpKeyBodyList.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void CmpFreeAllMemory()
{
  unsigned int v0; // edi
  char v1; // si
  __int64 *NextActiveHive; // rbx
  int v3; // ecx
  int v4; // eax
  __int64 v5; // r14
  __int64 *v6; // r14
  __int64 v7; // r15
  __int64 i; // rbp
  char v9; // al
  _QWORD *v10; // rcx
  _QWORD *j; // rdx
  char v12; // al
  int v13; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v14[3]; // [rsp+38h] [rbp-50h] BYREF

  memset(v14, 0, sizeof(v14));
  v0 = 0;
  v1 = 0;
  NextActiveHive = CmpGetNextActiveHive(0LL);
  if ( NextActiveHive )
  {
    do
    {
      v3 = *((_DWORD *)NextActiveHive + 412);
      v4 = 0;
      v5 = NextActiveHive[205];
      v13 = 0;
      if ( v3 > 0 )
      {
        v6 = (__int64 *)(v5 + 16);
        v7 = (unsigned int)v3;
        do
        {
          for ( i = *v6; i; i = *(_QWORD *)(i + 8) )
          {
            v9 = v1;
            if ( !v1 )
              v9 = 1;
            v1 = v9;
            CmpDumpKeyBodyList(i - 16, &v13);
          }
          v6 += 3;
          --v7;
        }
        while ( v7 );
        v4 = v13;
      }
      v10 = (_QWORD *)NextActiveHive[198];
      v0 += v4;
      v1 = 0;
      while ( v10 )
      {
        for ( j = (_QWORD *)v10[2]; j != v10 + 2; j = (_QWORD *)*j )
        {
          if ( j[6] )
          {
            v12 = v1;
            if ( !v1 )
              v12 = 1;
            v1 = v12;
          }
        }
        v10 = (_QWORD *)*v10;
      }
      CmpAttachToRegistryProcess((__int64)v14);
      CmpDestroyHive((volatile signed __int32 *)NextActiveHive);
      CmpDetachFromRegistryProcess((__int64)v14);
      NextActiveHive = CmpGetNextActiveHive((struct _EX_RUNDOWN_REF *)NextActiveHive);
    }
    while ( NextActiveHive );
    if ( v0 )
      KeBugCheckEx(0x51u, 0xFuLL, 1uLL, v0, 0LL);
  }
  ExFreePoolWithTag(CmpNameCacheTable, 0);
}
