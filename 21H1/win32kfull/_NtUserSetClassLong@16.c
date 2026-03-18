/*
 * XREFs of _NtUserSetClassLong@16 @ 0xCBA02
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxSetClassLong@16 @ 0xCBBE2 (_xxxSetClassLong@16.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __stdcall NtUserSetClassLong(int a1, int a2, ULONG a3, int a4)
{
  int v4; // ebx
  int v5; // esi
  int *v6; // esi
  int *v7; // esi
  int *v8; // edx
  int v9; // ecx
  ULONG v10; // edx
  ULONG v11; // esi
  _DWORD *v12; // edi
  _DWORD *v13; // edi
  int v15; // [esp+10h] [ebp-58h]
  int v16; // [esp+14h] [ebp-54h]
  ULONG v17; // [esp+18h] [ebp-50h]
  int v18; // [esp+1Ch] [ebp-4Ch] BYREF
  int v19; // [esp+20h] [ebp-48h]
  int v20; // [esp+24h] [ebp-44h]
  int v21; // [esp+28h] [ebp-40h] BYREF
  int v22; // [esp+2Ch] [ebp-3Ch]
  int *v23; // [esp+30h] [ebp-38h]
  int v24; // [esp+34h] [ebp-34h] BYREF
  ULONG v25; // [esp+38h] [ebp-30h]
  ULONG v26; // [esp+4Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+50h] [ebp-18h]
  int v28; // [esp+70h] [ebp+8h]
  int v30; // [esp+78h] [ebp+10h]

  v4 = 0;
  v24 = 0;
  v25 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v26 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  EnterCrit(0, 1);
  v5 = ValidateHwnd(a1);
  v28 = v5;
  if ( v5 )
  {
    v18 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v18;
    v19 = v5;
    HMLockObject(v5);
    if ( a2 == -26 )
    {
      if ( (a3 & 0x10000) != 0 )
      {
        UserSetLastError((struct _NT_TIB *)0xD);
LABEL_23:
        ThreadUnlock1();
        goto LABEL_24;
      }
    }
    else if ( a2 == -8 )
    {
      ms_exc.registration.TryLevel = 0;
      v26 = a3;
      v6 = (int *)a3;
      if ( a3 + 12 < a3 || a3 + 12 > _MmUserProbeAddress )
        v6 = (int *)_MmUserProbeAddress;
      v15 = *v6;
      v7 = v6 + 1;
      v16 = *v7;
      v17 = v7[1];
      v21 = v15;
      v22 = v16;
      v23 = (int *)v17;
      v8 = (int *)v17;
      if ( v17 >= _MmUserProbeAddress )
        v8 = (int *)_MmUserProbeAddress;
      v9 = *v8;
      v30 = *v8;
      v24 = *v8;
      v10 = v8[1];
      v25 = v10;
      if ( (v10 & 0xFFFF0000) != 0 )
      {
        v11 = (unsigned __int16)v9 + v10 + 2;
        if ( v11 <= v10 || v11 >= _MmUserProbeAddress )
LABEL_16:
          ExRaiseAccessViolation();
        if ( (unsigned __int16)v9 > HIWORD(v30) || (v9 & 1) != 0 )
        {
          if ( (v9 & 1) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM();
          goto LABEL_16;
        }
      }
      ms_exc.registration.TryLevel = -2;
      v23 = &v24;
      v4 = xxxSetClassLong(v28, &v21, a4);
      ms_exc.registration.TryLevel = 1;
      v12 = (_DWORD *)a3;
      if ( a3 >= _MmUserProbeAddress )
        v12 = (_DWORD *)_MmUserProbeAddress;
      *v12 = v21;
      v13 = v12 + 1;
      *v13 = v22;
      v13[1] = v23;
      ms_exc.registration.TryLevel = -2;
      goto LABEL_23;
    }
    v4 = xxxSetClassLong(v5, a3, a4);
    goto LABEL_23;
  }
LABEL_24:
  UserSessionSwitchLeaveCrit();
  return v4;
}
