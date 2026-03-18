/*
 * XREFs of ?CaptureUsermodeParameters@UnloadFontFileRequest@@UAEXPAX@Z @ 0x24B05F
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

void __thiscall UnloadFontFileRequest::CaptureUsermodeParameters(UnloadFontFileRequest *this, _DWORD *a2)
{
  *((_DWORD *)this + 7) = a2[1];
}
