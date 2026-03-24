/*
 * XREFs of ??$_Destroy_range@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@YAXPEAUSuperWetStroke@CSuperWetInkManager@@0AEAV?$allocator@USuperWetStroke@CSuperWetInkManager@@@0@@Z @ 0x1801549E4
 * Callers:
 *     ??_GCSuperWetInkManager@@QEAAPEAXI@Z @ 0x1801555CC (--_GCSuperWetInkManager@@QEAAPEAXI@Z.c)
 *     ??$_Uninitialized_move@PEAUSuperWetStroke@CSuperWetInkManager@@PEAU12@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@YAPEAUSuperWetStroke@CSuperWetInkManager@@QEAU12@0PEAU12@AEAV?$allocator@USuperWetStroke@CSuperWetInkManager@@@0@@Z @ 0x180194D10 (--$_Uninitialized_move@PEAUSuperWetStroke@CSuperWetInkManager@@PEAU12@V-$allocator@USuperWetStro.c)
 *     ?_Change_array@?$vector@USuperWetStroke@CSuperWetInkManager@@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@AEAAXQEAUSuperWetStroke@CSuperWetInkManager@@_K1@Z @ 0x180196340 (-_Change_array@-$vector@USuperWetStroke@CSuperWetInkManager@@V-$allocator@USuperWetStroke@CSuper.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<CSuperWetInkManager::SuperWetStroke>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v3 + 8);
      v3 += 80LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
