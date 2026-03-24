/*
 * XREFs of NtCreateWaitCompletionPacket @ 0x140693F90
 * Callers:
 *     <none>
 * Callees:
 *     Feature_2208782651__private_IsEnabledDeviceUsage @ 0x1403F1350 (Feature_2208782651__private_IsEnabledDeviceUsage.c)
 *     ObCreateObjectEx @ 0x140704810 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140704A20 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtCreateWaitCompletionPacket(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // rdi
  char PreviousMode; // si
  int Object; // ecx
  PADAPTER_OBJECT v6; // rbx
  __int64 v8; // [rsp+58h] [rbp-20h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+60h] [rbp-18h]

  v3 = (_QWORD *)a1;
  v8 = 0LL;
  DmaAdapter = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    a1 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v3 < 0x7FFFFFFF0000LL )
      a1 = (__int64)v3;
    *(_QWORD *)a1 = *(_QWORD *)a1;
  }
  LOBYTE(a1) = PreviousMode;
  Object = ObCreateObjectEx(a1, (_DWORD)IopWaitCompletionPacketObjectType, a3, PreviousMode);
  if ( Object >= 0 )
  {
    v6 = DmaAdapter;
    *(_QWORD *)&DmaAdapter[6].Version = 0LL;
    LOBYTE(v6[6].DmaOperations) = 0;
    if ( (unsigned int)Feature_2208782651__private_IsEnabledDeviceUsage() )
      BYTE1(v6[6].DmaOperations) = 0;
    v6[5].DmaOperations = 0LL;
    Object = ObInsertObjectEx(v6, 0LL, 0, 0LL, (__int64)&v8);
    if ( Object >= 0 )
      *v3 = v8;
  }
  return (unsigned int)Object;
}
