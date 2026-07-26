/*
 * XREFs of ?ndisCreateNotifyQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAUCO_ADDRESS_FAMILY@@PEAPEAU_NDIS_AF_NOTIFY@@@Z @ 0x1C013B210
 * Callers:
 *     NdisCmRegisterAddressFamilyEx @ 0x1C00B6880 (NdisCmRegisterAddressFamilyEx.c)
 *     ?ndisMFinishQueuedPendingOpen@@YAXPEAX@Z @ 0x1C0135430 (-ndisMFinishQueuedPendingOpen@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000DF10 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00196CC (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C002CCE0 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisDereferenceAfNotification@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00B5C48 (-ndisDereferenceAfNotification@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisCreateNotifyQueue(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OPEN_BLOCK *a2,
        struct CO_ADDRESS_FAMILY *a3,
        struct _NDIS_AF_NOTIFY ***a4)
{
  unsigned int v8; // edi
  _NDIS_AF_LIST *CallMgrAfList; // rbx
  _QWORD *PoolWithTag; // r14
  unsigned __int64 *p_SpinLock; // rcx
  _NDIS_OPEN_BLOCK *OpenQueue; // rbx
  _QWORD *v13; // r14
  struct _NDIS_AF_NOTIFY **v14; // rax
  struct _NDIS_AF_NOTIFY **v15; // rcx
  struct _NDIS_OPEN_BLOCK *v16; // rbx

  v8 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0xCu,
      (struct _GUID *)&WPP_70ccdfc7c82d34b36d81d4813b341409_Traceguids,
      (char)a1,
      a2);
  *a4 = 0LL;
  if ( a2 )
  {
    KeAcquireSpinLockAtDpcLevel(&a2->SpinLock);
    if ( (a2->OpenFlags & 0x18000) == 0 )
    {
      CallMgrAfList = a1->CallMgrAfList;
      while ( CallMgrAfList )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x6F63444Eu);
        if ( !PoolWithTag )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0x13u,
              0xDu,
              (struct _GUID *)&WPP_70ccdfc7c82d34b36d81d4813b341409_Traceguids);
          v8 = -1073741670;
          break;
        }
        _InterlockedIncrement(&a2->PendingAfNotifications);
        ndisMReferenceOpen((__int64)a2, 0xEu);
        PoolWithTag[5] = a1;
        PoolWithTag[6] = a2;
        PoolWithTag[7] = *(_QWORD *)&CallMgrAfList->AddressFamily.AddressFamily;
        *((_DWORD *)PoolWithTag + 16) = CallMgrAfList->AddressFamily.MinorVersion;
        *PoolWithTag = *a4;
        CallMgrAfList = CallMgrAfList->NextAf;
        *a4 = (struct _NDIS_AF_NOTIFY **)PoolWithTag;
      }
    }
    p_SpinLock = &a2->SpinLock;
LABEL_25:
    KeReleaseSpinLockFromDpcLevel(p_SpinLock);
    if ( v8 )
    {
      if ( !*a4 )
        goto LABEL_29;
      do
      {
        v15 = *a4;
        v16 = (struct _NDIS_OPEN_BLOCK *)(*a4)[6];
        *a4 = (struct _NDIS_AF_NOTIFY **)**a4;
        ExFreePoolWithTag(v15, 0);
        ndisDereferenceAfNotification(v16);
        ndisMDereferenceOpenLocked((__int64)v16, 0xEu);
      }
      while ( *a4 );
    }
LABEL_20:
    v14 = *a4;
    if ( *a4 )
    {
      v14[1] = 0LL;
      v14[3] = (struct _NDIS_AF_NOTIFY *)ndisNotifyAfRegistration;
      v14[4] = (struct _NDIS_AF_NOTIFY *)v14;
    }
  }
  else
  {
    OpenQueue = a1->OpenQueue;
    if ( OpenQueue )
    {
      while ( 1 )
      {
        if ( OpenQueue->ProtocolHandle->CoAfRegisterNotifyHandler )
        {
          KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
          if ( (OpenQueue->OpenFlags & 0x18000) != 0 )
          {
            KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
          }
          else
          {
            v13 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x6F63444Eu);
            if ( !v13 )
            {
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  2u,
                  0x13u,
                  0xEu,
                  (struct _GUID *)&WPP_70ccdfc7c82d34b36d81d4813b341409_Traceguids);
              v8 = -1073741670;
              p_SpinLock = &OpenQueue->SpinLock;
              goto LABEL_25;
            }
            _InterlockedIncrement(&OpenQueue->PendingAfNotifications);
            ndisMReferenceOpen((__int64)OpenQueue, 0xEu);
            KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
            v13[5] = a1;
            v13[6] = OpenQueue;
            v13[7] = *(_QWORD *)&a3->AddressFamily;
            *((_DWORD *)v13 + 16) = a3->MinorVersion;
            *v13 = *a4;
            *a4 = (struct _NDIS_AF_NOTIFY **)v13;
          }
        }
        OpenQueue = OpenQueue->MiniportNextOpen;
        if ( !OpenQueue )
          goto LABEL_20;
      }
    }
  }
LABEL_29:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0xFu,
      (struct _GUID *)&WPP_70ccdfc7c82d34b36d81d4813b341409_Traceguids,
      (char)a1,
      (char)a2,
      v8);
  return v8;
}
