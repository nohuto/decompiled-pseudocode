/*
 * XREFs of ??$_Destroy_range@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUInputSample@ContextualProcessorBuffer@@0AEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@0@@Z @ 0x180149E2C
 * Callers:
 *     ??_GContextualProcessorBuffer@@MEAAPEAXI@Z @ 0x18000AE80 (--_GContextualProcessorBuffer@@MEAAPEAXI@Z.c)
 *     _std::vector_ContextualProcessorBuffer::InputSample_std::allocator_ContextualProcessorBuffer::InputSample___::_Emplace_reallocate_ContextualProcessorBuffer::InputSample__::_1_::catch$50 @ 0x18014A05B (_std--vector_ContextualProcessorBuffer--InputSample_std--allocator_ContextualProces_ea_18014A05B.c)
 *     ??$_Uninitialized_move@PEAUInputSample@ContextualProcessorBuffer@@PEAU12@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAPEAUInputSample@ContextualProcessorBuffer@@QEAU12@0PEAU12@AEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@0@@Z @ 0x18014A6F4 (--$_Uninitialized_move@PEAUInputSample@ContextualProcessorBuffer@@PEAU12@V-$allocator@UInputSamp.c)
 *     ??1?$_Uninitialized_backout_al@PEAUInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x18014AD40 (--1-$_Uninitialized_backout_al@PEAUInputSample@ContextualProcessorBuffer@@V-$allocator@UInputSam.c)
 *     ??1?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x18014AE6C (--1-$vector@UInputSample@ContextualProcessorBuffer@@V-$allocator@UInputSample@ContextualProcesso.c)
 *     ?_Change_array@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@AEAAXQEAUInputSample@ContextualProcessorBuffer@@_K1@Z @ 0x18014D6FC (-_Change_array@-$vector@UInputSample@ContextualProcessorBuffer@@V-$allocator@UInputSample@Contex.c)
 *     ?clear@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAXXZ @ 0x18014DB90 (-clear@-$vector@UInputSample@ContextualProcessorBuffer@@V-$allocator@UInputSample@ContextualProc.c)
 * Callees:
 *     ??1InputSample@ContextualProcessorBuffer@@QEAA@XZ @ 0x18014B008 (--1InputSample@ContextualProcessorBuffer@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<ContextualProcessorBuffer::InputSample>>(
        ContextualProcessorBuffer::InputSample *this,
        ContextualProcessorBuffer::InputSample *a2)
{
  ContextualProcessorBuffer::InputSample *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      ContextualProcessorBuffer::InputSample::~InputSample(v3);
      v3 = (ContextualProcessorBuffer::InputSample *)((char *)v3 + 200);
    }
    while ( v3 != a2 );
  }
}
