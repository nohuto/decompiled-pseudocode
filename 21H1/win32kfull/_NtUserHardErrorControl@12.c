/*
 * XREFs of _NtUserHardErrorControl@12 @ 0x164F51
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _xxxHardErrorControl@12 @ 0x1A022C (_xxxHardErrorControl@12.c)
 */

int __stdcall NtUserHardErrorControl(int a1, int a2, ULONG a3)
{
  int v3; // esi
  int v5; // [esp+10h] [ebp-28h] BYREF
  int v6; // [esp+14h] [ebp-24h]
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  v5 = 0;
  v6 = 0;
  EnterCrit(0, 1);
  if ( PsGetCurrentProcess() == _gpepCSRSS )
  {
    ms_exc.registration.TryLevel = 0;
    if ( a3 )
    {
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a3 >= _MmUserProbeAddress )
        *(_BYTE *)_MmUserProbeAddress = 0;
      *(_BYTE *)a3 = *(_BYTE *)a3;
      *(_BYTE *)(a3 + 4) = *(_BYTE *)(a3 + 4);
      v5 = *(_DWORD *)a3;
      v6 = *(_DWORD *)(a3 + 4);
    }
    ms_exc.registration.TryLevel = -2;
    v3 = xxxHardErrorControl(a3 != 0 ? &v5 : 0);
    ms_exc.registration.TryLevel = 1;
    if ( a3 )
    {
      *(_DWORD *)a3 = v5;
      *(_DWORD *)(a3 + 4) = v6;
    }
    ms_exc.registration.TryLevel = -2;
  }
  else
  {
    v3 = -1073741790;
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
