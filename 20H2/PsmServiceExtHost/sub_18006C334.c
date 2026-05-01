/*
 * XREFs of sub_18006C334 @ 0x18006C334
 * Callers:
 *     sub_18006D300 @ 0x18006D300 (sub_18006D300.c)
 * Callees:
 *     sub_18006C494 @ 0x18006C494 (sub_18006C494.c)
 */

__int64 __fastcall sub_18006C334(__int64 a1, void *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // r11
  __int64 v8; // r10
  int v9; // r9d
  DWORD ProcessId; // [rsp+30h] [rbp+8h]
  __int64 v12; // [rsp+30h] [rbp+8h]

  ProcessId = GetProcessId(a2);
  v4 = HIBYTE(ProcessId)
     + 37 * (BYTE2(ProcessId) + 37 * (BYTE1(ProcessId) + 37 * ((unsigned __int8)ProcessId + 11623883LL)));
  v5 = GetProcessId(a2);
  v6 = 0LL;
  while ( 1 )
  {
    v7 = -1LL << (*(_BYTE *)(a1 + 76) & 0x1F);
    v8 = v7 & v4;
    if ( v6 )
      goto LABEL_5;
    v9 = *(_DWORD *)(a1 + 76) >> 5;
    if ( !v9 )
      return 0LL;
    v12 = v7 & v4;
    v6 = *(_QWORD *)(a1 + 80)
       + 8LL
       * ((37
         * (BYTE6(v12)
          + 37
          * (BYTE5(v12)
           + 37
           * (BYTE4(v12)
            + 37 * (BYTE3(v12) + 37 * (BYTE2(v12) + 37 * (BYTE1(v12) + 37 * ((unsigned __int8)v8 + 11623883)))))))
         + HIBYTE(v12)) & (unsigned int)(v9 - 1));
LABEL_5:
    while ( 1 )
    {
      v6 = *(_QWORD *)v6;
      if ( (v6 & 1) != 0 )
        break;
      if ( v8 == (v7 & *(_QWORD *)(v6 + 8)) )
        goto LABEL_9;
    }
    v6 = 0LL;
LABEL_9:
    if ( !v6 || (unsigned int)sub_18006C494(v6, v5) )
      return v6;
  }
}
