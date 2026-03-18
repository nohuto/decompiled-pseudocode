/*
 * XREFs of _NtUserGetWindowDisplayAffinity@8 @ 0xC49B8
 * Callers:
 *     <none>
 * Callees:
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _GetDisplayAffinity@8 @ 0xC4A42 (_GetDisplayAffinity@8.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserGetWindowDisplayAffinity(int a1, _DWORD *a2)
{
  int v2; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // edi
  _DWORD *v5; // ecx
  int v7; // [esp+18h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v7 = 0;
  v2 = 1;
  EnterSharedCrit(0, 1);
  v3 = (_DWORD *)ValidateHwnd(a1);
  v4 = v3;
  if ( !v3 )
    goto LABEL_7;
  if ( !_IsTopLevelWindow(v3) )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
LABEL_7:
    v2 = 0;
    goto LABEL_6;
  }
  GetDisplayAffinity(v4, &v7);
  ms_exc.registration.TryLevel = 0;
  v5 = a2;
  if ( (unsigned int)a2 >= _MmUserProbeAddress )
    v5 = (_DWORD *)_MmUserProbeAddress;
  *v5 = *v5;
  *a2 = v7;
  ms_exc.registration.TryLevel = -2;
LABEL_6:
  UserSessionSwitchLeaveCrit();
  return v2;
}
