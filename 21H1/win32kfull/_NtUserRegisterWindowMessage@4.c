/*
 * XREFs of _NtUserRegisterWindowMessage@4 @ 0x91DE4
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _UserSetLastStatus@8 @ 0x81F3C (_UserSetLastStatus@8.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __stdcall NtUserRegisterWindowMessage(ULONG a1)
{
  int *v1; // edx
  int v2; // esi
  int v3; // ecx
  _WORD *v4; // edi
  ULONG v5; // edx
  int v6; // ebx
  _WORD *v7; // eax
  int v8; // ecx
  int v9; // edx
  int v11; // [esp+34h] [ebp-224h]
  int v12; // [esp+38h] [ebp-220h]
  _BYTE v13[516]; // [esp+3Ch] [ebp-21Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+240h] [ebp-18h]

  v1 = (int *)a1;
  v2 = 0;
  ms_exc.registration.TryLevel = 0;
  if ( a1 >= _MmUserProbeAddress )
    v1 = (int *)_MmUserProbeAddress;
  v3 = *v1;
  v11 = *v1;
  v4 = (_WORD *)v1[1];
  v5 = (ULONG)v4 + (unsigned __int16)*v1 + 2;
  if ( v5 <= (unsigned int)v4 || v5 >= _MmUserProbeAddress )
LABEL_17:
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v3 > HIWORD(v11) )
  {
    if ( (v3 & 1) == 0 )
      goto LABEL_17;
    goto LABEL_16;
  }
  if ( (v3 & 1) != 0 )
  {
LABEL_16:
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
    goto LABEL_17;
  }
  v12 = 2147483646;
  v6 = 256;
  v7 = v13;
  v8 = 0;
  v9 = 0;
  while ( v6 )
  {
    if ( !v12 )
      goto LABEL_14;
    v2 = 0;
    if ( !*v4 )
      goto LABEL_14;
    *v7++ = *v4++;
    --v6;
    --v12;
    ++v9;
    v2 = 0;
  }
  --v7;
  v8 = -2147483643;
LABEL_14:
  *v7 = 0;
  ms_exc.registration.TryLevel = -2;
  if ( v8 >= 0 )
    return (unsigned __int16)UserAddAtomEx(v13, 0, 2);
  UserSetLastStatus(v8, 1);
  return v2;
}
