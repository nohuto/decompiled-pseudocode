/*
 * XREFs of _NtUserRegisterEdgy@12 @ 0x167F38
 * Callers:
 *     <none>
 * Callees:
 *     _IsShellProcess@4 @ 0x1B0F4 (_IsShellProcess@4.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?_RemoveListener@Edgy@@YGHPAUtagDESKTOP@@PAXW4tagEDGY_LOCATION@@@Z @ 0x16EE85 (-_RemoveListener@Edgy@@YGHPAUtagDESKTOP@@PAXW4tagEDGY_LOCATION@@@Z.c)
 *     _EdgyRegisterListener@4 @ 0x16F0BE (_EdgyRegisterListener@4.c)
 */

int __stdcall NtUserRegisterEdgy(unsigned int a1, int a2, int a3)
{
  int v3; // ebx
  unsigned int v4; // eax
  int *v5; // esi
  int *v6; // esi
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // eax
  int v12; // [esp-4h] [ebp-60h]
  int v13; // [esp+10h] [ebp-4Ch]
  int v14; // [esp+14h] [ebp-48h]
  int v15; // [esp+18h] [ebp-44h]
  int v16; // [esp+20h] [ebp-3Ch] BYREF
  int v17; // [esp+24h] [ebp-38h]
  int v18; // [esp+28h] [ebp-34h]
  int v19; // [esp+2Ch] [ebp-30h]
  int v20; // [esp+34h] [ebp-28h]
  int v21; // [esp+3Ch] [ebp-20h]
  int v22; // [esp+40h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+44h] [ebp-18h]

  v3 = 0;
  v20 = 0;
  EnterCrit(0, 1);
  if ( a1 )
  {
    if ( IsShellProcess(*(_DWORD **)(_gptiCurrent + 232)) )
    {
      ms_exc.registration.TryLevel = 0;
      v4 = 0;
      v21 = 0;
      while ( v4 < a1 )
      {
        v5 = (int *)(a2 + 16 * v4);
        if ( v5 + 4 < v5 || (unsigned int)(v5 + 4) > _MmUserProbeAddress )
          v5 = (int *)_MmUserProbeAddress;
        v13 = *v5;
        v6 = v5 + 1;
        v14 = *v6;
        v15 = v6[1];
        v16 = v13;
        v17 = v14;
        v18 = v15;
        v19 = 0;
        if ( a3 )
        {
          if ( !HMValidateHandle(v16, 19)
            || v17
            && ((v7 = ValidateHwnd(v17), (v8 = v7) == 0)
             || (v9 = *(_DWORD *)(v7 + 20), *(char *)(v9 + 11) < 0)
             || *(char *)(v9 + 12) < 0
             || *(_DWORD *)(*(_DWORD *)(v8 + 8) + 232) != PsGetCurrentProcessWin32Process()
             || *(_DWORD *)(v8 + 152)) )
          {
            v12 = 87;
LABEL_13:
            v22 = 0;
            UserSetLastError((struct _NT_TIB *)v12);
            ms_exc.registration.TryLevel = -2;
            goto LABEL_27;
          }
          v10 = EdgyRegisterListener(&v16);
        }
        else
        {
          v10 = Edgy::_RemoveListener(*(_DWORD *)(_gptiCurrent + 248), v16, v18);
        }
        if ( a3 && !v10 )
        {
          v12 = 8;
          goto LABEL_13;
        }
        v4 = ++v21;
      }
      ms_exc.registration.TryLevel = -2;
      v3 = 1;
    }
    else
    {
      UserSetLastError((struct _NT_TIB *)5);
    }
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)0x57);
  }
LABEL_27:
  UserSessionSwitchLeaveCrit();
  return v3;
}
