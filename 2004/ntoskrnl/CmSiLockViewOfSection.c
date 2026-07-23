/*
 * XREFs of CmSiLockViewOfSection @ 0x140271240
 * Callers:
 *     HvpViewMapMakeViewRangeValid @ 0x140638E1C (HvpViewMapMakeViewRangeValid.c)
 * Callees:
 *     ZwLockVirtualMemory @ 0x1403F5760 (ZwLockVirtualMemory.c)
 */

NTSTATUS __fastcall CmSiLockViewOfSection(ULONG_PTR a1, void **a2, void *a3, ULONG_PTR a4)
{
  void *v4; // rcx
  ULONG_PTR v6; // [rsp+30h] [rbp+8h] BYREF
  PVOID v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = a1;
  v4 = *a2;
  v7 = a3;
  v6 = a4;
  return ZwLockVirtualMemory(v4, &v7, &v6, 1u);
}
