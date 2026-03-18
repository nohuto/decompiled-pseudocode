/*
 * XREFs of ACPIDevicePowerDetermineSupportedDeviceStates @ 0x1C00941D8
 * Callers:
 *     ACPISystemPowerUpdateDeviceCapabilities @ 0x1C001EC04 (ACPISystemPowerUpdateDeviceCapabilities.c)
 * Callees:
 *     WPP_RECORDER_SF_qss @ 0x1C00077E8 (WPP_RECORDER_SF_qss.c)
 *     AMLIIsNamedChildPresent @ 0x1C000A410 (AMLIIsNamedChildPresent.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 */

__int64 __fastcall ACPIDevicePowerDetermineSupportedDeviceStates(ULONG_PTR BugCheckParameter2, _DWORD *a2, int *a3)
{
  int v3; // esi
  int v4; // edi
  int v8; // ebp
  int *v9; // r14
  int v10; // ebp
  int *v11; // r14
  char v12; // al
  __int64 v14; // rdx
  const char *v15; // rax
  const char *v16; // r8
  __int64 v17; // rdx
  const char *v18; // rax
  const char *v19; // r8
  __int64 v20; // rdx
  const char *v21; // rax
  const char *v22; // r8
  int v23; // [rsp+40h] [rbp-68h] BYREF
  _DWORD v24[2]; // [rsp+44h] [rbp-64h] BYREF
  _DWORD v25[4]; // [rsp+50h] [rbp-58h] BYREF

  v3 = 0;
  v23 = 810700895;
  *a2 = 0;
  v4 = 0;
  *a3 = 0;
  qmemcpy(v24, "_PR1_PR2", sizeof(v24));
  qmemcpy(v25, "_PS0_PS1_PS2_PS3", sizeof(v25));
  if ( _bittest64((const signed __int64 *)(BugCheckParameter2 + 8), 0x33u) )
  {
    v4 = 18;
LABEL_16:
    *a2 = v3;
    *a3 = v4;
    return 0LL;
  }
  v8 = 1;
  v9 = v25;
  do
  {
    if ( AMLIIsNamedChildPresent(*(__int64 **)(BugCheckParameter2 + 760), *v9) )
      v4 |= 1 << v8;
    ++v8;
    ++v9;
  }
  while ( v8 <= 4 );
  v10 = 1;
  v11 = &v23;
  do
  {
    if ( AMLIIsNamedChildPresent(*(__int64 **)(BugCheckParameter2 + 760), *v11) )
      v3 |= (1 << v10) | 0x10;
    ++v10;
    ++v11;
  }
  while ( v10 <= 3 );
  v12 = v3 | v4;
  if ( v3 | v4 )
  {
    if ( (v12 & 2) == 0 )
    {
      v14 = *(_QWORD *)(BugCheckParameter2 + 8);
      v15 = (const char *)&unk_1C006FB8B;
      v16 = (const char *)&unk_1C006FB8B;
      if ( (v14 & 0x200000000000LL) != 0 )
      {
        v15 = *(const char **)(BugCheckParameter2 + 608);
        if ( (v14 & 0x400000000000LL) != 0 )
          v16 = *(const char **)(BugCheckParameter2 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xAu,
          0x25u,
          (__int64)&WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids,
          BugCheckParameter2,
          v15,
          v16);
      KeBugCheckEx(0xA5u, 0xDuLL, BugCheckParameter2, (-(__int64)(v3 != 0) & 0xFFFFFFFFFFFF0000uLL) + 810766431, 0LL);
    }
    if ( (v12 & 0x10) == 0 )
    {
      v17 = *(_QWORD *)(BugCheckParameter2 + 8);
      v18 = (const char *)&unk_1C006FB8B;
      v19 = (const char *)&unk_1C006FB8B;
      if ( (v17 & 0x200000000000LL) != 0 )
      {
        v18 = *(const char **)(BugCheckParameter2 + 608);
        if ( (v17 & 0x400000000000LL) != 0 )
          v19 = *(const char **)(BugCheckParameter2 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xAu,
          0x26u,
          (__int64)&WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids,
          BugCheckParameter2,
          v18,
          v19);
      KeBugCheckEx(0xA5u, 0xDuLL, BugCheckParameter2, 0x3353505FuLL, 0LL);
    }
    if ( v3 && v4 && v3 != v4 )
    {
      v20 = *(_QWORD *)(BugCheckParameter2 + 8);
      v21 = (const char *)&unk_1C006FB8B;
      v22 = (const char *)&unk_1C006FB8B;
      if ( (v20 & 0x200000000000LL) != 0 )
      {
        v21 = *(const char **)(BugCheckParameter2 + 608);
        if ( (v20 & 0x400000000000LL) != 0 )
          v22 = *(const char **)(BugCheckParameter2 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xAu,
          0x27u,
          (__int64)&WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids,
          BugCheckParameter2,
          v21,
          v22);
      v3 &= v4;
      v4 &= v3;
    }
    goto LABEL_16;
  }
  return 0LL;
}
