/*
 * XREFs of ndisFInvokeDirectOidRequest @ 0x1C00AE938
 * Callers:
 *     ?ndisFDoDirectOidRequestInternal@@YAXPEAX@Z @ 0x1C00AE770 (-ndisFDoDirectOidRequestInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x1C00096B0 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     ?ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x1C000AF10 (-ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z.c)
 *     WPP_RECORDER_SF_qDq @ 0x1C000B200 (WPP_RECORDER_SF_qDq.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000DF10 (WPP_RECORDER_SF_qqL.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qDqD @ 0x1C00AF290 (WPP_RECORDER_SF_qDqD_ea_1C00AF290.c)
 */

__int64 __fastcall ndisFInvokeDirectOidRequest(struct _NDIS_FILTER_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int a3)
{
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // r15
  NDIS_OID Oid; // r14d
  NDIS_STATUS v7; // eax
  int v8; // edx
  int v9; // r8d
  struct _NDIS_OID_REQUEST *v10; // rbx
  unsigned int v11; // edi
  struct _NDIS_OID_REQUEST *v12; // rdx
  char v14[8]; // [rsp+38h] [rbp-40h]
  struct _NDIS_OID_REQUEST *v15; // [rsp+80h] [rbp+8h] BYREF

  FilterDriver = a1->FilterDriver;
  Oid = a2->DATA.QUERY_INFORMATION.Oid;
  v15 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      a3,
      0x16u,
      (struct _GUID *)&WPP_d0b1dc830796367683bcada1b083b794_Traceguids,
      (char)a1,
      Oid,
      a2);
  v7 = ndisOidCloneForCompatibility(&a1->Header, a2, 0, &v15);
  v10 = v15;
  v11 = v7;
  if ( !v7 )
  {
    if ( v15 && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v14 = v15->DATA.QUERY_INFORMATION.Oid;
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        v7 + 11,
        0x17u,
        (struct _GUID *)&WPP_d0b1dc830796367683bcada1b083b794_Traceguids,
        (char)a2,
        (char)v15,
        *(_QWORD *)v14);
    }
    v12 = a2;
    if ( v10 )
      v12 = v10;
    v11 = FilterDriver->DefaultFilterCharacteristics.DirectOidRequestHandler(a1->FilterModuleContext, v12);
  }
  if ( v11 != 259 && v10 )
    ndisOidFreeInternalCloneRequest(a1, v10, 0, 0LL);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      v9,
      24,
      (struct _GUID *)&WPP_d0b1dc830796367683bcada1b083b794_Traceguids,
      (char)a1,
      Oid,
      (char)a2,
      v11);
  return v11;
}
