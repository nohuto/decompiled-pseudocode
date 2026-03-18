/*
 * XREFs of ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0FAAA@$0FA@@NSInstrumentation@@QAE?AW4AllocationStatus@2@PBX@Z @ 0x97CF8
 * Callers:
 *     ?Free@?$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@IAEXPAX@Z @ 0x97C26 (-Free@-$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@IAEXPAX@Z.c)
 * Callees:
 *     ?VirtualAddressToSlot@?$CSectionBitmapAllocator@$0FAAA@$0FA@@NSInstrumentation@@AAEIPBX@Z @ 0x97DC2 (-VirtualAddressToSlot@-$CSectionBitmapAllocator@$0FAAA@$0FA@@NSInstrumentation@@AAEIPBX@Z.c)
 */

int __thiscall NSInstrumentation::CSectionBitmapAllocator<20480,80>::CheckAllocationStatus(
        _DWORD *this,
        unsigned int a2)
{
  int v2; // ebx
  unsigned int v3; // eax
  struct _RTL_BITMAP *v4; // esi
  ULONG v5; // eax

  v2 = this[2];
  v3 = v2 ^ this[1];
  if ( !a2 || a2 < v3 || a2 >= v3 + 20480 )
    return 0;
  if ( (a2 & 0xFFF) % 0x50 )
    return 3;
  v4 = (struct _RTL_BITMAP *)(v2 ^ this[3]);
  v5 = NSInstrumentation::CSectionBitmapAllocator<20480,80>::VirtualAddressToSlot(a2);
  return (RtlTestBit(v4, v5) == 0) + 1;
}
