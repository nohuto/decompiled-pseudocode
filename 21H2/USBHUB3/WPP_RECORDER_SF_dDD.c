/*
 * XREFs of WPP_RECORDER_SF_Ddd @ 0x1C0032CA4
 * Callers:
 *     HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor @ 0x1C0034C78 (HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateBOSDescriptor @ 0x1C00391A4 (HUBDESC_InternalValidateBOSDescriptor.c)
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x1C0039550 (HUBDESC_ValidateBOSDescriptorSet.c)
 *     HUBDESC_InternalValidateStringDescriptor @ 0x1C00399FC (HUBDESC_InternalValidateStringDescriptor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_Ddd(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  int v8; // [rsp+20h] [rbp-48h]
  __int64 v9; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  __int64 v11; // [rsp+A0h] [rbp+38h] BYREF
  va_list va1; // [rsp+A0h] [rbp+38h]
  va_list va2; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_4c38247a76be3626caea66f1aba69131_Traceguids,
      a4,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      va2,
      4LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 2LL, 5LL, &WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v8, (__int64 *)va);
}
