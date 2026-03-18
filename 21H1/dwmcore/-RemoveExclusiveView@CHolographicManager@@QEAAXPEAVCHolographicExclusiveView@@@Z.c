/*
 * XREFs of ?RemoveExclusiveView@CHolographicManager@@QEAAXPEAVCHolographicExclusiveView@@@Z @ 0x180254E68
 * Callers:
 *     ?DetachFromChannel@CHolographicExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180257CC0 (-DetachFromChannel@CHolographicExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?Remove@?$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z @ 0x1801AF280 (-Remove@-$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x18025B4F0 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::RemoveExclusiveView(CHolographicManager *this, struct IUnknown *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  CHolographicInteropTaskQueue *v6; // rcx
  struct IUnknown *v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = a2;
  AcquireSRWLockExclusive((PSRWLOCK)this + 13);
  v4 = DynArray<CBaseExpression *,1>::Remove((__int64 *)this + 21, &v7);
  v5 = 0LL;
  if ( v4 )
  {
    v6 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 6);
    if ( v6 && *((_BYTE *)this + 240) )
      CHolographicInteropTaskQueue::PostMessageW(v6, 0xDu, a2, 0LL, 0LL, 0LL, 0LL);
    ((void (__fastcall *)(struct IUnknown *, __int64))a2->lpVtbl->Release)(a2, v5);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)this + 13);
}
