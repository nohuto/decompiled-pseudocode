/*
 * XREFs of ?ndisOidPreIovSetVFPowerState@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007B570
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C00184FC (WPP_RECORDER_SF_qDD_ea_1C00184FC.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003B7C4 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1C0077CA0 (-ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 */

char __fastcall ndisOidPreIovSetVFPowerState(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  struct _NDIS_MINIPORT_BLOCK *v3; // rbp
  char v4; // bl
  int v5; // r8d
  char v7[4]; // [rsp+38h] [rbp-20h]

  v1 = *((_QWORD *)a1 + 4);
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x45u,
      (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids,
      (char)v3,
      v1);
  v4 = 1;
  if ( *(_DWORD *)(v1 + 4) != 1 )
  {
LABEL_4:
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_12;
  }
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) >= 0xDu )
  {
    if ( ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1) == &ndisIntReqGeneric )
    {
      if ( !*(_QWORD *)a1
        || (*(_DWORD *)(*((_QWORD *)a1 + 4) + 52LL) = v5, ndisIovFindVFByVFId(
                                                            v3,
                                                            *(_WORD *)(*(_QWORD *)(v1 + 40) + 4LL))) )
      {
        v4 = 0;
      }
      else
      {
        *((_DWORD *)a1 + 10) = -1073741811;
      }
      goto LABEL_12;
    }
    goto LABEL_4;
  }
  *(_DWORD *)(v1 + 56) = 13;
  *((_DWORD *)a1 + 10) = -1073676268;
LABEL_12:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x46u,
      (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids,
      (char)v3,
      v4,
      *(_DWORD *)v7);
  }
  return v4;
}
