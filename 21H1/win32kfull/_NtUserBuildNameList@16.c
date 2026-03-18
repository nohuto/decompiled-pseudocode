/*
 * XREFs of _NtUserBuildNameList@16 @ 0xA612C
 * Callers:
 *     <none>
 * Callees:
 *     __BuildNameList@16 @ 0xA61F2 (__BuildNameList@16.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserBuildNameList(int a1, SIZE_T Length, _DWORD *Address, _DWORD *a4)
{
  int v4; // esi
  _DWORD *v5; // ecx
  int v7; // [esp+1Ch] [ebp-20h] BYREF
  PVOID Object; // [esp+20h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  v4 = 0;
  v7 = 0;
  Object = 0;
  EnterSharedCrit(0, 1);
  if ( Length < 0xC )
  {
    v4 = -1073741816;
  }
  else
  {
    ms_exc.registration.TryLevel = 0;
    v5 = a4;
    if ( (unsigned int)a4 >= _MmUserProbeAddress )
      v5 = (_DWORD *)_MmUserProbeAddress;
    *v5 = *v5;
    ProbeForWrite(Address, Length, 4u);
    ms_exc.registration.TryLevel = -2;
    if ( a1 )
      v4 = ValidateHwinsta(a1, 1, 1, &Object);
    if ( v4 < 0 )
    {
      *((_WORD *)Address + 4) = 0;
      *Address = 1;
      ms_exc.registration.TryLevel = -2;
    }
    else
    {
      v4 = _BuildNameList(Length, &v7);
      *a4 = v7;
      ms_exc.registration.TryLevel = -2;
      if ( Object )
        ObfDereferenceObject(Object);
    }
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
