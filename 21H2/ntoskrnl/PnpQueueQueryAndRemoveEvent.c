/*
 * XREFs of PnpQueueQueryAndRemoveEvent @ 0x14072F5B4
 * Callers:
 *     PiCMQueryRemove @ 0x14072EEE8 (PiCMQueryRemove.c)
 *     PnpRequestDeviceEjectExWorker @ 0x1408A0670 (PnpRequestDeviceEjectExWorker.c)
 *     PiControlQueryAndRemoveDevice @ 0x1408B3850 (PiControlQueryAndRemoveDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     PnpDiagnosticTraceObject @ 0x140364E1C (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x14037BE44 (PnpDiagnosticTraceDeviceOperation.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14062D4E0 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PnpSetTargetDeviceRemove @ 0x140739194 (PnpSetTargetDeviceRemove.c)
 *     PnpRemoveEventFromQueue @ 0x1408ABF0C (PnpRemoveEventFromQueue.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpQueueQueryAndRemoveEvent(unsigned __int16 *a1, char *a2, _WORD *a3, _WORD *a4, char a5, int a6)
{
  int v7; // r14d
  volatile __int32 *v9; // rdi
  _DWORD *v10; // r15
  unsigned __int16 *v11; // rsi
  _QWORD *v12; // rax
  PVOID v13; // rcx
  __int64 v14; // rax
  char *PoolWithTag; // rax
  int v16; // ebx
  int v17; // edi
  NTSTATUS v18; // ebx
  char *v19; // r12
  unsigned int v20; // ecx
  int v22; // ecx
  _WORD *v23; // rax
  char v24; // [rsp+78h] [rbp-29h]
  _DWORD v25[3]; // [rsp+7Ch] [rbp-25h] BYREF
  PVOID P; // [rsp+88h] [rbp-19h] BYREF
  PVOID Object; // [rsp+90h] [rbp-11h]
  struct _KEVENT Event; // [rsp+98h] [rbp-9h] BYREF

  v7 = a5 & 8;
  v25[0] = 0;
  memset(&Event, 0, sizeof(Event));
  v9 = 0LL;
  P = 0LL;
  v10 = 0LL;
  v24 = 0;
  v11 = 0LL;
  *(_DWORD *)a2 = 0;
  if ( (a5 & 8) != 0 )
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceEject_Start, a1);
  v12 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)a1, 0x43706E50u);
  Object = v12;
  if ( !v12 )
  {
    v19 = a2;
    v18 = -1073741810;
    goto LABEL_27;
  }
  v13 = *(PVOID *)(v12[39] + 40LL);
  if ( !v13 )
  {
    v18 = -1073741810;
LABEL_35:
    v19 = a2;
    goto LABEL_24;
  }
  if ( v13 == IopRootDeviceNode )
  {
    v18 = -1073741790;
    goto LABEL_35;
  }
  v14 = *(unsigned int *)a4;
  if ( (_DWORD)v14 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v14 + 20, 0x20207050u);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v18 = -1073741670;
LABEL_38:
      v19 = a2;
      goto LABEL_24;
    }
    v11 = (unsigned __int16 *)(PoolWithTag + 4);
    v24 = 1;
    *((_WORD *)PoolWithTag + 2) = 0;
    *(_QWORD *)(PoolWithTag + 12) = PoolWithTag + 20;
    v16 = 0;
    *((_WORD *)PoolWithTag + 3) = *a4;
  }
  else
  {
    v16 = 1;
  }
  if ( v7 && a6 )
    v16 = 1;
  v25[1] = (a5 & 0xB) != 0;
  if ( (a5 & 2) != 0 )
  {
    v17 = 22;
  }
  else if ( v7 )
  {
    v17 = 47;
  }
  else
  {
    v17 = 21;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v18 = PnpSetTargetDeviceRemove(
          Object,
          v16,
          v17,
          0,
          (__int64)&Event,
          0LL,
          0LL,
          (__int64)v25,
          (__int64)v10,
          (__int64)v11,
          (__int64)&P);
  if ( v18 < 0 )
    goto LABEL_48;
  v18 = KeWaitForSingleObject(&Event, Executive, 0, 1u, 0LL);
  if ( v18 != 257 )
    goto LABEL_15;
  v9 = (volatile __int32 *)P;
  if ( (unsigned int)PnpRemoveEventFromQueue(P) )
  {
    v18 = -1073741536;
    goto LABEL_38;
  }
  if ( _InterlockedExchange(v9 + 17, 1) )
  {
    v18 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
LABEL_15:
    v19 = a2;
    if ( v18 >= 0 )
      v18 = v25[0];
    if ( v10 )
      *(_DWORD *)a2 = *v10;
    if ( v11 )
    {
      v20 = *v11;
      if ( (_WORD)v20 )
      {
        if ( v20 >= *(_DWORD *)a4 )
        {
          LOWORD(v20) = *a4 - 2;
          *v11 = v20;
        }
        memmove(a3, *((const void **)v11 + 1), (unsigned __int16)v20);
        a3[(unsigned __int64)*v11 >> 1] = 0;
        LOWORD(v20) = *v11;
      }
      *(_DWORD *)a4 = (unsigned __int16)v20;
    }
    if ( *(_DWORD *)a2 == 6 )
    {
      if ( a3 )
      {
        v22 = 0;
        v23 = a3;
        if ( *a3 )
        {
          while ( *v23 != 92 || ++v22 != 3 )
          {
            if ( !*++v23 )
              goto LABEL_59;
          }
          *v23 = 0;
LABEL_59:
          if ( v22 == 3 )
            *(_DWORD *)a4 = (unsigned __int16)((_WORD)v23 - (_WORD)a3);
        }
      }
    }
    goto LABEL_23;
  }
  v18 = -1073741536;
  v24 = 0;
  *((_BYTE *)P + 72) = 1;
  _InterlockedExchange(v9 + 17, 0);
LABEL_48:
  v19 = a2;
LABEL_23:
  v9 = (volatile __int32 *)P;
LABEL_24:
  ObfDereferenceObjectWithTag(Object, 0x43706E50u);
  if ( v9 && _InterlockedExchangeAdd(v9 + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(P, 0x4B706E50u);
LABEL_27:
  if ( v7 )
    PnpDiagnosticTraceDeviceOperation(&KMPnPEvt_DeviceEject_Stop, a1, v18, (__int64)v11, *v19);
  if ( v24 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)v18;
}
