/*
 * XREFs of NdisCmActivateVc @ 0x1C00B7D70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000E1E0 (WPP_RECORDER_SF_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     NdisMCoActivateVcComplete @ 0x1C00B9520 (NdisMCoActivateVcComplete.c)
 */

NDIS_STATUS __stdcall NdisCmActivateVc(NDIS_HANDLE NdisVcHandle, PCO_CALL_PARAMETERS CallParameters)
{
  _QWORD *v2; // rsi
  KIRQL v5; // al
  int *v6; // rdx
  KIRQL v7; // r8
  int v8; // ecx
  NDIS_STATUS v9; // ebx
  PCO_MEDIA_PARAMETERS MediaParameters; // rax
  __int64 v11; // rax
  __int64 v13; // [rsp+30h] [rbp-28h]

  v2 = (_QWORD *)*((_QWORD *)NdisVcHandle + 9);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0x1Au,
      (struct _GUID *)&WPP_efcd9713de433365d671794f7ef4fa0a_Traceguids,
      (char)NdisVcHandle,
      (char)v2,
      *((_QWORD *)NdisVcHandle + 25));
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisVcHandle + 2);
  v6 = (int *)*((_QWORD *)NdisVcHandle + 1);
  v7 = v5;
  v8 = *v6;
  if ( (*v6 & 2) != 0 )
  {
    v9 = 65539;
  }
  else if ( (v8 & 4) != 0 )
  {
    v9 = -1073676286;
  }
  else
  {
    v9 = 0;
    *v6 = v8 | 2;
    MediaParameters = CallParameters->MediaParameters;
    if ( MediaParameters->MediaSpecific.Length < 8 )
      v11 = (unsigned int)v2;
    else
      v11 = *(_QWORD *)MediaParameters->MediaSpecific.Parameters;
    v2[17] = v11;
  }
  v2[12] = *((_QWORD *)NdisVcHandle + 21);
  v2[11] = *((_QWORD *)NdisVcHandle + 18);
  KeReleaseSpinLock((PKSPIN_LOCK)NdisVcHandle + 2, v7);
  if ( !v9 )
    v9 = (*((__int64 (__fastcall **)(_QWORD, PCO_CALL_PARAMETERS))NdisVcHandle + 28))(
           *((_QWORD *)NdisVcHandle + 25),
           CallParameters);
  if ( v9 != 259 )
  {
    NdisMCoActivateVcComplete(v9, NdisVcHandle, CallParameters);
    v9 = 259;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v13) = v9;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0x1Bu,
      (struct _GUID *)&WPP_efcd9713de433365d671794f7ef4fa0a_Traceguids,
      (char)NdisVcHandle,
      v13);
  }
  return v9;
}
