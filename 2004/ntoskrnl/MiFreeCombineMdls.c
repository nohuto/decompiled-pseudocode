/*
 * XREFs of MiFreeCombineMdls @ 0x14071500C
 * Callers:
 *     MiCombineWorkingSet @ 0x140557784 (MiCombineWorkingSet.c)
 *     MiProcessCrcList @ 0x1407150D0 (MiProcessCrcList.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140317C94 (MiFreePagesFromMdl.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeCombineMdls(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned int i; // ebp
  _DWORD *v5; // rdi
  unsigned int v6; // edx
  int v7; // eax
  _DWORD *v8; // r14
  unsigned __int64 v9; // rbx

  v3 = a1 + 64;
  for ( i = 0; i < 3; ++i )
  {
    v5 = *(_DWORD **)v3;
    if ( *(_QWORD *)v3 )
    {
      do
      {
        v6 = v5[11];
        v7 = v5[10];
        v8 = *(_DWORD **)v5;
        if ( v6 != v7 )
        {
          v9 = (unsigned __int64)(v7 - v6) >> 12;
          memmove(v5 + 12, &v5[2 * ((unsigned __int64)v6 >> 12) + 12], 8 * v9);
          *((_QWORD *)v5 + 5) = (unsigned int)((_DWORD)v9 << 12);
        }
        MiFreePagesFromMdl((ULONG_PTR)v5, 0, a3);
        ExFreePoolWithTag(v5, 0);
        v5 = v8;
      }
      while ( v8 );
    }
    *(_QWORD *)v3 = 0LL;
    *(_QWORD *)(v3 + 24) = 0LL;
    v3 += 8LL;
  }
}
