/*
 * XREFs of sub_18000EF78 @ 0x18000EF78
 * Callers:
 *     sub_1800076D4 @ 0x1800076D4 (sub_1800076D4.c)
 *     sub_18000EE6C @ 0x18000EE6C (sub_18000EE6C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000EF78(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // r9
  unsigned int v4; // r10d
  __int64 v5; // rdi
  __int64 v6; // r11
  int v7; // r9d
  __int64 v9; // [rsp+18h] [rbp+8h]

  v9 = *a2;
  v3 = 0LL;
  v4 = -1073741275;
  v5 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
  v6 = v5 & (HIBYTE(v9)
           + 37
           * (BYTE6(v9)
            + 37
            * (BYTE5(v9)
             + 37
             * (BYTE4(v9)
              + 37 * (BYTE3(v9) + 37 * (BYTE2(v9) + 37 * (BYTE1(v9) + 37 * ((unsigned __int8)v9 + 11623883LL))))))));
  while ( 1 )
  {
    if ( v3 )
      goto LABEL_5;
    v7 = *(_DWORD *)(a1 + 4) >> 5;
    if ( !v7 )
      return v4;
    v3 = *(_QWORD *)(a1 + 8)
       + 8LL
       * ((37
         * (BYTE6(v6)
          + 37
          * (BYTE5(v6)
           + 37
           * (BYTE4(v6) + 37 * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (BYTE1(v6) + 37 * ((unsigned __int8)v6 + 11623883)))))))
         + HIBYTE(v6)) & (unsigned int)(v7 - 1));
LABEL_5:
    while ( 1 )
    {
      v3 = *(_QWORD *)v3;
      if ( (v3 & 1) != 0 )
        break;
      if ( v6 == (v5 & *(_QWORD *)(v3 + 8)) )
        goto LABEL_7;
    }
    v3 = 0LL;
LABEL_7:
    if ( !v3 )
      return v4;
    if ( v9 == *(_QWORD *)(v3 + 32) )
    {
      v4 = 0;
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v3 + 16)) <= 1 )
        __fastfail(0xEu);
      *a3 = v3;
      return v4;
    }
  }
}
