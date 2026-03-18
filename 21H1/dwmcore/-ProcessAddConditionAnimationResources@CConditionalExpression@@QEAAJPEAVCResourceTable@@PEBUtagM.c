/*
 * XREFs of ?ProcessAddConditionAnimationResources@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CONDITIONALEXPRESSION_ADDCONDITIONANIMATIONRESOURCES@@PEBXI@Z @ 0x1801C1D60
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18007E580 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x180092F04 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C1234 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@UConditionExpressionListEntry@CConditionalExpression@@@?$vector@UConditionExpressionListEntry@CConditionalExpression@@V?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@@QEAAPEAUConditionExpressionListEntry@CConditionalExpression@@QEAU23@$$QEAU23@@Z @ 0x1801C1040 (--$_Emplace_reallocate@UConditionExpressionListEntry@CConditionalExpression@@@-$vector@UConditio.c)
 */

__int64 __fastcall CConditionalExpression::ProcessAddConditionAnimationResources(
        CConditionalExpression *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CONDITIONALEXPRESSION_ADDCONDITIONANIMATIONRESOURCES *a3,
        unsigned int *a4)
{
  int v4; // r14d
  CConditionalExpression *v8; // rbx
  unsigned int v9; // edx
  struct CResource *ResourceWithoutType; // rax
  __int64 v11; // rcx
  struct CResource *v12; // rsi
  unsigned int v13; // edx
  struct CResource *v14; // rax
  __int64 v15; // rdi
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // eax
  __int64 v19; // rcx
  __int128 *v20; // rdx
  _OWORD *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  int v25; // r9d
  unsigned int v26; // [rsp+20h] [rbp-20h]
  __int128 v27; // [rsp+30h] [rbp-10h] BYREF
  __int64 v29; // [rsp+90h] [rbp+50h] BYREF

  v4 = 0;
  v8 = this;
  if ( *((_DWORD *)a3 + 2) )
  {
    while ( 1 )
    {
      v9 = *a4;
      v27 = 0LL;
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, v9);
      v12 = ResourceWithoutType;
      if ( !ResourceWithoutType
        || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
              ResourceWithoutType,
              58LL) )
      {
        break;
      }
      (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v12 + 8LL))(v12);
      v13 = a4[1];
      *(_QWORD *)&v27 = v12;
      v14 = CResourceTable::GetResourceWithoutType(a2, v13);
      v15 = (__int64)v14;
      if ( !v14
        || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v14 + 56LL))(v14, 58LL)
        && !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 56LL))(v15, 110LL) )
      {
        v26 = 80;
        goto LABEL_25;
      }
      v29 = v15;
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v29);
      v29 = 0LL;
      *((_QWORD *)&v27 + 1) = v15;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
      a4 += 2;
      (*(void (__fastcall **)(struct CResource *, CConditionalExpression *))(*(_QWORD *)v12 + 232LL))(v12, v8);
      (*(void (__fastcall **)(__int64, CConditionalExpression *))(*(_QWORD *)v15 + 232LL))(v15, v8);
      v16 = (*(__int64 (__fastcall **)(struct CResource *))(*(_QWORD *)v12 + 240LL))(v12);
      v17 = v16;
      if ( v16 < 0 )
      {
        v25 = v16;
        v26 = 94;
        goto LABEL_26;
      }
      v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 240LL))(v15);
      v17 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x5Fu, 0LL);
        goto LABEL_27;
      }
      v8 = this;
      v20 = (__int128 *)*((_QWORD *)this + 41);
      if ( *((__int128 **)this + 42) == v20 )
      {
        std::vector<CConditionalExpression::ConditionExpressionListEntry>::_Emplace_reallocate<CConditionalExpression::ConditionExpressionListEntry>(
          (__int64 *)this + 40,
          (__int64)v20,
          &v27);
      }
      else
      {
        *(_QWORD *)v20 = 0LL;
        if ( v20 != &v27 )
        {
          *(_QWORD *)v20 = v12;
          *(_QWORD *)&v27 = 0LL;
        }
        v21 = (__int128 *)((char *)v20 + 8);
        *(_QWORD *)v21 = 0LL;
        if ( v21 != (__int128 *)((char *)&v27 + 8) )
        {
          *(_QWORD *)v21 = v15;
          *((_QWORD *)&v27 + 1) = 0LL;
        }
        *((_QWORD *)this + 41) += 16LL;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27 + 1);
      v22 = v27;
      if ( (_QWORD)v27 )
      {
        v23 = *(_QWORD *)v27;
        *(_QWORD *)&v27 = 0LL;
        (*(void (__fastcall **)(__int64))(v23 + 16))(v22);
      }
      if ( (unsigned int)++v4 >= *((_DWORD *)a3 + 2) )
        return 0;
    }
    v26 = 68;
LABEL_25:
    v25 = -2003303421;
    v17 = -2003303421;
LABEL_26:
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v25, v26, 0LL);
LABEL_27:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27 + 1);
    if ( (_QWORD)v27 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v27 + 16LL))(v27);
  }
  else
  {
    return 0;
  }
  return v17;
}
