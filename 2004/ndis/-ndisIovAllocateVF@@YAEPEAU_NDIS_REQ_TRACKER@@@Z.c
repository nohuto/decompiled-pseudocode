/*
 * XREFs of ?ndisIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0076A28
 * Callers:
 *     ?ndisOidPreIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00793C0 (-ndisOidPreIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003B7C4 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     memmove @ 0x1C003FB80 (memmove.c)
 *     memset @ 0x1C003FE40 (memset.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0077C24 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

char __fastcall ndisIovAllocateVF(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r15
  struct _NDIS_MINIPORT_BLOCK *v3; // r12
  char v4; // si
  __int64 v5; // rax
  int v6; // ebx
  _BYTE *OidSourceHandle; // rax
  _BYTE *v8; // r13
  __int64 v9; // rsi
  struct _NDIS_NIC_SWITCH_BLOCK *SwitchBySwitchId; // rax
  struct _NDIS_NIC_SWITCH_BLOCK *v11; // r14
  _DWORD *PoolWithTag; // rax
  _DWORD *v13; // rbp

  v1 = *((_QWORD *)a1 + 4);
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v4 = 1;
  v5 = v1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x1Fu,
      (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids,
      v3);
    v5 = *((_QWORD *)a1 + 4);
  }
  *(_DWORD *)(v5 + 64) = 1632;
  v6 = 0;
  *(_DWORD *)(*((_QWORD *)a1 + 4) + 60LL) = 0;
  OidSourceHandle = ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1);
  v8 = OidSourceHandle;
  if ( OidSourceHandle && *OidSourceHandle == 18 )
  {
    v9 = *(_QWORD *)(v1 + 40);
    if ( *(_WORD *)(v9 + 1626) == 0xFFFF
      && *(_DWORD *)(v9 + 1628) == -1
      && (SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v3, *(_DWORD *)(v9 + 8)), (v11 = SwitchBySwitchId) != 0LL)
      && *((_DWORD *)SwitchBySwitchId + 18) != *((_DWORD *)SwitchBySwitchId + 158) )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x6C0uLL, 0x6F69444Eu);
      v13 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x6C0uLL);
        v13[18] = 1;
        *((_QWORD *)v13 + 11) = v13 + 20;
        *((_QWORD *)v13 + 10) = v13 + 20;
        *((_QWORD *)v13 + 6) = v3;
        *((_QWORD *)v13 + 7) = v8;
        *((_QWORD *)v13 + 8) = v11;
        memmove(v13 + 24, (const void *)v9, 0x660uLL);
        *(_QWORD *)(v1 + 144) = v13;
        v4 = 0;
      }
      else
      {
        v6 = -1073741670;
        v4 = 1;
      }
      *((_DWORD *)a1 + 10) = v6;
    }
    else
    {
      v6 = -1073741811;
      v4 = 1;
      *((_DWORD *)a1 + 10) = -1073741811;
    }
  }
  else
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    v6 = -1073741637;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x20u,
      (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids,
      (char)v3,
      v6);
  return v4;
}
