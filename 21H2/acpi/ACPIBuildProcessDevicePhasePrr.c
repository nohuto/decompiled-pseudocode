/*
 * XREFs of ACPIBuildProcessDevicePhasePrr @ 0x1C0009660
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteMustSucceed @ 0x1C000A4C0 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 *     FreeDataBuffs @ 0x1C0018A20 (FreeDataBuffs.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1C002E5C4 (ACPIBuildDeviceResetPowerNode.c)
 *     ACPIWriteEventLogEntry @ 0x1C00543C8 (ACPIWriteEventLogEntry.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePrr(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rsi
  ULONG_PTR v3; // rdx
  unsigned int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // rdx
  void *v7; // rax
  void *v8; // rcx
  unsigned int v10; // eax

  v1 = *(_QWORD **)(a1 + 40);
  v2 = a1 + 80;
  v3 = *(_QWORD *)(a1 + 56);
  v4 = 0;
  *(_DWORD *)(a1 + 32) = 0;
  if ( v1[56] )
  {
    if ( !v3 )
      goto LABEL_3;
    dword_1C0081AC8 = 0;
    byte_1C0081ACC = 0;
    goto LABEL_11;
  }
  if ( v3 )
  {
    if ( *(_WORD *)(a1 + 82) != 4 )
    {
      ACPIWriteEventLogEntry(3221553168LL, 0LL, 0LL);
      goto LABEL_3;
    }
    v10 = ACPIBuildDeviceResetPowerNode((ULONG_PTR)v1, v3);
    dword_1C0081AC8 = 0;
    v4 = v10;
    byte_1C0081ACC = 0;
LABEL_11:
    FreeDataBuffs(v2, 1LL);
  }
LABEL_3:
  v5 = AMLIGetNamedChild(v1[95], 1414746719LL);
  v6 = v1[1];
  v1[62] = v5;
  v7 = &unk_1C006FB8B;
  v8 = &unk_1C006FB8B;
  if ( (v6 & 0x200000000000LL) != 0 )
  {
    v7 = (void *)v1[76];
    if ( (v6 & 0x400000000000LL) != 0 )
      v8 = (void *)v1[77];
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      6,
      47,
      (__int64)&WPP_bdd8eb048f7f3443c553fdc981a7d4a4_Traceguids,
      v4,
      (char)v1,
      (__int64)v7,
      (__int64)v8);
  }
  ACPIBuildCompleteMustSucceed(0LL);
  return v4;
}
