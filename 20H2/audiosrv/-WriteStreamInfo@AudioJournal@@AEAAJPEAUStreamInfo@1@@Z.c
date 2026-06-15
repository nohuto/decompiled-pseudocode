/*
 * XREFs of ?WriteStreamInfo@AudioJournal@@AEAAJPEAUStreamInfo@1@@Z @ 0x1800F6684
 * Callers:
 *     ?Initialize@AudioJournal@@AEAAJXZ @ 0x180053124 (-Initialize@AudioJournal@@AEAAJXZ.c)
 *     ?OnCreateStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@@Z @ 0x1800F60E8 (-OnCreateStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@@Z.c)
 *     ?OnStartStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@@Z @ 0x1800F6228 (-OnStartStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@@Z.c)
 *     ?OnStopStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@N@Z @ 0x1800F6368 (-OnStopStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@N@Z.c)
 *     ?ResetData@AudioJournal@@AEAAX_N@Z @ 0x1800F654C (-ResetData@AudioJournal@@AEAAX_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WriteValue@AudioJournal@@AEAAJPEBGKPEAEK@Z @ 0x1800F6730 (-WriteValue@AudioJournal@@AEAAJPEBGKPEAEK@Z.c)
 */

__int64 __fastcall AudioJournal::WriteStreamInfo(AudioJournal *this, struct AudioJournal::StreamInfo *a2)
{
  const unsigned __int16 *v2; // rax
  unsigned int v3; // r8d
  int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 == (AudioJournal *)((char *)this + 232) )
  {
    v2 = L"Render";
    v3 = 600;
  }
  else if ( a2 == (AudioJournal *)((char *)this + 832) )
  {
    v2 = L"Capture";
    v3 = 400;
  }
  else
  {
    if ( a2 != (AudioJournal *)((char *)this + 1232) )
    {
      v4 = -2147024809;
      v5 = 493LL;
      goto LABEL_11;
    }
    v2 = L"UnknownStream";
    v3 = 200;
  }
  v4 = AudioJournal::WriteValue(this, v2, 3u, (unsigned __int8 *)a2, v3);
  if ( v4 >= 0 )
    return 0LL;
  v5 = 496LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
    (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
