/*
 * XREFs of _NtUserDrawCaption@16 @ 0x160F85
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxDrawCaptionTemp@28 @ 0xBC4CE (_xxxDrawCaptionTemp@28.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

int __stdcall NtUserDrawCaption(int a1, HDC a2, ULONG a3, struct tagCURSOR *a4)
{
  int v4; // ebx
  _DWORD *v5; // edx
  int *v6; // esi
  int *v7; // esi
  int v9; // [esp+14h] [ebp-48h] BYREF
  _DWORD *v10; // [esp+18h] [ebp-44h]
  int v11; // [esp+1Ch] [ebp-40h]
  _DWORD *v12; // [esp+24h] [ebp-38h]
  HDC v13; // [esp+28h] [ebp-34h]
  ULONG v14; // [esp+2Ch] [ebp-30h]
  int v15; // [esp+30h] [ebp-2Ch] BYREF
  int v16; // [esp+34h] [ebp-28h]
  int v17; // [esp+38h] [ebp-24h]
  int v18; // [esp+3Ch] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+44h] [ebp-18h]

  v13 = a2;
  v14 = a3;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v4 = 0;
  EnterCrit(0, 1);
  v5 = (_DWORD *)ValidateHwnd(a1);
  v12 = v5;
  if ( v5 )
  {
    v9 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v9;
    v10 = v5;
    HMLockObject(v5);
    ms_exc.registration.TryLevel = 0;
    v6 = (int *)_MmUserProbeAddress;
    if ( v14 < _MmUserProbeAddress )
      v6 = (int *)v14;
    v15 = *v6;
    v7 = v6 + 1;
    v16 = *v7++;
    v17 = *v7;
    v18 = v7[1];
    ms_exc.registration.TryLevel = -2;
    v4 = xxxDrawCaptionTemp(v12, v13, &v15, 0, 0, 0, a4);
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
