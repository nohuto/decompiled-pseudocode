/*
 * XREFs of ?AddEndpoint@DWMCursorBroker@@UEAAJUtagMsgRoutingInfo@@I_N@Z @ 0x18019B680
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FB28 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?CreateMotionTransformAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z @ 0x18019B764 (-CreateMotionTransformAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z.c)
 *     ?GetNextEndpointIndex@DWMCursorBroker@@AEAAJPEAI@Z @ 0x18019BB94 (-GetNextEndpointIndex@DWMCursorBroker@@AEAAJPEAI@Z.c)
 */

__int64 __fastcall DWMCursorBroker::AddEndpoint(__int64 a1, __int64 a2, int a3, char a4)
{
  DWMCursorBroker *v4; // rsi
  int NextEndpointIndex; // eax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rbp
  __int64 ***v13; // rdi
  __int64 **i; // rbx
  unsigned int v16[14]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = (DWMCursorBroker *)(a1 - 8);
  NextEndpointIndex = DWMCursorBroker::GetNextEndpointIndex((DWMCursorBroker *)(a1 - 8), v16);
  if ( NextEndpointIndex < 0 )
  {
    v10 = 213LL;
LABEL_10:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)NextEndpointIndex);
    return 0LL;
  }
  v11 = v16[0];
  v12 = 3LL * v16[0];
  NextEndpointIndex = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 168) + 112LL))(
                        *(_QWORD *)(a1 + 168),
                        a2,
                        a1 + 8 * (v12 + 26));
  if ( NextEndpointIndex < 0 )
  {
    v10 = 217LL;
    goto LABEL_10;
  }
  *(_DWORD *)(a1 + 8 * v12 + 200) = a3;
  *(_BYTE *)(a1 + 24 * v11 + 216) = a4;
  v13 = *(__int64 ****)(a1 + 48);
  for ( i = *v13; i != (__int64 **)v13; i = (__int64 **)*i )
  {
    NextEndpointIndex = DWMCursorBroker::CreateMotionTransformAndVerifySend(v4, (struct DWMCursor *)i[3], v16[0]);
    if ( NextEndpointIndex < 0 )
    {
      v10 = 224LL;
      goto LABEL_10;
    }
  }
  return 0LL;
}
