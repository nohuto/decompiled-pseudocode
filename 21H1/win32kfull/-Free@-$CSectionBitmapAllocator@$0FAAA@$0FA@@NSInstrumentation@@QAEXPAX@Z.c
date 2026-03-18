/*
 * XREFs of ?Free@?$CSectionBitmapAllocator@$0FAAA@$0FA@@NSInstrumentation@@QAEXPAX@Z @ 0x97D5C
 * Callers:
 *     ?Free@?$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@IAEXPAX@Z @ 0x97C26 (-Free@-$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@IAEXPAX@Z.c)
 * Callees:
 *     ?VirtualAddressToSlot@?$CSectionBitmapAllocator@$0FAAA@$0FA@@NSInstrumentation@@AAEIPBX@Z @ 0x97DC2 (-VirtualAddressToSlot@-$CSectionBitmapAllocator@$0FAAA@$0FA@@NSInstrumentation@@AAEIPBX@Z.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

void __thiscall NSInstrumentation::CSectionBitmapAllocator<20480,80>::Free(int *this, void *a2)
{
  int v3; // esi
  ULONG v4; // edi

  if ( a2 )
  {
    v3 = *this;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v3, 0);
    v4 = NSInstrumentation::CSectionBitmapAllocator<20480,80>::VirtualAddressToSlot(a2);
    RtlClearBit((PRTL_BITMAP)(this[2] ^ this[3]), v4);
    memset(a2, 0, 0x50u);
    this[4] = v4;
    ExReleasePushLockExclusiveEx(v3, 0);
    KeLeaveCriticalRegion();
  }
}
