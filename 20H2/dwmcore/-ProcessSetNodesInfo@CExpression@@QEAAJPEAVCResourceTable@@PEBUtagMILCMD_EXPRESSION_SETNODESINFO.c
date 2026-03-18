/*
 * XREFs of ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x180066374
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z @ 0x180069720 (-ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z.c)
 *     ??$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z @ 0x1800697E8 (--$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x18006FC48 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x18006FCC8 (-SetChannelHandle@CBaseExpression@@IEAAJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800ADC94 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800C8114 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     memset_0 @ 0x1800E3DCC (memset_0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180161928 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

__int64 __fastcall CExpression::ProcessSetNodesInfo(
        unsigned __int64 this,
        struct CResourceTable *a2,
        const struct tagMILCMD_EXPRESSION_SETNODESINFO *a3)
{
  char *v3; // rbp
  unsigned __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 Resource; // r14
  __int64 v9; // rax
  __int64 v10; // r15
  int v11; // eax
  unsigned int v12; // ebx
  void *v13; // rax
  unsigned int v14; // ecx
  size_t v15; // r8
  int v17; // r9d
  int v18; // r8d
  int v19; // r9d
  unsigned int v20; // [rsp+20h] [rbp-38h]
  unsigned int v21; // [rsp+60h] [rbp+8h] BYREF
  unsigned int TracingCookie; // [rsp+78h] [rbp+20h] BYREF

  v3 = (char *)(this + 312);
  v6 = this;
  if ( *(_QWORD *)(this + 312) || (v7 = *((unsigned int *)a3 + 2), !(_DWORD)v7) )
  {
    v20 = 211;
    goto LABEL_26;
  }
  Resource = CResourceTable::GetResource(a2, v7, 169LL);
  if ( !Resource )
  {
    v20 = 218;
LABEL_26:
    v17 = -2003303421;
    v12 = -2003303421;
    goto LABEL_27;
  }
  v9 = CResourceTable::GetResource(a2, *((unsigned int *)a3 + 5), 169LL);
  this = *((unsigned int *)a3 + 9);
  v10 = v9;
  if ( !v9 )
  {
    if ( !(_DWORD)this )
      goto LABEL_6;
    goto LABEL_19;
  }
  if ( !(_DWORD)this )
  {
LABEL_19:
    v20 = 230;
    goto LABEL_26;
  }
LABEL_6:
  if ( *((_DWORD *)a3 + 3) < 4u || *((unsigned int *)a3 + 6) < 8 * this )
  {
    v20 = 239;
    goto LABEL_26;
  }
  ReplaceInterface<CSharedSection,CSharedSection>(v3, Resource);
  ReplaceInterface<CSharedSection,CSharedSection>(v6 + 328, v10);
  *(_DWORD *)(v6 + 320) = *((_DWORD *)a3 + 3);
  *(_DWORD *)(v6 + 324) = *((_DWORD *)a3 + 4);
  *(_DWORD *)(v6 + 344) = *((_DWORD *)a3 + 6);
  *(_DWORD *)(v6 + 348) = *((_DWORD *)a3 + 9);
  *(_DWORD *)(v6 + 352) = *((_DWORD *)a3 + 10);
  v11 = CBaseExpression::SetChannelHandle((CBaseExpression *)v6, *((_DWORD *)a2 + 12));
  v12 = v11;
  if ( v11 < 0 )
  {
    v20 = 254;
    goto LABEL_23;
  }
  if ( *((_DWORD *)a3 + 9) )
  {
    v13 = CSharedSectionBase::ResolveAllocation(
            *(CSharedSectionBase **)(v6 + 328),
            *((unsigned int *)a3 + 7),
            *(unsigned int *)(v6 + 344));
    *(_QWORD *)(v6 + 336) = v13;
    if ( !v13 )
    {
      v12 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0x108u, 0LL);
      goto LABEL_15;
    }
    if ( *((_DWORD *)a3 + 8) )
      memset_0(v13, 0, v15);
  }
  v11 = CBaseExpression::TryRegisterWithExpressionManager((CBaseExpression *)v6);
  v12 = v11;
  if ( v11 < 0 )
  {
    v20 = 272;
LABEL_23:
    v17 = v11;
LABEL_27:
    MilInstrumentationCheckHR_MaybeFailFast(this, 0LL, 0, v17, v20, 0LL);
    goto LABEL_15;
  }
  v12 = 0;
LABEL_15:
  if ( *(int *)(*(_QWORD *)(v6 + 304) + 4LL) < 0
    && (unsigned int)dword_180341E80 > 4
    && (qword_180341E90 & 1) != 0
    && (qword_180341E98 & 1) == qword_180341E98 )
  {
    v21 = v12;
    TracingCookie = CBaseExpression::GetTracingCookie((CBaseExpression *)v6);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_180341E80,
      (unsigned int)&unk_1802E5991,
      v18,
      v19,
      (__int64)&TracingCookie,
      (__int64)&v21);
  }
  return v12;
}
