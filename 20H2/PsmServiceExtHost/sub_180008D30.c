/*
 * XREFs of sub_180008D30 @ 0x180008D30
 * Callers:
 *     sub_1800072AC @ 0x1800072AC (sub_1800072AC.c)
 *     sub_180008EE4 @ 0x180008EE4 (sub_180008EE4.c)
 *     sub_18000F200 @ 0x18000F200 (sub_18000F200.c)
 *     sub_18002C530 @ 0x18002C530 (sub_18002C530.c)
 *     sub_18006B47C @ 0x18006B47C (sub_18006B47C.c)
 *     sub_180073D58 @ 0x180073D58 (sub_180073D58.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180008D30(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v6; // r15d
  __int64 v7; // rbx
  int v8; // edi
  __int64 v9; // r11
  __int64 v10; // r10

  RtlAcquireSRWLockShared(a1 + 32);
  v6 = *(_DWORD *)(a1 + 20);
  v7 = 0LL;
  v8 = -1073741275;
  v9 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
  v10 = v9 & (HIBYTE(a2)
            + 37
            * (BYTE6(a2)
             + 37
             * (BYTE5(a2)
              + 37
              * (BYTE4(a2)
               + 37 * (BYTE3(a2) + 37 * (BYTE2(a2) + 37 * (BYTE1(a2) + 37 * ((unsigned __int8)a2 + 11623883LL))))))));
LABEL_2:
  if ( v7 )
    goto LABEL_5;
  if ( v6 >> 5 )
  {
    v7 = *(_QWORD *)(a1 + 24)
       + 8LL
       * ((37
         * (BYTE6(v10)
          + 37
          * (BYTE5(v10)
           + 37
           * (BYTE4(v10)
            + 37 * (BYTE3(v10) + 37 * (BYTE2(v10) + 37 * (BYTE1(v10) + 37 * ((unsigned __int8)v10 + 11623883)))))))
         + HIBYTE(v10)) & ((v6 >> 5) - 1));
LABEL_5:
    while ( 1 )
    {
      v7 = *(_QWORD *)v7;
      if ( (v7 & 1) != 0 )
        break;
      if ( v10 == (v9 & *(_QWORD *)(v7 + 8)) )
      {
        if ( a2 != *(_QWORD *)(v7 + 32) )
          goto LABEL_2;
        v8 = 0;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v7 + 16)) <= 1 )
          __fastfail(0xEu);
        goto LABEL_9;
      }
    }
  }
  v7 = v10;
LABEL_9:
  RtlReleaseSRWLockShared(a1 + 32);
  if ( v8 < 0 )
    return (unsigned int)v8;
  *a3 = v7;
  return 0LL;
}
