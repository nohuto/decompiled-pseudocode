/*
 * XREFs of sub_180067014 @ 0x180067014
 * Callers:
 *     sub_1800795CC @ 0x1800795CC (sub_1800795CC.c)
 *     sub_180079884 @ 0x180079884 (sub_180079884.c)
 *     sub_18007AC9C @ 0x18007AC9C (sub_18007AC9C.c)
 *     sub_18007AD60 @ 0x18007AD60 (sub_18007AD60.c)
 *     sub_18007ADCC @ 0x18007ADCC (sub_18007ADCC.c)
 *     sub_18007AE8C @ 0x18007AE8C (sub_18007AE8C.c)
 *     sub_18007AF2C @ 0x18007AF2C (sub_18007AF2C.c)
 *     sub_18007CC84 @ 0x18007CC84 (sub_18007CC84.c)
 *     sub_18007E228 @ 0x18007E228 (sub_18007E228.c)
 *     sub_18007E2AC @ 0x18007E2AC (sub_18007E2AC.c)
 *     sub_18007E75C @ 0x18007E75C (sub_18007E75C.c)
 * Callees:
 *     sub_18006698C @ 0x18006698C (sub_18006698C.c)
 *     sub_180066B2C @ 0x180066B2C (sub_180066B2C.c)
 *     sub_1800672C0 @ 0x1800672C0 (sub_1800672C0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180067014(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx

  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)a2 = 0LL;
  *(_BYTE *)(a2 + 8) = 0;
  if ( !(unsigned __int8)sub_1800672C0(a1, 0LL) )
  {
    LOBYTE(v4) = 1;
    if ( !(unsigned __int8)sub_1800672C0(a1, v4) )
    {
      sub_18006698C(a1, 0);
      if ( *(_BYTE *)(a2 + 8) )
        sub_180066B2C(*(_QWORD *)a2, 0);
      *(_QWORD *)a2 = a1;
      *(_BYTE *)(a2 + 8) = 1;
    }
  }
  return a2;
}
