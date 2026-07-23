/*
 * XREFs of MiDeleteSessionPdes @ 0x14038CC18
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A84A8 (MiUnloadSystemImage.c)
 * Callees:
 *     MiReturnSystemCharges @ 0x140237D28 (MiReturnSystemCharges.c)
 *     MiGetSessionVm @ 0x14031CEEC (MiGetSessionVm.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiDeletePagablePteRange @ 0x1403420B0 (MiDeletePagablePteRange.c)
 */

unsigned __int64 MiDeleteSessionPdes()
{
  unsigned __int64 SessionVm; // rax
  __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // r10
  unsigned __int64 v4; // rbx
  __int64 v6[7]; // [rsp+40h] [rbp-38h] BYREF

  memset(v6, 0, 48);
  SessionVm = MiGetSessionVm();
  v1 = *(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(SessionVm + 174));
  MiDeletePagablePteRange(SessionVm, 0x11u, v3 << 25 >> 16 << 25 >> 16, v2 << 25 >> 16 << 25 >> 16, 1, 0, v6);
  v4 = v6[0];
  MiReturnCommit(v1, v6[0]);
  return MiReturnSystemCharges(v1, v4, 1);
}
