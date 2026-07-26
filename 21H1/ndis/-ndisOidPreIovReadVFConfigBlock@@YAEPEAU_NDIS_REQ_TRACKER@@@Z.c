/*
 * XREFs of ?ndisOidPreIovReadVFConfigBlock@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007AA70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001853C (WPP_RECORDER_SF_qDD_ea_1C001853C.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003B584 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1C00775C0 (-ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 */

char __fastcall ndisOidPreIovReadVFConfigBlock(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  struct _NDIS_MINIPORT_BLOCK *v3; // rbp
  char v4; // bl
  int v5; // eax
  unsigned int v6; // eax
  int v7; // ecx
  __int64 v8; // r8
  int v9; // r9d

  v1 = *((_QWORD *)a1 + 4);
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x3Fu,
      (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids,
      (char)v3,
      v1);
  if ( *(_DWORD *)(v1 + 4) != 12 )
    goto LABEL_4;
  v4 = 0;
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0x14u )
  {
    v5 = -1073676268;
LABEL_9:
    *(_DWORD *)(v1 + 68) = 20;
LABEL_10:
    *((_DWORD *)a1 + 10) = v5;
    goto LABEL_22;
  }
  if ( *(_DWORD *)(v1 + 52) < 0x14u )
  {
    v5 = -1073676266;
    goto LABEL_9;
  }
  v6 = *(_DWORD *)(*(_QWORD *)(v1 + 40) + 12LL) + *(_DWORD *)(*(_QWORD *)(v1 + 40) + 16LL);
  v7 = v6;
  if ( v6 < 0x14 )
    v7 = 20;
  if ( *(_DWORD *)(v1 + 48) < 0x14u )
  {
    v5 = -1073676268;
LABEL_17:
    *(_DWORD *)(v1 + 68) = v7;
    goto LABEL_10;
  }
  if ( *(_DWORD *)(v1 + 52) < v6 )
  {
    v5 = -1073676266;
    goto LABEL_17;
  }
  if ( ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1) != &ndisIntReqGeneric )
  {
LABEL_4:
    *((_DWORD *)a1 + 10) = -1073741637;
LABEL_22:
    v4 = 1;
    goto LABEL_23;
  }
  if ( *(_QWORD *)a1 )
  {
    *(_DWORD *)(*((_QWORD *)a1 + 4) + 64LL) = v9;
    if ( !ndisIovFindVFByVFId(v3, *(_WORD *)(v8 + 4)) )
    {
      *((_DWORD *)a1 + 10) = -1073741811;
      goto LABEL_22;
    }
  }
LABEL_23:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x40u,
      (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids,
      (char)v3,
      v4,
      *((_DWORD *)a1 + 10));
  return v4;
}
