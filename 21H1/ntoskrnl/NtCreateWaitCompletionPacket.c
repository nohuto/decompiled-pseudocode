/*
 * XREFs of NtCreateWaitCompletionPacket @ 0x1406C4090
 * Callers:
 *     <none>
 * Callees:
 *     ObCreateObjectEx @ 0x140601F10 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140602150 (ObInsertObjectEx.c)
 */

NTSTATUS __cdecl NtCreateWaitCompletionPacket(
        PHANDLE WaitCompletionPacketHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // di
  __int64 v6; // rcx
  NTSTATUS Object; // ecx
  PADAPTER_OBJECT v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-68h]
  __int64 v11; // [rsp+58h] [rbp-30h] BYREF
  PADAPTER_OBJECT DmaAdapter[4]; // [rsp+60h] [rbp-28h] BYREF

  v11 = 0LL;
  DmaAdapter[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)WaitCompletionPacketHandle < 0x7FFFFFFF0000LL )
      v6 = (__int64)WaitCompletionPacketHandle;
    *(_QWORD *)v6 = *(_QWORD *)v6;
  }
  Object = ObCreateObjectEx(
             PreviousMode,
             IopWaitCompletionPacketObjectType,
             (__int64)ObjectAttributes,
             PreviousMode,
             v10,
             112,
             0,
             0,
             DmaAdapter,
             0LL);
  if ( Object >= 0 )
  {
    v8 = DmaAdapter[0];
    *(_QWORD *)&DmaAdapter[0][6].Version = 0LL;
    LOBYTE(v8[6].DmaOperations) = 0;
    v8[5].DmaOperations = 0LL;
    Object = ObInsertObjectEx(v8, 0LL, DesiredAccess, 0, 0, 0LL, &v11);
    if ( Object >= 0 )
      *WaitCompletionPacketHandle = (HANDLE)v11;
  }
  return Object;
}
