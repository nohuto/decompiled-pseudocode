/*
 * XREFs of _NtUserHwndSetRedirectionInfo@16 @ 0x1651A3
 * Callers:
 *     <none>
 * Callees:
 *     _GetStyleWindow@8 @ 0x387E8 (_GetStyleWindow@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _GreSetHwndPresentFlags@8 @ 0x1CE820 (_GreSetHwndPresentFlags@8.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall NtUserHwndSetRedirectionInfo(int a1, int a2, unsigned int a3, unsigned int a4)
{
  NTSTATUS v4; // esi
  int v5; // edi
  int v6; // eax
  int StyleWindow; // eax
  _DWORD *v8; // ecx
  struct _NT_TIB *v9; // eax
  _DWORD v11[8]; // [esp+10h] [ebp-44h] BYREF
  int v12; // [esp+38h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+3Ch] [ebp-18h]

  v4 = -1073741811;
  v12 = -1073741811;
  memset(v11, 0, sizeof(v11));
  v5 = 1;
  EnterCrit(0, 1);
  _gbValidateHandleForIL = 0;
  v6 = ValidateHwnd(a1);
  if ( v6 )
  {
    StyleWindow = GetStyleWindow(v6, 2568);
    if ( StyleWindow )
    {
      if ( (*(_WORD *)(*(_DWORD *)(StyleWindow + 20) + 30) & 0x3FFF) != 0x29D )
      {
        ms_exc.registration.TryLevel = 0;
        if ( a2 != 2 )
        {
          v4 = -1073741821;
LABEL_7:
          v12 = v4;
          ms_exc.registration.TryLevel = -2;
          goto LABEL_14;
        }
        v8 = (_DWORD *)a3;
        if ( !a3 )
          goto LABEL_7;
        if ( a4 < 4 )
        {
          v4 = -1073741306;
          goto LABEL_7;
        }
        if ( a3 + 4 < a3 || a3 + 4 > _MmUserProbeAddress )
          v8 = (_DWORD *)_MmUserProbeAddress;
        v11[0] = *v8;
        ms_exc.registration.TryLevel = -2;
        v4 = GreSetHwndPresentFlags(*(HWND *)StyleWindow);
      }
    }
  }
LABEL_14:
  if ( v4 < 0 )
  {
    v5 = 0;
    v9 = (struct _NT_TIB *)RtlNtStatusToDosError(v4);
    UserSetLastError(v9);
  }
  UserSessionSwitchLeaveCrit();
  return v5;
}
