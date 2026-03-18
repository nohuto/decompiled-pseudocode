/*
 * XREFs of _NtUserUnregisterClass@12 @ 0x48404
 * Callers:
 *     <none>
 * Callees:
 *     __UnregisterClass@12 @ 0x47C72 (__UnregisterClass@12.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     __W32ExceptionHandler@4 @ 0x1B6D61 (__W32ExceptionHandler@4.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __stdcall NtUserUnregisterClass(ULONG a1, int a2, ULONG a3)
{
  int *v3; // edx
  int v4; // ecx
  unsigned int v5; // esi
  ULONG v6; // edx
  _DWORD *v7; // edi
  _DWORD *v8; // edi
  int v10; // [esp+10h] [ebp-30h] BYREF
  int v11; // [esp+14h] [ebp-2Ch]
  int v12; // [esp+18h] [ebp-28h]
  int v13; // [esp+1Ch] [ebp-24h]
  unsigned __int16 *v14; // [esp+20h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+28h] [ebp-18h]
  int v16; // [esp+48h] [ebp+8h]
  int v17; // [esp+48h] [ebp+8h]

  v10 = 0;
  v11 = 0;
  v12 = 0;
  EnterCrit(0, 1);
  ms_exc.registration.TryLevel = 0;
  v3 = (int *)a1;
  if ( a1 >= _MmUserProbeAddress )
    v3 = (int *)_MmUserProbeAddress;
  v4 = *v3;
  v16 = *v3;
  v13 = *v3;
  v5 = v3[1];
  v14 = (unsigned __int16 *)v5;
  if ( (v5 & 0xFFFF0000) != 0 )
  {
    v6 = (unsigned __int16)v4 + v5 + 2;
    if ( v6 <= v5 || v6 >= _MmUserProbeAddress )
LABEL_10:
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v4 > HIWORD(v16) || (v4 & 1) != 0 )
    {
      if ( (v4 & 1) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      goto LABEL_10;
    }
  }
  ms_exc.registration.TryLevel = -2;
  v17 = _UnregisterClass((unsigned __int16 *)v5, a2, &v10);
  if ( v17 )
  {
    ms_exc.registration.TryLevel = 1;
    v7 = (_DWORD *)a3;
    if ( a3 >= _MmUserProbeAddress )
      v7 = (_DWORD *)_MmUserProbeAddress;
    *v7 = v10;
    v8 = v7 + 1;
    *v8 = v11;
    v8[1] = v12;
    ms_exc.registration.TryLevel = -2;
  }
  UserSessionSwitchLeaveCrit();
  return v17;
}
