/*
 * XREFs of ?ndisIovCopyNicSwitchInfo@@YAXPEAU_NDIS_NIC_SWITCH_INFO@@PEAU_NDIS_NIC_SWITCH_BLOCK@@@Z @ 0x1C0076CE4
 * Callers:
 *     ?ndisIovGetNicSwitchList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_NIC_SWITCH_INFO_ARRAY@@@Z @ 0x1C0077F08 (-ndisIovGetNicSwitchList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_NIC_SWITCH_INFO_ARRAY@@@Z.c)
 *     ?ndisOidPreIovEnumNicSwitches@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0079E80 (-ndisOidPreIovEnumNicSwitches@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     memset @ 0x1C003FE40 (memset.c)
 */

void __fastcall ndisIovCopyNicSwitchInfo(struct _NDIS_NIC_SWITCH_INFO *a1, struct _NDIS_NIC_SWITCH_BLOCK *a2)
{
  _OWORD *v4; // rcx
  _OWORD *v5; // rax
  __int64 v6; // rdx
  __int128 v7; // xmm1
  int v8; // edx

  memset((char *)a1 + 4, 0, 0x238uLL);
  *(_DWORD *)a1 = 37486976;
  v4 = (_OWORD *)((char *)a1 + 16);
  *((_DWORD *)a1 + 2) = *((_DWORD *)a2 + 27);
  *((_DWORD *)a1 + 3) = *((_DWORD *)a2 + 9);
  v5 = (_OWORD *)((char *)a2 + 116);
  v6 = 4LL;
  do
  {
    *v4 = *v5;
    v4[1] = v5[1];
    v4[2] = v5[2];
    v4[3] = v5[3];
    v4[4] = v5[4];
    v4[5] = v5[5];
    v4[6] = v5[6];
    v4 += 8;
    v7 = v5[7];
    v5 += 8;
    *(v4 - 1) = v7;
    --v6;
  }
  while ( v6 );
  *(_DWORD *)v4 = *(_DWORD *)v5;
  *((_DWORD *)a1 + 133) = *((_DWORD *)a2 + 158);
  *((_DWORD *)a1 + 134) = *((_DWORD *)a2 + 18);
  *((_DWORD *)a1 + 135) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 3568LL) + 40LL);
  *((_DWORD *)a1 + 136) = *((_DWORD *)a2 + 12);
  v8 = *((_DWORD *)a2 + 162);
  *((_DWORD *)a1 + 137) = v8;
  *((_DWORD *)a1 + 138) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 3568LL) + 52LL) - v8;
  *((_DWORD *)a1 + 139) = *((_DWORD *)a2 + 163);
  *((_DWORD *)a1 + 140) = *((_DWORD *)a2 + 164);
  *((_DWORD *)a1 + 141) = *((_DWORD *)a2 + 165);
  *((_DWORD *)a1 + 142) = *((_DWORD *)a2 + 166);
}
