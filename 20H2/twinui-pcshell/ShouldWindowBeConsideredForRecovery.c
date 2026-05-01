/*
 * XREFs of ShouldWindowBeConsideredForRecovery @ 0x18015BAD4
 * Callers:
 *     RecoverWindowsProc @ 0x18015BA70 (RecoverWindowsProc.c)
 * Callees:
 *     ?IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180055534 (-IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18008332C (-IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180083378 (-IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsClassicApplication@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4ZBID@@@Z @ 0x18015ABE0 (-IsClassicApplication@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4ZBID@@@Z.c)
 */

char __fastcall ShouldWindowBeConsideredForRecovery(HWND a1, CApplicationManagerUtility **a2)
{
  int *v3; // rsi
  HWND v4; // rdx
  char v5; // bl
  bool v6; // al
  CApplicationManagerUtility *v7; // rcx
  HWND v8; // rdx
  HWND v9; // rdx
  HWND v10; // rdx
  HWND v11; // rdx
  CApplicationManagerUtility *v12; // rcx

  *a2 = (CApplicationManagerUtility *)a1;
  if ( !IsWindowVisible(a1) )
    return 0;
  v3 = (int *)(a2 + 1);
  if ( !(unsigned int)GetWindowBand(*a2, a2 + 1) )
    return 0;
  v5 = 1;
  v6 = (*v3 == 1 || *v3 == 8) && *v3 != 1;
  v7 = *a2;
  if ( v6 )
  {
    if ( CApplicationManagerUtility::IsOwnedWindow(v7, v4)
      || !CApplicationManagerUtility::IsTrayWindowStyleCheck(*a2, v8) )
    {
      v5 = 0;
    }
    goto LABEL_12;
  }
  if ( !CApplicationManagerUtility::IsClassicApplication(v7, *v3) )
    return 0;
  if ( CApplicationManagerUtility::IsForcedAppWindow(*a2, v9) )
  {
LABEL_12:
    *((_BYTE *)a2 + 12) = 0;
    return v5;
  }
  if ( CApplicationManagerUtility::IsOwnedWindow(*a2, v10) )
  {
    *((_BYTE *)a2 + 12) = 1;
  }
  else
  {
    v12 = *a2;
    *((_BYTE *)a2 + 12) = 0;
    return CApplicationManagerUtility::IsTrayWindowStyleCheck(v12, v11);
  }
  return v5;
}
