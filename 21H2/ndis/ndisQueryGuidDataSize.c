/*
 * XREFs of ndisQueryGuidDataSize @ 0x1C00127B0
 * Callers:
 *     ?ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_DATA@@KPEAK@Z @ 0x1C0001008 (-ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_D.c)
 *     ?ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_INSTANCE@@KPEAK@Z @ 0x1C00106E0 (-ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_IN.c)
 * Callees:
 *     ?ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z @ 0x1C0008A70 (-ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z.c)
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C000C5F0 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     WPP_RECORDER_SF_qLLDDDDDDDDDD @ 0x1C0012B5C (WPP_RECORDER_SF_qLLDDDDDDDDDD.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C0012CD8 (WPP_RECORDER_SF_qZ.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     memset @ 0x1C00403C0 (memset.c)
 *     WPP_RECORDER_SF_qLDDDDDDDDDD @ 0x1C008DB9C (WPP_RECORDER_SF_qLDDDDDDDDDD.c)
 *     WPP_RECORDER_SF_qLDDDDDDDDDDD @ 0x1C008DDC0 (WPP_RECORDER_SF_qLDDDDDDDDDDD.c)
 */

__int64 __fastcall ndisQueryGuidDataSize(
        int *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_GUID *a3,
        struct _NDIS_CO_VC_PTR_BLOCK *a4,
        GUID *Guid,
        struct _NDIS_MINIPORT_BLOCK *a6)
{
  struct _NDIS_MINIPORT_BLOCK *v6; // rbx
  struct _NDIS_MINIPORT_BLOCK *v8; // r13
  struct _NDIS_GUID *v9; // r14
  bool v10; // di
  unsigned int v11; // r12d
  unsigned int Flags; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24; // eax
  int Size; // eax
  __int64 v26; // rax
  int v27; // eax
  int v28; // eax
  bool v29; // zf
  unsigned int v30; // ecx
  int v31; // [rsp+28h] [rbp-F0h]
  bool v32; // [rsp+98h] [rbp-80h]
  char v33; // [rsp+A0h] [rbp-78h]
  _UNICODE_STRING GuidString; // [rsp+A8h] [rbp-70h] BYREF
  struct _NDIS_GUID *v35; // [rsp+B8h] [rbp-60h] BYREF
  struct _NDIS_CO_VC_PTR_BLOCK *v36; // [rsp+C0h] [rbp-58h]
  struct _NDIS_OID_REQUEST v37; // [rsp+C8h] [rbp-50h] BYREF

