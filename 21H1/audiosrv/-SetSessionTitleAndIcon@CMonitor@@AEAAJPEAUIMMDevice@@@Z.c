/*
 * XREFs of ?SetSessionTitleAndIcon@CMonitor@@AEAAJPEAUIMMDevice@@@Z @ 0x180104284
 * Callers:
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z @ 0x18010159C (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800BBF6C (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMonitor::SetSessionTitleAndIcon(CMonitor *this, struct IMMDevice *a2)
{
  int v3; // ebx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v6; // [rsp+30h] [rbp-10h]
  __int64 v7; // [rsp+58h] [rbp+18h] BYREF

  v7 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v6 = 0LL;
  v3 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a2->lpVtbl->OpenPropertyStore)(a2, 0LL, &v7);
  if ( v3 < 0 )
    goto LABEL_11;
  v3 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v7 + 40LL))(
         v7,
         &PKEY_Device_FriendlyName,
         pvar);
  if ( v3 < 0 )
    goto LABEL_11;
  if ( LOWORD(pvar[0]) == 31 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, PROPVARIANT, _QWORD))(**((_QWORD **)this + 28) + 40LL))(
           *((_QWORD *)this + 28),
           pvar[1],
           0LL);
    if ( v3 < 0 )
      goto LABEL_11;
  }
  PropVariantClear(pvar);
  v3 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v7 + 40LL))(
         v7,
         &PKEY_DeviceClass_IconPath,
         pvar);
  if ( v3 < 0 )
    goto LABEL_11;
  if ( LOWORD(pvar[0]) == 31 )
    v3 = (*(__int64 (__fastcall **)(_QWORD, PROPVARIANT, _QWORD))(**((_QWORD **)this + 28) + 56LL))(
           *((_QWORD *)this + 28),
           pvar[1],
           0LL);
  if ( v3 < 0 )
  {
LABEL_11:
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Bu,
        (__int64)&WPP_31d4709c2c57346b6bd3a2697a2c0190_Traceguids,
        v3);
    }
  }
  PropVariantClear(pvar);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v3;
}
