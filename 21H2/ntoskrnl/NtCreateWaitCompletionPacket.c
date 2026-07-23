/*
 * XREFs of NtCreateWaitCompletionPacket @ 0x1405F34F0
 * Callers:
 *     <none>
 * Callees:
 *     ObCreateObjectEx @ 0x14071BBF0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 */

NTSTATUS __cdecl NtCreateWaitCompletionPacket(
        PHANDLE WaitCompletionPacketHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  HANDLE *v3; // rbx
  char PreviousMode; // di
  NTSTATUS Object; // ecx
  PADAPTER_OBJECT v6; // rcx
  __int64 v8; // [rsp+58h] [rbp-30h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+60h] [rbp-28h]

  v3 = WaitCompletionPacketHandle;
  v8 = 0LL;
  DmaAdapter = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    WaitCompletionPacketHandle = (PHANDLE)0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v3 < 0x7FFFFFFF0000LL )
      WaitCompletionPacketHandle = v3;
    *WaitCompletionPacketHandle = *WaitCompletionPacketHandle;
  }
  LOBYTE(WaitCompletionPacketHandle) = PreviousMode;
  Object = ObCreateObjectEx(
             (_DWORD)WaitCompletionPacketHandle,
             (_DWORD)IopWaitCompletionPacketObjectType,
             (_DWORD)ObjectAttributes,
             PreviousMode);
  if ( Object >= 0 )
  {
    v6 = DmaAdapter;
    *(_QWORD *)&DmaAdapter[6].Version = 0LL;
    LOBYTE(v6[6].DmaOperations) = 0;
    BYTE1(v6[6].DmaOperations) = 0;
    v6[5].DmaOperations = 0LL;
    Object = ObInsertObjectEx(v6, 0LL, 0, 0LL, (__int64)&v8);
    if ( Object >= 0 )
      *v3 = (HANDLE)v8;
  }
  return Object;
}
