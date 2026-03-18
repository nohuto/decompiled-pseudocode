/*
 * XREFs of _NtUserBuildPropList@16 @ 0xCA094
 * Callers:
 *     <none>
 * Callees:
 *     __BuildPropList@16 @ 0xCA16A (__BuildPropList@16.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserBuildPropList(int a1, unsigned int a2, volatile void *Address, ULONG a4)
{
  int v4; // edi
  _DWORD *v5; // ecx
  int v6; // esi
  int v8; // [esp+10h] [ebp-2Ch] BYREF
  int v9; // [esp+14h] [ebp-28h]
  int v10; // [esp+18h] [ebp-24h]
  int v11; // [esp+20h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  v8 = 0;
  v9 = 0;
  v10 = 0;
  EnterCrit(0, 1);
  v4 = ValidateHwnd(a1);
  if ( v4 )
  {
    v8 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v8;
    v9 = v4;
    HMLockObject(v4);
    if ( a2 )
    {
      ms_exc.registration.TryLevel = 0;
      if ( a2 > 0x1FFFFFFF )
        ExRaiseAccessViolation();
      ProbeForWrite(Address, 8 * a2, 4u);
      v5 = (_DWORD *)a4;
      if ( a4 >= _MmUserProbeAddress )
        v5 = (_DWORD *)_MmUserProbeAddress;
      *v5 = *v5;
      v6 = _BuildPropList(a2, a4);
      v11 = v6;
      ms_exc.registration.TryLevel = -2;
    }
    else
    {
      v6 = -1073741816;
    }
    ThreadUnlock1();
  }
  else
  {
    v6 = -1073741816;
  }
  UserSessionSwitchLeaveCrit();
  return v6;
}
