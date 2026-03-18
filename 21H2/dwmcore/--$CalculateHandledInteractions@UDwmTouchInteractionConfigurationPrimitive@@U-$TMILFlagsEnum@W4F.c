/*
 * XREFs of ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x180187810
 * Callers:
 *     ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18018A678 (-CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAx.c)
 * Callees:
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x1800E0B5C (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     _anonymous_namespace_::AxisContainsMotion @ 0x18018A194 (_anonymous_namespace_--AxisContainsMotion.c)
 *     ?ComputeHandledInteractionsFromLocal@CInteractionProcessor@@AEAA?AUInteractionAxis@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x18018B364 (-ComputeHandledInteractionsFromLocal@CInteractionProcessor@@AEAA-AUInteractionAxis@@AEBUD2DVecto.c)
 *     ?ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA?AUD2DMatrix@@PEAV?$DynArray@UAxisWithType@@$0A@@@@Z @ 0x18018C4C0 (-ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA-AUD2DMatrix@@PEAV-$DynArray@UAxisWi.c)
 *     ?ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA?AUD2DVector3@@AEBUInteractionMotion@@AEBUD2DMatrix@@PEAU4@2@Z @ 0x18018C6F0 (-ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA-AUD2DVector3@@AEBUInteractionMotio.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
        __int64 a1,
        _BYTE *a2,
        __int128 *a3,
        _BYTE *a4,
        __int64 a5,
        _DWORD *a6,
        _BYTE *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  struct _D3DMATRIX *D3DMatrix; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int128 v16; // xmm3
  _OWORD *v17; // r8
  struct _D3DMATRIX *v18; // rcx
  struct _D3DMATRIX *v19; // rax
  unsigned int v20; // ebx
  __int128 v21; // xmm1
  __int128 v22; // xmm2
  __int128 v23; // xmm3
  _OWORD *v24; // r9
  __m512 *v25; // r10
  __int64 v26; // rax
  char v27; // al
  char v28; // cl
  _QWORD v31[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v32; // [rsp+58h] [rbp-A8h] BYREF
  int v33; // [rsp+68h] [rbp-98h] BYREF
  __int64 v34; // [rsp+70h] [rbp-90h] BYREF
  int v35; // [rsp+78h] [rbp-88h]
  _D3DMATRIX v36; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v37[16]; // [rsp+F0h] [rbp-10h] BYREF

  v31[0] = a8;
  D3DMatrix = CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)&CMILMatrix::Identity, &v36);
  v14 = *(_OWORD *)&D3DMatrix->_21;
  v15 = *(_OWORD *)&D3DMatrix->_31;
  v16 = *(_OWORD *)&D3DMatrix->_41;
  *v17 = *(_OWORD *)&D3DMatrix->_11;
  v17[1] = v14;
  v17[2] = v15;
  v17[3] = v16;
  v19 = CMILMatrix::GetD3DMatrix(v18, &v36);
  v20 = 0;
  v21 = *(_OWORD *)&v19->_21;
  v22 = *(_OWORD *)&v19->_31;
  v23 = *(_OWORD *)&v19->_41;
  *v24 = *(_OWORD *)&v19->_11;
  v24[1] = v21;
  v24[2] = v22;
  v24[3] = v23;
  *v25 = zmmword_1803647B0;
  if ( !*(_QWORD *)a2 )
    return (unsigned int)-2147019873;
  (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)a2 + 40LL))(*(_QWORD *)a2, &v33);
  v26 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)a2 + 48LL))(*(_QWORD *)a2, &v32);
  v34 = *(_QWORD *)v26;
  v35 = *(_DWORD *)(v26 + 8);
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)a5 + 40LL))(a5, v37);
  v32 = *a3;
  if ( *(_QWORD *)a2 == a5 )
  {
    v27 = 0;
    v28 = 0;
  }
  else
  {
    v28 = BYTE1(v32);
    v27 = v32;
  }
  if ( v37[0] == 2 )
  {
    if ( !v27 )
    {
      if ( (a2[16] & 0x40) != 0 )
      {
        *a7 = 1;
        *a6 = 2;
        *(_BYTE *)(a1 + 1248) = 1;
      }
      return v20;
    }
    goto LABEL_14;
  }
  if ( v37[0] != 4 || v28 )
  {
LABEL_14:
    if ( v33 == 1 && !a4[1] && !*a4 )
    {
      CInteractionProcessor::ConstructLocalToGlobalTransform(a1, &v36, a4 + 8);
      CInteractionProcessor::ConvertGlobalMotionToLocalMotion(a1, v31, &v34, &v36, v31[0], a9);
      *(_OWORD *)a7 = *(_OWORD *)CInteractionProcessor::ComputeHandledInteractionsFromLocal(a1, &v32, v31, a10);
      if ( (unsigned __int8)anonymous_namespace_::AxisContainsMotion(a7) )
        *a6 = 2;
    }
    return v20;
  }
  if ( (char)a2[16] < 0 )
  {
    a7[1] = 1;
    *a6 = 2;
    *(_BYTE *)(a1 + 1249) = 1;
  }
  return v20;
}
