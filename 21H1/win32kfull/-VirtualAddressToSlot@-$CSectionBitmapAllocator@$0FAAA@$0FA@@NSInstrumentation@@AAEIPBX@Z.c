/*
 * XREFs of ?VirtualAddressToSlot@?$CSectionBitmapAllocator@$0FAAA@$0FA@@NSInstrumentation@@AAEIPBX@Z @ 0x97DC2
 * Callers:
 *     ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0FAAA@$0FA@@NSInstrumentation@@QAE?AW4AllocationStatus@2@PBX@Z @ 0x97CF8 (-CheckAllocationStatus@-$CSectionBitmapAllocator@$0FAAA@$0FA@@NSInstrumentation@@QAE-AW4Allocati.c)
 *     ?Free@?$CSectionBitmapAllocator@$0FAAA@$0FA@@NSInstrumentation@@QAEXPAX@Z @ 0x97D5C (-Free@-$CSectionBitmapAllocator@$0FAAA@$0FA@@NSInstrumentation@@QAEXPAX@Z.c)
 * Callees:
 *     <none>
 */

unsigned int __thiscall NSInstrumentation::CSectionBitmapAllocator<20480,80>::VirtualAddressToSlot(
        _DWORD *this,
        int a2)
{
  return 51 * ((unsigned int)(a2 - (this[1] ^ this[2])) >> 12) + (a2 & 0xFFFu) / 0x50;
}
