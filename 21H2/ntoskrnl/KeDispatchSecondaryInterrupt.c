/*
 * XREFs of KeDispatchSecondaryInterrupt @ 0x1405190F0
 * Callers:
 *     HalpInvokeIsrForGsiv @ 0x1404D1470 (HalpInvokeIsrForGsiv.c)
 * Callees:
 *     KiInsertSecondarySignalList @ 0x140519618 (KiInsertSecondarySignalList.c)
 *     KiInterruptDispatchCommon @ 0x140521668 (KiInterruptDispatchCommon.c)
 */

char __fastcall KeDispatchSecondaryInterrupt(int a1, unsigned int a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bl
  _QWORD *v4; // rdi
  char v5; // si
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v7[1] = v7;
  v7[0] = v7;
  CurrentIrql = KeGetCurrentIrql();
  v4 = v7;
  if ( !CurrentIrql )
    v4 = 0LL;
  v5 = KiInterruptDispatchCommon(1, a1, (a2 >> 20) & 1, (_DWORD)v4, a3);
  if ( CurrentIrql )
    KiInsertSecondarySignalList(v4);
  return v5;
}
