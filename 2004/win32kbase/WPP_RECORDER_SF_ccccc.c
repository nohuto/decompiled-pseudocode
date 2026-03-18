/*
 * XREFs of WPP_RECORDER_SF_ccccc @ 0x1C01B7278
 * Callers:
 *     ShouldEnableInputVirtualization @ 0x1C003457C (ShouldEnableInputVirtualization.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_ccccc()
{
  struct _LIST_ENTRY *Flink; // rbx
  int v2; // [rsp+28h] [rbp-69h]
  char v3[8]; // [rsp+88h] [rbp-9h] BYREF
  char v4[8]; // [rsp+90h] [rbp-1h] BYREF
  char v5[8]; // [rsp+98h] [rbp+7h] BYREF
  char v6[8]; // [rsp+A0h] [rbp+Fh] BYREF
  _BYTE v7[16]; // [rsp+A8h] [rbp+17h] BYREF

  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  v3[0] = byte_1C0254551;
  v4[0] = byte_1C0254550;
  v5[0] = byte_1C0254553;
  v6[0] = byte_1C0254552;
  v7[0] = byte_1C0254554;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, const union _LARGE_INTEGER *, __int64, _BYTE *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids,
      18LL,
      v7,
      1LL,
      v6,
      1LL,
      v5,
      1LL,
      v4,
      1LL,
      v3,
      1LL,
      0LL);
  LOWORD(v2) = 18;
  return WppAutoLogTrace(
           Flink,
           4LL,
           12LL,
           &WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids,
           v2,
           v7,
           1LL,
           v6,
           1LL,
           v5,
           1LL,
           v4);
}
