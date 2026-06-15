/*
 * XREFs of sub_18001F090 @ 0x18001F090
 * Callers:
 *     sub_180014770 @ 0x180014770 (sub_180014770.c)
 *     sub_18001B50C @ 0x18001B50C (sub_18001B50C.c)
 *     sub_18001E510 @ 0x18001E510 (sub_18001E510.c)
 *     sub_18001F228 @ 0x18001F228 (sub_18001F228.c)
 * Callees:
 *     sub_180012138 @ 0x180012138 (sub_180012138.c)
 *     sub_18001E6B8 @ 0x18001E6B8 (sub_18001E6B8.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18001F090(__int64 a1, _DWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  a2[141] = 0;
  a2[142] = 0;
  a2[143] = 0;
  a2[144] = 0;
  a2[145] = 0;
  a2[146] = 0;
  a2[147] = 1;
  sub_180012138(a2);
  sub_18001E6B8(a1, (__int64)a2, 0xD1u, 0);
  if ( v4 )
    LeaveCriticalSection(v4);
}
