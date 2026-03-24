/*
 * XREFs of ?DiscardFrame@CKernelTransport@@UEAAJ_K@Z @ 0x1800C9FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CKernelTransport::DiscardFrame(CKernelTransport *this, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // rcx
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  v2 = 0;
  v3 = NtDCompositionDiscardFrame(*((_QWORD *)this + 1), &v6);
  if ( v3 < 0 )
  {
    v2 = v3 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3 | 0x10000000, 0xA9u, 0LL);
  }
  return v2;
}
