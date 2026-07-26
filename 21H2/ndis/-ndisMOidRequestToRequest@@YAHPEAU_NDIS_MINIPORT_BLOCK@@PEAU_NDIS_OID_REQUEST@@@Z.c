/*
 * XREFs of ?ndisMOidRequestToRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009AD00
 * Callers:
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C000BB00 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000E000 (WPP_RECORDER_SF_qqL.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00403C0 (memset.c)
 *     WPP_RECORDER_SF_qqDd @ 0x1C0096AE8 (WPP_RECORDER_SF_qqDd.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x1C00AB2E8 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00AB3D0 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

__int64 __fastcall ndisMOidRequestToRequest(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, __int64 a3)
{
  NDIS_OID Oid; // r15d
  unsigned int v6; // esi
  __int64 Clock; // r12
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // rbx
  char *v10; // rsi
  unsigned int Flags; // eax
  char v12; // r14
  unsigned __int64 *p_Lock; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // r8
  int v16; // ecx
  int v17; // ecx
  unsigned int v18; // eax
  __int64 v19; // rax
  _NDIS_REQUEST *PendingRequest; // r14

  Oid = a2->DATA.QUERY_INFORMATION.Oid;
  v6 = -1073741823;
  Clock = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Eu,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)a1,
      (char)a2,
      a2->DATA.QUERY_INFORMATION.Oid);
  if ( a2->RequestType == NdisRequestMethod )
  {
    v6 = -1073741637;
    goto LABEL_30;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xB0uLL, 0x6572444Eu);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xB0uLL);
    v9[8] = a2->RequestType;
    v10 = (char *)(v9 + 16);
    v9[10] = a2->DATA.QUERY_INFORMATION.Oid;
    *((_QWORD *)v9 + 6) = a2->DATA.QUERY_INFORMATION.InformationBuffer;
    v9[14] = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
    v9[15] = a2->DATA.QUERY_INFORMATION.BytesWritten;
    v9[16] = a2->DATA.QUERY_INFORMATION.BytesNeeded;
    v9[6] |= 0x400u;
    *((_QWORD *)v9 + 1) = a2;
    Flags = a1->Flags;
    a1->PendingRequest = (_NDIS_REQUEST *)v9;
    if ( (Flags & 0x20000) != 0 )
    {
      v6 = a1->DriverHandle->MiniportCharacteristics.Ndis50Chars.CoRequestHandler(
             a1->MiniportAdapterContext,
             0LL,
             (_NDIS_REQUEST *)v9);
LABEL_27:
      if ( v6 != 259 )
      {
        KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        PendingRequest = a1->PendingRequest;
        a1->PendingRequest = 0LL;
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        if ( PendingRequest )
        {
          a2->DATA.QUERY_INFORMATION.BytesWritten = PendingRequest->DATA.QUERY_INFORMATION.BytesWritten;
          a2->DATA.QUERY_INFORMATION.BytesNeeded = PendingRequest->DATA.QUERY_INFORMATION.BytesNeeded;
          ExFreePoolWithTag(PendingRequest, 0);
        }
      }
      goto LABEL_30;
    }
    v12 = 1;
    if ( (Flags & 0x40000) == 0 )
    {
      while ( 1 )
      {
        KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        p_Lock = &a1->Lock;
        a1->MiniportThread = KeGetCurrentThread();
        if ( !a1->LockAcquired )
          break;
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(p_Lock);
        KeStallExecutionProcessor(1u);
      }
      a1->LockAcquired = 1;
      CurrentThread = KeGetCurrentThread();
      a1->MiniportThread = 0LL;
      a1->LockThread = CurrentThread;
      KeReleaseSpinLockFromDpcLevel(p_Lock);
      v10 = (char *)(v9 + 16);
    }
    if ( HIBYTE(dword_1C00E6150) )
    {
      ndisTraceDpcStart(a1, 8u);
      Clock = WmiGetClock(0LL, 0LL, v15);
    }
    else
    {
      v12 = 0;
    }
    v16 = v9[8];
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( !v17 )
      {
        v18 = ((__int64 (__fastcall *)(void *, _QWORD, _QWORD, _QWORD, _DWORD *, char *))a1->DriverHandle->MiniportDriverCharacteristics.CheckForHangHandlerEx)(
                a1->MiniportAdapterContext,
                (unsigned int)v9[10],
                *((_QWORD *)v9 + 6),
                (unsigned int)v9[14],
                v9 + 15,
                v10);
LABEL_22:
        v6 = v18;
        goto LABEL_23;
      }
      if ( v17 != 1 )
      {
        v6 = -1073741637;
LABEL_23:
        if ( v12 )
        {
          v19 = WmiGetClock(0LL, 0LL, a3);
          ndisTraceDpcEnd(a1, 8u, v19 - Clock);
        }
        if ( (a1->Flags & 0x40000) == 0 )
        {
          KeAcquireSpinLockAtDpcLevel(&a1->Lock);
          a1->LockAcquired = 0;
          a1->LockThread = 0LL;
          a1->MiniportThread = 0LL;
          KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        }
        goto LABEL_27;
      }
    }
    v18 = ((__int64 (__fastcall *)(void *, _QWORD, _QWORD, _QWORD, _DWORD *, char *))a1->DriverHandle->MiniportDriverCharacteristics.OidRequestHandler)(
            a1->MiniportAdapterContext,
            (unsigned int)v9[10],
            *((_QWORD *)v9 + 6),
            (unsigned int)v9[14],
            v9 + 15,
            v10);
    goto LABEL_22;
  }
LABEL_30:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqDd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      a3,
      0x1Fu,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)a1,
      (char)a2,
      Oid,
      v6);
  return v6;
}
