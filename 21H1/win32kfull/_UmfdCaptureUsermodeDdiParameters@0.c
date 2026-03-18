/*
 * XREFs of _UmfdCaptureUsermodeDdiParameters@0 @ 0x8BCCC
 * Callers:
 *     ?UmfdEscSendCompleteWaitReceive@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x8BA08 (-UmfdEscSendCompleteWaitReceive@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?EnsureTls@UmfdTls@@SGPAV1@XZ @ 0x8BCF4 (-EnsureTls@UmfdTls@@SGPAV1@XZ.c)
 */

int __stdcall UmfdCaptureUsermodeDdiParameters()
{
  struct UmfdTls *v0; // eax
  int v1; // ecx
  int v2; // edx

  v0 = UmfdTls::EnsureTls();
  if ( !v0 )
    return -1073741801;
  v1 = *((_DWORD *)v0 + 3);
  if ( v1 )
  {
    v2 = **(_DWORD **)v0;
    if ( v2 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v1 + 16))(v1, v2);
  }
  return 0;
}
