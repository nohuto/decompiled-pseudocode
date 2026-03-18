/*
 * XREFs of PiDevCfgConfigureDeviceKeyCallback @ 0x140754F40
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x1403CDC90 (_wcsicmp.c)
 *     PiDevCfgCopyDeviceKeys @ 0x140754FBC (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceKey @ 0x1407550CC (PiDevCfgCopyDeviceKey.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceKeyCallback(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        __int64 a6)
{
  if ( *(_DWORD *)(a3 + 16) == 16 && !wcsicmp(*(const wchar_t **)a3, L"Properties") )
    return PiDevCfgCopyDeviceKey(a4, 1, 0LL, a6);
  else
    return PiDevCfgCopyDeviceKeys(a4, a5, a3, a6);
}
