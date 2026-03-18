/*
 * XREFs of ACPIBuildProcessDevicePhaseHid @ 0x1C0025B10
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteMustSucceed @ 0x1C000A4C0 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseHid(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // r15
  const char *v3; // rax
  unsigned int v4; // edi
  unsigned int v5; // r14d
  const char *v7; // r12
  __int64 v8; // rbp
  __int64 *v9; // rax
  __int64 v10; // rdx
  void *v11; // rax
  void *v12; // rcx
  __int64 v14; // rbp

  v1 = *(_QWORD *)(a1 + 40);
  v2 = 0;
  v3 = AcpiInternalDeviceFlagTable;
  v4 = 0;
  v5 = 0;
  v7 = *(const char **)(v1 + 608);
  if ( AcpiInternalDeviceFlagTable )
  {
    v8 = 0LL;
    while ( !strstr(v7, v3) )
    {
      v8 = ++v5;
      v3 = (&AcpiInternalDeviceFlagTable)[4 * v5];
      if ( !v3 )
        goto LABEL_5;
    }
    v14 = 4 * v8;
    _InterlockedOr64((volatile signed __int64 *)(v1 + 8), (unsigned __int64)(&AcpiInternalDeviceFlagTable)[v14 + 1]);
    _InterlockedOr64((volatile signed __int64 *)(v1 + 1000), (unsigned __int64)(&AcpiInternalDeviceFlagTable)[v14 + 2]);
    v2 = 1;
  }
LABEL_5:
  _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x200000000000uLL);
  v9 = AMLIGetNamedChild(*(__int64 **)(v1 + 760), 1145652063);
  if ( !v9 || v2 )
  {
    *(_DWORD *)(a1 + 32) = 10;
  }
  else
  {
    AMLIDereferenceHandleEx((volatile signed __int32 *)v9);
    *(_DWORD *)(a1 + 32) = 9;
    v4 = ACPIGet(v1, 1145652063, 671613191, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, a1 + 128, 0LL);
  }
  v10 = *(_QWORD *)(v1 + 8);
  v11 = &unk_1C006FB8B;
  v12 = &unk_1C006FB8B;
  if ( (v10 & 0x200000000000LL) != 0 )
  {
    v11 = *(void **)(v1 + 608);
    if ( (v10 & 0x400000000000LL) != 0 )
      v12 = *(void **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x28u,
      (__int64)&WPP_bdd8eb048f7f3443c553fdc981a7d4a4_Traceguids,
      v4,
      v1,
      (__int64)v11,
      (__int64)v12);
  if ( v4 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL, v4, 0LL, a1);
  return v4;
}
