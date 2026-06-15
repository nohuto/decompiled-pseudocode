/*
 * XREFs of ??1SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18002144C
 * Callers:
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$12 @ 0x18003C1F5 (_CApplicationManager--RpcGetProcess_--_1_--dtor$12.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockExclusive::~SyncLockExclusive(RTL_SRWLOCK **this)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    ReleaseSRWLockExclusive(v2);
    *this = 0LL;
  }
}
