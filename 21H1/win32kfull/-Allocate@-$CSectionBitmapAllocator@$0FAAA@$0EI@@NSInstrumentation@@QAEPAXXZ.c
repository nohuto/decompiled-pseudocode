/*
 * XREFs of ?Allocate@?$CSectionBitmapAllocator@$0FAAA@$0EI@@NSInstrumentation@@QAEPAXXZ @ 0x1A253F
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0FAAA@$0EI@@NSInstrumentation@@IAEPAXXZ @ 0x1A25E7 (-Allocate@-$CTypeIsolation@$0FAAA@$0EI@@NSInstrumentation@@IAEPAXXZ.c)
 * Callees:
 *     ?CommitSlot@?$CSectionBitmapAllocator@$0FAAA@$0EI@@NSInstrumentation@@AAE_NI@Z @ 0x1A27B4 (-CommitSlot@-$CSectionBitmapAllocator@$0FAAA@$0EI@@NSInstrumentation@@AAE_NI@Z.c)
 */

unsigned int __thiscall NSInstrumentation::CSectionBitmapAllocator<20480,72>::Allocate(int *this)
{
  int v2; // esi
  ULONG ClearBits; // eax
  ULONG v4; // ebx
  unsigned int v5; // ebx

  v2 = *this;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0);
  ClearBits = RtlFindClearBits((PRTL_BITMAP)(this[2] ^ this[3]), 1u, (unsigned int)this[4] < 0x118 ? this[4] : 0);
  v4 = ClearBits;
  if ( ClearBits == -1 || !(unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<20480,72>::CommitSlot(ClearBits) )
  {
    v5 = 0;
  }
  else
  {
    RtlTestBit((PRTL_BITMAP)(this[2] ^ this[3]), v4);
    RtlSetBit((PRTL_BITMAP)(this[2] ^ this[3]), v4);
    if ( (unsigned int)++this[4] >= 0x118 )
      this[4] = 0;
    v5 = 72 * (v4 % 0x38) + ((v4 / 0x38) << 12) + (this[2] ^ this[1]);
  }
  ExReleasePushLockExclusiveEx(v2, 0);
  KeLeaveCriticalRegion();
  return v5;
}
