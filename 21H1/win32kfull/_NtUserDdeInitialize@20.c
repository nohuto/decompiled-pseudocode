/*
 * XREFs of _NtUserDdeInitialize@20 @ 0xE3AA0
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxDestroyThreadDDEObject@8 @ 0xD2D78 (_xxxDestroyThreadDDEObject@8.c)
 *     _xxxCsDdeInitialize@20 @ 0xE3B3C (_xxxCsDdeInitialize@20.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserDdeInitialize(ULONG a1, ULONG a2, ULONG a3, int a4, int a5)
{
  int v5; // esi
  _DWORD *v6; // ecx
  _DWORD *v7; // ecx
  _DWORD *v8; // ecx
  int v10; // [esp+18h] [ebp-24h] BYREF
  int v11; // [esp+1Ch] [ebp-20h]
  int v12; // [esp+20h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  v12 = 0;
  v11 = 0;
  v10 = 0;
  EnterCrit(0, 1);
  v5 = xxxCsDdeInitialize(&v10, a4, a5);
  if ( !v5 )
  {
    ms_exc.registration.TryLevel = 0;
    v6 = (_DWORD *)a1;
    if ( a1 >= _MmUserProbeAddress )
      v6 = (_DWORD *)_MmUserProbeAddress;
    *v6 = v12;
    v7 = (_DWORD *)a2;
    if ( a2 >= _MmUserProbeAddress )
      v7 = (_DWORD *)_MmUserProbeAddress;
    *v7 = v11;
    v8 = (_DWORD *)a3;
    if ( a3 >= _MmUserProbeAddress )
      v8 = (_DWORD *)_MmUserProbeAddress;
    *v8 = v10;
    ms_exc.registration.TryLevel = -2;
  }
  UserSessionSwitchLeaveCrit();
  return v5;
}
