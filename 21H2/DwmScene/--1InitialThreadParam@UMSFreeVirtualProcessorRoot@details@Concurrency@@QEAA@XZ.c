/*
 * XREFs of ??1InitialThreadParam@UMSFreeVirtualProcessorRoot@details@Concurrency@@QEAA@XZ @ 0x1801179F4
 * Callers:
 *     sub_1801308AB @ 0x1801308AB (sub_1801308AB.c)
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
