/*
 * XREFs of sub_180042120 @ 0x180042120
 * Callers:
 *     sub_180041D10 @ 0x180041D10 (sub_180041D10.c)
 *     sub_180042214 @ 0x180042214 (sub_180042214.c)
 *     sub_180042298 @ 0x180042298 (sub_180042298.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_1800421D8 @ 0x1800421D8 (sub_1800421D8.c)
 */

__int64 __fastcall sub_180042120(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rsi
  int v6; // eax
  unsigned int v7; // edi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  unsigned int v14; // esi
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v4 = (unsigned int)a2;
  v6 = sub_1800421D8(a1, a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    sub_180003268(
      retaddr,
      1388,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      v6);
    return v7;
  }
  v9 = *(_DWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 16) += v4;
  v10 = v9 - v4;
  *(_DWORD *)(a1 + 32) = v10;
  if ( a3 )
  {
    v11 = v10 & 3;
    if ( v11 )
    {
      v12 = 4 - v11;
      v13 = sub_1800421D8(a1, (unsigned int)(4 - v11));
      v14 = v13;
      if ( v13 < 0 )
      {
        sub_180003268(
          retaddr,
          1398,
          (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          v13);
        return v14;
      }
      *(_DWORD *)(a1 + 32) &= 0xFFFFFFFC;
      *(_QWORD *)(a1 + 16) += v12;
    }
  }
  return 0LL;
}
