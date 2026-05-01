/*
 * XREFs of sub_18002FDF4 @ 0x18002FDF4
 * Callers:
 *     sub_18002E33C @ 0x18002E33C (sub_18002E33C.c)
 *     sub_18002EE08 @ 0x18002EE08 (sub_18002EE08.c)
 *     sub_18002F3C8 @ 0x18002F3C8 (sub_18002F3C8.c)
 *     sub_18002FB90 @ 0x18002FB90 (sub_18002FB90.c)
 *     sub_18002FCA8 @ 0x18002FCA8 (sub_18002FCA8.c)
 *     sub_1800301E8 @ 0x1800301E8 (sub_1800301E8.c)
 *     sub_18003B448 @ 0x18003B448 (sub_18003B448.c)
 *     sub_18003D3EC @ 0x18003D3EC (sub_18003D3EC.c)
 *     sub_1800847DC @ 0x1800847DC (sub_1800847DC.c)
 * Callees:
 *     sub_18002F5D0 @ 0x18002F5D0 (sub_18002F5D0.c)
 */

char __fastcall sub_18002FDF4(volatile signed __int64 *a1)
{
  signed __int64 v2; // rax
  bool v3; // zf
  bool v4; // sf
  bool v5; // of
  signed __int64 v6; // rax

  v2 = _InterlockedExchangeAdd64(a1 + 2, 0xFFFFFFFFFFFFFFFFuLL);
  v5 = __OFSUB__(v2, 1LL);
  v3 = v2 == 1;
  v4 = v2 - 1 < 0;
  v6 = v2 - 1;
  if ( v4 ^ v5 | v3 )
  {
    if ( v6 )
      __fastfail(0xEu);
    sub_18002F5D0((__int64)a1);
    LOBYTE(v6) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a1);
  }
  return v6;
}
