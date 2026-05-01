/*
 * XREFs of CempGetSystemTime @ 0x180025DCC
 * Callers:
 *     ?HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180025CE8 (-HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CempGetSystemTime(DWORD *a1)
{
  __int64 result; // rax
  struct _FILETIME SystemTimeAsFileTime; // [rsp+30h] [rbp+8h] BYREF

  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  a1[1] = SystemTimeAsFileTime.dwHighDateTime;
  result = SystemTimeAsFileTime.dwLowDateTime;
  *a1 = SystemTimeAsFileTime.dwLowDateTime;
  return result;
}
