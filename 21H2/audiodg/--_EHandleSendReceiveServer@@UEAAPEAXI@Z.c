/*
 * XREFs of ??_EHandleSendReceiveServer@@UEAAPEAXI@Z @ 0x140018520
 * Callers:
 *     <none>
 * Callees:
 *     ??1HandleSendReceiveServer@@UEAA@XZ @ 0x140018558 (--1HandleSendReceiveServer@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x14001CC5C (--3@YAXPEAX@Z.c)
 */

HandleSendReceiveServer *__fastcall HandleSendReceiveServer::`vector deleting destructor'(
        HandleSendReceiveServer *this,
        char a2)
{
  HandleSendReceiveServer::~HandleSendReceiveServer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
