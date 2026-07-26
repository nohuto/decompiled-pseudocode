/*
 * XREFs of ndisWMIDispatch @ 0x1C0010B00
 * Callers:
 *     ?ndisWMIIrpDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0012A30 (-ndisWMIIrpDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_DATA@@KPEAK@Z @ 0x1C0001008 (-ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_D.c)
 *     ?ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KPEAK@Z @ 0x1C00013B0 (-ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KP.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     ?ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_INSTANCE@@KPEAK@Z @ 0x1C00105F0 (-ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_IN.c)
 *     ndisWmiRegister @ 0x1C0029330 (ndisWmiRegister.c)
 *     ndisWmiEnableEvents @ 0x1C00296C4 (ndisWmiEnableEvents.c)
 *     ?ndisDummyHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_OBJECT_HEADER@@PEAU_IRP@@@Z @ 0x1C006B090 (-ndisDummyHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_OBJECT_HEADER@@PEAU_IRP@@@Z.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C008C630 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ndisWmiDisableEvents @ 0x1C008CFFC (ndisWmiDisableEvents.c)
 */

NTSTATUS __fastcall ndisWMIDispatch(struct _DEVICE_OBJECT *a1, struct _NDIS_MINIPORT_BLOCK *a2, struct _IRP *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  unsigned int v4; // ebp
  struct _GUID *FileName; // r13
  unsigned int LowPart; // r12d
  struct tagWNODE_SINGLE_INSTANCE *Parameters; // r15
  int v11; // eax
  int v12; // ebx
  unsigned __int64 v13; // rax
  unsigned __int16 v15; // r9
  __int64 v16; // [rsp+30h] [rbp-38h]
  unsigned int v17; // [rsp+78h] [rbp+10h] BYREF

  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  FileName = (struct _GUID *)CurrentStackLocation->Parameters.QueryDirectory.FileName;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Parameters = (struct tagWNODE_SINGLE_INSTANCE *)CurrentStackLocation->Parameters.CreatePipe.Parameters;
  v17 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x49u,
      (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
      (char)a2,
      a3);
  if ( a2->Header.Type != 17 )
    return ndisDummyHandler(a1, &a2->Header, a3);
  if ( (struct _DEVICE_OBJECT *)CurrentStackLocation->Parameters.Create.SecurityContext == a1 )
  {
    if ( CurrentStackLocation->MinorFunction == 1 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0x12u,
          0x4Cu,
          (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
          a2);
      v11 = ndisWmiQuerySingleInstance(a2, 0LL, Parameters, LowPart, &v17);
LABEL_9:
      v12 = v11;
    }
    else
    {
      switch ( CurrentStackLocation->MinorFunction )
      {
        case 0u:
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0x12u,
              0x4Bu,
              (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
              a2);
          v11 = ndisWmiQueryAllData(a2, 0LL, FileName, (struct tagWNODE_ALL_DATA *)Parameters, LowPart, &v17);
          goto LABEL_9;
        case 2u:
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0x12u,
              0x4Du,
              (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
              a2);
          v11 = ndisWmiChangeSingleInstance(a2, 0LL, Parameters);
          goto LABEL_9;
        case 3u:
          if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_41;
          v15 = 78;
          break;
        case 4u:
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0x12u,
              0x50u,
              (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
              a2);
          v11 = ndisWmiEnableEvents((char)a2, FileName);
          goto LABEL_9;
        case 5u:
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0x12u,
              0x51u,
              (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
              a2);
          v11 = ndisWmiDisableEvents((char)a2, FileName);
          goto LABEL_9;
        case 6u:
          if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_41;
          v15 = 82;
          break;
        case 7u:
          if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_41;
          v15 = 83;
          break;
        case 8u:
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0x12u,
              0x4Au,
              (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
              a2);
          v11 = ndisWmiRegister((char)a2, (__int64)&v17);
          goto LABEL_9;
        case 9u:
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0x12u,
              0x4Fu,
              (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
              a2);
          v11 = ndisWmiExecuteMethod(a2, 0LL, (struct tagWNODE_METHOD_ITEM *)Parameters, LowPart, &v17);
          goto LABEL_9;
        default:
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v16) = CurrentStackLocation->MinorFunction;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0x12u,
              0x54u,
              (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
              (char)a2,
              v16);
          }
          v12 = -1073741808;
          goto LABEL_10;
      }
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x12u,
        v15,
        (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
        a2);
LABEL_41:
      v12 = -1073741637;
    }
LABEL_10:
    a3->IoStatus.Status = v12;
    if ( v12 == -1073741789 )
    {
      v13 = v17;
    }
    else
    {
      if ( v12 >= 0 )
        v4 = v17;
      v13 = v4;
    }
    a3->IoStatus.Information = v13;
    IofCompleteRequest(a3, 0);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v16) = v12;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x12u,
        0x55u,
        (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
        (char)a2,
        v16);
    }
    return v12;
  }
  else
  {
    ++a3->CurrentLocation;
    ++a3->Tail.Overlay.CurrentStackLocation;
    return IofCallDriver(a2->NextDeviceObject, a3);
  }
}
