/*
 * XREFs of NtCreateWaitCompletionPacket @ 0x1406BA7F0
 * Callers:
 *     <none>
 * Callees:
 *     ObCreateObjectEx @ 0x140601B80 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140601DC0 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtCreateWaitCompletionPacket(__int64 *a1, ACCESS_MASK a2, int a3)
{
  char PreviousMode; // di
  __int64 v6; // rcx
  int Object; // ecx
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
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v6 = (__int64)a1;
    *(_QWORD *)v6 = *(_QWORD *)v6;
  }
  Object = ObCreateObjectEx(
             PreviousMode,
             IopWaitCompletionPacketObjectType,
             a3,
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
    Object = ObInsertObjectEx(v8, 0LL, a2, 0, 0, 0LL, &v11);
    if ( Object >= 0 )
      *a1 = v11;
  }
  return (unsigned int)Object;
}
