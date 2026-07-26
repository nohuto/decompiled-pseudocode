/*
 * XREFs of ?ndisOidPreIovVFParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007B830
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001870C (WPP_RECORDER_SF_qDD_ea_1C001870C.c)
 *     memmove @ 0x1C0040100 (memmove.c)
 *     ?ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1C0077E20 (-ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 */

char __fastcall ndisOidPreIovVFParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  struct _NDIS_MINIPORT_BLOCK *v3; // rbp
  int v4; // ebx
  __int64 v5; // rax
  char v6; // di
  __int64 v7; // rcx
  __int64 v8; // r10
  _LIST_ENTRY *VFByVFId; // rax
  void *v10; // r10

  v1 = *((_QWORD *)a1 + 4);
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x27u,
      (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids,
      (char)v3,
      v1);
  if ( *(_DWORD *)(v1 + 4) != 12 )
    goto LABEL_17;
  v4 = 0;
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0x660u )
  {
    v4 = -1073676268;
LABEL_8:
    *(_DWORD *)(v1 + 68) = 1632;
LABEL_18:
    *((_DWORD *)a1 + 10) = v4;
    goto LABEL_19;
  }
  if ( *(_DWORD *)(v1 + 52) < 0x660u )
  {
    v4 = -1073676266;
    goto LABEL_8;
  }
  v5 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
  {
    v6 = 0;
    goto LABEL_20;
  }
  v7 = *(_QWORD *)(v5 + 4608);
  if ( !v7 || !*(_QWORD *)(v5 + 3568) || (*(_BYTE *)(v7 + 8) & 3) != 3 )
  {
LABEL_17:
    v4 = -1073741637;
    goto LABEL_18;
  }
  v8 = *(_QWORD *)(v1 + 40);
  *(_DWORD *)(v1 + 64) = 1632;
  VFByVFId = ndisIovFindVFByVFId(v3, *(_WORD *)(v8 + 1626));
  if ( VFByVFId )
  {
    memmove(v10, &VFByVFId[6], 0x660uLL);
    *(_DWORD *)(v1 + 60) = 1632;
    goto LABEL_18;
  }
  *((_DWORD *)a1 + 10) = -1073741811;
  v4 = -1073741811;
LABEL_19:
  v6 = 1;
LABEL_20:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x28u,
      (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids,
      (char)v3,
      v6,
      v4);
  return v6;
}
