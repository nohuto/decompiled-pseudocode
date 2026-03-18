/*
 * XREFs of _NtUserFindExistingCursorIcon@12 @ 0x48504
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCchCopyW@@YGJPAGIPBG@Z @ 0x48774 (-RtlStringCchCopyW@@YGJPAGIPBG@Z.c)
 *     ?_FindExistingCursorIcon@@YGPAUtagCURSOR@@GPAU_UNICODE_STRING@@PAU1@PAUtagCURSORFIND@@@Z @ 0x487F0 (-_FindExistingCursorIcon@@YGPAUtagCURSOR@@GPAU_UNICODE_STRING@@PAU1@PAUtagCURSORFIND@@@Z.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _UserSetLastStatus@8 @ 0x81F3C (_UserSetLastStatus@8.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __stdcall NtUserFindExistingCursorIcon(ULONG a1, ULONG a2, ULONG a3)
{
  int v3; // ebx
  int v4; // edx
  const void *v5; // esi
  ULONG *v6; // eax
  ULONG v7; // ecx
  unsigned __int16 *v8; // edi
  ULONG v9; // edx
  ULONG *v10; // eax
  ULONG v11; // ecx
  ULONG v12; // edx
  ULONG v13; // esi
  int v14; // eax
  unsigned __int16 Atom; // ax
  struct tagCURSOR *ExistingCursorIcon; // eax
  unsigned int v18; // [esp+0h] [ebp-278h]
  struct tagCURSOR *v19; // [esp+0h] [ebp-278h]
  const unsigned __int16 *v20; // [esp+4h] [ebp-274h]
  struct tagCURSORFIND *v21; // [esp+4h] [ebp-274h]
  _BYTE v22[20]; // [esp+10h] [ebp-268h] BYREF
  int v23; // [esp+2Ch] [ebp-24Ch]
  ULONG v24; // [esp+30h] [ebp-248h]
  unsigned __int16 *v25; // [esp+34h] [ebp-244h]
  const void *v26; // [esp+40h] [ebp-238h]
  ULONG v27; // [esp+44h] [ebp-234h]
  ULONG v28; // [esp+48h] [ebp-230h]
  unsigned __int16 v29[2]; // [esp+4Ch] [ebp-22Ch]
  ULONG v30; // [esp+50h] [ebp-228h]
  int v31; // [esp+54h] [ebp-224h]
  ULONG v32; // [esp+58h] [ebp-220h]
  char v33[516]; // [esp+5Ch] [ebp-21Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+260h] [ebp-18h]

  v32 = a1;
  v30 = a2;
  v26 = (const void *)a3;
  v3 = 0;
  v24 = 0;
  v25 = 0;
  v27 = 0;
  v28 = 0;
  memset(v22, 0, sizeof(v22));
  EnterSharedCrit(0, 1);
  ms_exc.registration.TryLevel = 0;
  v5 = (const void *)_MmUserProbeAddress;
  if ( a3 < _MmUserProbeAddress )
    v5 = v26;
  qmemcpy(v22, v5, sizeof(v22));
  if ( *(_DWORD *)v22 )
  {
    LOBYTE(v4) = 3;
    *(_DWORD *)v29 = HMValidateHandle(*(_DWORD *)v22, v4);
    if ( !*(_DWORD *)v29 )
    {
      v31 = 0;
      ms_exc.registration.TryLevel = -2;
      goto LABEL_30;
    }
  }
  else
  {
    *(_DWORD *)v29 = 0;
  }
  v6 = (ULONG *)v32;
  if ( v32 >= _MmUserProbeAddress )
    v6 = (ULONG *)_MmUserProbeAddress;
  v7 = *v6;
  v32 = v7;
  v24 = v7;
  v8 = (unsigned __int16 *)v6[1];
  v25 = v8;
  v9 = (ULONG)v8 + (unsigned __int16)v7 + 2;
  if ( v9 <= (unsigned int)v8 )
    goto LABEL_22;
  v10 = (ULONG *)_MmUserProbeAddress;
  if ( v9 >= _MmUserProbeAddress )
    goto LABEL_22;
  if ( (unsigned __int16)v7 > HIWORD(v32) )
  {
    if ( (v7 & 1) == 0 )
      goto LABEL_22;
LABEL_21:
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
    goto LABEL_22;
  }
  if ( (v7 & 1) != 0 )
    goto LABEL_21;
  if ( v30 < _MmUserProbeAddress )
    v10 = (ULONG *)v30;
  v11 = *v10;
  v32 = v11;
  v27 = v11;
  v12 = v10[1];
  v28 = v12;
  if ( (v12 & 0xFFFF0000) == 0 )
    goto LABEL_23;
  v13 = (unsigned __int16)v11 + v12 + 2;
  if ( v13 <= v12 || v13 >= _MmUserProbeAddress )
LABEL_22:
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v11 > HIWORD(v32) || (v11 & 1) != 0 )
  {
    if ( (v11 & 1) == 0 )
      goto LABEL_22;
    goto LABEL_21;
  }
LABEL_23:
  ms_exc.registration.TryLevel = 1;
  v14 = RtlStringCchCopyW(v8, v18, v20);
  if ( v14 < 0 )
  {
    v31 = 0;
    UserSetLastStatus(v14, 1);
    ms_exc.registration.TryLevel = -2;
  }
  else
  {
    Atom = UserFindAtom(v33);
    v23 = Atom;
    ms_exc.registration.TryLevel = -2;
    if ( Atom )
    {
      ExistingCursorIcon = _FindExistingCursorIcon(v29[0], (struct _UNICODE_STRING *)v22, v19, v21);
      if ( ExistingCursorIcon )
        v3 = *(_DWORD *)ExistingCursorIcon;
    }
  }
LABEL_30:
  UserSessionSwitchLeaveCrit();
  return v3;
}
