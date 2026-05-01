/*
 * XREFs of _lambda_20045b0b3bc9a0c8c612018082f6611c_::operator() @ 0x180147C78
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_20045b0b3bc9a0c8c612018082f6611c___::operator() @ 0x180148330 (CDelayIAMOperations--CDelayedOperation__lambda_20045b0b3bc9a0c8c612018082f6611c___--operator().c)
 * Callees:
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000A7D0 (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003F5B8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_GetForegroundApplicationNoLock@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x180155A20 (-_GetForegroundApplicationNoLock@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x180155B6C (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x180156028 (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_20045b0b3bc9a0c8c612018082f6611c_::operator()(__int64 a1)
{
  CApplicationManager *v2; // rbx
  __int64 v3; // rbx
  void (__fastcall *v4)(__int64, struct IUnknown **); // rdi
  CApplicationManager *v5; // rbx
  struct IObjectArray *v6; // rbx
  HRESULT (__stdcall *GetAt)(IObjectArray *, UINT, const IID *const, void **); // rdi
  CApplicationManager *v8; // rbx
  __int64 v10; // [rsp+40h] [rbp-28h] BYREF
  struct IUnknown *v11; // [rsp+48h] [rbp-20h] BYREF
  __int64 v12[3]; // [rsp+50h] [rbp-18h] BYREF
  int v13; // [rsp+90h] [rbp+28h] BYREF
  struct IObjectArray *v14; // [rsp+98h] [rbp+30h] BYREF
  struct IImmersiveApplication *v15; // [rsp+A0h] [rbp+38h] BYREF
  struct ISyncIAMEventHandler *v16; // [rsp+A8h] [rbp+40h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v15 = 0LL;
  v2 = *(CApplicationManager **)a1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  if ( (int)CApplicationManager::_GetForegroundApplicationNoLock(v2, &v15) >= 0 )
  {
    v12[0] = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64))&v15,
                (__int64)v12) >= 0 )
    {
      v11 = 0LL;
      v3 = v12[0];
      v4 = *(void (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v12[0] + 464LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
      v4(v3, &v11);
      if ( (unsigned int)SHIsSameObject(v11, *(struct IUnknown **)(a1 + 8)) )
      {
        v14 = 0LL;
        v10 = 0LL;
        v5 = *(CApplicationManager **)a1;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
        if ( (int)CApplicationManager::_GetSingleMonitorObjectArray(v5, 0LL, &v14) >= 0 )
        {
          v6 = v14;
          GetAt = v14->lpVtbl->GetAt;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
          if ( ((int (__fastcall *)(struct IObjectArray *, _QWORD, GUID *, __int64 *))GetAt)(
                 v6,
                 0LL,
                 &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                 &v10) >= 0
            && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 48LL))(v10, &v13) >= 0
            && v13 )
          {
            v16 = 0LL;
            v8 = *(CApplicationManager **)a1;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
            if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(v8, &v16) >= 0 )
              (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, __int64, struct IImmersiveApplication *, int, int, int))(*(_QWORD *)v16 + 24LL))(
                v16,
                v14,
                (*(_QWORD *)a1 + 248LL) & -(__int64)(*(_QWORD *)a1 != 0LL),
                v15,
                8,
                8,
                0xFFFF);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
}
