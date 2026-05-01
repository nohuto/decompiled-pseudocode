/*
 * XREFs of ??$WaitOnAddressNotEqualHelper@W4FrameManagerState@CApplicationFrameService@@@@YAXPEAW4FrameManagerState@CApplicationFrameService@@W401@@Z @ 0x180173F98
 * Callers:
 *     ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x18003B91C (-_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameMana.c)
 *     ?_HandleFrameManagerCrash@CApplicationFrameService@@AEAAXXZ @ 0x180177664 (-_HandleFrameManagerCrash@CApplicationFrameService@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WaitOnAddressNotEqualHelper<enum CApplicationFrameService::FrameManagerState>(
        unsigned int *Address,
        int a2)
{
  __int64 result; // rax
  int CompareAddress; // [rsp+38h] [rbp+10h] BYREF

  CompareAddress = a2;
  for ( result = *Address; ; result = *Address )
  {
    CompareAddress = result;
    if ( (_DWORD)result != 1 )
      break;
    WaitOnAddress(Address, &CompareAddress, 4uLL, 0xFFFFFFFF);
  }
  return result;
}
