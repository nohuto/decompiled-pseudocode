/*
 * XREFs of sub_1C001CDA8 @ 0x1C001CDA8
 * Callers:
 *     sub_1C000ABD0 @ 0x1C000ABD0 (sub_1C000ABD0.c)
 *     sub_1C0010540 @ 0x1C0010540 (sub_1C0010540.c)
 *     sub_1C00304E0 @ 0x1C00304E0 (sub_1C00304E0.c)
 *     sub_1C0036CFC @ 0x1C0036CFC (sub_1C0036CFC.c)
 *     sub_1C0039C2C @ 0x1C0039C2C (sub_1C0039C2C.c)
 *     sub_1C0039D88 @ 0x1C0039D88 (sub_1C0039D88.c)
 *     sub_1C003A2BC @ 0x1C003A2BC (sub_1C003A2BC.c)
 *     sub_1C003A450 @ 0x1C003A450 (sub_1C003A450.c)
 *     sub_1C003A5DC @ 0x1C003A5DC (sub_1C003A5DC.c)
 *     sub_1C003A78C @ 0x1C003A78C (sub_1C003A78C.c)
 *     sub_1C003AA2C @ 0x1C003AA2C (sub_1C003AA2C.c)
 *     sub_1C003AB30 @ 0x1C003AB30 (sub_1C003AB30.c)
 *     sub_1C003AC9C @ 0x1C003AC9C (sub_1C003AC9C.c)
 *     sub_1C003AEF8 @ 0x1C003AEF8 (sub_1C003AEF8.c)
 *     sub_1C003D218 @ 0x1C003D218 (sub_1C003D218.c)
 *     sub_1C004E668 @ 0x1C004E668 (sub_1C004E668.c)
 *     sub_1C005C970 @ 0x1C005C970 (sub_1C005C970.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall sub_1C001CDA8(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *result; // rax

  *(_BYTE *)(a2 + 132) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels);
  *(_DWORD *)(a2 + 136) = 1;
  *(_DWORD *)(a2 + 92) = a3;
  *(_DWORD *)(a2 + 88) = 2018460752;
  stru_1C006B480.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)a2;
  result = KeGetCurrentThread();
  *(_QWORD *)(a2 + 24) = result;
  return result;
}
