/*
 * XREFs of ??_EHandleSendReceiveServer@@UEAAPEAXI@Z @ 0x140018540
 * Callers:
 *     <none>
 * Callees:
 *     ??1HandleSendReceiveServer@@UEAA@XZ @ 0x140018578 (--1HandleSendReceiveServer@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x14001C8EC (--3@YAXPEAX@Z.c)
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
