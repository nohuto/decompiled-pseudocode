/*
 * XREFs of ?HampSystemQueryProcessAppSessionGuid@@YAXPEAXPEAU_GUID@@@Z @ 0x180035E6C
 * Callers:
 *     ?HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z @ 0x18000DB8C (-HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z.c)
 *     ?RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x1800739C4 (-RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

void __fastcall HampSystemQueryProcessAppSessionGuid(void *a1, struct _GUID *a2)
{
  _BYTE ProcessInformation[4]; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v4; // [rsp+34h] [rbp-74h]
  __int64 v5; // [rsp+40h] [rbp-68h]
  unsigned __int16 v6; // [rsp+68h] [rbp-40h]
  unsigned __int16 v7; // [rsp+6Ch] [rbp-3Ch]

  NtQueryInformationProcess(a1, (PROCESSINFOCLASS)64, ProcessInformation, 0x60u, 0LL);
  a2->Data1 = v4;
  a2->Data2 = v6;
  a2->Data3 = v7;
  *(_QWORD *)a2->Data4 = v5;
}
