/*
 * XREFs of ?bGammaRampCapable@PDEVOBJ@@QEAAHXZ @ 0x1C0149FCC
 * Callers:
 *     ?GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z @ 0x1C0149D94 (-GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z.c)
 *     NtGdiGetGammaRampCapability @ 0x1C014A330 (NtGdiGetGammaRampCapability.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PDEVOBJ::bGammaRampCapable(PDEVOBJ *this)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)this;
  if ( !*(_QWORD *)this )
    return 0LL;
  result = *(_DWORD *)(v1 + 40) & 0x401;
  if ( (_DWORD)result != 1
    || (unsigned int)(*(_DWORD *)(v1 + 2108) - 5) > 1
    || !*(_QWORD *)(v1 + 3224)
    || (*(_DWORD *)(v1 + 2128) & 0x10) == 0 )
  {
    return 0LL;
  }
  return result;
}
