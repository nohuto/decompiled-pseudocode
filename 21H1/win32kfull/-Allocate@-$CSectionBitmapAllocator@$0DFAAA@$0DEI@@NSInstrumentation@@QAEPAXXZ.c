/*
 * XREFs of ?Allocate@?$CSectionBitmapAllocator@$0DFAAA@$0DEI@@NSInstrumentation@@QAEPAXXZ @ 0xA8F58
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0DFAAA@$0DEI@@NSInstrumentation@@IAEPAXXZ @ 0xA8E6E (-Allocate@-$CTypeIsolation@$0DFAAA@$0DEI@@NSInstrumentation@@IAEPAXXZ.c)
 * Callees:
 *     ?CommitSlot@?$CSectionBitmapAllocator@$0DFAAA@$0DEI@@NSInstrumentation@@AAE_NI@Z @ 0xA900E (-CommitSlot@-$CSectionBitmapAllocator@$0DFAAA@$0DEI@@NSInstrumentation@@AAE_NI@Z.c)
 */

int __thiscall NSInstrumentation::CSectionBitmapAllocator<217088,840>::Allocate(int *this)
{
  int v2; // esi
  ULONG ClearBits; // eax
  ULONG v4; // ebx
  int v5; // ebx
  char v7; // [esp+Ch] [ebp-4h]

  v2 = *this;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0);
  ClearBits = RtlFindClearBits((PRTL_BITMAP)(this[2] ^ this[3]), 1u, (unsigned int)this[4] < 0xD4 ? this[4] : 0);
  v4 = ClearBits;
  v7 = ClearBits;
  if ( ClearBits == -1
    || !(unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<217088,840>::CommitSlot(ClearBits) )
  {
    v5 = 0;
  }
  else
  {
    RtlTestBit((PRTL_BITMAP)(this[2] ^ this[3]), v4);
    RtlSetBit((PRTL_BITMAP)(this[2] ^ this[3]), v4);
    if ( (unsigned int)++this[4] >= 0xD4 )
      this[4] = 0;
    v5 = 840 * (v7 & 3) + (this[2] ^ this[1]) + (v4 >> 2 << 12);
  }
  ExReleasePushLockExclusiveEx(v2, 0);
  KeLeaveCriticalRegion();
  return v5;
}
