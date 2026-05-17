/*
 * XREFs of _LdrSetDllManifestProber@12 @ 0x4B2ECC80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int (__thiscall *__stdcall LdrSetDllManifestProber(
        int (__thiscall *a1)(_DWORD, _DWORD, _DWORD, _DWORD),
        int (__thiscall *a2)(_DWORD, _DWORD, _DWORD, _DWORD),
        int (__thiscall *a3)(_DWORD, _DWORD)))(_DWORD, _DWORD)
{
  int (__thiscall *result)(_DWORD, _DWORD); // eax

  LdrpManifestProberRoutine = a1;
  LdrpCreateActCtxLanguageW = a2;
  result = a3;
  LdrpReleaseActCtxW = a3;
  return result;
}
