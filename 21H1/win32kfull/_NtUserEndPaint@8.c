/*
 * XREFs of _NtUserEndPaint@8 @ 0x124D2
 * Callers:
 *     <none>
 * Callees:
 *     _xxxEndPaint@8 @ 0x12580 (_xxxEndPaint@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __stdcall NtUserEndPaint(int a1, ULONG a2)
{
  int v2; // esi
  struct tagVWPL **v3; // ebx
  const void *v4; // esi
  _BYTE v6[64]; // [esp+10h] [ebp-6Ch] BYREF
  int v7; // [esp+50h] [ebp-2Ch] BYREF
  struct tagVWPL **v8; // [esp+54h] [ebp-28h]
  int v9; // [esp+58h] [ebp-24h]
  CPPEH_RECORD ms_exc; // [esp+64h] [ebp-18h]

  v2 = 0;
  memset(v6, 0, sizeof(v6));
  v7 = 0;
  v8 = 0;
  v9 = 0;
  EnterCrit(0, 1);
  v3 = (struct tagVWPL **)ValidateHwnd(a1);
  if ( v3 )
  {
    v7 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v7;
    v8 = v3;
    HMLockObject(v3);
    ms_exc.registration.TryLevel = 0;
    v4 = (const void *)_MmUserProbeAddress;
    if ( a2 < _MmUserProbeAddress )
      v4 = (const void *)a2;
    qmemcpy(v6, v4, sizeof(v6));
    ms_exc.registration.TryLevel = -2;
    v2 = xxxEndPaint(v3);
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
