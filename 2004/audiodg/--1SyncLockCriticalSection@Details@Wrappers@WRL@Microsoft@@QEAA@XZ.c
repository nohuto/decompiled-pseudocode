/*
 * XREFs of ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x140060010
 * Callers:
 *     _CSpatialCrossProcessBaseEndpoint::CheckResourceLimits_::_1_::dtor$0 @ 0x14006067D (_CSpatialCrossProcessBaseEndpoint--CheckResourceLimits_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection(
        struct _RTL_CRITICAL_SECTION **this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    LeaveCriticalSection(v2);
    *this = 0LL;
  }
}
