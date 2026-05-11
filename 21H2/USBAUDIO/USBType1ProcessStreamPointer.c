/*
 * XREFs of USBType1ProcessStreamPointer @ 0x1C0006538
 * Callers:
 *     USBType1ProcessPin @ 0x1C00066C0 (USBType1ProcessPin.c)
 * Callees:
 *     USBHwGetCurrentFrame @ 0x1C0003ED8 (USBHwGetCurrentFrame.c)
 *     USBType1BuildIsochUrbRequest @ 0x1C0005C04 (USBType1BuildIsochUrbRequest.c)
 *     USBType1Build1MsecIsocRequest @ 0x1C0006360 (USBType1Build1MsecIsocRequest.c)
 *     USBType1LockDelay @ 0x1C00334D0 (USBType1LockDelay.c)
 */

__int64 __fastcall USBType1ProcessStreamPointer(PKSSTREAM_POINTER StreamPointer)
{
  PKSPIN Pin; // rbp
  struct _KSSTREAM_POINTER *v2; // rdi
  int CurrentFrame; // ebx
  _QWORD *Context; // r14
  __int64 v5; // rsi
  KSPIN_LOCK *v6; // r15
  KIRQL v7; // r12
  _QWORD *v8; // rcx
  __int64 v9; // r14
  int v10; // r8d
  int v11; // edx
  struct _IO_WORKITEM *v12; // rcx
  int v13; // eax
  struct _KSSTREAM_POINTER *v15; // [rsp+60h] [rbp+8h] BYREF
  int v16; // [rsp+68h] [rbp+10h] BYREF

  v15 = StreamPointer;
  Pin = StreamPointer->Pin;
  v2 = StreamPointer;
  CurrentFrame = 0;
  Context = Pin->Context;
  v5 = Context[19];
  if ( *(_BYTE *)(v5 + 99) )
  {
    CurrentFrame = USBType1LockDelay(StreamPointer->Pin);
    if ( CurrentFrame < 0 )
    {
      KsStreamPointerUnlock(v2, 0);
      return (unsigned int)CurrentFrame;
    }
  }
  if ( !*(_BYTE *)(v5 + 96) )
    goto LABEL_10;
  v6 = Context + 14;
  v7 = KeAcquireSpinLockRaiseToDpc(Context + 14);
  if ( !*(_BYTE *)(v5 + 916) )
  {
    v8 = Pin->Context;
    v16 = 0;
    v9 = v8[19];
    CurrentFrame = USBHwGetCurrentFrame(v8[2], &v16);
    if ( CurrentFrame >= 0 )
    {
      v10 = v16;
      v11 = *(_DWORD *)(v9 + 900);
      v12 = *(struct _IO_WORKITEM **)(v9 + 968);
      *(_BYTE *)(v9 + 916) = 1;
      *(_DWORD *)(v9 + 904) = v10 + 2;
      *(_DWORD *)(v9 + 896) = v11 + v10 + 2;
      *(_DWORD *)(v9 + 908) = v11 + 18;
      IoQueueWorkItem(v12, (PIO_WORKITEM_ROUTINE)USBType1AsyncEndpointPoll, CriticalWorkQueue, Pin);
    }
  }
  KeReleaseSpinLock(v6, v7);
  if ( CurrentFrame < 0 )
  {
    KsStreamPointerUnlock(v2, 0);
LABEL_10:
    if ( CurrentFrame < 0 )
      return (unsigned int)CurrentFrame;
  }
  if ( *(_DWORD *)(v5 + 124) )
  {
    v13 = USBType1Build1MsecIsocRequest(Pin, &v15);
    v2 = v15;
    CurrentFrame = v13;
  }
  if ( CurrentFrame >= 0 )
  {
    if ( v2 && !*(_DWORD *)(v5 + 124) )
      CurrentFrame = USBType1BuildIsochUrbRequest(
                       v2,
                       (__int64 (__fastcall *)(__int64, __int64, __int64 *))USBType1CompleteCallback);
    if ( CurrentFrame >= 0 )
      return 0;
  }
  return (unsigned int)CurrentFrame;
}
