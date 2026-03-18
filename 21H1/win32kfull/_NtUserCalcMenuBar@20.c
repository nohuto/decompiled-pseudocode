/*
 * XREFs of _NtUserCalcMenuBar@20 @ 0x949A0
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxCalcMenuBar@20 @ 0x94A6C (_xxxCalcMenuBar@20.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserCalcMenuBar(int a1, int a2, int a3, int a4, ULONG a5)
{
  int v5; // esi
  int v6; // ebx
  _DWORD *v7; // esi
  _DWORD *v8; // esi
  _DWORD v10[4]; // [esp+10h] [ebp-38h] BYREF
  int v11; // [esp+20h] [ebp-28h] BYREF
  int v12; // [esp+24h] [ebp-24h]
  int v13; // [esp+28h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+30h] [ebp-18h]

  v11 = 0;
  v12 = 0;
  v13 = 0;
  v5 = 0;
  EnterCrit(0, 1);
  v6 = ValidateHwnd(a1);
  if ( v6 )
  {
    v11 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v11;
    v12 = v6;
    HMLockObject(v6);
    if ( a2 < 0 || a3 < 0 || a4 < 0 )
    {
      UserSetLastError((struct _NT_TIB *)0x57);
    }
    else
    {
      ms_exc.registration.TryLevel = 0;
      if ( a5 )
      {
        v7 = (_DWORD *)_MmUserProbeAddress;
        if ( a5 < _MmUserProbeAddress )
          v7 = (_DWORD *)a5;
      }
      else
      {
        v7 = (_DWORD *)(*(_DWORD *)(v6 + 20) + 52);
      }
      v10[0] = *v7;
      v8 = v7 + 1;
      v10[1] = *v8++;
      v10[2] = *v8;
      v10[3] = v8[1];
      ms_exc.registration.TryLevel = -2;
      v5 = xxxCalcMenuBar(a3, a4, v10);
    }
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v5;
}
