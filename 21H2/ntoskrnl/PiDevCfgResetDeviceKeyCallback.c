/*
 * XREFs of PiDevCfgResetDeviceKeyCallback @ 0x14094DD00
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     PiDevCfgCopyDeviceKeys @ 0x140679ADC (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceKey @ 0x140679BEC (PiDevCfgCopyDeviceKey.c)
 */

__int64 __fastcall PiDevCfgResetDeviceKeyCallback(__int64 a1, __int64 a2, __int64 a3, void *a4, void *a5)
{
  if ( *(_DWORD *)(a3 + 16) != 16 || wcsicmp(*(const wchar_t **)a3, L"Properties") )
    return PiDevCfgCopyDeviceKeys(a4, a5, a3, 0LL);
  else
    return PiDevCfgCopyDeviceKey(a4, a5, *(_QWORD *)(a2 + 8), 1, 1u, 0LL, 0LL);
}
