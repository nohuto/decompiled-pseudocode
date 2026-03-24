/*
 * XREFs of ?QueryAnchorInfo@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAU_LUID@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z @ 0x1C013795C
 * Callers:
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C01379F8 (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 * Callees:
 *     ?_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ @ 0x1C01378A0 (-_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::QueryAnchorInfo(
        struct _LUID *a1,
        unsigned int *a2,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a3,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a4)
{
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v11; // rax
  struct _LUID v12; // [rsp+20h] [rbp-40h] BYREF
  int v13; // [rsp+28h] [rbp-38h]
  unsigned int v14; // [rsp+2Ch] [rbp-34h]
  int v15; // [rsp+30h] [rbp-30h]
  int v16; // [rsp+34h] [rbp-2Ch]
  int v17; // [rsp+38h] [rbp-28h]
  int v18; // [rsp+3Ch] [rbp-24h]
  int v19; // [rsp+40h] [rbp-20h]
  int v20; // [rsp+44h] [rbp-1Ch]
  __int16 v21; // [rsp+48h] [rbp-18h]
  int v22; // [rsp+4Ch] [rbp-14h]
  __int16 v23; // [rsp+50h] [rbp-10h]

  v17 = 0;
  v19 = 0;
  v21 = 0;
  v12 = 0LL;
  v13 = -1;
  v14 = -1;
  v18 = -1;
  v15 = -2;
  v16 = -2;
  v20 = 1;
  v22 = 4;
  v23 = 256;
  v6 = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_Query((BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO *)&v12, (__int64)a2);
  v9 = v6;
  if ( v6 < 0 )
  {
    v11 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v11 + 24) = v9;
    WdLogEvent5_WdError(v11);
  }
  else
  {
    *a1 = v12;
    *a2 = v14;
  }
  return (unsigned int)v9;
}
