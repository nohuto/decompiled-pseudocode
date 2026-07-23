/*
 * XREFs of AlpcpCompleteDeferSignalRequestAndWait @ 0x1405F8A60
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x1406D8320 (AlpcpReceiveMessagePort.c)
 * Callees:
 *     AlpcpWaitForSingleObject @ 0x140234DD8 (AlpcpWaitForSingleObject.c)
 *     AlpcpSignalAndWait @ 0x1402A9AC0 (AlpcpSignalAndWait.c)
 */

__int64 __fastcall AlpcpCompleteDeferSignalRequestAndWait(
        __int64 a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        LARGE_INTEGER *a5)
{
  if ( _bittestandreset((signed __int32 *)(a1 + 48), 2u) )
    return AlpcpSignalAndWait(a1, a2, WrLpcReceive, a4, a5, 0);
  else
    return AlpcpWaitForSingleObject(a2, WrLpcReceive, a4, (*(_DWORD *)(a1 + 48) & 0x200000) != 0, a5);
}
