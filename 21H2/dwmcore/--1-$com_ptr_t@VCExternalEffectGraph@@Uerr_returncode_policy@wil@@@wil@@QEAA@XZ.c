/*
 * XREFs of ??1?$com_ptr_t@VCExternalEffectGraph@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800357A4
 * Callers:
 *     ?Create@CBlurRenderingGraph@@SAJW4D3D_FEATURE_LEVEL@@AEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@PEAPEAV1@@Z @ 0x18003183C (-Create@CBlurRenderingGraph@@SAJW4D3D_FEATURE_LEVEL@@AEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTI.c)
 *     ??1CRenderingTechnique@@QEAA@XZ @ 0x1800357CC (--1CRenderingTechnique@@QEAA@XZ.c)
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEAU3@@Z @ 0x1800535FC (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>::~com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}
