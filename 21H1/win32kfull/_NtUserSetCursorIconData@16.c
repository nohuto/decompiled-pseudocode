/*
 * XREFs of _NtUserSetCursorIconData@16 @ 0x77412
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     ?_SetCursorIconData@@YG_NPAUtagCURSOR@@PAU_UNICODE_STRING@@1PAUtagCURSORDATA@@K@Z @ 0x775F8 (-_SetCursorIconData@@YG_NPAUtagCURSOR@@PAU_UNICODE_STRING@@1PAUtagCURSORDATA@@K@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _LeaveEditionCrit@0 @ 0xCCA50 (_LeaveEditionCrit@0.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

SIZE_T __stdcall NtUserSetCursorIconData(int a1, ULONG a2, ULONG a3, ULONG a4)
{
  SIZE_T v4; // ebx
  int v5; // eax
  int *v6; // ecx
  int v7; // edx
  ULONG v8; // esi
  int *v9; // edi
  int v10; // ecx
  ULONG v11; // edi
  const void *v12; // esi
  ULONG v13; // eax
  struct tagCURSORDATA *v15; // [esp+0h] [ebp-A8h]
  unsigned int v16; // [esp+4h] [ebp-A4h]
  struct _UNICODE_STRING v17[11]; // [esp+10h] [ebp-98h] BYREF
  _BYTE v18[8]; // [esp+68h] [ebp-40h] BYREF
  int v19; // [esp+70h] [ebp-38h]
  ULONG v20; // [esp+74h] [ebp-34h]
  int v21; // [esp+78h] [ebp-30h] BYREF
  ULONG v22; // [esp+7Ch] [ebp-2Ch]
  int v23; // [esp+84h] [ebp-24h]
  SIZE_T v24; // [esp+88h] [ebp-20h]
  int v25; // [esp+8Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+90h] [ebp-18h]
  ULONG v27; // [esp+B0h] [ebp+8h]
  int v28; // [esp+B4h] [ebp+Ch]
  int v29; // [esp+B8h] [ebp+10h]

  v4 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v18);
  v5 = HMValidateHandle(a1, 3);
  v23 = v5;
  if ( v5 )
  {
    if ( (*(_DWORD *)(v5 + 44) & 0x800) == 0 )
    {
      UserSetLastError(0);
      goto LABEL_33;
    }
    ms_exc.registration.TryLevel = 0;
    v6 = (int *)a2;
    if ( a2 >= _MmUserProbeAddress )
      v6 = (int *)_MmUserProbeAddress;
    v7 = *v6;
    v28 = *v6;
    v19 = *v6;
    v8 = v6[1];
    v20 = v8;
    v9 = (int *)a3;
    if ( a3 >= _MmUserProbeAddress )
      v9 = (int *)_MmUserProbeAddress;
    v10 = *v9;
    v29 = *v9;
    v21 = *v9;
    v11 = v9[1];
    v22 = v11;
    v27 = v8 + (unsigned __int16)v7 + 2;
    if ( v27 <= v8 )
      goto LABEL_19;
    v12 = (const void *)_MmUserProbeAddress;
    if ( v27 >= _MmUserProbeAddress )
      goto LABEL_19;
    if ( (unsigned __int16)v7 > HIWORD(v28) )
    {
      if ( (v7 & 1) == 0 )
        goto LABEL_19;
    }
    else if ( (v7 & 1) == 0 )
    {
      if ( (v11 & 0xFFFF0000) == 0 )
        goto LABEL_20;
      v13 = v11 + (unsigned __int16)v10 + 2;
      if ( v13 > v11 && v13 < _MmUserProbeAddress )
      {
        if ( (unsigned __int16)v10 > HIWORD(v29) || (v10 & 1) != 0 )
        {
          if ( (v10 & 1) == 0 )
            goto LABEL_19;
          goto LABEL_18;
        }
LABEL_20:
        if ( a4 < _MmUserProbeAddress )
          v12 = (const void *)a4;
        qmemcpy(v17, v12, sizeof(v17));
        if ( ((int)v17[1].Buffer & 0xFFFFEFB0) != 0 )
        {
          UserSetLastError(1004);
LABEL_32:
          v25 = 0;
          ms_exc.registration.TryLevel = -2;
          goto LABEL_33;
        }
        if ( ((int)v17[1].Buffer & 8) != 0 )
        {
          if ( v17[8].MaximumLength | HIWORD(v17[8].Buffer)
            || *(_DWORD *)&v17[10].Length != 4 * *(_DWORD *)&v17[8].Length
            || v17[9].Buffer != (PWSTR)(*(_DWORD *)&v17[10].Length + 4 * (int)v17[8].Buffer) )
          {
            goto LABEL_32;
          }
          v4 = 4 * (*(_DWORD *)&v17[8].Length + 2 * (int)v17[8].Buffer);
        }
        v24 = v4;
        ProbeForRead(*(volatile void **)&v17[9].Length, v4, 4u);
        ms_exc.registration.TryLevel = -2;
        v4 = _SetCursorIconData((struct tagCURSOR *)&v21, v17, v4, v15, v16);
        goto LABEL_33;
      }
LABEL_19:
      ExRaiseAccessViolation();
    }
LABEL_18:
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
    goto LABEL_19;
  }
LABEL_33:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v18);
  LeaveEditionCrit();
  return v4;
}
