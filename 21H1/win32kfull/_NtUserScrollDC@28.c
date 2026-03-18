/*
 * XREFs of _NtUserScrollDC@28 @ 0x324DC
 * Callers:
 *     <none>
 * Callees:
 *     __ScrollDC@28 @ 0x3267A (__ScrollDC@28.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

int __stdcall NtUserScrollDC(int a1, int a2, int a3, ULONG a4, int *a5, int a6, ULONG a7)
{
  int *v7; // ebx
  int *v8; // esi
  int *v9; // esi
  int *v10; // esi
  int *v11; // eax
  _DWORD *v12; // edi
  int v13; // ebx
  _DWORD *v14; // edi
  int v16; // [esp+38h] [ebp-4Ch] BYREF
  int v17; // [esp+3Ch] [ebp-48h]
  int v18; // [esp+40h] [ebp-44h]
  int v19; // [esp+44h] [ebp-40h]
  int v20; // [esp+48h] [ebp-3Ch] BYREF
  int v21; // [esp+4Ch] [ebp-38h]
  int v22; // [esp+50h] [ebp-34h]
  int v23; // [esp+54h] [ebp-30h]
  int v24; // [esp+58h] [ebp-2Ch] BYREF
  int v25; // [esp+5Ch] [ebp-28h]
  int v26; // [esp+60h] [ebp-24h]
  int v27; // [esp+64h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+6Ch] [ebp-18h]

  v7 = (int *)a4;
  v8 = a5;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  EnterSharedCrit(0, 1);
  ms_exc.registration.TryLevel = 0;
  if ( a4 )
  {
    v9 = (int *)_MmUserProbeAddress;
    if ( a4 < _MmUserProbeAddress )
      v9 = (int *)a4;
    v24 = *v9;
    v10 = v9 + 1;
    v25 = *v10++;
    v26 = *v10;
    v27 = v10[1];
    v7 = &v24;
    v8 = a5;
  }
  if ( v8 )
  {
    v11 = (int *)_MmUserProbeAddress;
    if ( (unsigned int)v8 < _MmUserProbeAddress )
      v11 = v8;
    v20 = *v11;
    v21 = v11[1];
    v22 = v11[2];
    v23 = v11[3];
    v8 = &v20;
  }
  ms_exc.registration.TryLevel = -2;
  v12 = (_DWORD *)a7;
  v13 = _ScrollDC(a1, a2, a3, v7, v8, a6, a7 != 0 ? &v16 : 0);
  if ( a7 )
  {
    ms_exc.registration.TryLevel = 1;
    if ( a7 >= _MmUserProbeAddress )
      v12 = (_DWORD *)_MmUserProbeAddress;
    *v12 = v16;
    v14 = v12 + 1;
    *v14++ = v17;
    *v14 = v18;
    v14[1] = v19;
    ms_exc.registration.TryLevel = -2;
  }
  UserSessionSwitchLeaveCrit();
  return v13;
}
