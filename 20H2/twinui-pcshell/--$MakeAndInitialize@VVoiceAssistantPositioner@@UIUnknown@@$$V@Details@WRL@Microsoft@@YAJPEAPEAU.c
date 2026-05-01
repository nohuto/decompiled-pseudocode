/*
 * XREFs of ??$MakeAndInitialize@VVoiceAssistantPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1803DD7CC
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VVoiceAssistantPositioner@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1803E01A0 (-CreateInstance@-$SimpleClassFactory@VVoiceAssistantPositioner@@$0A@@WRL@Microsoft@@UEAAJPEAUIUn.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0VoiceAssistantPositioner@@QEAA@XZ @ 0x1803DE874 (--0VoiceAssistantPositioner@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@VoiceAssistantPositioner@@QEAAJXZ @ 0x1803E2180 (-RuntimeClassInitialize@VoiceAssistantPositioner@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VoiceAssistantPositioner,IUnknown,>(_QWORD *a1)
{
  VoiceAssistantPositioner *v2; // rax
  int v3; // edi
  VoiceAssistantPositioner *v4; // rbx

  *a1 = 0LL;
  v2 = (VoiceAssistantPositioner *)operator new(0x1B0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = VoiceAssistantPositioner::VoiceAssistantPositioner(v2);
    v3 = VoiceAssistantPositioner::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
      v3 = (**(__int64 (__fastcall ***)(VoiceAssistantPositioner *, GUID *, _QWORD *))v4)(
             v4,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v4 )
      (*(void (__fastcall **)(VoiceAssistantPositioner *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
