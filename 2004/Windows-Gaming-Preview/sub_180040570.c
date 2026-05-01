/*
 * XREFs of sub_180040570 @ 0x180040570
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 */

__int64 __fastcall sub_180040570(__int64 a1, _OWORD *a2)
{
  __int64 v3; // r8
  _OWORD *v4; // rax
  __int128 v5; // xmm1
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v3 = 5LL;
    if ( *(_DWORD *)(a1 + 36) >= 5u )
    {
      v4 = (_OWORD *)(a1 + 32);
      do
      {
        *a2 = *v4;
        a2[1] = v4[1];
        a2[2] = v4[2];
        a2[3] = v4[3];
        a2[4] = v4[4];
        a2[5] = v4[5];
        a2[6] = v4[6];
        a2 += 8;
        v5 = v4[7];
        v4 += 8;
        *(a2 - 1) = v5;
        --v3;
      }
      while ( v3 );
      *a2 = *v4;
      a2[1] = v4[1];
      a2[2] = v4[2];
      a2[3] = v4[3];
      *((_DWORD *)a2 + 16) = *((_DWORD *)v4 + 16);
      return 0LL;
    }
    else
    {
      sub_180003268(
        retaddr,
        631,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        -2147024883);
      return 2147942413LL;
    }
  }
  else
  {
    sub_180003268(
      retaddr,
      629,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      -2147467261);
    return 2147500035LL;
  }
}
