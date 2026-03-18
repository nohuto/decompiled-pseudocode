/*
 * XREFs of _NtUserCompositionInputSinkViewInstanceIdFromPoint@8 @ 0x16051F
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _RequestInputSinkInfoFromPoint@4 @ 0x17B95E (_RequestInputSinkInfoFromPoint@4.c)
 */

int __stdcall NtUserCompositionInputSinkViewInstanceIdFromPoint(unsigned int a1, ULONG a2)
{
  int v2; // esi
  int CurrentProcess; // eax
  int *v4; // ecx
  int v5; // eax
  int v6; // ecx
  _DWORD *v7; // ecx
  _DWORD v9[25]; // [esp+10h] [ebp-8Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+84h] [ebp-18h]

  ExEnterCriticalRegionAndAcquireResourceExclusive(_gpresDitCompositionInputSinkQuery);
  v2 = 0;
  EnterCrit(0, 1);
  memset(v9, 0, sizeof(v9));
  CurrentProcess = PsGetCurrentProcess();
  if ( IsProcessDwm(CurrentProcess) )
  {
    UserSetLastError((struct _NT_TIB *)5);
  }
  else
  {
    ms_exc.registration.TryLevel = 0;
    v4 = (int *)a1;
    if ( a1 + 8 < a1 || a1 + 8 > _MmUserProbeAddress )
      v4 = (int *)_MmUserProbeAddress;
    v5 = *v4;
    v6 = v4[1];
    v9[1] = v5;
    v9[2] = v6;
    ms_exc.registration.TryLevel = -2;
    v9[0] = 8;
    v9[3] = 0;
    v2 = RequestInputSinkInfoFromPoint(v9);
    if ( v2 )
    {
      ms_exc.registration.TryLevel = 1;
      v7 = (_DWORD *)a2;
      if ( a2 >= _MmUserProbeAddress )
        v7 = (_DWORD *)_MmUserProbeAddress;
      *v7 = v9[24];
      ms_exc.registration.TryLevel = -2;
    }
  }
  UserSessionSwitchLeaveCrit();
  ExReleaseResourceAndLeaveCriticalRegion(_gpresDitCompositionInputSinkQuery);
  return v2;
}
