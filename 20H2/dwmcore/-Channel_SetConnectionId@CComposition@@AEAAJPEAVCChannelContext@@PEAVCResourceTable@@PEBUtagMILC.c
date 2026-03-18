/*
 * XREFs of ?Channel_SetConnectionId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_SETCONNECTIONID@@@Z @ 0x1800D098C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18016427C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CComposition::Channel_SetConnectionId(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_SETCONNECTIONID *a4)
{
  unsigned int v4; // ebp
  __int64 v6; // rsi
  int v8; // eax
  int v10; // eax
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CResourceTable *v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = a3;
  v4 = *((_DWORD *)a4 + 5);
  v6 = *((_QWORD *)this + 135);
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct CResourceTable **))(**(_QWORD **)(v6 + 40) + 24LL))(
         *(_QWORD *)(v6 + 40),
         *((_QWORD *)a4 + 1),
         v4,
         &v13);
  if ( v8 == -2018375658 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v6 + 24) + 208LL))(
            *(_QWORD *)(v6 + 24),
            v4,
            0LL);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x122,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\messageconversationhost.cpp",
        (const char *)(unsigned int)v10,
        v11);
      JUMPOUT(0x180147668LL);
    }
  }
  else if ( !v8 )
  {
    if ( *((_BYTE *)a4 + 16) )
      *((_DWORD *)a2 + 18) = (_DWORD)v13;
    else
      *((_DWORD *)a2 + 17) = (_DWORD)v13;
  }
  return 0LL;
}
