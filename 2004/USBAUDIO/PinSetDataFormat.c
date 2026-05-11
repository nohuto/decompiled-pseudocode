/*
 * XREFs of PinSetDataFormat @ 0x1C0024710
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0001404 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0013270 (_guard_dispatch_icall_nop.c)
 *     PinValidateDataFormat @ 0x1C0023E40 (PinValidateDataFormat.c)
 */

__int64 __fastcall PinSetDataFormat(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  int v7; // ebx
  __int64 (__fastcall *v8)(__int64 *); // rax
  int v10; // [rsp+30h] [rbp-18h]

  v7 = PinValidateDataFormat(*a1, a4, a1[12]);
  if ( v7 >= 0 )
  {
    if ( a2 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1[2] + 144) + 128LL);
      v8 = *(__int64 (__fastcall **)(__int64 *))(v6 + 24);
      if ( v8 )
        v7 = v8(a1);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v10 = v7;
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      8u,
      0x13u,
      (__int64)&WPP_ca06769e79693a67799b8e6dd31dfb44_Traceguids,
      a1,
      v10);
  }
  return (unsigned int)v7;
}
