/*
 * XREFs of ??$SetExpressionArray@UtagMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES@@V?$DynArrayIANoCtor@PEAVCBaseExpression@@$01$0A@@@@CBaseExpression@@IEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES@@PEBXIPEAV?$DynArrayIANoCtor@PEAVCBaseExpression@@$01$0A@@@@Z @ 0x1800E5314
 * Callers:
 *     ?ProcessAddExpressionResources@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES@@PEBXI@Z @ 0x180222594 (-ProcessAddExpressionResources@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800BDA3C (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBaseExpression@@$0A@@@QEAAJPEFBQEAVCBaseExpression@@I@Z @ 0x1800CB2A0 (-AddMultipleAndSet@-$DynArray@PEAVCBaseExpression@@$0A@@@QEAAJPEFBQEAVCBaseExpression@@I@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseExpression::SetExpressionArray<tagMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES,DynArrayIANoCtor<CBaseExpression *,2,0>>(
        __int64 a1,
        CResourceTable *a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6)
{
  int v6; // esi
  struct CResource *ResourceWithoutType; // rax
  __int64 v12; // rcx
  struct CResource *v13; // rdi
  int v14; // eax
  unsigned int v15; // ebx
  int v17; // r9d
  unsigned int v18; // [rsp+20h] [rbp-38h]
  struct CResource *v19; // [rsp+70h] [rbp+18h] BYREF

  v6 = 0;
  if ( *(_DWORD *)(a3 + 8) )
  {
    while ( 1 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *a4);
      v13 = ResourceWithoutType;
      if ( !ResourceWithoutType
        || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
              ResourceWithoutType,
              58LL) )
      {
        break;
      }
      if ( (*(__int64 (__fastcall **)(struct CResource *))(*(_QWORD *)v13 + 224LL))(v13) )
      {
        v18 = 316;
        goto LABEL_15;
      }
      v19 = v13;
      v14 = DynArray<CBaseExpression *,0>::AddMultipleAndSet(a6, &v19);
      v15 = v14;
      if ( v14 < 0 )
      {
        v18 = 319;
        goto LABEL_12;
      }
      (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v13 + 8LL))(v13);
      (*(void (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v13 + 216LL))(v13, a1);
      v14 = (*(__int64 (__fastcall **)(struct CResource *))(*(_QWORD *)v13 + 232LL))(v13);
      v15 = v14;
      if ( v14 < 0 )
      {
        v18 = 327;
LABEL_12:
        v17 = v14;
        goto LABEL_16;
      }
      ++a4;
      if ( (unsigned int)++v6 >= *(_DWORD *)(a3 + 8) )
        return 0;
    }
    v18 = 308;
LABEL_15:
    v17 = -2003303421;
    v15 = -2003303421;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v17, v18);
  }
  else
  {
    return 0;
  }
  return v15;
}
