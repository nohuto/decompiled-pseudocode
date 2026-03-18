/*
 * XREFs of ?RetireFrame@CKernelTransport@@UEAAJ_KPEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1800C5870
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CKernelTransport::RetireFrame(
        CKernelTransport *this,
        __int64 a2,
        const struct DXGI_FRAME_STATISTICS *a3)
{
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v3 = 0;
  v4 = NtDCompositionRetireFrame(*((_QWORD *)this + 1), &v7, a3);
  if ( v4 < 0 )
  {
    v3 = v4 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4 | 0x10000000, 0xA0u, 0LL);
  }
  return v3;
}
