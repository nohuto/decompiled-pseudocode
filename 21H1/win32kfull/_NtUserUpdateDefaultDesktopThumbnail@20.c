/*
 * XREFs of _NtUserUpdateDefaultDesktopThumbnail@20 @ 0x16AD14
 * Callers:
 *     <none>
 * Callees:
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     _UserSetLastStatus@8 @ 0x81F3C (_UserSetLastStatus@8.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _DwmAsyncUpdateDefaultDesktopThumbnail@24 @ 0x1D2AAC (_DwmAsyncUpdateDefaultDesktopThumbnail@24.c)
 */

BOOL __stdcall NtUserUpdateDefaultDesktopThumbnail(int a1, ULONG a2, ULONG a3, char a4, int a5)
{
  _DWORD *v5; // ebx
  BOOL v6; // esi
  int *v7; // eax
  int *v8; // esi
  int *v9; // esi
  int updated; // eax
  void *v11; // eax
  int v13[4]; // [esp+10h] [ebp-3Ch] BYREF
  int v14[4]; // [esp+20h] [ebp-2Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  EnterCrit(0, 1);
  if ( a1 )
  {
    v5 = (_DWORD *)ValidateHwnd(a1);
    if ( !v5 )
    {
      v6 = 0;
      goto LABEL_20;
    }
  }
  else
  {
    v5 = 0;
  }
  ms_exc.registration.TryLevel = 0;
  v7 = (int *)_MmUserProbeAddress;
  v8 = (int *)a2;
  if ( a2 >= _MmUserProbeAddress )
    v8 = (int *)_MmUserProbeAddress;
  v13[0] = *v8;
  v9 = v8 + 1;
  v13[1] = *v9++;
  v13[2] = *v9;
  v13[3] = v9[1];
  if ( a3 < _MmUserProbeAddress )
    v7 = (int *)a3;
  v14[0] = *v7;
  v14[1] = v7[1];
  v14[2] = v7[2];
  v14[3] = v7[3];
  ms_exc.registration.TryLevel = -2;
  if ( !v5 || _IsTopLevelWindow(v5) && IsWindowDesktopComposed(v5) )
  {
    if ( *(_DWORD *)(_gptiCurrent + 248) == _grpdeskIODefault && (!v5 || v5[3] == _grpdeskIODefault) )
    {
      v11 = (void *)ReferenceDwmApiPort();
      updated = DwmAsyncUpdateDefaultDesktopThumbnail(v11, (int)v13, (int)v14, a4, a5);
    }
    else
    {
      updated = -1073741790;
    }
  }
  else
  {
    updated = -1073741816;
  }
  v6 = updated >= 0;
  if ( updated < 0 )
  {
    v6 = 0;
    UserSetLastStatus(updated, 1);
  }
LABEL_20:
  UserSessionSwitchLeaveCrit();
  return v6;
}
