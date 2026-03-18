/*
 * XREFs of _NtUserSBGetParms@16 @ 0x921F0
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

BOOL __stdcall NtUserSBGetParms(int a1, int a2, int *a3, void *a4)
{
  BOOL v4; // ebx
  _DWORD *v5; // edx
  int v6; // eax
  _DWORD v8[7]; // [esp+10h] [ebp-54h] BYREF
  int v9; // [esp+2Ch] [ebp-38h]
  int v10; // [esp+30h] [ebp-34h]
  int v11; // [esp+34h] [ebp-30h]
  int v12; // [esp+38h] [ebp-2Ch]
  CPPEH_RECORD ms_exc; // [esp+4Ch] [ebp-18h]
  int v14; // [esp+6Ch] [ebp+8h]

  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  memset(v8, 0, sizeof(v8));
  v4 = 0;
  EnterSharedCrit(0, 1);
  v14 = ValidateHwnd(a1);
  if ( v14 )
  {
    ms_exc.registration.TryLevel = 0;
    if ( (unsigned int)a4 >= _MmUserProbeAddress )
      *(_DWORD *)_MmUserProbeAddress = 0;
    qmemcpy(a4, a4, 0x1Cu);
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = *a3;
    v10 = a3[1];
    v11 = a3[2];
    v12 = a3[3];
    qmemcpy(v8, a4, sizeof(v8));
    ms_exc.registration.TryLevel = -2;
    v5 = *(_DWORD **)(*(_DWORD *)(v14 + 8) + 392);
    if ( (v8[1] & 1) != 0 )
    {
      v8[2] = v9;
      v8[3] = v10;
    }
    if ( (v8[1] & 2) != 0 )
      v8[4] = v11;
    if ( (v8[1] & 4) != 0 )
      v8[5] = v12;
    if ( (v8[1] & 0x10) != 0 )
    {
      if ( v5 && v5[15] == a2 && v5[1] == v14 )
        v6 = v5[14];
      else
        v6 = v12;
      v8[6] = v6;
    }
    v4 = (v8[1] & 0x17) != 0;
    qmemcpy(a4, v8, 0x1Cu);
    ms_exc.registration.TryLevel = -2;
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
