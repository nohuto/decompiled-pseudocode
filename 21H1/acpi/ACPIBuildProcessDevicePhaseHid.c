/*
 * XREFs of ACPIBuildProcessDevicePhaseHid @ 0x1C0014D90
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0003AB0 (ACPIGet.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B8AC (AMLIDereferenceHandleEx.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0015B20 (ACPIBuildCompleteMustSucceed.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020750 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIGetNamedChild @ 0x1C0020AF0 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseHid(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  char v5; // r15
  const char *v6; // rax
  unsigned int v7; // edi
  unsigned int v8; // r14d
  const char *v10; // r12
  __int64 v11; // rbp
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rdx
  void *v15; // rax
  void *v16; // rcx
  _UNKNOWN **v17; // rdx

  v4 = *(_QWORD *)(a1 + 40);
  v5 = 0;
  v6 = AcpiInternalDeviceFlagTable;
  v7 = 0;
  v8 = 0;
  v10 = *(const char **)(v4 + 568);
  if ( AcpiInternalDeviceFlagTable )
  {
    v11 = 0LL;
    while ( !strstr(v10, v6) )
    {
      v11 = ++v8;
      v6 = (&AcpiInternalDeviceFlagTable)[4 * v8];
      if ( !v6 )
        goto LABEL_7;
    }
    v12 = 4 * v11;
    _InterlockedOr64((volatile signed __int64 *)(v4 + 8), (unsigned __int64)(&AcpiInternalDeviceFlagTable)[v12 + 1]);
    _InterlockedOr64((volatile signed __int64 *)(v4 + 960), (unsigned __int64)(&AcpiInternalDeviceFlagTable)[v12 + 2]);
    v5 = 1;
  }
LABEL_7:
  _InterlockedOr64((volatile signed __int64 *)(v4 + 8), 0x200000000000uLL);
  v13 = AMLIGetNamedChild(*(_QWORD *)(v4 + 720), 1145652063LL, a3, a4);
  if ( !v13 || v5 )
  {
    *(_DWORD *)(a1 + 32) = 10;
  }
  else
  {
    AMLIDereferenceHandleEx(v13);
    *(_DWORD *)(a1 + 32) = 9;
    v7 = ACPIGet((__int64 *)v4, 1145652063, 671613191, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, a1 + 128, 0LL);
  }
  v14 = *(_QWORD *)(v4 + 8);
  v15 = &unk_1C00701BA;
  v16 = &unk_1C00701BA;
  if ( (v14 & 0x200000000000LL) != 0 )
  {
    v15 = *(void **)(v4 + 568);
    if ( (v14 & 0x400000000000LL) != 0 )
      v16 = *(void **)(v4 + 576);
  }
  v17 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v17) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v17,
      6,
      40,
      (__int64)&WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
      v7,
      v4,
      (__int64)v15,
      (__int64)v16);
  }
  if ( v7 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL);
  return v7;
}
