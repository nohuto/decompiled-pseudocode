/*
 * XREFs of ?GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z @ 0x1800CBE30
 * Callers:
 *     ?GetCpuClip@CDrawingContext@@QEAAJPEAVCCpuClip@@@Z @ 0x180094BD4 (-GetCpuClip@CDrawingContext@@QEAAJPEAVCCpuClip@@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009FA80 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18009B4C0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD884 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CScopedClipStack::GetTopCpuClipInScope(CScopedClipStack *this, const struct CShape **a2)
{
  int v2; // eax
  unsigned int v3; // ebp
  int v6; // r10d
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // r14d
  __int64 v11; // rdi
  CShape *v12; // rcx
  int v13; // esi
  int v14; // eax
  __int64 v15; // rsi
  struct CShape *v16; // r12
  int v18; // eax
  __int64 v19; // rcx
  void (__fastcall ***v20)(_QWORD, __int64); // rcx
  struct CShape *v21; // [rsp+60h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 6);
  v3 = 0;
  if ( !v2 || (v6 = *(_DWORD *)(88LL * (unsigned int)(v2 - 1) + *(_QWORD *)this + 4)) == 0 )
  {
    *a2 = 0LL;
    return v3;
  }
  v7 = *((_QWORD *)this + 114);
  v8 = v7;
  if ( *(_QWORD *)(112LL * (unsigned int)(*((_DWORD *)this + 234) - 1) + v7 + 88)
    || (v9 = 0LL, v10 = *((_DWORD *)this + 234) - v6, v10 >= *((_DWORD *)this + 234)) )
  {
LABEL_13:
    *a2 = *(const struct CShape **)(112LL * (unsigned int)(*((_DWORD *)this + 234) - 1) + v8 + 88);
    return v3;
  }
  while ( 1 )
  {
    v11 = 112LL * v10;
    if ( !*(_QWORD *)(v11 + v7 + 88) )
      break;
LABEL_12:
    v8 = *((_QWORD *)this + 114);
    ++v10;
    v7 = v8;
    v9 = *(_QWORD *)(v11 + v8 + 88);
    if ( v10 >= *((_DWORD *)this + 234) )
      goto LABEL_13;
  }
  v21 = 0LL;
  if ( v9 )
  {
    v18 = CShape::Combine(v9, v8, *(_QWORD *)(v11 + v7), v11 + v7 + 16, 1, &v21);
    v3 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, v18, 0xE3u);
      return v3;
    }
LABEL_10:
    v15 = *((_QWORD *)this + 114);
    v16 = v21;
    if ( *(_BYTE *)(v11 + v15 + 96) )
    {
      v20 = *(void (__fastcall ****)(_QWORD, __int64))(v11 + v15 + 88);
      if ( v20 )
        (**v20)(v20, 1LL);
    }
    *(_QWORD *)(v11 + v15 + 88) = v16;
    *(_BYTE *)(v11 + v15 + 96) = 1;
    goto LABEL_12;
  }
  v12 = *(CShape **)(v11 + v7);
  v13 = -2003292412;
  if ( !v12
    || (v14 = CShape::CopyShape(v12, (const struct CMILMatrix *)(v11 + v7 + 16), &v21), v13 = v14, v3 = v14, v14 >= 0) )
  {
    v3 = v13;
    if ( v13 < 0 )
      goto LABEL_21;
    goto LABEL_10;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v12, 0LL, 0LL, v14, 0x15Eu);
LABEL_21:
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v12, 0LL, 0LL, v13, 0xD9u);
  return v3;
}
