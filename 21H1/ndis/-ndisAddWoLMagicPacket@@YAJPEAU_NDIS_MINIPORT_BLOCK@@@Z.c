/*
 * XREFs of ?ndisAddWoLMagicPacket@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003ADF0
 * Callers:
 *     ?ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C011F650 (-ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C012EB78 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C000C500 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_d @ 0x1C001918C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D058 (WPP_RECORDER_SF_qd.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     memcpy_s @ 0x1C003D520 (memcpy_s.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 */

__int64 __fastcall ndisAddWoLMagicPacket(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _SINGLE_LIST_ENTRY *v2; // rsi
  unsigned int v3; // edi
  _SINGLE_LIST_ENTRY *Next; // rax
  KIRQL v5; // dl
  unsigned int v6; // eax
  struct _NDIS_FILTER_BLOCK *v8; // [rsp+30h] [rbp-D8h]
  KIRQL NewIrql[16]; // [rsp+48h] [rbp-C0h] BYREF
  struct _NDIS_OID_REQUEST v10; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v11[52]; // [rsp+158h] [rbp+50h] BYREF

  v2 = 0LL;
  NewIrql[0] = 0;
  v3 = 0;
  memset(&v10, 0, 0xF8uLL);
  memset(v11, 0, 0xC4uLL);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x53u,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, NewIrql);
  Next = a1->WOLPatternList.Next;
  while ( Next )
  {
    v2 = Next;
    if ( HIDWORD(Next[7].Next) == 2 )
      break;
    Next = Next->Next;
    v2 = 0LL;
  }
  v5 = NewIrql[0];
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v5);
  if ( !v2 )
  {
    v11[0] = 12845440;
    v11[3] = 2;
    LOWORD(v11[4]) = MagicPacketStr.Length;
    memcpy_s((char *)&v11[4] + 2, 0x80uLL, off_1C00E3530, MagicPacketStr.Length);
    memset(&v10, 0, 0xF8uLL);
    v10.PortNumber = 0;
    *(_DWORD *)&v10.NdisReserved[16] |= 0x100008u;
    *(_QWORD *)&v10.NdisReserved[32] = &ndisIntReqGeneric;
    v10.Header = (NDIS_OBJECT_HEADER)15466902;
    v10.DATA.QUERY_INFORMATION.InformationBuffer = v11;
    v10.DATA.QUERY_INFORMATION.Oid = -50265846;
    v10.RequestType = NdisRequestSetInformation;
    v10.DATA.QUERY_INFORMATION.InformationBufferLength = 196;
    v6 = ndisQuerySetMiniportEx(a1, 0LL, &v10, 0, 0LL, 0LL);
    v3 = v6;
    if ( v6 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return v3;
      LODWORD(v8) = v6;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x54u,
        (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
        v8);
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x55u,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      (char)a1,
      v3);
  return v3;
}
