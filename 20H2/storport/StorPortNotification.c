/*
 * XREFs of StorPortNotification @ 0x1C000E7E0
 * Callers:
 *     StorPortNotificationVrfy @ 0x1C007F440 (StorPortNotificationVrfy.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0002BF8 (DbgLogRequest.c)
 *     RaidQueueDeferredItem @ 0x1C0002E10 (RaidQueueDeferredItem.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C00059E8 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0005B6C (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterFindUnit @ 0x1C00065E4 (RaidAdapterFindUnit.c)
 *     RaidAdapterRequestComplete @ 0x1C000EA30 (RaidAdapterRequestComplete.c)
 *     memmove @ 0x1C001F600 (memmove.c)
 *     RaidAdapterRequestDirectComplete @ 0x1C002DFB4 (RaidAdapterRequestDirectComplete.c)
 *     RaidAdapterRequestTimerDeferred @ 0x1C002E0C0 (RaidAdapterRequestTimerDeferred.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0036F9C (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0037010 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pqquuuqpp_EtwWriteTransfer @ 0x1C00371DC (McTemplateK0pqquuuqpp_EtwWriteTransfer.c)
 *     RaidpLinkDown @ 0x1C0037D8C (RaidpLinkDown.c)
 *     RaidpLinkUp @ 0x1C0037DF8 (RaidpLinkUp.c)
 *     StorAsyncNotificationDeferred @ 0x1C003817C (StorAsyncNotificationDeferred.c)
 *     StorEnablePassiveInitialization @ 0x1C003832C (StorEnablePassiveInitialization.c)
 *     StorPortPause @ 0x1C0039780 (StorPortPause.c)
 *     StorpGetExtendedTable @ 0x1C003B9F0 (StorpGetExtendedTable.c)
 *     StorpMarkDeviceFailed @ 0x1C003C5F8 (StorpMarkDeviceFailed.c)
 *     RaidHandleTraceNotifyType @ 0x1C00435D8 (RaidHandleTraceNotifyType.c)
 *     RaidUnitProcessAsyncNotification @ 0x1C004AD98 (RaidUnitProcessAsyncNotification.c)
 *     StorEtwIORequestServiceTimeEventData @ 0x1C004F514 (StorEtwIORequestServiceTimeEventData.c)
 *     StorEtwLogoRequestServiceTimeEventData @ 0x1C004F80C (StorEtwLogoRequestServiceTimeEventData.c)
 */

