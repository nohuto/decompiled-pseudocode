/*
 * XREFs of _NtUserDrawCaptionTemp@28 @ 0x161080
 * Callers:
 *     <none>
 * Callees:
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     _xxxDrawCaptionTemp@28 @ 0xBC4CE (_xxxDrawCaptionTemp@28.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __stdcall NtUserDrawCaptionTemp(int a1, HDC a2, ULONG a3, int a4, int a5, ULONG a6, struct tagCURSOR *a7)
{
  int v7; // ebx
  int *v8; // esi
  int *v9; // esi
  ULONG *v10; // eax
  ULONG v11; // ecx
  void *v12; // esi
  ULONG v13; // edx
  void *v14; // eax
  int v15; // ebx
  _DWORD *v16; // esi
  HDC v17; // ebx
  _DWORD v19[3]; // [esp+10h] [ebp-7Ch] BYREF
  int v20; // [esp+20h] [ebp-6Ch] BYREF
  int v21; // [esp+24h] [ebp-68h]
  int v22; // [esp+28h] [ebp-64h]
  int v23; // [esp+2Ch] [ebp-60h] BYREF
  _DWORD *v24; // [esp+30h] [ebp-5Ch]
  int v25; // [esp+34h] [ebp-58h]
  HDC v26; // [esp+38h] [ebp-54h]
  int v27; // [esp+3Ch] [ebp-50h]
  int v28; // [esp+40h] [ebp-4Ch]
  ULONG v29; // [esp+44h] [ebp-48h]
  int v30; // [esp+48h] [ebp-44h]
  _DWORD *v31; // [esp+4Ch] [ebp-40h]
  ULONG v32; // [esp+50h] [ebp-3Ch]
  int v33; // [esp+54h] [ebp-38h]
  ULONG v34; // [esp+58h] [ebp-34h] BYREF
  void *v35; // [esp+5Ch] [ebp-30h]
  int v36; // [esp+60h] [ebp-2Ch] BYREF
  int v37; // [esp+64h] [ebp-28h]
  int v38; // [esp+68h] [ebp-24h]
  int v39; // [esp+6Ch] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+74h] [ebp-18h]

  v33 = a1;
  v26 = a2;
  v29 = a3;
  v27 = a4;
  v32 = a6;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v7 = 0;
  v34 = 0;
  v35 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  memset(v19, 0, sizeof(v19));
  v30 = 0;
  EnterCrit(0, 1);
  v28 = _gptiCurrent;
  if ( a1 )
  {
    v31 = (_DWORD *)ValidateHwnd(v33);
    if ( !v31 )
      goto LABEL_31;
  }
  else
  {
    v31 = 0;
  }
  if ( a5 )
  {
    v33 = HMValidateHandle(a5, 3);
    if ( !v33 )
      goto LABEL_31;
  }
  else
  {
    v33 = 0;
  }
  ms_exc.registration.TryLevel = 0;
  v8 = (int *)_MmUserProbeAddress;
  if ( v29 < _MmUserProbeAddress )
    v8 = (int *)v29;
  v36 = *v8;
  v9 = v8 + 1;
  v37 = *v9++;
  v38 = *v9;
  v39 = v9[1];
  v10 = (ULONG *)v32;
  if ( v32 >= _MmUserProbeAddress )
    v10 = (ULONG *)_MmUserProbeAddress;
  v11 = *v10;
  v32 = v11;
  v34 = v11;
  v12 = (void *)v10[1];
  v35 = v12;
  if ( v12 )
  {
    v13 = (ULONG)v12 + (unsigned __int16)v11 + 2;
    if ( v13 > (unsigned int)v12 && v13 < _MmUserProbeAddress )
    {
      if ( (unsigned __int16)v11 > HIWORD(v32) )
      {
        if ( (v11 & 1) == 0 )
          goto LABEL_28;
      }
      else if ( (v11 & 1) == 0 )
      {
        v14 = (void *)Win32AllocPoolWithQuota((unsigned __int16)v11 + 2, 2020897621);
        v35 = v14;
        if ( !v14 )
          ExRaiseStatus(-1073741801);
        v30 = 1;
        PushW32ThreadLock((int)v14, v19, (int)Win32FreePool);
        memcpy(v35, v12, (unsigned __int16)v34);
        *((_WORD *)v35 + ((unsigned __int16)v34 >> 1)) = 0;
        HIWORD(v34) = v34 + 2;
        goto LABEL_20;
      }
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
LABEL_28:
    ExRaiseAccessViolation();
  }
LABEL_20:
  ms_exc.registration.TryLevel = -2;
  v15 = v28;
  v23 = *(_DWORD *)(v28 + 228);
  *(_DWORD *)(v28 + 228) = &v23;
  v16 = v31;
  v24 = v31;
  if ( v31 )
    HMLockObject(v31);
  v20 = *(_DWORD *)(v15 + 228);
  *(_DWORD *)(v15 + 228) = &v20;
  v17 = (HDC)v33;
  v21 = v33;
  if ( v33 )
    HMLockObject(v33);
  v7 = xxxDrawCaptionTemp(v16, v26, &v36, v27, v17, v35 != 0 ? (unsigned __int16 *)&v34 : 0, a7);
  ThreadUnlock1();
  ThreadUnlock1();
  if ( v30 )
    PopAndFreeAlwaysW32ThreadLock((int)v19);
LABEL_31:
  UserSessionSwitchLeaveCrit();
  return v7;
}
