/*
 * XREFs of ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C012A010
 * Callers:
 *     ?ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_DATA@@KPEAK@Z @ 0x1C0001008 (-ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_D.c)
 *     ?ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KPEAK@Z @ 0x1C00013B0 (-ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KP.c)
 *     ?ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_INSTANCE@@KPEAK@Z @ 0x1C00105F0 (-ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_IN.c)
 *     NdisEnumerateFilterModules @ 0x1C0069F20 (NdisEnumerateFilterModules.c)
 *     ?ndisIMDeleteIfStackEntry@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006D82C (-ndisIMDeleteIfStackEntry@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C008C630 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ndisHandleBindNotification @ 0x1C01178A8 (ndisHandleBindNotification.c)
 *     ndisHandleLegacyBindIoctl @ 0x1C0117A14 (ndisHandleLegacyBindIoctl.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C012F258 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006C9C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisEqualUnicodeStringDispatchLevel@@YA_NPEBU_UNICODE_STRING@@0@Z @ 0x1C0012D04 (-ndisEqualUnicodeStringDispatchLevel@@YA_NPEBU_UNICODE_STRING@@0@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0012D38 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_Z @ 0x1C0012E28 (WPP_RECORDER_SF_Z.c)
 */

void __fastcall ndisReferenceMiniportByName(
        const struct _UNICODE_STRING *a1,
        struct _NDIS_MINIPORT_BLOCK **a2,
        char a3,
        unsigned __int8 a4)
{
  unsigned int v7; // r15d
  KIRQL v8; // al
  struct _NDIS_M_DRIVER_BLOCK *v9; // rbx
  KIRQL v10; // r12
  enum _NDIS_MP_REFTAG v11; // r12
  struct _NDIS_MINIPORT_BLOCK *MiniportQueue; // rdi
  int v13; // eax
  _NDIS_BIND_PATHS *BindPaths; // rdx
  unsigned int Number; // ebp
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-48h] BYREF
  KIRQL v17; // [rsp+80h] [rbp+8h]

  DestinationString = 0LL;
  v7 = 1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xAu,
      (struct _GUID *)&WPP_8c005ce258853466be6c7a213c919bd7_Traceguids,
      &a1->Length);
  *a2 = 0LL;
  DestinationString.Length = a1->Length;
  DestinationString.MaximumLength = DestinationString.Length + 2;
  DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                          NonPagedPoolNx,
                                          (unsigned __int16)(DestinationString.Length + 2),
                                          0x7473444Eu);
  if ( DestinationString.Buffer )
  {
    RtlUpcaseUnicodeString(&DestinationString, a1, 0);
    v8 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v9 = ndisMiniDriverList;
    v10 = v8;
    v17 = v8;
    if ( ndisMiniDriverList )
    {
      v11 = a4;
      while ( 1 )
      {
        KeAcquireSpinLockAtDpcLevel(&v9->Ref.SpinLock);
        MiniportQueue = v9->MiniportQueue;
        if ( !MiniportQueue )
          goto LABEL_16;
        while ( 1 )
        {
          v13 = MiniportQueue->PnPFlags & 0x2000000;
          if ( a3 )
            break;
          if ( !v13 )
          {
            BindPaths = MiniportQueue->BindPaths;
            if ( BindPaths )
            {
              Number = BindPaths->Number;
              if ( BindPaths->Number >= v7 && ndisEqualUnicodeStringDispatchLevel(&DestinationString, BindPaths->Paths) )
              {
                v7 = Number;
                if ( *a2 )
                {
                  ndisDereferenceMiniport(*a2, a4);
                  *a2 = 0LL;
                  v7 = MiniportQueue->BindPaths->Number;
                }
                v11 = a4;
                if ( ndisReferenceMiniport(MiniportQueue, a4) )
                  goto LABEL_15;
                goto LABEL_16;
              }
            }
          }
LABEL_21:
          MiniportQueue = MiniportQueue->NextMiniport;
          if ( !MiniportQueue )
            goto LABEL_16;
        }
        if ( v13 || !ndisEqualUnicodeStringDispatchLevel(&DestinationString, &MiniportQueue->MiniportName) )
          goto LABEL_21;
        if ( ndisReferenceMiniport(MiniportQueue, v11) )
LABEL_15:
          *a2 = MiniportQueue;
LABEL_16:
        KeReleaseSpinLockFromDpcLevel(&v9->Ref.SpinLock);
        v9 = v9->NextDriver;
        if ( !v9 )
        {
          v10 = v17;
          break;
        }
      }
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, v10);
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xDu,
        0xBu,
        (struct _GUID *)&WPP_8c005ce258853466be6c7a213c919bd7_Traceguids,
        *a2);
  }
}
