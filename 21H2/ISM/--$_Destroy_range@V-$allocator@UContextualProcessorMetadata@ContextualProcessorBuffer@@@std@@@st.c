/*
 * XREFs of ??$_Destroy_range@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@0AEAV?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@0@@Z @ 0x18014A250
 * Callers:
 *     _std::vector_ContextualProcessorBuffer::ContextualProcessorMetadata_std::allocator_ContextualProcessorBuffer::ContextualProcessorMetadata___::_Emplace_reallocate_ContextualProcessorBuffer::ContextualProcessorMetadata_const_&__::_1_::catch$213 @ 0x18004FE30 (_std--vector_ContextualProcessorBuffer--ContextualProcessorMetadata_std--allocator__ea_18004FE30.c)
 *     ??$_Uninitialized_move@PEAUContextualProcessorMetadata@ContextualProcessorBuffer@@PEAU12@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@YAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU12@0PEAU12@AEAV?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@0@@Z @ 0x18014AA4C (--$_Uninitialized_move@PEAUContextualProcessorMetadata@ContextualProcessorBuffer@@PEAU12@V-$allo.c)
 *     ??1?$_Uninitialized_backout_al@PEAUContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x18014B18C (--1-$_Uninitialized_backout_al@PEAUContextualProcessorMetadata@ContextualProcessorBuffer@@V-$all.c)
 * Callees:
 *     ??1ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@XZ @ 0x18014B344 (--1ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<ContextualProcessorBuffer::ContextualProcessorMetadata>>(
        ContextualProcessorBuffer::ContextualProcessorMetadata *this,
        ContextualProcessorBuffer::ContextualProcessorMetadata *a2)
{
  ContextualProcessorBuffer::ContextualProcessorMetadata *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      ContextualProcessorBuffer::ContextualProcessorMetadata::~ContextualProcessorMetadata(v3);
      v3 = (ContextualProcessorBuffer::ContextualProcessorMetadata *)((char *)v3 + 160);
    }
    while ( v3 != a2 );
  }
}
