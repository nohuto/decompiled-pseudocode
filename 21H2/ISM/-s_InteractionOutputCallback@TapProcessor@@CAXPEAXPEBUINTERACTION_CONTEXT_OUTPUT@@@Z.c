/*
 * XREFs of ?s_InteractionOutputCallback@TapProcessor@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x180182090
 * Callers:
 *     <none>
 * Callees:
 *     ?SetLastUserInputModality@InputModalityManager@@QEAA_NW4InputDeviceTypeEx@@HHK@Z @ 0x1801044F4 (-SetLastUserInputModality@InputModalityManager@@QEAA_NW4InputDeviceTypeEx@@HHK@Z.c)
 */

void __fastcall TapProcessor::s_InteractionOutputCallback(_BYTE *a1, const struct INTERACTION_CONTEXT_OUTPUT *a2)
{
  bool v3; // zf
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // r10d
  __int64 v8; // r11
  InputModalityManager *v9; // rcx

  if ( *(_DWORD *)a2 == 2 )
  {
    v3 = a1[64] == 0;
    *((_DWORD *)a1 + 17) = 1;
    if ( !v3 )
    {
      v4 = *((_DWORD *)a2 + 2) - 1;
      if ( v4 && (v5 = v4 - 1) != 0 )
      {
        v6 = v5 - 1;
        if ( v6 )
          v7 = v6 == 1;
        else
          v7 = 16;
      }
      else
      {
        v7 = 2;
      }
      InputModalityManager::SetLastUserInputModality(
        (_DWORD *)a1 + 18,
        v7,
        (int)*((float *)a2 + 3),
        (int)*((float *)a2 + 4),
        0);
      InputModalityManager::SendInputModalityToInputService(v9, *(struct IInputServiceProxy **)(v8 + 48));
    }
  }
  else
  {
    *((_DWORD *)a1 + 17) = 2;
  }
}
