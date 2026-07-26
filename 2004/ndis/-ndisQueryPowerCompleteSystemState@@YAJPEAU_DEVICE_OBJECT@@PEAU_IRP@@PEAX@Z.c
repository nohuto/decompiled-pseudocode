/*
 * XREFs of ?ndisQueryPowerCompleteSystemState@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0014330
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0060078 (McTemplateK0jqxd_EtwWriteTransfer.c)
 */

__int64 __fastcall ndisQueryPowerCompleteSystemState(struct _DEVICE_OBJECT *a1, struct _IRP *a2, char *a3)
{
  NTSTATUS v5; // eax
  int v6; // ecx
  int v7; // esi
  __int64 v9; // [rsp+30h] [rbp-18h]
  int Status; // [rsp+30h] [rbp-18h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    Status = a2->IoStatus.Status;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x22u,
      (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
      (char)a3,
      Status);
  }
  if ( a2->IoStatus.Status < 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v9) = a2->IoStatus.Status;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x23u,
        (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
        (char)a3,
        v9);
    }
    if ( (byte_1C00E61C1 & 8) != 0 )
      McTemplateK0jqxd_EtwWriteTransfer(
        (_DWORD)a1,
        (unsigned int)&QueryPowerCompleteSystemState,
        (_DWORD)a3 + 4008,
        (_DWORD)a3 + 4008,
        *((_DWORD *)a3 + 1014),
        *((_QWORD *)a3 + 503),
        a2->IoStatus.Status);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a3 + 4120), a2, 0x20u);
    return (unsigned int)a2->IoStatus.Status;
  }
  else
  {
    v5 = PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)a3 + 479),
           3u,
           *(POWER_STATE *)(a3 + 3144),
           ndisQueryPowerComplete,
           a3,
           0LL);
    v7 = v5;
    if ( v5 < 0 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v9) = v5;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x24u,
          (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
          (char)a3,
          v9);
      }
      if ( (byte_1C00E61C1 & 8) != 0 )
        McTemplateK0jqxd_EtwWriteTransfer(
          v6,
          (unsigned int)&QueryPowerCompleteSystemStatePoRequest,
          (_DWORD)a3 + 4008,
          (_DWORD)a3 + 4008,
          *((_DWORD *)a3 + 1014),
          *((_QWORD *)a3 + 503),
          v7);
    }
    else
    {
      *((_QWORD *)a3 + 97) = a2;
    }
    if ( v7 < 0 )
    {
      a2->IoStatus.Status = v7;
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a3 + 4120), a2, 0x20u);
    }
    else
    {
      v7 = -1073741802;
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x25u,
        (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
        a3);
    return (unsigned int)v7;
  }
}
