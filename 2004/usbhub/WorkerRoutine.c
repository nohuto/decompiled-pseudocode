/*
 * XREFs of WorkerRoutine @ 0x1C00057E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0007840 @ 0x1C0007840 (sub_1C0007840.c)
 *     sub_1C002DC34 @ 0x1C002DC34 (sub_1C002DC34.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C002E55C @ 0x1C002E55C (sub_1C002E55C.c)
 */

void __fastcall WorkerRoutine(PDEVICE_OBJECT DeviceObject, unsigned __int16 *Context, int a3)
{
  struct _KEVENT *DeviceExtension; // rdi
  __int64 v6; // r13
  struct _KEVENT *v7; // r12
  __int64 Signalling; // r8
  UCHAR v9; // dl
  PVOID v10; // rcx
  __int64 v11; // rdx
  char *PoolWithTag; // rax
  __int64 v13; // rsi
  LIST_ENTRY *p_WaitListHead; // rdi
  char *v15; // rax
  char **Blink; // rcx
  KIRQL v17; // al
  PVOID v18; // rdx
  __int64 v19; // rcx
  _DWORD *v20; // rdx
  KIRQL v21; // r9
  __int64 v22; // r8
  int v23; // edx
  PVOID v24; // rcx
  __int64 v25; // rdx
  struct _KEVENT *v26; // rdi
  __int64 v27; // r8
  UCHAR v28; // cl
  PVOID v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  _QWORD *v32; // rax
  _QWORD *v33; // rdx
  unsigned int v34; // eax
  __int64 v35; // rdx
  volatile LONG Lock; // eax
  union _LARGE_INTEGER Timeout; // [rsp+90h] [rbp+18h] BYREF

  if ( !DeviceObject )
    sub_1C002DC78(0LL, 0LL);
  DeviceExtension = (struct _KEVENT *)DeviceObject->DeviceExtension;
  if ( !DeviceExtension )
    goto LABEL_58;
  if ( DeviceExtension->Header.LockNV != 541218120 )
    sub_1C002DC78(DeviceObject, DeviceExtension);
  v6 = Context[2];
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
  {
    sub_1C002E55C(
      ::DeviceObject->DeviceExtension,
      (unsigned int)&unk_1C0062098,
      a3,
      100,
      (__int64)&unk_1C0062098,
      v6,
      (char)Context);
    DeviceExtension = (struct _KEVENT *)DeviceObject->DeviceExtension;
  }
  if ( !DeviceExtension )
    goto LABEL_58;
  if ( DeviceExtension->Header.LockNV != 541218120 )
    sub_1C002DC78(DeviceObject, DeviceExtension);
  v7 = DeviceExtension + 139;
  DeviceExtension[142].Header.Type = 1;
  KeWaitForSingleObject(&DeviceExtension[139], Executive, 0, 0, 0LL);
  Signalling = DeviceExtension[142].Header.Signalling;
  v9 = DeviceExtension[142].Header.Signalling;
  if ( (dword_1C006B268 & 0x10000) != 0 )
  {
    v10 = DeviceObject->DeviceExtension;
    if ( v10 )
    {
      v11 = *((_QWORD *)v10 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v10 + 220) & *((_DWORD *)v10 + 221));
      *(_DWORD *)v11 = 1668172104;
      *(_QWORD *)(v11 + 8) = 0LL;
      *(_QWORD *)(v11 + 16) = 0LL;
      *(_QWORD *)(v11 + 24) = Signalling;
      v9 = DeviceExtension[142].Header.Signalling;
    }
  }
  if ( v9 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PoolType, 0x28uLL, 0x42554855u);
    v13 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      *(_QWORD *)(PoolWithTag + 4) = 0LL;
      p_WaitListHead = &DeviceExtension[129].Header.WaitListHead;
      *(_QWORD *)(PoolWithTag + 12) = 0LL;
      *((_DWORD *)PoolWithTag + 5) = 0;
      *((_QWORD *)PoolWithTag + 4) = 1129345907LL;
      *(_DWORD *)PoolWithTag = 1215918946;
      *((_QWORD *)PoolWithTag + 3) = Context;
      v15 = PoolWithTag + 8;
      Blink = (char **)p_WaitListHead->Blink;
      if ( *Blink != (char *)p_WaitListHead )
        goto LABEL_57;
      *(_QWORD *)v15 = p_WaitListHead;
      *((_QWORD *)v15 + 1) = Blink;
      *Blink = v15;
      p_WaitListHead->Blink = (struct _LIST_ENTRY *)v15;
    }
    else
    {
      ++DeviceExtension[130].Header.LockNV;
      v13 = 1936941672LL;
    }
    KeSetEvent(v7, 0, 0);
  }
  else
  {
    KeSetEvent(DeviceExtension + 139, 0, 0);
    v13 = 0LL;
  }
  Timeout.QuadPart = -6600000000LL - (int)(KeQueryTimeIncrement() - 1);
  if ( KeWaitForSingleObject(Context + 1232, Executive, 0, 0, &Timeout) == 258 )
  {
    v34 = *((_DWORD *)Context + 711);
    v35 = 10LL;
    if ( v34 )
      v35 = v34;
    sub_1C002DC34(DeviceObject, v35, Context);
  }
  v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 306);
  *((_DWORD *)Context + 603) = 2;
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 306, v17);
  if ( (dword_1C006B268 & 0x200) != 0 )
  {
    v18 = DeviceObject->DeviceExtension;
    if ( v18 )
    {
      v19 = *((_QWORD *)v18 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v18 + 220) & *((_DWORD *)v18 + 221));
      *(_DWORD *)v19 = 1464029256;
      *(_QWORD *)(v19 + 8) = 0LL;
      *(_QWORD *)(v19 + 16) = Context;
      *(_QWORD *)(v19 + 24) = v6;
    }
  }
  v20 = DeviceObject->DeviceExtension;
  if ( !v20 )
    goto LABEL_58;
  if ( *v20 != 541218120 )
    sub_1C002DC78(DeviceObject, v20);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
    sub_1C002E188(::DeviceObject->DeviceExtension, 0, 1, 57, (__int64)&unk_1C0062098, Context[2]);
  sub_1C0007840((_DWORD)DeviceObject, (_DWORD)Context, 5, (_DWORD)Context + 24, 0LL, 0, 0LL, 0LL);
  KeSetEvent((PRKEVENT)(Context + 1232), 0, 0);
  v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 306);
  v22 = *((unsigned int *)Context + 603);
  v23 = *((_DWORD *)Context + 603);
  if ( (dword_1C006B268 & 0x200) != 0 )
  {
    v24 = DeviceObject->DeviceExtension;
    if ( v24 )
    {
      v25 = *((_QWORD *)v24 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v24 + 220) & *((_DWORD *)v24 + 221));
      *(_DWORD *)v25 = 1682133064;
      *(_QWORD *)(v25 + 8) = 0LL;
      *(_QWORD *)(v25 + 16) = v22;
      *(_QWORD *)(v25 + 24) = v6;
      v23 = *((_DWORD *)Context + 603);
    }
  }
  if ( v23 == 2 )
    *((_DWORD *)Context + 603) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 306, v21);
  v26 = (struct _KEVENT *)DeviceObject->DeviceExtension;
  if ( !v26 )
