/*
 * XREFs of ?ProcessSetDefaultAnimation@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CONDITIONALEXPRESSION_SETDEFAULTANIMATION@@@Z @ 0x1801BD86C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x180024548 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800AB870 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7124 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CConditionalExpression::ProcessSetDefaultAnimation(
        CConditionalExpression *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CONDITIONALEXPRESSION_SETDEFAULTANIMATION *a3)
{
  struct CResource *ResourceWithoutType; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v5 = (__int64)ResourceWithoutType;
  if ( !ResourceWithoutType
    || (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
         ResourceWithoutType,
         58LL) )
  {
    v9 = v5;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v9);
    v9 = *((_QWORD *)this + 43);
    *((_QWORD *)this + 43) = v5;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
    return 0;
  }
  else
  {
    v7 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003303421, 0x80u, 0LL);
  }
  return v7;
}
