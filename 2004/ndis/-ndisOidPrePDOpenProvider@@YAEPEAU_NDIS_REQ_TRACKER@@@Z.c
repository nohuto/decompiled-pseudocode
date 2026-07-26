/*
 * XREFs of ?ndisOidPrePDOpenProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C011CA50
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006C9C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0012D38 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003B7C4 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     memset @ 0x1C003FE40 (memset.c)
 *     ?ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0077CD4 (-ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     WPP_RECORDER_SF_qqdqqS @ 0x1C007F504 (WPP_RECORDER_SF_qqdqqS.c)
 *     WPP_RECORDER_SF_qqqqDd @ 0x1C007F6EC (WPP_RECORDER_SF_qqqqDd.c)
 *     WPP_RECORDER_SF_qqqqq @ 0x1C007F958 (WPP_RECORDER_SF_qqqqq.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FDD90 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FE260 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisMInvokeBlockingOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0117038 (-ndisMInvokeBlockingOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z @ 0x1C011C4F4 (-ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z.c)
 *     ?ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z @ 0x1C011C608 (-ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z.c)
 */

unsigned __int8 __fastcall ndisOidPrePDOpenProvider(struct _NDIS_MINIPORT_BLOCK **a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // r13
  _QWORD *v2; // rbx
  struct _NDIS_MINIPORT_BLOCK *v3; // rsi
  unsigned __int8 v5; // r14
  int v6; // edx
  __int64 v7; // r8
  struct _NDIS_MINIPORT_BLOCK *v8; // rax
  wchar_t *Buffer; // r15
  _QWORD *OidSourceHandle; // rax
  void *ClientDriverHandleFromRequestSourceHandle; // rax
  struct NDIS_PD_CLIENT *PDClientViaClientDriverHandle; // r12
  unsigned int LowPart; // edx
  struct _NDIS_VPORT_BLOCK *VPortByVPortId; // rax
  struct _NDIS_PD_BLOCK *PDBlock; // rax
  __int64 v16; // rcx
  _QWORD *PoolWithTag; // rax
  _QWORD *v18; // rax
  KPushLockBase *v19; // rax
  int v21; // eax
  __int64 v22; // rax
  struct NDIS_PD_CLIENT **v23; // rcx
  __int64 *v24; // rcx
  __int64 v25; // rax
  __int64 **v26; // rdx
  __int64 v27; // r9
  const wchar_t *v28; // rcx
  __int64 v29; // [rsp+28h] [rbp-E0h]
  KLockHolder v30; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v31[248]; // [rsp+88h] [rbp-80h] BYREF

  v1 = *a1;
  v2 = 0LL;
  v3 = a1[4];
  v5 = 1;
  memset(v31, 0, sizeof(v31));
  v8 = v1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qqqqq(*((_QWORD *)WPP_GLOBAL_Control + 8), v6, v7, 0x17u, v29);
    v8 = *a1;
  }
  if ( !v8 )
  {
    v5 = 0;
    goto LABEL_47;
  }
  if ( *((_DWORD *)&v3->Header + 1) != 12 )
    goto LABEL_6;
  if ( (*(_DWORD *)&v3->LinkStateIndicationFlags & 0x4000) == 0 && (v3->Header.Revision < 2u || v3->Header.Size < 0xF8u) )
    goto LABEL_10;
  if ( (v3->WakeUpDpcTimer.Timer.DueTime.HighPart & 1) == 0
    || HIDWORD(v3->WakeUpDpcTimer.Timer.Header.WaitListHead.Blink)
    || v3->WakeUpDpcTimer.Timer.DueTime.LowPart == -1 )
  {
    *((_DWORD *)a1 + 10) = -1073741811;
    goto LABEL_41;
  }
  *((_DWORD *)a1 + 10) = 0;
  if ( v3->PcwDatapathEventMask < 0x18u )
  {
    HIDWORD(v3->ShortRef.SpinLock) = 24;
    *((_DWORD *)a1 + 10) = -1073676268;
    goto LABEL_47;
  }
  if ( HIDWORD(v3->Reserved28) < 0x18 )
  {
    HIDWORD(v3->ShortRef.SpinLock) = 24;
    *((_DWORD *)a1 + 10) = -1073676266;
    goto LABEL_47;
  }
  Buffer = v3->Reserved4.Buffer;
  if ( *(_BYTE *)Buffer != 0x80
    || *((_BYTE *)Buffer + 1) != 1
    || Buffer[1] < 0x18u
    || (*((_DWORD *)Buffer + 1) & 0xFFFFFFFE) != 0 )
  {
    goto LABEL_10;
  }
  OidSourceHandle = ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v3);
  if ( !OidSourceHandle
    || (ClientDriverHandleFromRequestSourceHandle = ndisGetClientDriverHandleFromRequestSourceHandle(OidSourceHandle)) == 0LL
    || (PDClientViaClientDriverHandle = ndisFindPDClientViaClientDriverHandle(ClientDriverHandleFromRequestSourceHandle)) == 0LL )
  {
    *((_DWORD *)a1 + 10) = -1073741808;
    goto LABEL_47;
  }
  LowPart = v3->WakeUpDpcTimer.Timer.DueTime.LowPart;
  if ( LowPart )
  {
    VPortByVPortId = ndisIovFindVPortByVPortId(v1, LowPart);
    if ( !VPortByVPortId || (VPortByVPortId->Flags & 2) != 0 )
    {
LABEL_10:
      *((_DWORD *)a1 + 10) = -1073741811;
      goto LABEL_47;
    }
  }
  PDBlock = v1->PDBlock;
  if ( !PDBlock
    || !*((_BYTE *)PDBlock + 12)
    || !*((_DWORD *)PDBlock + 8)
    || (v16 = *((_QWORD *)PDBlock + 3), !*(_DWORD *)(v16 + 16))
    || !*(_BYTE *)(v16 + 8) )
  {
LABEL_6:
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_47;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xC0uLL, 0x6141444Eu);
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_DWORD *)PoolWithTag + 16) = -1;
    PoolWithTag[6] = 0LL;
    PoolWithTag[7] = 0LL;
    PoolWithTag[9] = 0LL;
    PoolWithTag[10] = 0LL;
    *((_WORD *)PoolWithTag + 44) = 0;
    PoolWithTag[1] = 0LL;
    *PoolWithTag = 0LL;
    PoolWithTag[3] = 0LL;
    PoolWithTag[2] = 0LL;
    PoolWithTag[5] = 0LL;
    PoolWithTag[4] = 0LL;
    v18 = PoolWithTag + 12;
    v18[1] = v18;
    *v18 = v18;
    v2[15] = v2 + 14;
    v2[14] = v2 + 14;
    v2[17] = v2 + 16;
    v2[16] = v2 + 16;
    v2[19] = v2 + 18;
    v2[18] = v2 + 18;
    v2[21] = v2 + 20;
    v2[20] = v2 + 20;
    v2[23] = v2 + 22;
    v2[22] = v2 + 22;
  }
  else
  {
    v2 = 0LL;
  }
  if ( !v2 )
  {
    *((_DWORD *)a1 + 10) = -1073741670;
    goto LABEL_47;
  }
  if ( !ndisReferenceMiniport(v1, 0x65u) )
  {
    *((_DWORD *)a1 + 10) = -1073741436;
    goto LABEL_41;
  }
  v2[6] = v1;
  *((_DWORD *)v2 + 16) = v3->WakeUpDpcTimer.Timer.DueTime.LowPart;
  *(_DWORD *)&v31[88] |= 8u;
  *(_QWORD *)&v31[104] = &ndisIntReqGeneric;
  v31[0] = -106;
  *(_DWORD *)&v31[4] = 12;
  *(_DWORD *)&v31[8] = v3->NextMiniport;
  *(_DWORD *)&v31[32] = *(_DWORD *)&v3->Reserved4.Length;
  *(_DWORD *)&v31[56] = v3->OpenQueue;
  *(_OWORD *)&v31[40] = *(_OWORD *)&v3->PcwDataBlock;
  *(_WORD *)&v31[2] = 248;
  v31[1] = 2;
  *(_DWORD *)&v31[244] = 1;
  *(_DWORD *)&v31[240] = v3->WakeUpDpcTimer.Timer.DueTime.LowPart;
  v21 = ndisMInvokeBlockingOidRequest((struct _NDIS_FILTER_BLOCK *)v1, (struct _NDIS_OID_REQUEST *)v31);
  *((_DWORD *)a1 + 10) = v21;
  if ( v21 )
  {
LABEL_41:
    if ( v2 )
    {
      v19 = (KPushLockBase *)v2[9];
      if ( v19 )
      {
        *(_QWORD *)((char *)&v30.m_State + 1) = 0LL;
        v30.m_State = 1048960;
        v30.m_Lock = v19;
        memset(v31, 0, sizeof(v31));
        *(_DWORD *)&v31[88] |= 8u;
        *(_DWORD *)v31 = 15466902;
        *(_QWORD *)&v31[104] = &ndisIntReqGeneric;
        *(_DWORD *)&v31[32] = 66818;
        *(_DWORD *)&v31[4] = 1;
        *(_DWORD *)&v31[8] = v3->NextMiniport;
        *(_QWORD *)&v31[40] = &v30;
        *(_DWORD *)&v31[48] = 16;
        v31[1] = 2;
        *(_WORD *)&v31[2] = 248;
        *(_DWORD *)&v31[244] = 1;
        *(_DWORD *)&v31[240] = v3->WakeUpDpcTimer.Timer.DueTime.LowPart;
        ndisMInvokeBlockingOidRequest((struct _NDIS_FILTER_BLOCK *)v1, (struct _NDIS_OID_REQUEST *)v31);
        v2[9] = 0LL;
      }
      if ( v2[6] )
      {
        ndisDereferenceMiniport(v1, 0x65u);
        v2[6] = 0LL;
      }
      ExFreePoolWithTag(v2, 0x6141444Eu);
    }
    goto LABEL_47;
  }
  v22 = *((_QWORD *)Buffer + 1);
  v30.m_State = Unlocked;
  v2[9] = v22;
  v2[10] = *((_QWORD *)Buffer + 2);
  v30.m_Lock = (KPushLockBase *)qword_1C00E4538;
  v30.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v30);
  v2[7] = PDClientViaClientDriverHandle;
  v23 = (struct NDIS_PD_CLIENT **)*((_QWORD *)PDClientViaClientDriverHandle + 3);
  if ( *v23 != (struct NDIS_PD_CLIENT *)((char *)PDClientViaClientDriverHandle + 16)
    || (*v2 = (char *)PDClientViaClientDriverHandle + 16,
        v2[1] = v23,
        *v23 = (struct NDIS_PD_CLIENT *)v2,
        v24 = v2 + 4,
        *((_QWORD *)PDClientViaClientDriverHandle + 3) = v2,
        v25 = (__int64)v1->PDBlock + 40,
        v26 = (__int64 **)*((_QWORD *)v1->PDBlock + 6),
        *v26 != (__int64 *)v25) )
  {
    __fastfail(3u);
  }
  *v24 = v25;
  v2[5] = v26;
  *v26 = v24;
  *(_QWORD *)(v25 + 8) = v24;
  KLockHolder::~KLockHolder(&v30);
  if ( (_UNKNOWN *)v2[10] == &unk_1C00C8980 )
    *((_BYTE *)v2 + 88) = 1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v28 = L"PASS_THROUGH";
    if ( !*((_BYTE *)v2 + 88) )
      v28 = L" ";
    WPP_RECORDER_SF_qqdqqS(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)L" ",
      v7,
      v27,
      v29,
      (char)PDClientViaClientDriverHandle,
      (char)v1,
      *((_DWORD *)v2 + 16),
      (char)v2,
      *((_QWORD *)Buffer + 1),
      v28);
  }
  *((_QWORD *)Buffer + 1) = v2;
  *((_QWORD *)Buffer + 2) = &unk_1C00C8980;
LABEL_47:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqqDd(*((_QWORD *)WPP_GLOBAL_Control + 8), v5, v7, 0x19u, v29);
  return v5;
}
