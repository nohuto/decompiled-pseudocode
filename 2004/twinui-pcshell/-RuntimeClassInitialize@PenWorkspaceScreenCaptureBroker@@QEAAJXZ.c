/*
 * XREFs of ?RuntimeClassInitialize@PenWorkspaceScreenCaptureBroker@@QEAAJXZ @ 0x18021D384
 * Callers:
 *     ??$MakeAndInitialize@VPenWorkspaceScreenCaptureBroker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18021C75C (--$MakeAndInitialize@VPenWorkspaceScreenCaptureBroker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z @ 0x18046A8C0 (-IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z.c)
 *     ?IsStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z @ 0x18046A980 (-IsStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z.c)
 *     ?OpenTokenForProcess@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAX@Z @ 0x18046AAD0 (-OpenTokenForProcess@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAX@Z.c)
 */

__int64 __fastcall PenWorkspaceScreenCaptureBroker::RuntimeClassInitialize(PenWorkspaceScreenCaptureBroker *this)
{
  HANDLE CurrentProcess; // rax
  void **v2; // r8
  signed int IsStronglyNamed; // ebx
  bool *v4; // r8
  bool v5; // sf
  __int64 v6; // rdx
  CallerIdentity *v8; // rax
  bool *v9; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PenWorkspaceScreenCaptureBroker *v11; // [rsp+30h] [rbp+8h] BYREF
  HANDLE hObject; // [rsp+38h] [rbp+10h] BYREF

  v11 = this;
  LOBYTE(v11) = 0;
  CurrentProcess = GetCurrentProcess();
  IsStronglyNamed = ARI::ProcessToken::SysAppId::OpenTokenForProcess(CurrentProcess, &hObject, v2);
  if ( !IsStronglyNamed )
  {
    IsStronglyNamed = ARI::ProcessToken::SysAppId::IsStronglyNamed(hObject, &v11, v4);
    if ( hObject != (HANDLE)-4LL )
      CloseHandle(hObject);
  }
  v5 = IsStronglyNamed < 0;
  if ( IsStronglyNamed > 0 )
  {
    IsStronglyNamed = (unsigned __int16)IsStronglyNamed | 0x80070000;
    v5 = IsStronglyNamed < 0;
  }
  if ( v5 )
  {
    v6 = 21LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\screenshotbroker.cpp",
      (const char *)(unsigned int)IsStronglyNamed);
    return (unsigned int)IsStronglyNamed;
  }
  if ( (_BYTE)v11 )
  {
    LOBYTE(v11) = 0;
    v8 = (CallerIdentity *)GetCurrentProcess();
    IsStronglyNamed = CallerIdentity::IsProcessAppContainer(v8, &v11, v9);
    if ( IsStronglyNamed < 0 )
    {
      v6 = 25LL;
      goto LABEL_8;
    }
    if ( (_BYTE)v11 )
    {
      IsStronglyNamed = -2147024891;
      v6 = 28LL;
      goto LABEL_8;
    }
  }
  return 0LL;
}
