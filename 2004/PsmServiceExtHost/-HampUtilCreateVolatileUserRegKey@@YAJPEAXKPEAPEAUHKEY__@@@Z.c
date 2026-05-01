/*
 * XREFs of ?HampUtilCreateVolatileUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z @ 0x180028EE4
 * Callers:
 *     ?HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z @ 0x180028DC4 (-HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HampUtilSaveRegistryTerminateReason@@YAJPEBGPEAXW4_HAM_TERMINATE_REASON@@@Z @ 0x180037720 (-HampUtilSaveRegistryTerminateReason@@YAJPEBGPEAXW4_HAM_TERMINATE_REASON@@@Z.c)
 * Callees:
 *     ?HampUtilCreateUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z @ 0x180028F94 (-HampUtilCreateUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z.c)
 *     ?HampSystemCreateKey@@YAJPEAUHKEY__@@PEBGKKPEAPEAU1@@Z @ 0x1800294C4 (-HampSystemCreateKey@@YAJPEAUHKEY__@@PEBGKKPEAPEAU1@@Z.c)
 */

__int64 __fastcall HampUtilCreateVolatileUserRegKey(void *a1, unsigned int a2, HKEY *a3)
{
  int v5; // ebx
  HKEY v6; // rcx
  HKEY hKey; // [rsp+30h] [rbp-18h] BYREF
  HKEY v9; // [rsp+68h] [rbp+20h] BYREF

  hKey = 0LL;
  v9 = 0LL;
  v5 = HampUtilCreateUserRegKey(a1, a2, &hKey);
  if ( v5 < 0 || (v5 = HampSystemCreateKey(hKey, L"Volatile", 1u, a2, &v9), v5 < 0) )
  {
    v6 = v9;
  }
  else
  {
    v6 = 0LL;
    *a3 = v9;
    v5 = 0;
    v9 = 0LL;
  }
  if ( v6 )
    RegCloseKey(v6);
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v5;
}
