/*
 * XREFs of ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C00511D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qLqss @ 0x1C0003A80 (WPP_RECORDER_SF_qLqss.c)
 *     AMLIIsNamedChildPresent @ 0x1C000A410 (AMLIIsNamedChildPresent.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000EB80 (ACPIDeviceCompleteGenericPhase.c)
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5WarmEjectSubPhase1(__int64 a1)
{
  unsigned int v1; // eax
  _QWORD *v3; // rdi
  __int64 v4; // rax
  __int64 *v5; // rcx
  int v6; // esi
  unsigned int v7; // eax
  __int64 v8; // rdx
  unsigned int v9; // esi
  const char *v10; // rax
  const char *v11; // rcx
  __int64 result; // rax
  _DWORD v13[3]; // [rsp+50h] [rbp-38h]
  _DWORD v14[5]; // [rsp+5Ch] [rbp-2Ch] BYREF

  v1 = *(_DWORD *)(a1 + 56);
  v3 = *(_QWORD **)(a1 + 40);
  v13[0] = 0;
  v13[1] = 0;
  v14[3] = 0;
  v13[2] = 826951007;
  *(_DWORD *)(a1 + 212) = (v1 >> 5) & 4;
  v4 = *(int *)(a1 + 104);
  v5 = (__int64 *)v3[95];
  qmemcpy(v14, "_EJ2_EJ3_EJ4", 12);
  v6 = v13[v4];
  if ( !AMLIIsNamedChildPresent(v5, v6) )
    KeBugCheckEx(0xA3u, 1uLL, 0xC273CuLL, 0LL, 0LL);
  v7 = ACPIGet((__int64)v3, v6, 546308096, 1LL, 4, (__int64)ACPIDeviceCompleteGenericPhase, a1, 0LL, 0LL);
  v8 = v3[1];
  v9 = v7;
  v10 = (const char *)&unk_1C006FB8B;
  v11 = (const char *)&unk_1C006FB8B;
  if ( (v8 & 0x200000000000LL) != 0 )
  {
    v10 = (const char *)v3[76];
    if ( (v8 & 0x400000000000LL) != 0 )
      v11 = (const char *)v3[77];
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x59u,
      (__int64)&WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids,
      a1,
      v9,
      (char)v3,
      v10,
      v11);
  result = 259LL;
  if ( v9 != 259 )
  {
    ACPIDeviceCompleteGenericPhase(0LL, v9, 0LL, a1);
    return 0LL;
  }
  return result;
}
