/*
 * XREFs of ??1?$unique_ptr@VSpeechRuntimeListener@@U?$default_delete@VSpeechRuntimeListener@@@std@@@std@@QEAA@XZ @ 0x18008B518
 * Callers:
 *     _SpectrumListener::SpectrumListener_::_1_::dtor$2 @ 0x18008B4BB (_SpectrumListener--SpectrumListener_--_1_--dtor$2.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SpeechRuntimeListener@@QEAA@XZ @ 0x18008E110 (--1SpeechRuntimeListener@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<SpeechRuntimeListener>::~unique_ptr<SpeechRuntimeListener>(SpeechRuntimeListener **a1)
{
  SpeechRuntimeListener *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    SpeechRuntimeListener::~SpeechRuntimeListener(*a1);
    operator delete(v1, (const struct std::nothrow_t *)0x58);
  }
}
