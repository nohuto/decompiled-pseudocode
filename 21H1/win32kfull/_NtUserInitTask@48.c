/*
 * XREFs of _NtUserInitTask@48 @ 0x165423
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _zzzInitTask@48 @ 0x142324 (_zzzInitTask@48.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __stdcall NtUserInitTask(
        int a1,
        int a2,
        int a3,
        ULONG a4,
        ULONG a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  int inited; // esi
  int *v13; // ecx
  ULONG v14; // esi
  int *v15; // ecx
  ULONG v16; // esi
  int v18; // [esp+10h] [ebp-2Ch] BYREF
  ULONG v19; // [esp+14h] [ebp-28h]
  int v20; // [esp+18h] [ebp-24h] BYREF
  ULONG v21; // [esp+1Ch] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  EnterCrit(0, 1);
  if ( *(_DWORD *)(PsGetCurrentProcessWin32Process() + 200) )
  {
    ms_exc.registration.TryLevel = 0;
    v13 = (int *)a4;
    if ( a4 >= _MmUserProbeAddress )
      v13 = (int *)_MmUserProbeAddress;
    v18 = *v13;
    v19 = v13[1];
    v14 = (unsigned __int16)v18 + v19 + 2;
    if ( v14 <= v19 || v14 >= _MmUserProbeAddress )
      goto LABEL_18;
    if ( (unsigned __int16)v18 > HIWORD(v18) )
    {
      if ( (v18 & 1) == 0 )
        goto LABEL_18;
    }
    else if ( (v18 & 1) == 0 )
    {
      if ( !a5 )
        goto LABEL_19;
      v15 = (int *)a5;
      if ( a5 >= _MmUserProbeAddress )
        v15 = (int *)_MmUserProbeAddress;
      v20 = *v15;
      v21 = v15[1];
      v16 = (unsigned __int16)v20 + v21 + 2;
      if ( v16 > v21 && v16 < _MmUserProbeAddress )
      {
        if ( (unsigned __int16)v20 > HIWORD(v20) || (v20 & 1) != 0 )
        {
          if ( (v20 & 1) == 0 )
            goto LABEL_18;
          goto LABEL_17;
        }
LABEL_19:
        ms_exc.registration.TryLevel = -2;
        inited = zzzInitTask(
                   a1,
                   a2,
                   a3,
                   (unsigned __int16 *)&v18,
                   a5 != 0 ? (unsigned int)&v20 : 0,
                   a6,
                   a7,
                   a8,
                   a9,
                   a10,
                   a11,
                   a12);
        goto LABEL_22;
      }
LABEL_18:
      ExRaiseAccessViolation();
    }
LABEL_17:
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
    goto LABEL_18;
  }
  inited = -1073741823;
LABEL_22:
  UserSessionSwitchLeaveCrit();
  return inited;
}
