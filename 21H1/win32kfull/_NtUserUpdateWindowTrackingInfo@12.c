/*
 * XREFs of _NtUserUpdateWindowTrackingInfo@12 @ 0x16AF00
 * Callers:
 *     <none>
 * Callees:
 *     ?TransformWindowTrackInfo@ShellWindowManagement@@YGXPAUtagWND@@PAUtagSIZE@@1W4TransformWindowTrackInfoDirection@1@@Z @ 0x1305E (-TransformWindowTrackInfo@ShellWindowManagement@@YGXPAUtagWND@@PAUtagSIZE@@1W4TransformWindowTra.c)
 *     _IAMThreadAccessGranted@4 @ 0x26140 (_IAMThreadAccessGranted@4.c)
 *     ?IsShellParticipatesInSizing@@YG_NPAUtagWND@@@Z @ 0x26AC0 (-IsShellParticipatesInSizing@@YG_NPAUtagWND@@@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _UpdateSizeTrackingInfo@12 @ 0x1764E7 (_UpdateSizeTrackingInfo@12.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall NtUserUpdateWindowTrackingInfo(int a1, ULONG a2, ULONG a3)
{
  int updated; // ebx
  int v4; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // ecx
  int *v8; // eax
  int *v9; // ecx
  int v10; // esi
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  int v15; // [esp-4h] [ebp-4Ch]
  struct tagWND *v16; // [esp+0h] [ebp-48h]
  int v17; // [esp+10h] [ebp-38h] BYREF
  int v18; // [esp+14h] [ebp-34h]
  int v19; // [esp+18h] [ebp-30h]
  INT v20[2]; // [esp+1Ch] [ebp-2Ch] BYREF
  INT v21[2]; // [esp+24h] [ebp-24h] BYREF
  CPPEH_RECORD ms_exc; // [esp+30h] [ebp-18h]

  v17 = 0;
  v18 = 0;
  v19 = 0;
  updated = 0;
  EnterCrit(0, 1);
  _gbValidateHandleForIL = 0;
  v4 = ValidateHwnd(a1);
  v5 = v4;
  if ( v4 )
  {
    v6 = *(_WORD *)(*(_DWORD *)(v4 + 20) + 30) & 0x3FFF;
    if ( v6 != 669 && v6 != 671 )
    {
      v17 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v17;
      v18 = v4;
      HMLockObject(v4);
      if ( IsShellParticipatesInSizing(v16) )
      {
        if ( *(_DWORD *)(_gptiCurrent + 232) == *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 248) + 200)
                                                                      + 8)
                                                          + 232)
          && IAMThreadAccessGranted(_gptiCurrent) )
        {
          ms_exc.registration.TryLevel = 0;
          v8 = (int *)_MmUserProbeAddress;
          v9 = (int *)a2;
          if ( a2 >= _MmUserProbeAddress )
            v9 = (int *)_MmUserProbeAddress;
          v10 = *v9;
          v20[0] = *v9;
          v11 = v9[1];
          v20[1] = v11;
          if ( a3 < _MmUserProbeAddress )
            v8 = (int *)a3;
          v12 = *v8;
          v21[0] = *v8;
          v13 = v8[1];
          v21[1] = v13;
          ms_exc.registration.TryLevel = -2;
          if ( v10 > 0 && v11 > 0 && v12 > 0 && v13 > 0 && v10 >= v12 && v11 >= v13 )
          {
            ShellWindowManagement::TransformWindowTrackInfo(v5, v20, v21, 1);
            updated = UpdateSizeTrackingInfo(v5, v20, v21);
            goto LABEL_23;
          }
          v15 = 87;
        }
        else
        {
          v15 = 5;
        }
        v7 = v15;
      }
      else
      {
        v7 = 5023;
      }
      UserSetLastError((struct _NT_TIB *)v7);
LABEL_23:
      ThreadUnlock1();
    }
  }
  UserSessionSwitchLeaveCrit();
  return updated;
}
