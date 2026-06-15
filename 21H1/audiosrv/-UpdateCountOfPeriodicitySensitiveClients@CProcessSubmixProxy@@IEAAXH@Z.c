/*
 * XREFs of ?UpdateCountOfPeriodicitySensitiveClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800E7574
 * Callers:
 *     ?CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180033BF0 (-CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR.c)
 *     ?DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180050A70 (-DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcessSubmixProxy::UpdateCountOfPeriodicitySensitiveClients(CProcessSubmixProxy *this, int a2)
{
  int v2; // r8d

  v2 = *((_DWORD *)this + 24);
  *((_DWORD *)this + 24) = v2 + a2;
  if ( v2 != v2 + a2 && (!v2 || !(v2 + a2)) )
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 25) + 312LL))(
      *((_QWORD *)this + 25),
      (char *)this + 8);
}
