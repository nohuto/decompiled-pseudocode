/*
 * XREFs of ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x1C000C210
 * Callers:
 *     xxxCreateWindowStation @ 0x1C000CF8C (xxxCreateWindowStation.c)
 * Callees:
 *     xxxInitInput @ 0x1C000C50C (xxxInitInput.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

NTSTATUS __fastcall xxxInitTerminal(struct tagTERMINAL *a1)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // edi
  NTSTATUS v4; // eax
  void *v5; // rcx
  void *v6; // rsi
  char v7; // r14
  int v8; // eax
  __int64 CurrentProcess; // rax
  int v10; // eax
  PVOID Object; // [rsp+38h] [rbp-D0h] BYREF
  void *EventHandle; // [rsp+40h] [rbp-C8h] BYREF
  void *ObjectAttributes; // [rsp+48h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes_8; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD v15[240]; // [rsp+88h] [rbp-80h] BYREF

  EventHandle = 0LL;
  ObjectAttributes = 0LL;
  memset(v15, 0, 0x3B8uLL);
  memset(&ObjectAttributes_8, 0, sizeof(ObjectAttributes_8));
  if ( *((_QWORD *)a1 + 7) )
  {
    v6 = (void *)*((_QWORD *)a1 + 5);
    ObfReferenceObject(v6);
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    UserSessionSwitchLeaveCrit();
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
  if ( !(unsigned int)InitCreateSystemThreadsMsg(v15, 1LL, a1) )
    goto LABEL_26;
  v7 = 0;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit();
  if ( PsGetCurrentProcess() == gpepCSRSS )
  {
    v8 = LpcRequestPort(CsrApiPort, v15);
  }
  else
  {
    Object = (PVOID)952;
    v8 = ((__int64 (__fastcall *)(_QWORD, __int64, _DWORD *, _DWORD *, PVOID *, _QWORD))LpcSendWaitReceivePort)(
           CsrApiPort,
           0x20000LL,
           v15,
           v15,
           &Object,
           0LL);
  }
  if ( v8 >= 0 )
  {
    CurrentProcess = PsGetCurrentProcess();
    if ( v15[13] >= 0 || CurrentProcess == gpepCSRSS )
    {
      KeWaitForSingleObject(v6, WrUserRequest, 0, 0, 0LL);
      v7 = 1;
    }
  }
  EnterCrit(0LL, 1LL);
  if ( !v7 )
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
  v10 = *(_DWORD *)a1;
  *((_QWORD *)a1 + 5) = 0LL;
  if ( (v10 & 8) != 0 )
  {
    *(_DWORD *)a1 = v10 & 0xFFFFFFF7;
    return -1073741801;
  }
  *(_DWORD *)a1 = v10 | 1;
  return 0;
}
