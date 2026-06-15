/*
 * XREFs of ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x1800067E8
 * Callers:
 *     ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180008214 (-SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPT.c)
 *     ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x180008A50 (-QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x180009338 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180009834 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 * Callees:
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x1800066DC (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     memcpy_s_0 @ 0x18000FED8 (memcpy_s_0.c)
 */

char __fastcall wil::details_abi::heap_buffer::push_back(
        wil::details_abi::heap_buffer *this,
        const void *Source,
        rsize_t SourceSize)
{
  rsize_t v6; // rcx
  unsigned __int64 v7; // rdx
  char result; // al
  char *v9; // rcx

  v6 = *((_QWORD *)this + 2) - *(_QWORD *)this;
  if ( SourceSize + *((_QWORD *)this + 1) - *(_QWORD *)this < v6 )
    goto LABEL_5;
  v7 = SourceSize;
  if ( SourceSize < 2 * v6 )
    v7 = 2 * v6;
  result = wil::details_abi::heap_buffer::reserve(this, v7);
  if ( result )
  {
LABEL_5:
    v9 = (char *)*((_QWORD *)this + 1);
    if ( SourceSize )
    {
      memcpy_s_0(
        v9,
        (*((_QWORD *)this + 2) - (_QWORD)v9) & -(__int64)((unsigned __int64)v9 < *((_QWORD *)this + 2)),
        Source,
        SourceSize);
      v9 = (char *)*((_QWORD *)this + 1);
    }
    *((_QWORD *)this + 1) = &v9[SourceSize];
    return 1;
  }
  return result;
}
