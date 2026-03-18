/*
 * XREFs of ??$SetExpressionArray@UtagMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES@@V?$DynArrayIANoCtor@PEAVCBaseExpression@@$01$0A@@@@CBaseExpression@@IEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES@@PEBXIPEAV?$DynArrayIANoCtor@PEAVCBaseExpression@@$01$0A@@@@Z @ 0x1801D2440
 * Callers:
 *     ?ProcessAddExpressionResources@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES@@PEBXI@Z @ 0x1801D2B34 (-ProcessAddExpressionResources@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRA.c)
 *     ?ProcessAddInitialValueExpressions@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_ADDINITIALVALUEEXPRESSIONS@@PEBXI@Z @ 0x1801DB988 (-ProcessAddInitialValueExpressions@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800A3DC0 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800AC2C0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseExpression::SetExpressionArray<tagMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES,DynArrayIANoCtor<CBaseExpression *,2,0>>(
        __int64 a1,
        CResourceTable *a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6)
{
  int v6; // ebp
  __int64 v11; // rsi
  struct CResource *ResourceWithoutType; // rax
  __int64 v13; // rcx
  struct CResource *v14; // rdi
  __int64 v15; // rax
  unsigned int v16; // edx
  int v17; // ebx
  int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  unsigned int v22; // [rsp+20h] [rbp-38h]
  struct CResource *v23; // [rsp+70h] [rbp+18h] BYREF

  v6 = 0;
  if ( !*(_DWORD *)(a3 + 8) )
    return 0;
  v11 = a6;
  while ( 1 )
  {
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *a4);
    v14 = ResourceWithoutType;
    if ( !ResourceWithoutType
      || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
            ResourceWithoutType,
            58LL) )
    {
      break;
    }
    v15 = *(unsigned int *)(v11 + 24);
    v23 = v14;
    v16 = v15 + 1;
    if ( (int)v15 + 1 >= (unsigned int)v15 )
    {
      if ( v16 <= *(_DWORD *)(v11 + 20) )
      {
        *(_QWORD *)(*(_QWORD *)v11 + 8 * v15) = v14;
        *(_DWORD *)(v11 + 24) = v16;
        goto LABEL_12;
      }
      v18 = DynArrayImpl<0>::AddMultipleAndSet(v11, 8, 1, &v23);
      v17 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v18, 0xC0u, 0LL);
    }
    else
    {
      v17 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    if ( v17 < 0 )
    {
      v22 = 298;
      goto LABEL_19;
    }
LABEL_12:
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v14 + 8LL))(v14);
    (*(void (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v14 + 232LL))(v14, a1);
    v19 = (*(__int64 (__fastcall **)(struct CResource *))(*(_QWORD *)v14 + 240LL))(v14);
    v17 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x132u, 0LL);
      return (unsigned int)v17;
    }
    ++a4;
    if ( (unsigned int)++v6 >= *(_DWORD *)(a3 + 8) )
      return 0;
  }
  v17 = -2003303421;
  v22 = 293;
LABEL_19:
  MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v17, v22, 0LL);
  return (unsigned int)v17;
}