LABEL_58:
    sub_1C002DC78(DeviceObject, 0LL);
  if ( v26->Header.LockNV != 541218120 )
    sub_1C002DC78(DeviceObject, DeviceObject->DeviceExtension);
  v26[142].Header.Type = 1;
  KeWaitForSingleObject(&v26[139], Executive, 0, 0, 0LL);
  v27 = v26[142].Header.Signalling;
  v28 = v26[142].Header.Signalling;
  if ( (dword_1C006B268 & 0x10000) != 0 )
  {
    v29 = DeviceObject->DeviceExtension;
    if ( v29 )
    {
      v30 = *((_QWORD *)v29 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v29 + 220) & *((_DWORD *)v29 + 221));
      *(_DWORD *)v30 = 1667581000;
      *(_QWORD *)(v30 + 8) = 0LL;
      *(_QWORD *)(v30 + 16) = v13;
      *(_QWORD *)(v30 + 24) = v27;
      v28 = v26[142].Header.Signalling;
    }
  }
  if ( v28 )
  {
    if ( v13 != 1936941672 )
    {
      if ( !v13 )
        goto LABEL_42;
      v31 = *(_QWORD *)(v13 + 8);
      v32 = (_QWORD *)(v13 + 8);
      if ( *(_QWORD *)(v31 + 8) == v13 + 8 )
      {
        v33 = *(_QWORD **)(v13 + 16);
        if ( (_QWORD *)*v33 == v32 )
        {
          *v33 = v31;
          *(_QWORD *)(v31 + 8) = v33;
          *(_QWORD *)(v13 + 16) = v13 + 8;
          *v32 = v32;
          ExFreePoolWithTag((PVOID)v13, 0);
          goto LABEL_42;
        }
      }
LABEL_57:
      __fastfail(3u);
    }
    Lock = v26[130].Header.Lock;
    if ( Lock )
      v26[130].Header.LockNV = Lock - 1;
  }
LABEL_42:
  KeSetEvent(v26 + 139, 0, 0);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Context + 610, 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(Context + 1208), 0, 0);
}
