/*
 * XREFs of ?Free@?$CSectionBitmapAllocator@$0EAAA@$0DI@@NSInstrumentation@@QAEXPAX@Z @ 0x18411E
 * Callers:
 *     ?Free@?$CTypeIsolation@$0EAAA@$0DI@@NSInstrumentation@@IAEXPAX@Z @ 0x184183 (-Free@-$CTypeIsolation@$0EAAA@$0DI@@NSInstrumentation@@IAEXPAX@Z.c)
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?VirtualAddressToSlot@?$CSectionBitmapAllocator@$0EAAA@$0DI@@NSInstrumentation@@AAEIPBX@Z @ 0x18431D (-VirtualAddressToSlot@-$CSectionBitmapAllocator@$0EAAA@$0DI@@NSInstrumentation@@AAEIPBX@Z.c)
 */

void __thiscall NSInstrumentation::CSectionBitmapAllocator<16384,56>::Free(int *this, void *a2)
{
  int v3; // esi
  ULONG v4; // edi

  if ( a2 )
  {
    v3 = *this;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v3, 0);
    v4 = NSInstrumentation::CSectionBitmapAllocator<16384,56>::VirtualAddressToSlot(a2);
    RtlClearBit((PRTL_BITMAP)(this[2] ^ this[3]), v4);
    memset(a2, 0, 0x38u);
    this[4] = v4;
    ExReleasePushLockExclusiveEx(v3, 0);
    KeLeaveCriticalRegion();
  }
}
