/*
 * XREFs of ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0FAAA@$0EI@@NSInstrumentation@@QAE?AW4AllocationStatus@2@PBX@Z @ 0x1A2751
 * Callers:
 *     ?Free@?$CTypeIsolation@$0FAAA@$0EI@@NSInstrumentation@@IAEXPAX@Z @ 0x1A2979 (-Free@-$CTypeIsolation@$0FAAA@$0EI@@NSInstrumentation@@IAEXPAX@Z.c)
 * Callees:
 *     ?VirtualAddressToSlot@?$CSectionBitmapAllocator@$0FAAA@$0EI@@NSInstrumentation@@AAEIPBX@Z @ 0x1A2D77 (-VirtualAddressToSlot@-$CSectionBitmapAllocator@$0FAAA@$0EI@@NSInstrumentation@@AAEIPBX@Z.c)
 */

int __thiscall NSInstrumentation::CSectionBitmapAllocator<20480,72>::CheckAllocationStatus(
        _DWORD *this,
        unsigned int a2)
{
  int v2; // ebx
  unsigned int v3; // eax
  struct _RTL_BITMAP *v5; // esi
  ULONG v6; // eax

  v2 = this[2];
  v3 = v2 ^ this[1];
  if ( !a2 || a2 < v3 || a2 >= v3 + 20480 )
    return 0;
  if ( (a2 & 0xFFF) % 0x48 )
    return 3;
  v5 = (struct _RTL_BITMAP *)(v2 ^ this[3]);
  v6 = NSInstrumentation::CSectionBitmapAllocator<20480,72>::VirtualAddressToSlot(a2);
  return (RtlTestBit(v5, v6) == 0) + 1;
}