  v6 = a6;
  v8 = a2;
  v9 = a3;
  v33 = (char)a2;
  v35 = a3;
  v36 = a4;
  memset(&v37, 0, 0xF8uLL);
  v10 = 0;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  v32 = 0;
  if ( (unsigned __int8)byte_1C00E4441 >= 4u )
  {
    v10 = RtlStringFromGUID(Guid, &GuidString) >= 0;
    v32 = v10;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      1,
      18,
      26,
      (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
      (char)v8,
      (__int64)&GuidString);
  if ( v9 )
  {
    v11 = 0;
  }
  else
  {
    v24 = ndisWmiGetGuid(&v35, v8, Guid, 0);
    v9 = v35;
    v11 = v24;
    if ( !v35 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_qLDDDDDDDDDD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          Guid->Data4[5],
          Guid->Data4[4],
          Guid->Data4[3],
          v31,
          (char)v8,
          Guid->Data1,
          Guid->Data2,
          Guid->Data3,
          Guid->Data4[0],
          Guid->Data4[1],
          Guid->Data4[2],
          Guid->Data4[3],
          Guid->Data4[4],
          Guid->Data4[5],
          Guid->Data4[6],
          Guid->Data4[7]);
        v10 = v32;
      }
      goto LABEL_50;
    }
  }
  Flags = v9->Flags;
  if ( (Flags & 0x20000000) != 0 )
  {
    v11 = 0;
    v13 = *(_QWORD *)&v9->Guid.Data1 - *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTER.Data1;
    if ( *(_QWORD *)&v9->Guid.Data1 == *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTER.Data1 )
      v13 = *(_QWORD *)v9->Guid.Data4 - *(_QWORD *)GUID_NDIS_ENUMERATE_ADAPTER.Data4;
    if ( v13 )
    {
      v14 = *(_QWORD *)&v9->Guid.Data1 - *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1;
      if ( *(_QWORD *)&v9->Guid.Data1 == *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1 )
        v14 = *(_QWORD *)v9->Guid.Data4 - *(_QWORD *)GUID_POWER_DEVICE_ENABLE.Data4;
      if ( !v14 )
      {
        *a1 = 1;
        goto LABEL_24;
      }
      v15 = *(_QWORD *)&v9->Guid.Data1 - *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1;
      if ( *(_QWORD *)&v9->Guid.Data1 == *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1 )
        v15 = *(_QWORD *)v9->Guid.Data4 - *(_QWORD *)GUID_POWER_DEVICE_WAKE_ENABLE.Data4;
      if ( !v15 )
      {
        *a1 = 1;
        goto LABEL_24;
      }
      v16 = *(_QWORD *)&v9->Guid.Data1 - *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1;
      if ( *(_QWORD *)&v9->Guid.Data1 == *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1 )
        v16 = *(_QWORD *)v9->Guid.Data4 - *(_QWORD *)GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data4;
      if ( !v16 )
      {
        *a1 = 1;
        goto LABEL_24;
      }
      v17 = *(_QWORD *)&v9->Guid.Data1 - *(_QWORD *)&GUID_NDIS_RSS_ENABLED.Data1;
      if ( *(_QWORD *)&v9->Guid.Data1 == *(_QWORD *)&GUID_NDIS_RSS_ENABLED.Data1 )
        v17 = *(_QWORD *)v9->Guid.Data4 - *(_QWORD *)GUID_NDIS_RSS_ENABLED.Data4;
      if ( !v17 )
      {
        *a1 = 1;
        goto LABEL_24;
      }
      v19 = *(_QWORD *)&v9->Guid.Data1 - *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1;
      if ( *(_QWORD *)&v9->Guid.Data1 == *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1 )
        v19 = *(_QWORD *)v9->Guid.Data4 - *(_QWORD *)GUID_NDIS_NDK_STATE.Data4;
      if ( !v19 )
      {
        *a1 = 1;
        goto LABEL_24;
      }
      v20 = *(_QWORD *)&v9->Guid.Data1 - *(_QWORD *)&GUID_NDIS_NDK_CAPABILITIES.Data1;
      if ( *(_QWORD *)&v9->Guid.Data1 == *(_QWORD *)&GUID_NDIS_NDK_CAPABILITIES.Data1 )
        v20 = *(_QWORD *)v9->Guid.Data4 - *(_QWORD *)GUID_NDIS_NDK_CAPABILITIES.Data4;
      if ( !v20 )
      {
        *a1 = 144;
        goto LABEL_24;
      }
      v21 = *(_QWORD *)&v9->Guid.Data1 - *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1;
      if ( *(_QWORD *)&v9->Guid.Data1 == *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1 )
        v21 = *(_QWORD *)v9->Guid.Data4 - *(_QWORD *)GUID_NDIS_PM_ADMIN_CONFIG.Data4;
      if ( !v21 )
      {
        *a1 = 28;
        goto LABEL_24;
      }
      v22 = *(_QWORD *)&v9->Guid.Data1 - *(_QWORD *)&GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data1;
      if ( *(_QWORD *)&v9->Guid.Data1 == *(_QWORD *)&GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data1 )
        v22 = *(_QWORD *)v9->Guid.Data4 - *(_QWORD *)GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data4;
      if ( !v22 )
      {
        *a1 = 28;
        goto LABEL_24;
      }
      if ( v36 )
      {
        v26 = *(_QWORD *)&v9->Guid.Data1 - *(_QWORD *)&GUID_NDIS_ENUMERATE_VC.Data1;
        if ( *(_QWORD *)&v9->Guid.Data1 == *(_QWORD *)&GUID_NDIS_ENUMERATE_VC.Data1 )
          v26 = *(_QWORD *)v9->Guid.Data4 - *(_QWORD *)GUID_NDIS_ENUMERATE_VC.Data4;
        if ( !v26 )
        {
          *a1 = 0;
          goto LABEL_24;
        }
      }
      v23 = *(_QWORD *)&v9->Guid.Data1 - *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data1;
      if ( *(_QWORD *)&v9->Guid.Data1 == *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data1 )
        v23 = *(_QWORD *)v9->Guid.Data4 - *(_QWORD *)GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data4;
      if ( !v23 )
      {
        *a1 = v8->MiniportName.Length + 18;
        goto LABEL_24;
      }
LABEL_50:
      v11 = -1073741811;
      goto LABEL_24;
    }
    Size = v8->MiniportName.Length + 2;
    goto LABEL_99;
  }
  if ( (Flags & 0x80u) != 0 )
  {
    *a1 = 0;
    goto LABEL_24;
  }
  if ( (Flags & 1) == 0 )
  {
    v11 = -1073741808;
    goto LABEL_24;
  }
  if ( (Flags & 0x10) == 0 && (Flags & 8) == 0 && (Flags & 4) == 0 )
  {
    Size = v9->Size;
    if ( Size != -1 )
    {
LABEL_98:
      v11 = 0;
LABEL_99:
      *a1 = Size;
      goto LABEL_24;
    }
  }
  memset(&v37, 0, 0xF8uLL);
  *(_DWORD *)&v37.NdisReserved[16] |= 8u;
  *(_QWORD *)&v37.NdisReserved[32] = &ndisIntReqWmi;
  v37.Header = (NDIS_OBJECT_HEADER)15466902;
  v37.DATA.QUERY_INFORMATION.Oid = v9->Oid;
  *(_QWORD *)&v37.RequestType = 2LL;
  v37.DATA.QUERY_INFORMATION.InformationBuffer = 0LL;
  v37.DATA.QUERY_INFORMATION.InformationBufferLength = 0;
  if ( v36 || !a6 )
    v6 = v8;
  v27 = ndisQuerySetMiniportEx(v6, v36, &v37, 0, 0LL, 0LL);
  LODWORD(v8) = v27;
  if ( v27 == -1073676268 || v27 == -1073676266 || !v27 )
  {
    v30 = v9->Flags;
    Size = v37.DATA.QUERY_INFORMATION.BytesNeeded;
    if ( (v30 & 4) != 0 )
    {
      Size = 2 * v37.DATA.QUERY_INFORMATION.BytesNeeded + 4;
    }
    else if ( (v30 & 8) != 0 )
    {
      Size = v37.DATA.QUERY_INFORMATION.BytesNeeded + 2;
    }
    else if ( (v30 & 0x10) != 0 )
    {
      Size = v37.DATA.QUERY_INFORMATION.BytesNeeded + 4;
    }
    LOBYTE(v8) = v33;
    goto LABEL_98;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qLDDDDDDDDDDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      Guid->Data4[5],
      Guid->Data4[4],
      Guid->Data4[3],
      v31,
      v33,
      Guid->Data1,
      Guid->Data2,
      Guid->Data3,
      Guid->Data4[0],
      Guid->Data4[1],
      Guid->Data4[2],
      Guid->Data4[3],
      Guid->Data4[4],
      Guid->Data4[5],
      Guid->Data4[6],
      Guid->Data4[7],
      v27);
    v10 = v32;
  }
  if ( (v9->Flags & 0x200) != 0 )
  {
    if ( ((unsigned int)v8 & 0xC0010000) == 0xC0010000 )
      LODWORD(v8) = (unsigned __int16)v8 | 0xC0230000;
    goto LABEL_82;
  }
  if ( (_DWORD)v8 == 259
    || (_DWORD)v8 == -2147483643
    || (v28 = -1073741823, (_DWORD)v8 == -1073741823)
    || (_DWORD)v8 == -1073741670
    || (_DWORD)v8 == -1073741637 )
  {
LABEL_82:
    v11 = (unsigned int)v8;
    LOBYTE(v8) = v33;
    goto LABEL_24;
  }
  v29 = (_DWORD)v8 == -1073676267;
  LOBYTE(v8) = v33;
  if ( v29 )
    v28 = -1073741811;
  v11 = v28;
LABEL_24:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qLLDDDDDDDDDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      Guid->Data4[5],
      Guid->Data4[4],
      Guid->Data4[3],
      v31,
      (char)v8,
      v11,
      Guid->Data1,
      Guid->Data2,
      Guid->Data3,
      Guid->Data4[0],
      Guid->Data4[1],
      Guid->Data4[2],
      Guid->Data4[3],
      Guid->Data4[4],
      Guid->Data4[5],
      Guid->Data4[6],
      Guid->Data4[7]);
    v10 = v32;
  }
  if ( v10 )
    RtlFreeUnicodeString(&GuidString);
  return v11;
}
