/*
 * XREFs of IopGetEnvironmentVariableHal @ 0x14089A740
 * Callers:
 *     <none>
 * Callees:
 *     HalGetEnvironmentVariableEx @ 0x1403BADC0 (HalGetEnvironmentVariableEx.c)
 */

__int64 __fastcall IopGetEnvironmentVariableHal(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        int a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7)
{
  return HalGetEnvironmentVariableEx(a3, a4, a5, a6, a7);
}
