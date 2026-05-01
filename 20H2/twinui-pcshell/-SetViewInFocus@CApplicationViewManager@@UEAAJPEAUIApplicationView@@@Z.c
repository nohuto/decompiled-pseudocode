/*
 * XREFs of ?SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18001DB70
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x18001DB14 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800217B0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18014771C (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 */

__int64 __fastcall CApplicationViewManager::SetViewInFocus(RTL_SRWLOCK *this, struct IApplicationView *a2)
{
  RTL_SRWLOCK *v2; // rbx
  RTL_SRWLOCK *v5; // r14
  struct IApplicationView *Ptr; // rdx
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = this + 67;
  v8 = this + 67;
  AcquireSRWLockExclusive(this + 67);
  v5 = this + 72;
  Ptr = (struct IApplicationView *)this[72].Ptr;
  if ( a2 != Ptr || ((__int64)this[73].Ptr & 1) != 0 )
  {
    if ( Ptr && Ptr != a2 )
      CApplicationViewManager::RaiseApplicationViewChanged(this, Ptr, 9LL);
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&this[72], (__int64)a2);
    LODWORD(this[73].Ptr) &= ~1u;
    if ( v5->Ptr )
      CApplicationViewManager::RaiseApplicationViewChanged(this, v5->Ptr, 7LL);
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
  }
  else
  {
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((CAutoSRWExclusiveLock *)&v8);
  }
  return 0LL;
}
