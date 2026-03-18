/*
 * XREFs of _NtUserGetImeHotKey@16 @ 0x163009
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _GetImeHotKey@16 @ 0x180AF8 (_GetImeHotKey@16.c)
 */

int __stdcall NtUserGetImeHotKey(int a1, _DWORD *a2, _DWORD *a3, int *a4)
{
  _DWORD *v4; // ecx
  _DWORD *v5; // ecx
  int *v6; // ecx
  int ImeHotKey; // esi
  int v9; // [esp+18h] [ebp-28h] BYREF
  int v10; // [esp+1Ch] [ebp-24h] BYREF
  int v11; // [esp+20h] [ebp-20h] BYREF
  int *v12; // [esp+24h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+28h] [ebp-18h]

  v11 = 0;
  v10 = 0;
  v9 = 0;
  v12 = 0;
  EnterSharedCrit(0, 1);
  ms_exc.registration.TryLevel = 0;
  v4 = a2;
  if ( (unsigned int)a2 >= _MmUserProbeAddress )
    v4 = (_DWORD *)_MmUserProbeAddress;
  *v4 = *v4;
  v5 = a3;
  if ( (unsigned int)a3 >= _MmUserProbeAddress )
    v5 = (_DWORD *)_MmUserProbeAddress;
  *v5 = *v5;
  if ( a4 )
  {
    v6 = a4;
    if ( (unsigned int)a4 >= _MmUserProbeAddress )
      v6 = (int *)_MmUserProbeAddress;
    *v6 = *v6;
    v12 = &v9;
  }
  ms_exc.registration.TryLevel = -2;
  ImeHotKey = GetImeHotKey(a1, &v11, &v10, v12);
  if ( ImeHotKey )
  {
    ms_exc.registration.TryLevel = 1;
    *a2 = v11;
    *a3 = v10;
    if ( a4 )
      *a4 = *v12;
    ms_exc.registration.TryLevel = -2;
  }
  UserSessionSwitchLeaveCrit();
  return ImeHotKey;
}
