/*
 * XREFs of ?AddExclusiveView@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z @ 0x1802529F4
 * Callers:
 *     ?ProcessCreate@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_CREATE@@@Z @ 0x1802572EC (-ProcessCreate@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICEXCL.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B8AF4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x18025A950 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

bool __fastcall CHolographicManager::AddExclusiveView(RTL_SRWLOCK *this, struct IUnknown *a2)
{
  __int64 v3; // rcx
  bool v4; // di
  unsigned int Ptr; // eax
  unsigned int v6; // r8d
  int v7; // esi
  int v8; // eax
  __int64 v9; // rcx
  CHolographicInteropTaskQueue *v10; // rcx
  struct IUnknown *v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = a2;
  AcquireSRWLockExclusive(this + 13);
  v4 = 0;
  Ptr = (unsigned int)this[24].Ptr;
  v6 = Ptr + 1;
  if ( Ptr + 1 < Ptr )
  {
    v7 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2147024362, 0xB5u, 0LL);
    goto LABEL_7;
  }
  if ( v6 > HIDWORD(this[23].Ptr) )
  {
    v8 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&this[21], 8, 1, &v12);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xC0u, 0LL);
LABEL_7:
      if ( v7 < 0 )
        goto LABEL_11;
    }
  }
  else
  {
    *((_QWORD *)this[21].Ptr + LODWORD(this[24].Ptr)) = v12;
    LODWORD(this[24].Ptr) = v6;
  }
  ((void (__fastcall *)(struct IUnknown *))v12->lpVtbl->AddRef)(v12);
  v10 = (CHolographicInteropTaskQueue *)this[6].Ptr;
  if ( v10 && LOBYTE(this[30].Ptr) )
    v4 = CHolographicInteropTaskQueue::PostMessageW(v10, 0xCu, v12, 0LL, 0LL, 0LL, 0LL);
LABEL_11:
  ReleaseSRWLockExclusive(this + 13);
  return v4;
}
