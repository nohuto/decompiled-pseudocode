/*
 * XREFs of ??1HandleSendReceiveServer@@UEAA@XZ @ 0x140018588
 * Callers:
 *     ??_EHandleSendReceiveServer@@UEAAPEAXI@Z @ 0x140018550 (--_EHandleSendReceiveServer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?SendStopListeningMessage@HandleSendReceiveServer@@AEAAJXZ @ 0x1400515DC (-SendStopListeningMessage@HandleSendReceiveServer@@AEAAJXZ.c)
 */

void __fastcall HandleSendReceiveServer::~HandleSendReceiveServer(HandleSendReceiveServer *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  *(_QWORD *)this = &HandleSendReceiveServer::`vftable';
  v2 = (void *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    if ( !*((_BYTE *)this + 60) )
    {
      HandleSendReceiveServer::SendStopListeningMessage(this);
      v2 = (void *)*((_QWORD *)this + 6);
    }
    WaitForSingleObject(v2, 0xFFFFFFFF);
    CloseHandle(*((HANDLE *)this + 6));
  }
  v3 = (void *)*((_QWORD *)this + 3);
  if ( v3 )
  {
    CloseHandle(v3);
    *((_QWORD *)this + 3) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    CloseHandle(v4);
    *((_QWORD *)this + 1) = 0LL;
  }
}