void __fastcall StorPortNotification(
        int a1,
        _QWORD **a2,
        unsigned int *a3,
        unsigned __int64 a4,
        char *a5,
        _DWORD *a6,
        __int64 a7,
        _DWORD *a8,
        __int16 a9,
        __int64 a10,
        int *a11)
{
  int v11; // ebx
  int v12; // r8d
  __int64 v13; // rsi
  __int64 v14; // rdx
  _DWORD *v15; // rbx
  __int64 v16; // rcx
  __int64 *v17; // rax
  KIRQL *v18; // rcx
  unsigned int v19; // ebx
  struct _KTIMER *v20; // rcx
  int v21; // ecx
  int v22; // r8d
  unsigned int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  char v27; // r14
  char v28; // r15
  PSLIST_ENTRY v29; // rax
  struct _SLIST_ENTRY *v30; // rbx
  __int64 v31; // rcx
  KDPC_IMPORTANCE v32; // edi
  char v33; // di
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // r9
  __int64 v37; // r11
  unsigned int v38; // edx
  _DWORD *v39; // rdi
  unsigned __int8 v40; // r15
  unsigned __int8 v41; // r12
  unsigned __int8 v42; // r13
  unsigned int v43; // edi
  __int64 Unit; // rax
  int v45; // ecx
  char v46; // al
  int *v47; // rdi
  signed __int32 v48[8]; // [rsp+0h] [rbp-C8h] BYREF
  unsigned int v49; // [rsp+60h] [rbp-68h]
  __int16 *v50; // [rsp+68h] [rbp-60h]
  __int64 v51; // [rsp+70h] [rbp-58h]
  __int64 v52; // [rsp+78h] [rbp-50h]
  __int64 retaddr; // [rsp+C8h] [rbp+0h]
  _QWORD **v54; // [rsp+D8h] [rbp+10h]

  v54 = a2;
  v11 = 0;
  v12 = (int)a2;
  v50 = 0LL;
  v13 = 0LL;
  if ( a2 )
    v13 = **(a2 - 2);
  switch ( a1 )
  {
    case 0:
      if ( v13 && a3 )
      {
        if ( *((_BYTE *)a3 + 2) == 40 )
          v14 = *((_QWORD *)a3 + 12);
        else
          v14 = *((_QWORD *)a3 + 6);
        if ( v14 )
          RaidAdapterRequestComplete(v13, v14, 0LL);
      }
      return;
    case 4100:
      v17 = *(a2 - 2);
      if ( !a3 )
        return;
      if ( *a3 == 2 )
      {
        v18 = (KIRQL *)(a3 + 2);
        if ( !*(_DWORD *)(*v17 + 720) )
        {
          RaidAdapterReleaseInterruptLock(*v17, *v18);
          return;
        }
      }
      else
      {
        if ( *a3 != 1 )
        {
          switch ( *a3 )
          {
            case 3u:
              RaidAdapterReleaseInterruptLock(*v17, *((_BYTE *)a3 + 24));
              break;
            case 4u:
              KeReleaseInStackQueuedSpinLockForDpc((PKLOCK_QUEUE_HANDLE)(a3 + 2));
              break;
            case 5u:
              KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)(a3 + 2));
              break;
          }
          return;
        }
        v18 = (KIRQL *)(a3 + 2);
      }
      KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)v18);
      return;
    case 4099:
      v16 = **(a2 - 2);
      if ( a5 )
      {
        *(_DWORD *)a5 = (_DWORD)a3;
        switch ( (_DWORD)a3 )
        {
          case 2:
            if ( *(_DWORD *)(v16 + 720) )
              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v16 + 712), (PKLOCK_QUEUE_HANDLE)(a5 + 8));
            else
              a5[8] = RaidAdapterAcquireInterruptLock(v16);
            break;
          case 1:
            if ( a4 )
              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a4 + 64), (PKLOCK_QUEUE_HANDLE)(a5 + 8));
            break;
          case 3:
            a5[24] = RaidAdapterAcquireInterruptLock(v16);
            break;
        }
      }
      break;
    case 4098:
      v15 = a6;
      if ( a3 )
        *v15 = KeInsertQueueDpc((PRKDPC)a3, (PVOID)a4, a5);
      break;
    default:
      if ( a1 > 4096 )
      {
        switch ( a1 )
        {
          case 4097:
            if ( a3 && a4 )
            {
              KeInitializeDpc((PRKDPC)a3, (PKDEFERRED_ROUTINE)a4, a2);
              KeInitializeSpinLock((PKSPIN_LOCK)a3 + 8);
            }
            break;
          case 4101:
            if ( v13 )
            {
              v36 = (__int64)a6;
              v37 = a7;
              v38 = (unsigned int)a5;
              v39 = a8;
              v49 = (unsigned int)a5;
              v51 = (__int64)a6;
              v52 = a7;
              v50 = &a9;
              if ( a4 && *(_WORD *)a4 == 1 )
              {
                v40 = *(_BYTE *)(a4 + 8);
                v41 = *(_BYTE *)(a4 + 9);
                v42 = *(_BYTE *)(a4 + 10);
              }
              else
              {
                v40 = -1;
                v41 = -1;
                v42 = -1;
              }
              if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
              {
                McTemplateK0pqquuuqpp_EtwWriteTransfer(
                  0xC0000000,
                  (_DWORD)a5,
                  0,
                  v12,
                  *(_DWORD *)(v13 + 56),
                  (char)a3,
                  v40,
                  v41,
                  v42,
                  (char)a5,
                  (char)a6,
                  a7);
                v38 = v49;
                v36 = v51;
                v37 = v52;
              }
              if ( a4
                && *(_WORD *)a4 == 1
                && v40 <= *(_BYTE *)(v13 + 400)
                && (((unsigned __int8)a3 & 3) == 0 || v41 <= *(_BYTE *)(v13 + 425))
                && (((unsigned __int8)a3 & 1) == 0 || v42 <= *(_BYTE *)(v13 + 474))
                && ((unsigned __int8)a3 & 7) != 0 )
              {
                if ( _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 4968), 1, 0) == 1 )
                {
                  if ( v39 )
                    *v39 = -1056964607;
                }
                else
                {
                  _InterlockedOr(v48, 0);
                  *(_DWORD *)(v13 + 4972) = (_DWORD)a3;
                  *(_QWORD *)(v13 + 4984) = a4;
                  *(_DWORD *)(v13 + 4976) = v38;
                  *(_QWORD *)(v13 + 4992) = v36;
                  *(_QWORD *)(v13 + 5000) = v37;
                  _InterlockedOr(v48, 0);
                  *(_BYTE *)(v13 + 104) |= 0x40u;
                  *(_BYTE *)(v13 + 105) = 1;
                  KeInsertQueueDpc((PRKDPC)(v13 + 2056), 0LL, 0LL);
                  if ( v39 )
                    *v39 = 0;
                }
              }
              else if ( v39 )
              {
                *v39 = -1056964602;
              }
            }
            break;
          case 4102:
            if ( StorEtwLoggingEnabled && a4 )
            {
              v34 = *(_BYTE *)(a4 + 2) == 40 ? *(_QWORD *)(a4 + 96) : *(_QWORD *)(a4 + 48);
              if ( v34 )
              {
                if ( (byte_1C0069841 & 2) != 0 || (byte_1C0069843 & 2) != 0 )
                  *(_QWORD *)(v34 + 720) = a3;
                if ( (byte_1C0069841 & 2) != 0 )
                {
                  LOBYTE(a2) = 1;
                  StorEtwIORequestServiceTimeEventData(v34, a2, a3);
                }
                v35 = *(_QWORD *)(v34 + 224);
                if ( v35 && *(_DWORD *)(v35 + 1812) && (byte_1C0069843 & 2) != 0 )
                {
                  LOBYTE(a2) = 1;
                  StorEtwLogoRequestServiceTimeEventData(v34, a2, a3);
                }
              }
            }
            break;
          case 4103:
            v50 = (__int16 *)&a6;
            v49 = 0;
            if ( v13 && a3 && *(_WORD *)a3 == 1 && (a4 & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
            {
              LOWORD(v49) = *((_WORD *)a3 + 4);
              BYTE2(v49) = *((_BYTE *)a3 + 10);
              v43 = v49;
              Unit = RaidAdapterFindUnit(v13, v49);
              if ( !Unit || (*(_DWORD *)(Unit + 1824) & 4) == 0 )
              {
                *(_DWORD *)a5 = -1056964601;
                return;
              }
              if ( _InterlockedCompareExchange((volatile signed __int32 *)(Unit + 1880), 1, 0) == 1 )
              {
                *(_DWORD *)a5 = -1056964596;
                return;
              }
              if ( KeGetCurrentIrql() > 2u )
              {
                v46 = StorAsyncNotificationDeferred(v13, Unit, v49, a4);
                v45 = -1056964596;
                if ( v46 )
                  v45 = 0;
              }
              else
              {
                *(_QWORD *)(Unit + 1872) = a4;
                v45 = RaidUnitProcessAsyncNotification(v13, v43, Unit + 1864);
              }
            }
            else
            {
              v45 = -1056964602;
            }
            *(_DWORD *)a5 = v45;
            break;
          case 4104:
            if ( v13 && a3 )
            {
              v31 = *((_BYTE *)a3 + 2) == 40 ? *((_QWORD *)a3 + 12) : *((_QWORD *)a3 + 6);
              if ( v31 )
                RaidAdapterRequestDirectComplete(v31, a2, a2);
            }
            break;
          case 4105:
            v32 = (int)a6;
            if ( a3 )
            {
              if ( a4 )
              {
                KeInitializeDpc((PRKDPC)a3, (PKDEFERRED_ROUTINE)a4, a5);
                if ( v32 )
                  KeSetImportanceDpc((PRKDPC)a3, v32);
              }
            }
            break;
          case 4106:
            v33 = (char)a6;
            if ( a3 )
            {
              if ( a4 )
              {
                KeInitializeThreadedDpc((PRKDPC)a3, (PKDEFERRED_ROUTINE)a4, a5);
                if ( v33 )
                  KeSetImportanceDpc((PRKDPC)a3, HighImportance);
              }
            }
            break;
          case 4107:
            if ( a3 && a4 )
              KeSetTargetProcessorDpcEx((PKDPC)a3, (PPROCESSOR_NUMBER)a4);
            break;
          case 4108:
            if ( v13 && a5 )
              StorpMarkDeviceFailed(v13, (_DWORD)a3, a4, 0xFFFF, (__int64)a5, 0, 0LL, 0, 0LL);
            break;
          case 4109:
            v47 = a11;
            if ( v13 && (_WORD)a5 && a6 )
              StorpMarkDeviceFailed(v13, (_DWORD)a3, a4, (unsigned __int16)a5, (__int64)a6, a7, (__int64)a8, a9, a10);
            else
              v11 = -1056964602;
            *v47 = v11;
            break;
          default:
            return;
        }
      }
      else if ( a1 == 4096 )
      {
        *(_DWORD *)a4 = (unsigned __int8)StorEnablePassiveInitialization(a2, a3);
      }
      else
      {
        switch ( a1 )
        {
          case 3:
            if ( v13 )
            {
              DbgLogRequest(v13, 39, v13, *(unsigned int *)(v13 + 56), retaddr, *(unsigned int *)(v13 + 544), 0LL);
              v23 = *(_DWORD *)(v13 + 544);
              if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
                McTemplateK0pqq_EtwWriteTransfer(
                  v21,
                  (unsigned int)&EventResetDetected,
                  v22,
                  (_DWORD)v54,
                  *(_DWORD *)(v13 + 56),
                  *(_DWORD *)(v13 + 544));
              if ( v23 )
              {
                if ( v23 > 0x3D0900 )
                  v23 = 4000000;
                v24 = v23 / 0xF4240 + 1;
                if ( v23 == 1000000 * (v23 / 0xF4240) )
                  v24 = v23 / 0xF4240;
                StorPortPause(v54, v24);
              }
            }
            break;
          case 6:
            v19 = a4;
            if ( v13 )
            {
              if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
                McTemplateK0pqq_EtwWriteTransfer(
                  0xC0000000,
                  (unsigned int)&EventRequestTimerCall,
                  (_DWORD)a2,
                  (_DWORD)a2,
                  *(_DWORD *)(v13 + 56),
                  a4);
              if ( KeGetCurrentIrql() > 2u )
              {
                RaidAdapterRequestTimerDeferred(v13, a3, v19);
              }
              else
              {
                v20 = (struct _KTIMER *)(v13 + 1728);
                if ( v19 )
                {
                  *(_QWORD *)(v13 + 1984) = a3;
                  KeSetCoalescableTimer(v20, (LARGE_INTEGER)(-10LL * (unsigned int)a4), 0, 0, (PKDPC)(v13 + 1664));
                }
                else
                {
                  KeCancelTimer(v20);
                }
              }
            }
            break;
          case 7:
            if ( v13 )
            {
              DbgLogRequest(v13, 38, v13, *(unsigned int *)(v13 + 56), retaddr, *(unsigned int *)(v13 + 544), 0LL);
              if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
                McTemplateK0pq_EtwWriteTransfer(v25, &EventBusChangeDetected, v26, v54, *(_DWORD *)(v13 + 56));
              *(_WORD *)(v13 + 105) = 257;
              KeInsertQueueDpc((PRKDPC)(v13 + 2056), 0LL, 0LL);
            }
            break;
          case 8:
            v27 = 0;
            v28 = 0;
            if ( (_BYTE)a4 != 0xFF )
            {
              v27 = (char)a5;
              v28 = (char)a6;
            }
            if ( a3 )
            {
              if ( *a3 <= 0x80 )
              {
                if ( v13 )
                {
                  v29 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v13 + 1616));
                  v30 = v29;
                  if ( v29 )
                  {
                    LODWORD(v29[1].Next) = 134684674;
                    LOBYTE(v29[2].Next) = a4;
                    if ( (_BYTE)a4 != 0xFF )
                    {
                      BYTE1(v29[2].Next) = v27;
                      BYTE2(v29[2].Next) = v28;
                    }
                    memmove(&v29[2].Next + 1, a3, *a3);
                    RaidQueueDeferredItem((char *)(v13 + 1536), v30);
                  }
                }
              }
            }
            break;
          case 10:
            if ( v13 )
              RaidpLinkUp(v13, a2, a2);
            break;
          case 11:
            if ( v13 )
              RaidpLinkDown(v13, a2, a2);
            break;
          case 12:
            *(_QWORD *)a3 = MEMORY[0xFFFFF78000000320];
            break;
          case 13:
            KeBugCheckEx(0xF7u, 0LL, 0LL, 0LL, 0LL);
          case 14:
            RaidHandleTraceNotifyType(0x1C0000000uLL, (unsigned int)a3, a4);
            break;
          case 15:
            StorpGetExtendedTable(a2, a3);
            break;
          default:
            return;
        }
      }
      break;
  }
}
