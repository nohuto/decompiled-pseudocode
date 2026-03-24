/*
 * XREFs of ?ProcessRoutingInfo@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_ROUTINGINFO@@@Z @ 0x1801C3394
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A325C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E78C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetContextMsgRoutingInfo@CGenericInk@@AEAAJPEAVCD3DDevice@@@Z @ 0x1801C37B8 (-SetContextMsgRoutingInfo@CGenericInk@@AEAAJPEAVCD3DDevice@@@Z.c)
 */

__int64 __fastcall CGenericInk::ProcessRoutingInfo(
        CGenericInk *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GENERICINK_ROUTINGINFO *a3)
{
  int v3; // edi
  __int64 v5; // r14
  __int64 i; // rbx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = 0;
  *(_OWORD *)((char *)this + 328) = *(_OWORD *)((char *)a3 + 8);
  *(_OWORD *)((char *)this + 344) = *(_OWORD *)((char *)a3 + 24);
  *((_QWORD *)this + 45) = *((_QWORD *)a3 + 5);
  *((_BYTE *)this + 320) = 1;
  v5 = (__int64)(*((_QWORD *)this + 19) - *((_QWORD *)this + 18)) >> 3;
  if ( !(_DWORD)v5 )
    return 0LL;
  for ( i = 0LL; ; i += 8LL )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + i) + 24LL) + 24LL);
    v8 = CGenericInk::SetContextMsgRoutingInfo(this, (struct CD3DDevice *)((v7 - 16) & -(__int64)(v7 != 0)));
    v9 = v8;
    if ( v8 < 0 )
      break;
    if ( ++v3 >= (unsigned int)v5 )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x97,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
