/*
 * XREFs of ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0EAAA@$0DI@@NSInstrumentation@@QAE?AW4AllocationStatus@2@PBX@Z @ 0x183FC6
 * Callers:
 *     ?Free@?$CTypeIsolation@$0EAAA@$0DI@@NSInstrumentation@@IAEXPAX@Z @ 0x184183 (-Free@-$CTypeIsolation@$0EAAA@$0DI@@NSInstrumentation@@IAEXPAX@Z.c)
 * Callees:
 *     ?VirtualAddressToSlot@?$CSectionBitmapAllocator@$0EAAA@$0DI@@NSInstrumentation@@AAEIPBX@Z @ 0x18431D (-VirtualAddressToSlot@-$CSectionBitmapAllocator@$0EAAA@$0DI@@NSInstrumentation@@AAEIPBX@Z.c)
 */

int __thiscall NSInstrumentation::CSectionBitmapAllocator<16384,56>::CheckAllocationStatus(
        _DWORD *this,
        unsigned int a2)
{
  int v2; // ebx
  unsigned int v3; // eax
  struct _RTL_BITMAP *v5; // esi
  ULONG v6; // eax

  v2 = this[2];
  v3 = v2 ^ this[1];
  if ( !a2 || a2 < v3 || a2 >= v3 + 0x4000 )
    return 0;
  if ( (a2 & 0xFFF) % 0x38 )
    return 3;
  v5 = (struct _RTL_BITMAP *)(v2 ^ this[3]);
  v6 = NSInstrumentation::CSectionBitmapAllocator<16384,56>::VirtualAddressToSlot(a2);
  return (RtlTestBit(v5, v6) == 0) + 1;
}
