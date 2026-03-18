/*
 * XREFs of _NtUserSetWindowArrangement@16 @ 0x169EA1
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckCanonicalForegroundAccess@@YG_NW4ForegroundChangeAllowPolicy@@@Z @ 0x19546 (-CheckCanonicalForegroundAccess@@YG_NW4ForegroundChangeAllowPolicy@@@Z.c)
 *     _IAMThreadAccessGranted@4 @ 0x26140 (_IAMThreadAccessGranted@4.c)
 *     _IsGhostWindowClass@4 @ 0x72C42 (_IsGhostWindowClass@4.c)
 *     _IsHungWindow@4 @ 0x738B4 (_IsHungWindow@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?BeginSetWindowArrangement@@YG_NPAUtagWND@@QBUtagRECT@@1K@Z @ 0x170CB9 (-BeginSetWindowArrangement@@YG_NPAUtagWND@@QBUtagRECT@@1K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
BOOL __stdcall NtUserSetWindowArrangement(int a1, int a2, ULONG a3, struct tagRECT *a4)
{
  BOOL v4; // ebx
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int v7; // eax
  int v8; // ecx
  int *v9; // esi
  int *v10; // esi
  int v12; // [esp-4h] [ebp-5Ch]
  const struct tagRECT *v13; // [esp+0h] [ebp-58h]
  unsigned int v14; // [esp+4h] [ebp-54h]
  int v15; // [esp+20h] [ebp-38h] BYREF
  int v16; // [esp+24h] [ebp-34h]
  int v17; // [esp+28h] [ebp-30h]
  int v18; // [esp+2Ch] [ebp-2Ch]
  int v19; // [esp+30h] [ebp-28h] BYREF
  _DWORD *v20; // [esp+34h] [ebp-24h]
  int v21; // [esp+38h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+40h] [ebp-18h]

  v19 = 0;
  v20 = 0;
  v21 = 0;
  v4 = 0;
  EnterCrit(0, 1);
  _gbValidateHandleForIL = 0;
  v5 = (_DWORD *)ValidateHwnd(a1);
  v6 = v5;
  if ( v5 )
  {
    v7 = *(_WORD *)(v5[5] + 30) & 0x3FFF;
    if ( v7 != 669 && v7 != 671 )
    {
      v19 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v19;
      v20 = v6;
      HMLockObject(v6);
      if ( !*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 248) + 200) || !IAMThreadAccessGranted(_gptiCurrent) )
        goto LABEL_5;
      if ( v6[2] == _gptiCurrent || ((unsigned int)a4 & 0xFFFFFFF8) != 0 )
        goto LABEL_9;
      if ( IsHungWindow((int)v6) || IsGhostWindowClass(v6) )
      {
        v8 = 5023;
        goto LABEL_27;
      }
      if ( ((unsigned __int8)a4 & 1) == 0 && !CheckCanonicalForegroundAccess(0) )
      {
LABEL_5:
        v12 = 5;
LABEL_6:
        v8 = v12;
LABEL_27:
        UserSetLastError((struct _NT_TIB *)v8);
LABEL_28:
        ThreadUnlock1();
        goto LABEL_29;
      }
      if ( ((unsigned __int8)a4 & 4) != 0 )
      {
        if ( a2 || a3 )
          goto LABEL_9;
      }
      else if ( !a2 )
      {
LABEL_9:
        v12 = 87;
        goto LABEL_6;
      }
      ms_exc.registration.TryLevel = 0;
      if ( a3 )
      {
        v9 = (int *)_MmUserProbeAddress;
        if ( a3 < _MmUserProbeAddress )
          v9 = (int *)a3;
        v15 = *v9;
        v10 = v9 + 1;
        v16 = *v10++;
        v17 = *v10;
        v18 = v10[1];
      }
      else
      {
        v15 = 0;
        v16 = 0;
        v17 = 0;
        v18 = 0;
      }
      ms_exc.registration.TryLevel = -2;
      v4 = BeginSetWindowArrangement((struct tagWND *)&v15, a4, v13, v14);
      goto LABEL_28;
    }
  }
LABEL_29:
  UserSessionSwitchLeaveCrit();
  return v4;
}
