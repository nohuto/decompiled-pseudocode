/*
 * XREFs of ?GetLastPresentCount@CLegacyRenderTarget@@UEBAJPEAI@Z @ 0x1800C1E60
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyRenderTarget::GetLastPresentCount(CLegacyRenderTarget *this, unsigned int *a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx

  v2 = *((_QWORD *)this + 3);
  v3 = 0;
  if ( v2 )
  {
    *a2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  else
  {
    v3 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, &dword_1802AB078, 2u, -2003304307, 0x336u, 0LL);
  }
  return v3;
}
