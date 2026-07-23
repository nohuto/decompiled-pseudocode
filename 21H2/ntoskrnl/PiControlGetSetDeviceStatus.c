/*
 * XREFs of PiControlGetSetDeviceStatus @ 0x14062E740
 * Callers:
 *     <none>
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140252870 (PiControlFreeUserModeCallersBuffer.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     PnpRequestDeviceAction @ 0x1403703A4 (PnpRequestDeviceAction.c)
 *     PnpDeleteDeviceActionRequest @ 0x14037ECC4 (PnpDeleteDeviceActionRequest.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     PnpCancelDeviceActionRequest @ 0x14050EA18 (PnpCancelDeviceActionRequest.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x14050EA70 (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PiControlMakeUserModeCallersCopy @ 0x14062A4E0 (PiControlMakeUserModeCallersCopy.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14062D4E0 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PpDevNodeUnlockTree @ 0x14062E9D0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14062EA64 (PpDevNodeLockTree.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x14062EB58 (PiControlGetUserFlagsFromDeviceNode.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiControlGetSetDeviceStatus(__int64 a1, void **a2, unsigned int a3, char a4)
{
  unsigned int v4; // ecx
  _DWORD *v5; // rsi
  volatile signed __int32 *v6; // rdi
  SIZE_T v7; // r13
  void *v10; // r12
  __int64 result; // rax
  _QWORD *v12; // r15
  int v13; // ecx
  int v14; // r14d
  int v15; // ebx
  int v16; // ecx
  int v17; // eax
  NTSTATUS v18; // eax
  __int64 *v19; // rdx
  __int64 *v20; // rcx
  __int64 v21; // r9
  struct _KEVENT *p_Event; // rax
  PVOID PoolWithTag; // rax
  __int64 v24; // [rsp+40h] [rbp-30h] BYREF
  __int128 v25; // [rsp+48h] [rbp-28h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-18h] BYREF
  __int64 v27; // [rsp+A8h] [rbp+38h] BYREF

  v4 = *(unsigned __int16 *)a2;
  LODWORD(v27) = 0;
  v5 = 0LL;
  v6 = 0LL;
  v7 = a3;
  v25 = 0LL;
  v24 = 0LL;
  WORD1(v25) = v4;
  LOWORD(v25) = v4;
  v10 = 0LL;
  memset(&Event, 0, sizeof(Event));
  if ( (unsigned __int16)(v4 - 1) > 0x18Fu || (v4 & 1) != 0 )
    return 3221225485LL;
  result = PiControlMakeUserModeCallersCopy((void **)&v25 + 1, a2[1], v4, 2u, a4, 1);
  if ( (int)result >= 0 )
  {
    PpDevNodeLockTree(0LL);
    v12 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&v25, 0x53706E50u);
    PiControlFreeUserModeCallersBuffer(a4, *((void **)&v25 + 1));
    if ( v12 )
      v5 = *(_DWORD **)(v12[39] + 40LL);
    PpDevNodeUnlockTree(0LL);
    if ( !v5 )
    {
      v15 = -1073741810;
LABEL_12:
      if ( v12 )
        ObfDereferenceObjectWithTag(v12, 0x53706E50u);
      if ( v15 < 0 )
      {
        if ( v10 )
          ExFreePoolWithTag(v10, 0x55706E50u);
      }
      return (unsigned int)v15;
    }
    if ( v5 == IopRootDeviceNode && *((_DWORD *)a2 + 4) )
    {
      v15 = -1073741790;
      goto LABEL_12;
    }
    v13 = *((_DWORD *)a2 + 4);
    v14 = *((_DWORD *)a2 + 7) & 1;
    if ( !v13 )
    {
      PiControlGetUserFlagsFromDeviceNode(v5, (char *)a2 + 20);
      *((_DWORD *)a2 + 6) = v5[101];
      *((_DWORD *)a2 + 8) = v5[102];
      v15 = 0;
      goto LABEL_10;
    }
    v16 = v13 - 1;
    if ( v16 )
    {
      if ( v16 != 1 )
      {
        v15 = -1073741808;
        goto LABEL_12;
      }
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v17 = PnpRequestDeviceAction(v12, 1, 0, 0LL, (__int64)&Event, (__int64)&v27, &v24);
      v15 = v17;
    }
    else
    {
      if ( v14 )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v7, 0x55706E50u);
        v10 = PoolWithTag;
        if ( !PoolWithTag )
        {
          v15 = -1073741670;
          goto LABEL_12;
        }
        memmove(PoolWithTag, a2, v7);
      }
      else
      {
        KeInitializeEvent(&Event, NotificationEvent, 0);
      }
      v19 = &v24;
      v20 = &v27;
      v21 = (__int64)v10;
      if ( v14 )
        v19 = 0LL;
      p_Event = &Event;
      if ( v14 )
      {
        v20 = 0LL;
        p_Event = 0LL;
      }
      else
      {
        v21 = (__int64)a2;
      }
      v17 = PnpRequestDeviceAction(v12, 15, 0, v21, (__int64)p_Event, (__int64)v20, v19);
      v15 = v17;
      if ( v14 )
        goto LABEL_37;
    }
    if ( v17 >= 0 )
    {
      v18 = KeWaitForSingleObject(&Event, Executive, 0, 1u, 0LL);
      v6 = (volatile signed __int32 *)v24;
      v15 = v18;
      if ( v18 != 257 )
        goto LABEL_27;
      if ( !(unsigned int)PnpRemoveDeviceActionRequestFromQueue((volatile signed __int32 *)v24) )
      {
        PnpCancelDeviceActionRequest((__int64)v6);
        v15 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
LABEL_27:
        if ( !v15 )
          v15 = v27;
        goto LABEL_10;
      }
      v15 = -1073741536;
LABEL_10:
      if ( v6 )
        PnpDeleteDeviceActionRequest(v6);
      goto LABEL_12;
    }
LABEL_37:
    v6 = (volatile signed __int32 *)v24;
    goto LABEL_10;
  }
  return result;
}
