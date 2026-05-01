/*
 * XREFs of ??0SERVICE_AVAILABILITY_CHANGED_DATA@@QEAA@PEAUIImmersiveApplication@@PEAUIObjectArray@@IPEBU_GUID@@W4IMM_APP_SERVICE_NOTIFY_FLAGS@@@Z @ 0x18003D878
 * Callers:
 *     ?OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z @ 0x18003AA20 (-OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z.c)
 *     ?_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication@@IQEBU_GUID@@W4IMM_APP_SERVICE_NOTIFY_FLAGS@@@Z @ 0x180159204 (-_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication.c)
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008E3B4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800EEEC7 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SERVICE_AVAILABILITY_CHANGED_DATA::SERVICE_AVAILABILITY_CHANGED_DATA(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        void *Src,
        int a6)
{
  unsigned __int64 v6; // rsi
  unsigned __int64 v9; // rax
  void *v10; // rax

  v6 = a4;
  *(_QWORD *)a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  *(_QWORD *)(a1 + 8) = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 16) = a6;
  if ( (_DWORD)v6 )
  {
    v9 = 16 * v6;
    if ( !is_mul_ok(v6, 0x10uLL) )
      v9 = -1LL;
    v10 = operator new[](v9, (const struct std::nothrow_t *)&std::nothrow);
    *(_QWORD *)(a1 + 24) = v10;
    if ( v10 )
    {
      memcpy_0(v10, Src, 16 * v6);
      *(_DWORD *)(a1 + 32) = v6;
    }
  }
  return a1;
}
