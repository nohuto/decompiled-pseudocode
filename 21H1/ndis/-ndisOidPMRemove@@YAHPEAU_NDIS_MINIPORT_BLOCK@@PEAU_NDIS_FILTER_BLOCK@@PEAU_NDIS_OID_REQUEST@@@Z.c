/*
 * XREFs of ?ndisOidPMRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0090928
 * Callers:
 *     ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0016BDC (-ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@.c)
 * Callees:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C000C500 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     WPP_RECORDER_SF_qDd @ 0x1C000E2D0 (WPP_RECORDER_SF_qDd.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D058 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_sL @ 0x1C00965B0 (WPP_RECORDER_SF_sL.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F86F0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisOidPMRemove(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_FILTER_BLOCK *a2,
        struct _NDIS_OID_REQUEST *a3)
{
  NDIS_OID Oid; // edi
  __int64 v7; // rbp
  struct _KSEMAPHORE *v8; // rbp
  unsigned int SetMiniport; // ebx
  int v10; // r8d
  int v11; // r9d
  const char *v12; // rdx
  int v13; // r8d
  int v15; // [rsp+20h] [rbp-38h]
  char v16[4]; // [rsp+30h] [rbp-28h]
  char v17[4]; // [rsp+38h] [rbp-20h]

  Oid = a3->DATA.QUERY_INFORMATION.Oid;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v16 = a3->DATA.QUERY_INFORMATION.Oid;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x4Au,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      (char)a1,
      *(_DWORD *)v16);
  }
  v7 = 3920LL;
  if ( Oid != -50265845 )
    v7 = 3952LL;
  v8 = (struct _KSEMAPHORE *)(&a1->Header.Type + v7);
  ndisWaitForKernelObject(v8);
  *(_DWORD *)&a3->NdisReserved[16] |= 0x2000000u;
  SetMiniport = ndisQuerySetMiniportEx(a1, 0LL, a3, 0, 0LL, a2);
  if ( SetMiniport && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v12 = "OID_PM_REMOVE_WOL_PATTERN";
    if ( Oid != -50265845 )
      v12 = "OID_PM_REMOVE_PROTOCOL_OFFLOAD";
    WPP_RECORDER_SF_sL(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)v12, v10, v11, v15, (__int64)v12, SetMiniport);
  }
  KeReleaseSemaphore(v8, 0, 1, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v17 = SetMiniport;
    WPP_RECORDER_SF_qDd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      v13,
      0x4Cu,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      (char)a1,
      Oid,
      *(_DWORD *)v17);
  }
  return SetMiniport;
}
