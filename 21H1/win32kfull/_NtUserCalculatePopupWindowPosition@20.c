/*
 * XREFs of _NtUserCalculatePopupWindowPosition@20 @ 0x15FC6D
 * Callers:
 *     <none>
 * Callees:
 *     __MonitorFromPoint@16 @ 0x25420 (__MonitorFromPoint@16.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QAE@XZ @ 0x411E4 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QAE@XZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QAE@PAUtagPOPUPMENU@@@Z @ 0xF17F6 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QAE@PAUtagPOPUPMENU@@@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _FindBestPos@40 @ 0x1A7CE6 (_FindBestPos@40.c)
 */

int __stdcall NtUserCalculatePopupWindowPosition(ULONG a1, ULONG a2, int a3, ULONG a4, _DWORD *a5)
{
  int v5; // ebx
  int v6; // ecx
  int *v7; // eax
  int *v8; // ecx
  int v9; // ecx
  int *v10; // edi
  int v11; // esi
  int v12; // edi
  _DWORD *v13; // eax
  _DWORD *v14; // edi
  __int16 v15; // ecx^2
  int v16; // edx
  int v17; // ecx
  int v18; // eax
  _DWORD *v19; // edx
  int v21; // [esp+20h] [ebp-54h]
  int v22; // [esp+24h] [ebp-50h]
  int *v23; // [esp+2Ch] [ebp-48h]
  int v24; // [esp+30h] [ebp-44h] BYREF
  ULONG v25; // [esp+34h] [ebp-40h]
  int BestPos; // [esp+38h] [ebp-3Ch]
  _DWORD *v27; // [esp+3Ch] [ebp-38h]
  int v28; // [esp+40h] [ebp-34h]
  int v29; // [esp+44h] [ebp-30h]
  int v30; // [esp+48h] [ebp-2Ch] BYREF
  int v31; // [esp+4Ch] [ebp-28h]
  int v32; // [esp+50h] [ebp-24h]
  int v33; // [esp+54h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+5Ch] [ebp-18h]

  v25 = a1;
  v23 = (int *)a4;
  v27 = a5;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v28 = 0;
  v29 = 0;
  v5 = 1;
  EnterCrit(0, 1);
  if ( (a3 & 0xFFFE0200) != 0 )
  {
    v6 = 1004;
LABEL_3:
    UserSetLastError((struct _NT_TIB *)v6);
    v5 = 0;
    goto LABEL_28;
  }
  if ( !v27 )
  {
    v6 = 87;
    goto LABEL_3;
  }
  ms_exc.registration.TryLevel = 0;
  if ( a4 )
  {
    v7 = (int *)_MmUserProbeAddress;
    if ( a4 < _MmUserProbeAddress )
      v7 = (int *)a4;
    v30 = *v7;
    v31 = v7[1];
    v32 = v7[2];
    v33 = v7[3];
    v23 = &v30;
  }
  v8 = (int *)_MmUserProbeAddress;
  if ( a2 < _MmUserProbeAddress )
    v8 = (int *)a2;
  v28 = *v8;
  v9 = v8[1];
  v29 = v9;
  if ( v28 < 0 || v9 < 0 )
  {
    v5 = 0;
    UserSetLastError((struct _NT_TIB *)0x57);
    ms_exc.registration.TryLevel = -2;
  }
  else
  {
    v10 = (int *)_MmUserProbeAddress;
    if ( v25 < _MmUserProbeAddress )
      v10 = (int *)v25;
    v11 = *v10;
    v21 = v11;
    v12 = v10[1];
    v22 = v12;
    v25 = -2;
    ms_exc.registration.TryLevel = -2;
    BestPos = _MonitorFromPoint(v11, v12, 2u, 0);
    if ( (a3 & 4) != 0 )
    {
      v11 += v28 / (int)v25;
    }
    else if ( (a3 & 8) != 0 )
    {
      v11 -= v28;
    }
    if ( (a3 & 0x10) != 0 )
    {
      v12 += v29 / -2;
    }
    else if ( (a3 & 0x20) != 0 )
    {
      v12 -= v29;
    }
    SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(&v24, 0);
    BestPos = FindBestPos(v11, v12, v28, v29, v23, (unsigned int)&loc_20000 | a3, &v24, BestPos, v21, v22);
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v24);
    ms_exc.registration.TryLevel = 1;
    if ( (unsigned int)v27 >= _MmUserProbeAddress )
      *(_DWORD *)_MmUserProbeAddress = 0;
    v13 = v27;
    v14 = v27;
    *v27 = *v27;
    v14[1] = v14[1];
    v14[2] = v14[2];
    v14[3] = v14[3];
    v15 = HIWORD(BestPos);
    v16 = (__int16)BestPos;
    *v13 = (__int16)BestPos;
    v17 = v15;
    v13[1] = v17;
    v18 = v16 + v28;
    v19 = v27;
    v27[2] = v18;
    v19[3] = v17 + v29;
    ms_exc.registration.TryLevel = -2;
  }
LABEL_28:
  UserSessionSwitchLeaveCrit();
  return v5;
}
