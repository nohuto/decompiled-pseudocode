/*
 * XREFs of _NtUserValidateRect@8 @ 0xAD450
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxValidateRect@8 @ 0xAD504 (_xxxValidateRect@8.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

int __stdcall NtUserValidateRect(int a1, ULONG a2)
{
  int v2; // ebx
  int *v3; // edi
  int v4; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int *v8; // eax
  int v9; // [esp+14h] [ebp-48h] BYREF
  int v10; // [esp+18h] [ebp-44h]
  int v11; // [esp+1Ch] [ebp-40h]
  int v12; // [esp+20h] [ebp-3Ch]
  ULONG v13; // [esp+24h] [ebp-38h]
  int *v14; // [esp+2Ch] [ebp-30h]
  int v15; // [esp+30h] [ebp-2Ch] BYREF
  int v16; // [esp+34h] [ebp-28h]
  int v17; // [esp+38h] [ebp-24h]
  int v18; // [esp+3Ch] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+44h] [ebp-18h]

  v12 = a1;
  v13 = a2;
  v14 = (int *)a2;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v2 = 0;
  EnterCrit(0, 1);
  if ( a2 )
  {
    ms_exc.registration.TryLevel = 0;
    v8 = (int *)_MmUserProbeAddress;
    if ( a2 < _MmUserProbeAddress )
      v8 = (int *)a2;
    v15 = *v8;
    v16 = v8[1];
    v17 = v8[2];
    v18 = v8[3];
    v3 = &v15;
    v14 = &v15;
    ms_exc.registration.TryLevel = -2;
  }
  else
  {
    v3 = 0;
  }
  if ( v12 )
  {
    v4 = ValidateHwnd(v12);
    if ( !v4 )
      goto LABEL_8;
  }
  else
  {
    v4 = 0;
  }
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v9 = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = &v9;
  v10 = v4;
  if ( v4 )
    HMLockObject(v4);
  v2 = xxxValidateRect(v4, v3);
  ThreadUnlock1();
LABEL_8:
  UserSessionSwitchLeaveCrit();
  return v2;
}
