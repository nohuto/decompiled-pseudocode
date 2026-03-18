/*
 * XREFs of _NtUserTranslateMessage@8 @ 0xA5EA8
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxTranslateMessage@8 @ 0xA5F1E (_xxxTranslateMessage@8.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserTranslateMessage(ULONG a1, int a2)
{
  int v2; // ebx
  const void *v3; // esi
  NTSTATUS v5[7]; // [esp+10h] [ebp-3Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  memset(v5, 0, sizeof(v5));
  v2 = 0;
  EnterCrit(0, 1);
  ms_exc.registration.TryLevel = 0;
  v3 = (const void *)_MmUserProbeAddress;
  if ( a1 < _MmUserProbeAddress )
    v3 = (const void *)a1;
  qmemcpy(v5, v3, sizeof(v5));
  ms_exc.registration.TryLevel = -2;
  if ( ValidateHwnd(v5[0]) )
    v2 = xxxTranslateMessage(v5, a2);
  UserSessionSwitchLeaveCrit();
  return v2;
}
