/*
 * XREFs of SrbShimHookDeviceControl @ 0x1C0057210
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001B1C0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1C0031E4C (WPP_SF_.c)
 */

__int64 __fastcall SrbShimHookDeviceControl(__int64 a1, __int64 a2)
{
  unsigned __int8 *v2; // r8
  __int64 v5; // rsi
  _DWORD *v6; // rax
  __int64 v7; // rax

  v2 = *(unsigned __int8 **)(a2 + 184);
  v5 = *v2;
  if ( *((_DWORD *)v2 + 6) == 2954240 )
  {
    v6 = *(_DWORD **)(a2 + 24);
    if ( v6 )
    {
      if ( !v6[1] && *v6 == 1 && *((_DWORD *)v2 + 2) >= 0x20u )
      {
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          WPP_SF_(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0x10u,
            (__int64)&WPP_4131ae18f80433647a9f36ec3f2e372c_Traceguids);
        }
        (*(void (__fastcall **)(__int64, __int64, __int64 (__fastcall *)(), _QWORD))(qword_1C0068290 + 8))(
          a1,
          a2,
          SrbShimStorageAdapterPropertyCompletionHook,
          0LL);
      }
    }
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD))qword_1C0068290)(*(_QWORD *)(a1 + 8));
  return (*(__int64 (__fastcall **)(__int64, __int64))(v7 + 8 * v5 + 32))(a1, a2);
}
