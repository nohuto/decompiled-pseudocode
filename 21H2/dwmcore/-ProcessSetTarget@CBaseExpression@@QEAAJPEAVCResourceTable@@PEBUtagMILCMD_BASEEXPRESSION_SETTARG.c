/*
 * XREFs of ?ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETTARGET@@@Z @ 0x180064658
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A325C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x180064714 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800A0B90 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ @ 0x1801D9EAC (-GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ.c)
 */

__int64 __fastcall CBaseExpression::ProcessSetTarget(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BASEEXPRESSION_SETTARGET *a3)
{
  const struct tagMILCMD_BASEEXPRESSION_SETTARGET *v3; // r9
  struct CResource *ResourceWithoutType; // rdi
  unsigned int v5; // r8d
  CBaseExpression *v7; // r11
  char v8; // dl
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v13; // rcx
  char v14; // [rsp+30h] [rbp-18h]

  v3 = a3;
  ResourceWithoutType = 0LL;
  v5 = *((_DWORD *)a3 + 3);
  v7 = this;
  if ( v5 )
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, v5);
  *((_DWORD *)v7 + 50) = v5;
  *((_DWORD *)v7 + 51) = *((_DWORD *)v3 + 2);
  v8 = *((_BYTE *)v7 + 208) & 0xBF | (*((_BYTE *)v3 + 40) != 0 ? 0x40 : 0);
  *((_BYTE *)v7 + 208) = v8;
  if ( (v8 & 0x40) == 0 || CBaseExpression::GetAnimationLoggingManagerNoRef(v7) )
  {
    v14 = *((_BYTE *)v3 + 32);
    v9 = CBaseExpression::SetTarget(
           v7,
           *((unsigned int *)a2 + 12),
           ResourceWithoutType,
           *((unsigned int *)v3 + 4),
           *((_DWORD *)v3 + 9),
           *((unsigned __int16 *)v3 + 17),
           v14,
           *((_QWORD *)v3 + 3));
    v11 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x63u, 0LL);
    else
      return 0;
  }
  else
  {
    v11 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2003303421, 0x59u, 0LL);
  }
  return v11;
}
