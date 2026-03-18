/*
 * XREFs of _NtUserRedrawWindow@16 @ 0x9C958
 * Callers:
 *     <none>
 * Callees:
 *     _xxxRedrawWindow@16 @ 0x3332A (_xxxRedrawWindow@16.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

int __stdcall NtUserRedrawWindow(int a1, int *a2, int a3, int a4)
{
  int v4; // ebx
  int v5; // esi
  int *v6; // ecx
  int v7; // eax
  int *v9; // esi
  int *v10; // esi
  int v11; // [esp+14h] [ebp-4Ch] BYREF
  int v12; // [esp+18h] [ebp-48h]
  int v13; // [esp+1Ch] [ebp-44h]
  int v14; // [esp+20h] [ebp-40h]
  int *v15; // [esp+28h] [ebp-38h]
  ULONG v16; // [esp+2Ch] [ebp-34h]
  int v17; // [esp+30h] [ebp-30h]
  int v18; // [esp+34h] [ebp-2Ch] BYREF
  int v19; // [esp+38h] [ebp-28h]
  int v20; // [esp+3Ch] [ebp-24h]
  int v21; // [esp+40h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+48h] [ebp-18h]

  v16 = (ULONG)a2;
  v15 = a2;
  v14 = a3;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v4 = 0;
  EnterCrit(0, 1);
  if ( a1 )
  {
    v5 = ValidateHwnd(a1);
    v17 = v5;
    if ( !v5 )
      goto LABEL_11;
  }
  else
  {
    v5 = 0;
    v17 = 0;
  }
  v11 = *(_DWORD *)(_gptiCurrent + 228);
  *(_DWORD *)(_gptiCurrent + 228) = &v11;
  v12 = v5;
  if ( v5 )
    HMLockObject(v5);
  v6 = (int *)v16;
  if ( v16 )
  {
    ms_exc.registration.TryLevel = 0;
    v9 = (int *)_MmUserProbeAddress;
    if ( v16 < _MmUserProbeAddress )
      v9 = (int *)v16;
    v18 = *v9;
    v10 = v9 + 1;
    v19 = *v10++;
    v20 = *v10;
    v21 = v10[1];
    v6 = &v18;
    v15 = &v18;
    ms_exc.registration.TryLevel = -2;
    v5 = v17;
  }
  v7 = a4;
  if ( (a4 & 0xFFFFF000) != 0 )
  {
    UserSetLastError((struct _NT_TIB *)0x3EC);
  }
  else
  {
    if ( !v5 )
      v7 = a4 | 0x10000;
    v4 = xxxRedrawWindow(v5, v6, v14, v7);
  }
  ThreadUnlock1();
LABEL_11:
  UserSessionSwitchLeaveCrit();
  return v4;
}
