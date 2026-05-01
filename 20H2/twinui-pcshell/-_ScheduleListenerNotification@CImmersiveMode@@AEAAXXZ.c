/*
 * XREFs of ?_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ @ 0x18006F3A0
 * Callers:
 *     ?ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z @ 0x18006F280 (-ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_57bd800a23f6990551f71dd05caf20c5___ @ 0x18006F488 (Windows--Internal--ComTaskPool--QueueTask__lambda_57bd800a23f6990551f71dd05caf20c5___.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??_GZBAND_NOTIFICATION_DATA@@QEAAPEAXI@Z @ 0x180160180 (--_GZBAND_NOTIFICATION_DATA@@QEAAPEAXI@Z.c)
 */

void __fastcall CImmersiveMode::_ScheduleListenerNotification(CImmersiveMode *this)
{
  ZBAND_NOTIFICATION_DATA *v1; // rbp
  ZBAND_NOTIFICATION_DATA *v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  unsigned int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // rcx
  ZBAND_NOTIFICATION_DATA *v9; // rcx
  _QWORD *v10; // [rsp+30h] [rbp+8h] BYREF

  v1 = (ZBAND_NOTIFICATION_DATA *)*((_QWORD *)this + 44);
  v3 = v1;
  v4 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v4[1] = v1;
    v3 = 0LL;
    *((_DWORD *)v4 + 4) = 0;
    *v4 = &CRefCountedObject<CAutoMemPtr<ZBAND_NOTIFICATION_DATA>>::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  v10 = v5;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
  if ( v5 )
  {
    *((_QWORD *)this + 44) = 0LL;
    v10 = v5;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
    Windows::Internal::ComTaskPool::QueueTask__lambda_57bd800a23f6990551f71dd05caf20c5___(
      v8,
      v7,
      LODWORD(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr),
      &v10);
    if ( v10 )
      (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
  }
  else
  {
    v9 = (ZBAND_NOTIFICATION_DATA *)*((_QWORD *)this + 44);
    if ( !v9 )
      goto LABEL_8;
    ZBAND_NOTIFICATION_DATA::`scalar deleting destructor'(v9, v6);
  }
  if ( v5 )
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
LABEL_8:
  if ( v3 )
    ZBAND_NOTIFICATION_DATA::`scalar deleting destructor'(v3, v6);
}
