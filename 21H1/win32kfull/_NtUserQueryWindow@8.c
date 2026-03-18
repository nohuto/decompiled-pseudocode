/*
 * XREFs of _NtUserQueryWindow@8 @ 0x920B2
 * Callers:
 *     <none>
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _IsGhostWindow@4 @ 0x72B1C (_IsGhostWindow@4.c)
 *     _IsHungWindow@4 @ 0x738B4 (_IsHungWindow@4.c)
 *     _ProcessHungWindow@4 @ 0xC2576 (_ProcessHungWindow@4.c)
 *     _ShouldProcessHungWindow@4 @ 0xC25A4 (_ShouldProcessHungWindow@4.c)
 */

int __stdcall NtUserQueryWindow(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // edi
  int v4; // eax
  int v5; // edx
  HANDLE ThreadProcessId; // eax
  int v7; // esi
  int v9; // edx
  unsigned int *v10; // eax
  int *v11; // esi
  unsigned int v12; // edi
  int v13; // eax

  EnterSharedCrit(0, 1);
  v2 = (_DWORD *)ValidateHwnd(a1);
  v3 = v2;
  if ( v2 )
  {
    v4 = v2[2];
    switch ( a2 )
    {
      case 0:
        v9 = v3[5];
        if ( (*(_DWORD *)(v9 + 144) & 0x800) == 0 || *(char *)(v9 + 11) < 0 )
          goto LABEL_8;
        v7 = *(_DWORD *)(*(_DWORD *)(v3[3] + 64) + *(_DWORD *)(v9 + 192));
        break;
      case 1:
LABEL_8:
        ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v4);
        goto LABEL_5;
      case 2:
        v5 = v3[5];
        if ( (*(_DWORD *)(v5 + 144) & 0x800) != 0 && *(char *)(v5 + 11) >= 0 )
        {
          v7 = *(_DWORD *)(*(_DWORD *)(v3[3] + 64) + *(_DWORD *)(v5 + 192) + 4);
        }
        else
        {
          ThreadProcessId = PsGetThreadId(*(PETHREAD *)v4);
LABEL_5:
          v7 = (int)ThreadProcessId;
        }
        break;
      case 3:
        v11 = *(int **)(*(_DWORD *)(v4 + 236) + 64);
        goto LABEL_18;
      case 4:
        v11 = *(int **)(*(_DWORD *)(v4 + 236) + 60);
        goto LABEL_18;
      case 5:
        if ( IsGhostWindow(v3) )
        {
          v7 = 1;
        }
        else
        {
          v7 = IsHungWindow((int)v3);
          if ( v7 )
          {
            v10 = (unsigned int *)ShouldProcessHungWindow(v3);
            if ( v10 )
            {
              v12 = *v10;
              if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
                KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
              UserSessionSwitchLeaveCrit();
              EnterCrit(0, 1);
              v13 = HMValidateHandleNoSecure(v12, 1);
              if ( v13 )
                ProcessHungWindow(v13);
              UserSessionSwitchLeaveCrit();
              EnterSharedCrit(0, 1);
            }
          }
        }
        break;
      case 7:
        v7 = _gpqForeground == *(_DWORD *)(v4 + 236);
        break;
      case 8:
        v11 = *(int **)(v4 + 436);
        goto LABEL_18;
      case 9:
        v11 = *(int **)(v4 + 440);
LABEL_18:
        if ( !v11 )
          goto LABEL_22;
        v7 = *v11;
        break;
      default:
        goto LABEL_22;
    }
  }
  else
  {
LABEL_22:
    v7 = 0;
  }
  UserSessionSwitchLeaveCrit();
  return v7;
}
