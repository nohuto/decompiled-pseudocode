/*
 * XREFs of IoCreateController @ 0x140893A60
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeDeviceQueue @ 0x140379490 (KeInitializeDeviceQueue.c)
 *     memset @ 0x140414300 (memset.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     ObCreateObjectEx @ 0x14071BBF0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 */

PCONTROLLER_OBJECT __stdcall IoCreateController(ULONG Size)
{
  struct _CONTROLLER_OBJECT *v1; // rbx
  __int64 v2; // rdi
  char *v4; // [rsp+20h] [rbp-60h]
  _QWORD v5[3]; // [rsp+50h] [rbp-30h] BYREF
  int v6; // [rsp+68h] [rbp-18h]
  int v7; // [rsp+6Ch] [rbp-14h]
  __int128 v8; // [rsp+70h] [rbp-10h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+A8h] [rbp+28h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF

  v1 = 0LL;
  v2 = Size;
  v5[0] = 48LL;
  v7 = 0;
  v6 = IopCaseInsensitive != 0 ? 576 : 512;
  DmaAdapter = 0LL;
  Handle = 0LL;
  v5[1] = 0LL;
  v5[2] = 0LL;
  v8 = 0LL;
  if ( (int)ObCreateObjectEx(0, (_DWORD *)IoControllerObjectType, (__int64)v5, 0, v4, Size + 72, 0, 0, &DmaAdapter, 0LL) >= 0
    && (int)ObInsertObjectEx((char *)DmaAdapter, 0LL, 3u, 1, 0, (__int64)&DmaAdapter, (unsigned __int64 *)&Handle) >= 0 )
  {
    ObCloseHandle(Handle, 0);
    v1 = (struct _CONTROLLER_OBJECT *)DmaAdapter;
    memset(DmaAdapter, 0, v2 + 72);
    v1->Type = 2;
    v1->Size = v2 + 72;
    v1->ControllerExtension = &v1[1];
    KeInitializeDeviceQueue(&v1->DeviceWaitQueue);
  }
  return v1;
}
