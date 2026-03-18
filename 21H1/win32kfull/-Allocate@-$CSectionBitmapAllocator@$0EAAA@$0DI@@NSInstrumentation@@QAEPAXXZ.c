/*
 * XREFs of ?Allocate@?$CSectionBitmapAllocator@$0EAAA@$0DI@@NSInstrumentation@@QAEPAXXZ @ 0x183E35
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0EAAA@$0DI@@NSInstrumentation@@IAEPAXXZ @ 0x183EDD (-Allocate@-$CTypeIsolation@$0EAAA@$0DI@@NSInstrumentation@@IAEPAXXZ.c)
 * Callees:
 *     ?CommitSlot@?$CSectionBitmapAllocator@$0EAAA@$0DI@@NSInstrumentation@@AAE_NI@Z @ 0x184029 (-CommitSlot@-$CSectionBitmapAllocator@$0EAAA@$0DI@@NSInstrumentation@@AAE_NI@Z.c)
 */

unsigned int __thiscall NSInstrumentation::CSectionBitmapAllocator<16384,56>::Allocate(int *this)
{
  int v2; // esi
  ULONG ClearBits; // eax
  ULONG v4; // ebx
  unsigned int v5; // ebx

  v2 = *this;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0);
  ClearBits = RtlFindClearBits((PRTL_BITMAP)(this[2] ^ this[3]), 1u, (unsigned int)this[4] < 0x124 ? this[4] : 0);
  v4 = ClearBits;
  if ( ClearBits == -1 || !(unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<16384,56>::CommitSlot(ClearBits) )
  {
    v5 = 0;
  }
  else
  {
    RtlTestBit((PRTL_BITMAP)(this[2] ^ this[3]), v4);
    RtlSetBit((PRTL_BITMAP)(this[2] ^ this[3]), v4);
    if ( (unsigned int)++this[4] >= 0x124 )
      this[4] = 0;
    v5 = 56 * (v4 % 0x49) + ((v4 / 0x49) << 12) + (this[2] ^ this[1]);
  }
  ExReleasePushLockExclusiveEx(v2, 0);
  KeLeaveCriticalRegion();
  return v5;
}
