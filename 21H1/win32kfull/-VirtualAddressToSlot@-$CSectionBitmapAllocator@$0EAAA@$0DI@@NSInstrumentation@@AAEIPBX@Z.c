/*
 * XREFs of ?VirtualAddressToSlot@?$CSectionBitmapAllocator@$0EAAA@$0DI@@NSInstrumentation@@AAEIPBX@Z @ 0x18431D
 * Callers:
 *     ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0EAAA@$0DI@@NSInstrumentation@@QAE?AW4AllocationStatus@2@PBX@Z @ 0x183FC6 (-CheckAllocationStatus@-$CSectionBitmapAllocator@$0EAAA@$0DI@@NSInstrumentation@@QAE-AW4Allocati.c)
 *     ?Free@?$CSectionBitmapAllocator@$0EAAA@$0DI@@NSInstrumentation@@QAEXPAX@Z @ 0x18411E (-Free@-$CSectionBitmapAllocator@$0EAAA@$0DI@@NSInstrumentation@@QAEXPAX@Z.c)
 * Callees:
 *     <none>
 */

unsigned int __thiscall NSInstrumentation::CSectionBitmapAllocator<16384,56>::VirtualAddressToSlot(
        _DWORD *this,
        int a2)
{
  return 73 * ((unsigned int)(a2 - (this[1] ^ this[2])) >> 12) + (a2 & 0xFFFu) / 0x38;
}
