/*
 * XREFs of ?reset@?$unique_ptr@VSpeechRuntimeListener@@U?$default_delete@VSpeechRuntimeListener@@@std@@@std@@QEAAXPEAVSpeechRuntimeListener@@@Z @ 0x18008BFDC
 * Callers:
 *     ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z @ 0x18008B748 (--0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SpeechRuntimeListener@@QEAA@XZ @ 0x18008E670 (--1SpeechRuntimeListener@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<SpeechRuntimeListener>::reset(SpeechRuntimeListener **a1, SpeechRuntimeListener *a2)
{
  SpeechRuntimeListener *v2; // rbx

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
  {
    SpeechRuntimeListener::~SpeechRuntimeListener(v2);
    operator delete(v2, (const struct std::nothrow_t *)0x58);
  }
}
