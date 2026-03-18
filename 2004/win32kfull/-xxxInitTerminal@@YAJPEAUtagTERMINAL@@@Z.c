/*
 * XREFs of ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x1C00C1070
 * Callers:
 *     xxxCreateWindowStation @ 0x1C00C1C7C (xxxCreateWindowStation.c)
 * Callees:
 *     xxxInitInput @ 0x1C00C136C (xxxInitInput.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

NTSTATUS __fastcall xxxInitTerminal(struct tagTERMINAL *a1)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // edi
  NTSTATUS v4; // eax
  void *v5; // rcx
  void *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // r8
  char v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 CurrentProcess; // rax
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  PVOID Object; // [rsp+38h] [rbp-D0h] BYREF
  void *EventHandle; // [rsp+40h] [rbp-C8h] BYREF
  void *ObjectAttributes; // [rsp+48h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes_8; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD v25[240]; // [rsp+88h] [rbp-80h] BYREF

  EventHandle = 0LL;
  ObjectAttributes = 0LL;
  memset(v25, 0, 0x3B8uLL);
  memset(&ObjectAttributes_8, 0, sizeof(ObjectAttributes_8));
  if ( *((_QWORD *)a1 + 7) )
  {
    v6 = (void *)*((_QWORD *)a1 + 5);
    ObfReferenceObject(v6);
    if ( gdwInAtomicOperation )
    {
      v19 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v19, gdwInAtomicOperation, v20);
    KeWaitForSingleObject(v6, WrUserRequest, 0, 0, 0LL);
    EnterCrit(0LL, 1LL);
    goto LABEL_16;
  }
  ObjectAttributes_8.Length = 48;
  ObjectAttributes_8.RootDirectory = 0LL;
  ObjectAttributes_8.Attributes = 512;
  ObjectAttributes_8.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
  result = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes_8, NotificationEvent, 0);
  if ( result < 0 )
    return result;
  Object = 0LL;
  v3 = ObReferenceObjectByHandle(EventHandle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
  *((_QWORD *)a1 + 7) = Object;
  ZwClose(EventHandle);
  if ( v3 < 0 )
    return v3;
  if ( (*(_DWORD *)a1 & 2) == 0 && !(unsigned int)xxxInitInput(a1) )
  {
    v3 = -1073741801;
LABEL_24:
    ObfDereferenceObject(*((PVOID *)a1 + 7));
    *((_QWORD *)a1 + 7) = 0LL;
    return v3;
  }
  v3 = ZwCreateEvent(&ObjectAttributes, 0x1F0003u, &ObjectAttributes_8, NotificationEvent, 0);
  if ( v3 < 0 )
    goto LABEL_24;
  Object = 0LL;
  v4 = ObReferenceObjectByHandle(ObjectAttributes, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
  v5 = ObjectAttributes;
  v3 = v4;
  *((_QWORD *)a1 + 5) = Object;
  ZwClose(v5);
  if ( v3 < 0 )
    goto LABEL_24;
  v6 = (void *)*((_QWORD *)a1 + 5);
  if ( !(unsigned int)InitCreateSystemThreadsMsg(v25, 1LL, a1) )
    goto LABEL_26;
  v9 = 0;
  if ( gdwInAtomicOperation )
  {
    v7 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v7, gdwInAtomicOperation, v8);
  if ( PsGetCurrentProcess(v11, v10, v12) == gpepCSRSS )
  {
    v13 = LpcRequestPort(CsrApiPort, v25);
  }
  else
  {
    Object = (PVOID)952;
    v13 = ((__int64 (__fastcall *)(_QWORD, __int64, _DWORD *, _DWORD *, PVOID *, _QWORD))LpcSendWaitReceivePort)(
            CsrApiPort,
            0x20000LL,
            v25,
            v25,
            &Object,
            0LL);
  }
  if ( v13 >= 0 )
  {
    CurrentProcess = PsGetCurrentProcess(v15, v14, v16);
    if ( v25[13] >= 0 || CurrentProcess == gpepCSRSS )
    {
      KeWaitForSingleObject(v6, WrUserRequest, 0, 0, 0LL);
      v9 = 1;
    }
  }
  EnterCrit(0LL, 1LL);
  if ( !v9 )
  {
LABEL_26:
    ObfDereferenceObject(*((PVOID *)a1 + 7));
    ObfDereferenceObject(v6);
    *((_QWORD *)a1 + 7) = 0LL;
    *((_QWORD *)a1 + 5) = 0LL;
    return -1073741801;
  }
LABEL_16:
  ObfDereferenceObject(v6);
  v18 = *(_DWORD *)a1;
  *((_QWORD *)a1 + 5) = 0LL;
  if ( (v18 & 8) != 0 )
  {
    *(_DWORD *)a1 = v18 & 0xFFFFFFF7;
    return -1073741801;
  }
  *(_DWORD *)a1 = v18 | 1;
  return 0;
}
