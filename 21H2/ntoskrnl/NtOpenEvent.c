/*
 * XREFs of NtOpenEvent @ 0x1405F8370
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x14064AA70 (ObOpenObjectByName.c)
 */

NTSTATUS __cdecl NtOpenEvent(PHANDLE EventHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  int v3; // esi
  char PreviousMode; // di
  __int64 v7; // rdx
  NTSTATUS v8; // ecx
  int v9; // r8d
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = (int)ObjectAttributes;
  v11[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)EventHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)EventHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  LOBYTE(ObjectAttributes) = PreviousMode;
  v8 = ObOpenObjectByName(v3, (_DWORD)ExEventObjectType, (_DWORD)ObjectAttributes, 0, DesiredAccess, 0LL, (__int64)v11);
  if ( v8 == -1073741788 && ExCrossVmEventObjectType )
  {
    LOBYTE(v9) = PreviousMode;
    v8 = ObOpenObjectByName(v3, (_DWORD)ExCrossVmEventObjectType, v9, 0, DesiredAccess, 0LL, (__int64)v11);
  }
  if ( v8 >= 0 )
    *EventHandle = (HANDLE)v11[0];
  return v8;
}
