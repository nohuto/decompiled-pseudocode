/*
 * XREFs of _NtUserSetWindowCompositionTransition@28 @ 0xAB3DC
 * Callers:
 *     <none>
 * Callees:
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _UserSetLastStatus@8 @ 0x81F3C (_UserSetLastStatus@8.c)
 *     _DwmAsyncSetTransition@32 @ 0xAB55E (_DwmAsyncSetTransition@32.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

BOOL __stdcall NtUserSetWindowCompositionTransition(int a1, int a2, ULONG a3, ULONG a4, ULONG a5, ULONG a6, ULONG a7)
{
  int v7; // ebx
  int *v8; // esi
  void *v9; // eax
  BOOL v10; // esi
  int *v12; // eax
  int *v13; // esi
  int *v14; // esi
  int *v15; // esi
  int *v16; // esi
  int *v17; // esi
  int *v18; // esi
  int *v19; // esi
  int *v20; // esi
  _DWORD *v21; // [esp+18h] [ebp-98h]
  int *v22; // [esp+34h] [ebp-7Ch]
  int *v23; // [esp+38h] [ebp-78h]
  int *v24; // [esp+3Ch] [ebp-74h]
  int *v25; // [esp+40h] [ebp-70h]
  int v26; // [esp+44h] [ebp-6Ch] BYREF
  int v27; // [esp+48h] [ebp-68h]
  int v28; // [esp+4Ch] [ebp-64h]
  int v29; // [esp+50h] [ebp-60h]
  int v30; // [esp+54h] [ebp-5Ch] BYREF
  int v31; // [esp+58h] [ebp-58h]
  int v32; // [esp+5Ch] [ebp-54h]
  int v33; // [esp+60h] [ebp-50h]
  int v34; // [esp+64h] [ebp-4Ch] BYREF
  int v35; // [esp+68h] [ebp-48h]
  int v36; // [esp+6Ch] [ebp-44h]
  int v37; // [esp+70h] [ebp-40h]
  int v38; // [esp+74h] [ebp-3Ch] BYREF
  int v39; // [esp+78h] [ebp-38h]
  int v40; // [esp+7Ch] [ebp-34h]
  int v41; // [esp+80h] [ebp-30h]
  int v42; // [esp+84h] [ebp-2Ch] BYREF
  int v43; // [esp+88h] [ebp-28h]
  int v44; // [esp+8Ch] [ebp-24h]
  int v45; // [esp+90h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+98h] [ebp-18h]

  v23 = (int *)a3;
  v22 = (int *)a4;
  v24 = (int *)a5;
  v25 = (int *)a6;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  EnterCrit(0, 1);
  v21 = (_DWORD *)ValidateHwnd(a1);
  if ( v21 )
  {
    v7 = 0;
    if ( (!a4 || a3) && (!a6 || a5) )
    {
      ms_exc.registration.TryLevel = 0;
      if ( a3 )
      {
        v13 = (int *)_MmUserProbeAddress;
        if ( a3 < _MmUserProbeAddress )
          v13 = (int *)a3;
        v42 = *v13;
        v14 = v13 + 1;
        v43 = *v14++;
        v44 = *v14;
        v45 = v14[1];
        v23 = &v42;
      }
      if ( a4 )
      {
        v15 = (int *)_MmUserProbeAddress;
        if ( a4 < _MmUserProbeAddress )
          v15 = (int *)a4;
        v38 = *v15;
        v16 = v15 + 1;
        v39 = *v16++;
        v40 = *v16;
        v41 = v16[1];
        v22 = &v38;
      }
      if ( a5 )
      {
        v17 = (int *)_MmUserProbeAddress;
        if ( a5 < _MmUserProbeAddress )
          v17 = (int *)a5;
        v34 = *v17;
        v18 = v17 + 1;
        v35 = *v18++;
        v36 = *v18;
        v37 = v18[1];
        v24 = &v34;
      }
      if ( a6 )
      {
        v19 = (int *)_MmUserProbeAddress;
        if ( a6 < _MmUserProbeAddress )
          v19 = (int *)a6;
        v30 = *v19;
        v20 = v19 + 1;
        v31 = *v20++;
        v32 = *v20;
        v33 = v20[1];
        v25 = &v30;
      }
      v8 = (int *)a7;
      if ( a7 )
      {
        v12 = (int *)_MmUserProbeAddress;
        if ( a7 < _MmUserProbeAddress )
          v12 = (int *)a7;
        v26 = *v12;
        v27 = v12[1];
        v28 = v12[2];
        v29 = v12[3];
        v8 = &v26;
      }
      ms_exc.registration.TryLevel = -2;
      if ( _IsTopLevelWindow(v21) )
      {
        if ( IsWindowDesktopComposed(v21) )
        {
          v9 = (void *)ReferenceDwmApiPort();
          v7 = DwmAsyncSetTransition(v9, a2, (int)v23, (int)v22, (int)v24, (int)v25, (int)v8);
        }
      }
      else
      {
        v7 = -1073741816;
      }
    }
    else
    {
      v7 = -1073741811;
    }
    v10 = v7 >= 0;
    if ( v7 < 0 )
    {
      v10 = 0;
      UserSetLastStatus(v7, 1);
    }
  }
  else
  {
    v10 = 0;
  }
  UserSessionSwitchLeaveCrit();
  return v10;
}
