/*
 * XREFs of ?AddTokenToQueueAndSignalTokenEvent@CTokenManager@@MEAAJPEAVCToken@@@Z @ 0x1C00629E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z @ 0x1C001B880 (-AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z.c)
 */

__int64 __fastcall CTokenManager::AddTokenToQueueAndSignalTokenEvent(
        HANDLE *this,
        struct CompositionSurfaceObject **a2)
{
  int v3; // ebx
  LONG PreviousState; // [rsp+40h] [rbp+18h] BYREF

  v3 = CTokenManager::AddTokenToQueue((CTokenManager *)this, a2);
  if ( v3 >= 0 )
  {
    PreviousState = 0;
    ZwSetEvent(this[7], &PreviousState);
  }
  return (unsigned int)v3;
}
