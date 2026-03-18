/*
 * XREFs of _NtUserGetInternalWindowPos@12 @ 0x16344D
 * Callers:
 *     <none>
 * Callees:
 *     __GetWindowPlacement@12 @ 0xB456C (__GetWindowPlacement@12.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __stdcall NtUserGetInternalWindowPos(int a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // edi
  _DWORD *v4; // ecx
  _DWORD *v5; // edi
  int v7; // [esp+18h] [ebp-4Ch]
  _DWORD v8[12]; // [esp+1Ch] [ebp-48h] BYREF
  CPPEH_RECORD ms_exc; // [esp+4Ch] [ebp-18h]

  v3 = a2;
  memset(v8, 0, 0x2Cu);
  EnterSharedCrit(0, 1);
  v4 = (_DWORD *)ValidateHwnd(a1);
  if ( v4 )
  {
    ms_exc.registration.TryLevel = 0;
    if ( a2 )
    {
      if ( (unsigned int)a2 >= _MmUserProbeAddress )
        *(_DWORD *)_MmUserProbeAddress = 0;
      *a2 = *a2;
      a2[1] = a2[1];
      a2[2] = a2[2];
      a2[3] = a2[3];
      v3 = a2;
    }
    if ( a3 )
    {
      if ( (unsigned int)a3 >= _MmUserProbeAddress )
        *(_DWORD *)_MmUserProbeAddress = 0;
      *a3 = *a3;
      a3[1] = a3[1];
    }
    ms_exc.registration.TryLevel = -2;
    v8[0] = 44;
    _GetWindowPlacement(v4, v8, 0);
    v7 = v8[2];
    ms_exc.registration.TryLevel = 1;
    if ( v3 )
    {
      *v3 = v8[7];
      v5 = v3 + 1;
      *v5++ = v8[8];
      *v5 = v8[9];
      v5[1] = v8[10];
    }
    if ( a3 )
    {
      *a3 = v8[3];
      a3[1] = v8[4];
    }
    ms_exc.registration.TryLevel = -2;
  }
  else
  {
    v7 = 0;
  }
  UserSessionSwitchLeaveCrit();
  return v7;
}
