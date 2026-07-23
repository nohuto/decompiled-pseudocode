/*
 * XREFs of HvlSetSystemMachineCheckProperty @ 0x1404F67C0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x140390610 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404F27C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F33B0 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlSetSystemMachineCheckProperty(_QWORD *a1)
{
  _QWORD *v2; // rax
  _OWORD v4[2]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v5[80]; // [rsp+40h] [rbp-68h] BYREF

  memset(v4, 0, sizeof(v4));
  v2 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v4, 1, (__int64)v5, 40LL);
  *(_DWORD *)v2 = 4;
  v2[1] = *a1;
  LOWORD(a1) = HvcallInitiateHypercall(111);
  HvlpReleaseHypercallPage((__int64)v4);
  return (_WORD)a1 != 0 ? 0xC0000001 : 0;
}
