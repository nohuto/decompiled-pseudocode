/*
 * XREFs of MiAnyProtosAreMapped @ 0x1403208C0
 * Callers:
 *     MiTrimSection @ 0x14031E730 (MiTrimSection.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x14022C550 (MiCheckProtoPtePageState.c)
 */

__int64 __fastcall MiAnyProtosAreMapped(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebp
  ULONG_PTR v3; // rbx
  unsigned __int64 v4; // rdi
  __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rcx
  unsigned __int8 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v9 = 17;
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
      v6 = MiCheckProtoPtePageState(v3, &v9);
      if ( v6 )
      {
        v7 = v4;
        if ( v4 > (v3 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
          v7 = (v3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        while ( v3 < v7 )
        {
          if ( (*(_BYTE *)v3 & 1) != 0 )
          {
            v2 = 1;
            v3 = v4;
            break;
          }
          v3 += 8LL;
        }
        LOBYTE(v5) = v9;
        if ( v9 != 17 )
        {
          MiUnlockProtoPoolPage(v6, v5);
          LOBYTE(v5) = 17;
          v9 = 17;
        }
      }
      else
      {
        LOBYTE(v5) = v9;
        v3 = (v3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
    }
    while ( v3 < v4 );
    if ( (_BYTE)v5 != 17 )
      MiUnlockProtoPoolPage(v6, v5);
  }
  return v2;
}
