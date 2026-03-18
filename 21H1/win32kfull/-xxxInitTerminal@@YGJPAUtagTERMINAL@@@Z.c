/*
 * XREFs of ?xxxInitTerminal@@YGJPAUtagTERMINAL@@@Z @ 0xE8316
 * Callers:
 *     _xxxCreateWindowStation@40 @ 0x8199E (_xxxCreateWindowStation@40.c)
 * Callees:
 *     _xxxInitInput@4 @ 0xE856E (_xxxInitInput@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

NTSTATUS __thiscall xxxInitTerminal(int *this)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // esi
  NTSTATUS v4; // eax
  void *v5; // edi
  int v6; // eax
  int CurrentProcess; // eax
  int v8; // eax
  void *v9; // [esp-4h] [ebp-22Ch]
  HANDLE v10; // [esp-4h] [ebp-22Ch]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+10h] [ebp-218h] BYREF
  HANDLE Handle; // [esp+28h] [ebp-200h] BYREF
  void *EventHandle; // [esp+2Ch] [ebp-1FCh] BYREF
  PVOID Object; // [esp+30h] [ebp-1F8h] BYREF
  char v15; // [esp+37h] [ebp-1F1h]
  _DWORD v16[123]; // [esp+38h] [ebp-1F0h] BYREF

  EventHandle = 0;
  Handle = 0;
  memset(v16, 0, 0x1E8u);
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( this[7] )
  {
    v5 = (void *)this[5];
    ObfReferenceObject(v5);
    if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
    UserSessionSwitchLeaveCrit();
    KeWaitForSingleObject(v5, WrUserRequest, 0, 0, 0);
    EnterCrit(0, 1);
    goto LABEL_16;
  }
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.ObjectName = 0;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  ObjectAttributes.Length = 24;
  ObjectAttributes.Attributes = 512;
  result = ZwCreateEvent(&EventHandle, (ACCESS_MASK)&loc_1F0002 + 1, &ObjectAttributes, NotificationEvent, 0);
  if ( result < 0 )
    return result;
  Object = 0;
  v3 = ObReferenceObjectByHandle(
         EventHandle,
         (ACCESS_MASK)&loc_1F0002 + 1,
         (POBJECT_TYPE)ExEventObjectType,
         0,
         &Object,
         0);
  v9 = EventHandle;
  this[7] = (int)Object;
  ZwClose(v9);
  if ( v3 < 0 )
    return v3;
  if ( (*(_BYTE *)this & 2) == 0 && !xxxInitInput(this) )
  {
    v3 = -1073741801;
LABEL_26:
    ObfDereferenceObject((PVOID)this[7]);
    this[7] = 0;
    return v3;
  }
  v3 = ZwCreateEvent(&Handle, (ACCESS_MASK)&loc_1F0002 + 1, &ObjectAttributes, NotificationEvent, 0);
  if ( v3 < 0 )
    goto LABEL_26;
  Object = 0;
  v4 = ObReferenceObjectByHandle(Handle, (ACCESS_MASK)&loc_1F0002 + 1, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0);
  v10 = Handle;
  v3 = v4;
  this[5] = (int)Object;
  ZwClose(v10);
  if ( v3 < 0 )
    goto LABEL_26;
  v5 = (void *)this[5];
  if ( !InitCreateSystemThreadsMsg(v16, 1, this) )
    goto LABEL_28;
  v15 = 0;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  UserSessionSwitchLeaveCrit();
  if ( PsGetCurrentProcess() == _gpepCSRSS )
  {
    v6 = LpcRequestPort(_CsrApiPort, v16);
  }
  else
  {
    Object = (PVOID)488;
    v6 = LpcSendWaitReceivePort(_CsrApiPort, &loc_20000, v16, v16, &Object, 0);
  }
  if ( v6 >= 0 )
  {
    CurrentProcess = PsGetCurrentProcess();
    if ( v16[8] >= 0 || CurrentProcess == _gpepCSRSS )
    {
      KeWaitForSingleObject(v5, WrUserRequest, 0, 0, 0);
      v15 = 1;
    }
  }
  EnterCrit(0, 1);
  if ( !v15 )
  {
LABEL_28:
    ObfDereferenceObject((PVOID)this[7]);
    ObfDereferenceObject(v5);
    this[7] = 0;
    this[5] = 0;
    return -1073741801;
  }
LABEL_16:
  ObfDereferenceObject(v5);
  v8 = *this;
  this[5] = 0;
  if ( (v8 & 8) != 0 )
  {
    *this = v8 & 0xFFFFFFF7;
    return -1073741801;
  }
  *this = v8 | 1;
  return 0;
}
