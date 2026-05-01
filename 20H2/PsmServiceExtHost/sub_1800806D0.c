/*
 * XREFs of sub_1800806D0 @ 0x1800806D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800223EC @ 0x1800223EC (sub_1800223EC.c)
 *     sub_1800260A0 @ 0x1800260A0 (sub_1800260A0.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_180034D90 @ 0x180034D90 (sub_180034D90.c)
 *     sub_18007FF10 @ 0x18007FF10 (sub_18007FF10.c)
 */

BOOLEAN __fastcall sub_1800806D0(__int64 a1)
{
  int v2; // eax
  char v3; // di

  sub_180034D90((_QWORD *)a1);
  sub_1800223EC(*(_QWORD *)(a1 + 56));
  v2 = *(_DWORD *)(a1 + 64);
  v3 = 1;
  if ( (v2 & 1) != 0 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 340LL) &= ~1u;
    v2 = *(_DWORD *)(a1 + 64);
  }
  if ( (v2 & 2) != 0 )
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 340LL) &= ~2u;
  else
    v3 = 0;
  sub_1800260A0(*(_QWORD *)(a1 + 56));
  if ( v3 )
    sub_18007FF10(*(_QWORD *)(a1 + 56));
  sub_1800274E0(*(_QWORD **)(a1 + 56));
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a1);
}
