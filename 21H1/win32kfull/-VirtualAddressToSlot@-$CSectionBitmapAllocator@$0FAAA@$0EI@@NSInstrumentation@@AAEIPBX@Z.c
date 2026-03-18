/*
 * XREFs of ?VirtualAddressToSlot@?$CSectionBitmapAllocator@$0FAAA@$0EI@@NSInstrumentation@@AAEIPBX@Z @ 0x1A2D77
 * Callers:
 *     ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0FAAA@$0EI@@NSInstrumentation@@QAE?AW4AllocationStatus@2@PBX@Z @ 0x1A2751 (-CheckAllocationStatus@-$CSectionBitmapAllocator@$0FAAA@$0EI@@NSInstrumentation@@QAE-AW4Allocati.c)
 *     ?Free@?$CSectionBitmapAllocator@$0FAAA@$0EI@@NSInstrumentation@@QAEXPAX@Z @ 0x1A2914 (-Free@-$CSectionBitmapAllocator@$0FAAA@$0EI@@NSInstrumentation@@QAEXPAX@Z.c)
 * Callees:
 *     <none>
 */

unsigned int __thiscall NSInstrumentation::CSectionBitmapAllocator<20480,72>::VirtualAddressToSlot(
        _DWORD *this,
        int a2)
{
  return 56 * ((unsigned int)(a2 - (this[1] ^ this[2])) >> 12) + (a2 & 0xFFFu) / 0x48;
}
