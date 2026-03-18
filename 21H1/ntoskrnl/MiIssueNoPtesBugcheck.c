/*
 * XREFs of MiIssueNoPtesBugcheck @ 0x140531A20
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x140274AB0 (MmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     MmGetNumberOfFreeSystemPtes @ 0x140203FA4 (MmGetNumberOfFreeSystemPtes.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiGetHighestPteConsumer @ 0x1405591A8 (MiGetHighestPteConsumer.c)
 */

void __fastcall __noreturn MiIssueNoPtesBugcheck(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // rbx
  unsigned int NumberOfFreeSystemPtes; // eax
  ULONG_PTR v3; // r11
  unsigned int v4; // eax
  ULONG_PTR BugCheckParameter2a; // [rsp+48h] [rbp+10h] BYREF

  BugCheckParameter2a = 0LL;
  v1 = (unsigned int)BugCheckParameter2;
  if ( MiGetHighestPteConsumer(&BugCheckParameter2a) )
  {
    NumberOfFreeSystemPtes = MmGetNumberOfFreeSystemPtes();
    KeBugCheckEx(0xD8u, v3, BugCheckParameter2a, NumberOfFreeSystemPtes, 0LL);
  }
  v4 = MmGetNumberOfFreeSystemPtes();
  KeBugCheckEx(0x3Fu, 0LL, v1, v4, 0LL);
}
