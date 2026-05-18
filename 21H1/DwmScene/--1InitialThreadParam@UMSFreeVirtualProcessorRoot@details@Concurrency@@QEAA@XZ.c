/*
 * XREFs of ??1InitialThreadParam@UMSFreeVirtualProcessorRoot@details@Concurrency@@QEAA@XZ @ 0x180112124
 * Callers:
 *     sub_18012AF93 @ 0x18012AF93 (sub_18012AF93.c)
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::UMSFreeVirtualProcessorRoot::InitialThreadParam::~InitialThreadParam(
        Concurrency::details::UMSFreeVirtualProcessorRoot::InitialThreadParam *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)this;
  if ( v1 )
    o__aligned_free(v1);
}
