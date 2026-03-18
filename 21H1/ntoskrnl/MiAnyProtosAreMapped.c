/*
 * XREFs of MiAnyProtosAreMapped @ 0x1402D0104
 * Callers:
 *     MiTrimSection @ 0x1402CE300 (MiTrimSection.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x1402855A0 (MiCheckProtoPtePageState.c)
 */

__int64 __fastcall MiAnyProtosAreMapped(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebp
  ULONG_PTR v3; // rbx
  unsigned __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rcx
  char v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v11 = 17;
  if ( a1 == a2[3] )
    v3 = a2[1];
  else
    v3 = *(_QWORD *)(a1 + 8);
  if ( a1 == a2[4] )
    v4 = a2[2] + 8LL;
  else
    v4 = v3 + 8LL * *(unsigned int *)(a1 + 44);
  if ( v3 < v4 )
  {
    do
    {
      v6 = MiCheckProtoPtePageState(v3, (__int64)&v11);
      if ( v6 )
      {
        v9 = v4;
        if ( v4 > (v3 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
          v9 = (v3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        while ( v3 < v9 )
        {
          if ( (*(_BYTE *)v3 & 1) != 0 )
          {
            v2 = 1;
            v3 = v4;
            break;
          }
          v3 += 8LL;
        }
        LOBYTE(v5) = v11;
        if ( v11 != 17 )
        {
          MiUnlockProtoPoolPage(v6, v5, v7, v8);
          LOBYTE(v5) = 17;
          v11 = 17;
        }
      }
      else
      {
        LOBYTE(v5) = v11;
        v3 = (v3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
    }
    while ( v3 < v4 );
    if ( (_BYTE)v5 != 17 )
      MiUnlockProtoPoolPage(v6, v5, v7, v8);
  }
  return v2;
}
