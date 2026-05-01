/*
 * XREFs of ?_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x18000CD6C
 * Callers:
 *     ?HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x18000C3D0 (-HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown.c)
 * Callees:
 *     ?UpdateMonitorForAppAsync@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x18000CEBC (-UpdateMonitorForAppAsync@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::_HandleViewCreation_SynchronizeInitialPosition(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal *a2)
{
  __int64 (__fastcall *v4)(struct IImmersiveApplicationInternal *, __int64 *); // rbx
  __int64 v5; // rcx
  int v6; // edi
  RTL_SRWLOCK *v7; // rbx
  __int64 (__fastcall *v8)(struct IImmersiveApplicationInternal *, __int64 *); // rdi
  __int64 v9; // rcx
  __int64 v11; // [rsp+58h] [rbp+38h] BYREF
  __int64 v12; // [rsp+60h] [rbp+40h] BYREF
  PSRWLOCK v13; // [rsp+68h] [rbp+48h]

  v12 = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = *(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, __int64 *))(*(_QWORD *)a2 + 504LL);
  v5 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = v4(a2, &v12);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v6 >= 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12);
    v11 = 0LL;
    v7 = CApplicationManagerUtility::g_pIAMGlobals;
    v13 = CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    v8 = *(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, __int64 *))(*(_QWORD *)a2 + 496LL);
    v9 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v6 = v8(a2, &v11);
    if ( v7 )
      ReleaseSRWLockShared(v7);
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 176LL))(v11, 1LL);
      if ( v6 >= 0 )
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 76) + 88LL))(*((_QWORD *)this + 76), v11);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    if ( v6 >= 0 )
      CApplicationManager::UpdateMonitorForAppAsync(this, a2);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  return (unsigned int)v6;
}
