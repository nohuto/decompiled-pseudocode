/*
 * XREFs of _NtUserScrollWindowEx@32 @ 0x2B4CC
 * Callers:
 *     <none>
 * Callees:
 *     _xxxScrollWindowEx@32 @ 0x2B61E (_xxxScrollWindowEx@32.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

int __stdcall NtUserScrollWindowEx(int a1, int a2, int a3, int *a4, int *a5, int a6, _DWORD *a7, int a8)
{
  int v8; // ebx
  int v9; // edx
  int *v10; // ecx
  int *v11; // esi
  int *v12; // esi
  int *v13; // edx
  int *v14; // esi
  int *v15; // esi
  _DWORD *v16; // edi
  _DWORD *v18; // edi
  int v19; // [esp+18h] [ebp-7Ch] BYREF
  int v20; // [esp+1Ch] [ebp-78h]
  int v21; // [esp+20h] [ebp-74h]
  int v22; // [esp+2Ch] [ebp-68h]
  int v23; // [esp+30h] [ebp-64h]
  _DWORD *v24; // [esp+34h] [ebp-60h]
  int *v25; // [esp+38h] [ebp-5Ch]
  ULONG v26; // [esp+3Ch] [ebp-58h]
  int *v27; // [esp+40h] [ebp-54h]
  ULONG v28; // [esp+44h] [ebp-50h]
  int v29; // [esp+48h] [ebp-4Ch] BYREF
  int v30; // [esp+4Ch] [ebp-48h]
  int v31; // [esp+50h] [ebp-44h]
  int v32; // [esp+54h] [ebp-40h]
  int v33; // [esp+58h] [ebp-3Ch] BYREF
  int v34; // [esp+5Ch] [ebp-38h]
  int v35; // [esp+60h] [ebp-34h]
  int v36; // [esp+64h] [ebp-30h]
  int v37; // [esp+68h] [ebp-2Ch] BYREF
  int v38; // [esp+6Ch] [ebp-28h]
  int v39; // [esp+70h] [ebp-24h]
  int v40; // [esp+74h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+7Ch] [ebp-18h]

  v28 = (ULONG)a4;
  v27 = a4;
  v26 = (ULONG)a5;
  v25 = a5;
  v23 = a6;
  v24 = a7;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v8 = 0;
  EnterCrit(0, 1);
  v9 = ValidateHwnd(a1);
  v22 = v9;
  if ( v9 )
  {
    v19 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v19;
    v20 = v9;
    HMLockObject(v9);
    ms_exc.registration.TryLevel = 0;
    v10 = (int *)v28;
    if ( v28 )
    {
      v11 = (int *)_MmUserProbeAddress;
      if ( v28 < _MmUserProbeAddress )
        v11 = (int *)v28;
      v37 = *v11;
      v12 = v11 + 1;
      v38 = *v12++;
      v39 = *v12;
      v40 = v12[1];
      v10 = &v37;
      v27 = &v37;
    }
    v13 = (int *)v26;
    if ( v26 )
    {
      v14 = (int *)_MmUserProbeAddress;
      if ( v26 < _MmUserProbeAddress )
        v14 = (int *)v26;
      v33 = *v14;
      v15 = v14 + 1;
      v34 = *v15++;
      v35 = *v15;
      v36 = v15[1];
      v13 = &v33;
      v25 = &v33;
    }
    ms_exc.registration.TryLevel = -2;
    v16 = v24;
    v8 = xxxScrollWindowEx(v22, a2, a3, v10, v13, v23, v24 != 0 ? &v29 : 0, a8);
    if ( v16 )
    {
      ms_exc.registration.TryLevel = 1;
      if ( (unsigned int)v16 >= _MmUserProbeAddress )
        v16 = (_DWORD *)_MmUserProbeAddress;
      *v16 = v29;
      v18 = v16 + 1;
      *v18++ = v30;
      *v18 = v31;
      v18[1] = v32;
      ms_exc.registration.TryLevel = -2;
    }
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v8;
}
