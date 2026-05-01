/*
 * XREFs of sub_1800286D8 @ 0x1800286D8
 * Callers:
 *     sub_180002D50 @ 0x180002D50 (sub_180002D50.c)
 *     sub_1800035F4 @ 0x1800035F4 (sub_1800035F4.c)
 *     sub_1800038AC @ 0x1800038AC (sub_1800038AC.c)
 *     sub_180004618 @ 0x180004618 (sub_180004618.c)
 *     sub_180004F18 @ 0x180004F18 (sub_180004F18.c)
 *     sub_180008168 @ 0x180008168 (sub_180008168.c)
 *     sub_180009FE0 @ 0x180009FE0 (sub_180009FE0.c)
 *     sub_18000B2DC @ 0x18000B2DC (sub_18000B2DC.c)
 *     sub_18000E2A0 @ 0x18000E2A0 (sub_18000E2A0.c)
 *     sub_180017F60 @ 0x180017F60 (sub_180017F60.c)
 *     sub_180026288 @ 0x180026288 (sub_180026288.c)
 *     sub_180028478 @ 0x180028478 (sub_180028478.c)
 *     _assert @ 0x180028750 (_assert.c)
 *     sub_18003D548 @ 0x18003D548 (sub_18003D548.c)
 *     sub_18007BD64 @ 0x18007BD64 (sub_18007BD64.c)
 *     sub_18007E97C @ 0x18007E97C (sub_18007E97C.c)
 *     sub_18007EB50 @ 0x18007EB50 (sub_18007EB50.c)
 *     sub_18007ECDC @ 0x18007ECDC (sub_18007ECDC.c)
 *     sub_18007F078 @ 0x18007F078 (sub_18007F078.c)
 * Callees:
 *     sub_18003818C @ 0x18003818C (sub_18003818C.c)
 */

char __fastcall sub_1800286D8(__int64 a1)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    v5 = *(_QWORD *)(a1 + 120);
    if ( v5 )
      TpReleaseWork(v5);
    v6 = *(_QWORD *)(a1 + 32);
    if ( v6 )
      sub_18003818C(v6, a1);
    LOBYTE(v4) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a1);
  }
  return v4;
}
