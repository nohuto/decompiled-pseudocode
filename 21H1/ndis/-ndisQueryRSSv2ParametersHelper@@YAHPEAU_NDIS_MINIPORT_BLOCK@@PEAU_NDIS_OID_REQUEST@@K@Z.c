/*
 * XREFs of ?ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z @ 0x1C00885DC
 * Callers:
 *     ?ndisQueryMiniportRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0088440 (-ndisQueryMiniportRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQueryOpenRSSv2Parameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00884FC (-ndisQueryOpenRSSv2Parameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     memmove @ 0x1C003F400 (memmove.c)
 *     ?ndisCalculateRssV2ParametersFlags@@YAKPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@@Z @ 0x1C00872E8 (-ndisCalculateRssV2ParametersFlags@@YAKPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@@Z.c)
 *     ?ndisGetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1C008769C (-ndisGetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_.c)
 *     ?ndisIsRssEnabledForRequest@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0087D54 (-ndisIsRssEnabledForRequest@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

__int64 __fastcall ndisQueryRSSv2ParametersHelper(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int a3)
{
  unsigned int v6; // ebx
  unsigned int HashSecretKeyOffset; // ecx
  unsigned int v8; // ebp
  UINT v9; // ebp
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v10; // rcx
  int v11; // eax
  __int64 v12; // r10
  _DWORD *v13; // r11
  int v14; // eax
  unsigned int v15; // eax
  KIRQL v16; // dl
  __int64 v18; // [rsp+30h] [rbp-48h]
  KIRQL NewIrql; // [rsp+80h] [rbp+8h] BYREF
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v20; // [rsp+88h] [rbp+10h] BYREF
  struct _NDIS_VPORT_BLOCK *v21; // [rsp+98h] [rbp+20h] BYREF

  NewIrql = 0;
  v20 = 0LL;
  v21 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x13u,
      (struct _GUID *)&WPP_55eab71d2273366299e40de7bd26ba8a_Traceguids,
      (char)a1,
      a2);
  a2->DATA.QUERY_INFORMATION.BytesWritten = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  if ( a1->RecvScaleCapabilities.Header.Size )
  {
    ndisGetCombinedRSSParameters(a1, a2, &v21, &v20, 0LL, 0LL);
    if ( ndisIsRssEnabledForRequest(a1, a2) )
    {
      HashSecretKeyOffset = v20->HashSecretKeyOffset;
      v8 = HashSecretKeyOffset + v20->HashSecretKeySize;
      if ( v8 < HashSecretKeyOffset )
      {
        v6 = -1073676267;
      }
      else
      {
        v9 = v8 + 28;
        v6 = 0;
        if ( a2->DATA.QUERY_INFORMATION.InformationBufferLength >= v9 )
        {
          v10 = v20;
          *(_DWORD *)a2->DATA.QUERY_INFORMATION.InformationBuffer = 1835464;
          v11 = ndisCalculateRssV2ParametersFlags(v10);
          v13[1] = v11;
          v13[5] = v21->VPortParams.NumQueuePairs;
          v13[6] = *(unsigned __int16 *)(v12 + 12) >> 2;
          v14 = *(_DWORD *)(v12 + 8);
          if ( a3 )
            v14 = a3 | (unsigned __int8)v14;
          v13[2] = v14;
          v15 = *(unsigned __int16 *)(v12 + 20);
          v13[3] = v15;
          v13[4] = 28;
          if ( v15 )
            memmove(v13 + 7, (const void *)(v12 + *(unsigned int *)(v12 + 24)), v15);
          a2->DATA.QUERY_INFORMATION.BytesWritten = v9;
        }
        else
        {
          a2->DATA.QUERY_INFORMATION.BytesNeeded = v9;
          v6 = -1073676268;
        }
      }
    }
    else
    {
      v6 = 0;
    }
  }
  else
  {
    v6 = -1073741637;
  }
  v16 = NewIrql;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v16);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v18) = v6;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x14u,
      (struct _GUID *)&WPP_55eab71d2273366299e40de7bd26ba8a_Traceguids,
      (char)a1,
      v18);
  }
  return v6;
}
