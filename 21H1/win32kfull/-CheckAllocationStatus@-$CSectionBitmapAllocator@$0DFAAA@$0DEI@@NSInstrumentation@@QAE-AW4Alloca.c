/*
 * XREFs of ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0DFAAA@$0DEI@@NSInstrumentation@@QAE?AW4AllocationStatus@2@PBX@Z @ 0xD11D0
 * Callers:
 *     ?Free@?$CTypeIsolation@$0DFAAA@$0DEI@@NSInstrumentation@@IAEXPAX@Z @ 0xD1070 (-Free@-$CTypeIsolation@$0DFAAA@$0DEI@@NSInstrumentation@@IAEXPAX@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall NSInstrumentation::CSectionBitmapAllocator<217088,840>::CheckAllocationStatus(
        _DWORD *this,
        unsigned int a2)
{
  int v2; // ebx
  unsigned int v3; // edi

  v2 = this[2];
  v3 = v2 ^ this[1];
  if ( !a2 || a2 < v3 || a2 >= v3 + 217088 )
    return 0;
  if ( (a2 & 0xFFF) % 0x348 )
    return 3;
  return (RtlTestBit((PRTL_BITMAP)(v2 ^ this[3]), (a2 & 0xFFF) / 0x348 + 4 * ((a2 - v3) >> 12)) == 0) + 1;
}
