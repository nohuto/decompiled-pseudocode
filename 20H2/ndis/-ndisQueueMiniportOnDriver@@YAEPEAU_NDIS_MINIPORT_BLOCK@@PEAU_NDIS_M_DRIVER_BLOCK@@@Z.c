/*
 * XREFs of ?ndisQueueMiniportOnDriver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x1C012F140
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C012F258 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006E8C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0018D30 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qql @ 0x1C0019740 (WPP_RECORDER_SF_qql_ea_1C0019740.c)
 */

unsigned __int8 __fastcall ndisQueueMiniportOnDriver(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_M_DRIVER_BLOCK *a2)
{
  unsigned __int8 v4; // di
  KIRQL v5; // al
  _REFERENCE_EX *p_Ref; // rcx
  int v7; // edx
  char v9[4]; // [rsp+38h] [rbp-20h]

  v4 = 1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x13u,
      (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
      (char)a1,
      a2);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v5 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
  p_Ref = &a2->Ref;
  if ( a2->Ref.Closing )
  {
    KeReleaseSpinLock(&p_Ref->SpinLock, v5);
    v4 = 0;
  }
  else
  {
    a1->NextMiniport = a2->MiniportQueue;
    a2->MiniportQueue = a1;
    KeReleaseSpinLock(&p_Ref->SpinLock, v5);
  }
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = v4;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      1u,
      0x14u,
      (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
      (char)a1,
      (char)a2,
      *(_DWORD *)v9);
  }
  return v4;
}
