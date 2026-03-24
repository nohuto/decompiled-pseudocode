/*
 * XREFs of ACPIWakeWaitIrp @ 0x1C002E1E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002D40 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C001E288 (WPP_RECORDER_SF_qqss.c)
 *     ACPIDispatchForwardOrFailPowerIrp @ 0x1C002E4A0 (ACPIDispatchForwardOrFailPowerIrp.c)
 *     ACPIDeviceIrpWaitWakeRequest @ 0x1C002E524 (ACPIDeviceIrpWaitWakeRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qddqss @ 0x1C00629B8 (WPP_RECORDER_SF_qddqss.c)
 */

__int64 __fastcall ACPIWakeWaitIrp(ULONG_PTR a1, IRP *a2)
{
  _QWORD *DeviceExtension; // rax
  _QWORD *v5; // rbx
  __int64 v6; // r8
  const char *v8; // rdx
  const char *v9; // rcx
  __int64 v10; // r10
  void *v11; // rdx
  void *v12; // r8
  int v13; // r9d
  __int64 v14; // r9
  _BYTE v15[16]; // [rsp+60h] [rbp-18h] BYREF
  char v16; // [rsp+90h] [rbp+18h] BYREF
  char v17; // [rsp+98h] [rbp+20h] BYREF

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  v16 = 0;
  v5 = DeviceExtension;
  v15[0] = 0;
  v17 = 0;
  v6 = DeviceExtension[1];
  if ( (v6 & 0x10000) == 0 )
    return ACPIDispatchForwardOrFailPowerIrp(a1, a2);
  if ( (DeviceExtension[120] & 0x100000000LL) != 0 && !DeviceExtension[80] )
  {
    v8 = (const char *)&unk_1C00701BA;
    v9 = (const char *)&unk_1C00701BA;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v8 = (const char *)DeviceExtension[71];
      if ( (v6 & 0x400000000000LL) != 0 )
        v9 = (const char *)DeviceExtension[72];
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x11u,
        0x1Au,
        (__int64)&WPP_78661b2d78ff34e38fc1910a80efa3ce_Traceguids,
        (char)a2,
        (char)DeviceExtension,
        v8,
        v9);
    return ACPIDispatchForwardOrFailPowerIrp(a1, a2);
  }
  if ( (v6 & 0x102000000LL) != 0 && (v6 & 0x20) == 0 )
  {
    (*((void (__fastcall **)(_QWORD, char *, _BYTE *, char *))PciPmeInterface + 4))(
      DeviceExtension[93],
      &v16,
      v15,
      &v17);
    if ( v16 )
    {
      if ( (v5[1] & 0x800000000000000LL) == 0 )
        return ACPIDispatchForwardOrFailPowerIrp(a1, a2);
    }
  }
  if ( *((_DWORD *)v5 + 124) < (signed int)a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length )
  {
    v10 = v5[1];
    v11 = &unk_1C00701BA;
    v12 = &unk_1C00701BA;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v11 = (void *)v5[71];
      if ( (v10 & 0x400000000000LL) != 0 )
        v12 = (void *)v5[72];
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_26;
    v13 = 27;
LABEL_25:
    WPP_RECORDER_SF_qddqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v11, (_DWORD)v12, v13);
LABEL_26:
    a2->IoStatus.Status = -1073741436;
    IofCompleteRequest(a2, 0);
    return 3221225860LL;
  }
  LODWORD(v12) = *((_DWORD *)v5 + 86);
  if ( *((_DWORD *)v5 + 125) < (int)v12 )
  {
    v14 = v5[1];
    v11 = &unk_1C00701BA;
    if ( (v14 & 0x200000000000LL) != 0 )
      v11 = (void *)v5[71];
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_26;
    v13 = 28;
    goto LABEL_25;
  }
  _InterlockedIncrement((volatile signed __int32 *)v5 + 172);
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  ACPIDeviceIrpWaitWakeRequest(a1, a2);
  return 259LL;
}
