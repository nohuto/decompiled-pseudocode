/*
 * XREFs of ?OnInput@TapProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801819A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SendInputModalityToInputService@InputModalityManager@@QEBAXPEAUIInputServiceProxy@@@Z @ 0x18010408C (-SendInputModalityToInputService@InputModalityManager@@QEBAXPEAUIInputServiceProxy@@@Z.c)
 *     ?SetLastUserInputModality@InputModalityManager@@QEAA_NW4InputDeviceTypeEx@@HHK@Z @ 0x180104124 (-SetLastUserInputModality@InputModalityManager@@QEAA_NW4InputDeviceTypeEx@@HHK@Z.c)
 *     ?ResetAndInitializeInteractionContext@TapProcessor@@AEAAJXZ @ 0x180181B5C (-ResetAndInitializeInteractionContext@TapProcessor@@AEAAJXZ.c)
 */

__int64 __fastcall TapProcessor::OnInput(
        TapProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  const char *v7; // r9
  __int64 v8; // r8
  InputModalityManager *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *((_DWORD *)a4 + 2) = 4;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)a4 + 10);
  if ( (*(_DWORD *)a2 & *((_DWORD *)this + 8)) == 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      187LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
      v7);
    __debugbreak();
  }
  if ( (*(_DWORD *)a2 & 4) != 0 )
  {
    if ( (*((_BYTE *)a2 + 70) & 1) != 0
      && (*((_WORD *)a2 + 18) == 3 || !*((_WORD *)a2 + 18) || *((_WORD *)a2 + 18) >= 7u)
      && (unsigned __int16)(*((_WORD *)a2 + 16) + 3) > 1u
      && *((_BYTE *)this + 64) )
    {
      InputModalityManager::SetLastUserInputModality((_DWORD *)this + 18, 4, 0, 0, *((_DWORD *)a2 + 1));
      InputModalityManager::SendInputModalityToInputService(v9, *((struct IInputServiceProxy **)this + 6));
    }
  }
  else
  {
    v8 = *((unsigned int *)a2 + 53);
    if ( (unsigned int)v8 > 1
      || (int)ProcessPointerFramesInteractionContext(*((_QWORD *)this + 7), 1LL, v8, (char *)a2 + 216) < 0
      || *((_DWORD *)this + 17) == 2 )
    {
      *((_DWORD *)a4 + 2) = 0;
      TapProcessor::ResetAndInitializeInteractionContext(this);
    }
  }
  return 0LL;
}
