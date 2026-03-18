/*
 * XREFs of ??$_Emplace_reallocate@$$V@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@QEAAPEAVCShapeRenderTask@@QEAV2@@Z @ 0x180094E98
 * Callers:
 *     ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x1800972E8 (-CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z.c)
 *     ?CreateRenderTask@CShapeDrawingContext@@QEAAJPEAPEAVCShapeRenderTask@@@Z @ 0x18011613C (-CreateRenderTask@CShapeDrawingContext@@QEAAJPEAPEAVCShapeRenderTask@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D737C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAVCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@YAPEAVCShapeRenderTask@@QEAV1@0PEAV1@AEAV?$allocator@VCShapeRenderTask@@@0@@Z @ 0x1801160FE (--$_Uninitialized_move@PEAVCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@std@@YAPEAVC.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1801854E8 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

_DWORD *__fastcall std::vector<CShapeRenderTask>::_Emplace_reallocate<>(void **a1, _BYTE *a2)
{
  __int64 v3; // rdx
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  SIZE_T v11; // rsi
  HANDLE ProcessHeap; // rax
  unsigned __int64 v13; // rbx
  _DWORD *v14; // r14
  _OWORD *v15; // rdx
  _OWORD *v16; // rcx
  _OWORD *v17; // rax
  __int64 v18; // xmm1_8
  _BYTE *v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  _DWORD *result; // rax
  LPVOID v23; // rax
  __int64 v24; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int64 v26; // [rsp+50h] [rbp+8h] BYREF
  void *v27; // [rsp+58h] [rbp+10h] BYREF

  v3 = (unsigned __int128)((a2 - (_BYTE *)*a1) * (__int128)0x4924924924924925LL) >> 64;
  v5 = ((unsigned __int64)v3 >> 63) + (v3 >> 4);
  v6 = 0x6DB6DB6DB6DB6DB7LL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3);
  if ( v6 == 0x492492492492492LL )
    std::_Xlength_error("vector too long");
  v7 = v6 + 1;
  v8 = 0x6DB6DB6DB6DB6DB7LL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3);
  if ( v8 > 0x492492492492492LL - (v8 >> 1) )
    goto LABEL_18;
  v9 = (v8 >> 1) + v8;
  v10 = v7;
  if ( v9 >= v7 )
    v10 = v9;
  if ( v10 > 0x492492492492492LL )
    goto LABEL_18;
  v11 = 56 * v10;
  if ( 56 * v10 < 0x1000 )
  {
    if ( v11 )
    {
      ProcessHeap = GetProcessHeap();
      v13 = (unsigned __int64)HeapAlloc(ProcessHeap, 0, v11);
      if ( v13 )
        goto LABEL_9;
LABEL_24:
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    }
    v13 = 0LL;
    goto LABEL_9;
  }
  if ( v11 + 39 < v11 )
LABEL_18:
    std::_Throw_bad_array_new_length();
  v23 = operator new(v11 + 39);
  if ( !v23 )
  {
    _o__invalid_parameter_noinfo_noreturn(v24);
    __debugbreak();
    goto LABEL_24;
  }
  v13 = ((unsigned __int64)v23 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
  *(_QWORD *)(v13 - 8) = v23;
LABEL_9:
  v14 = (_DWORD *)(v13 + 56 * v5);
  *v14 = 0;
  v15 = a1[1];
  v16 = *a1;
  if ( a2 == (_BYTE *)v15 )
  {
    v17 = (_OWORD *)v13;
    while ( v16 != v15 )
    {
      *v17 = *v16;
      v17 = (_OWORD *)((char *)v17 + 56);
      *(_OWORD *)((char *)v17 - 40) = v16[1];
      *(_OWORD *)((char *)v17 - 24) = v16[2];
      v18 = *((_QWORD *)v16 + 6);
      v16 = (_OWORD *)((char *)v16 + 56);
      *((_QWORD *)v17 - 1) = v18;
    }
  }
  else
  {
    std::_Uninitialized_move<CShapeRenderTask *>(v16, a2, v13);
    std::_Uninitialized_move<CShapeRenderTask *>(a2, a1[1], v14 + 14);
  }
  v19 = *a1;
  if ( *a1 )
  {
    v20 = (_BYTE *)a1[2] - v19;
    v27 = *a1;
    v21 = 8 * (v20 >> 3);
    v26 = v21;
    if ( v21 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v27, &v26);
      v21 = v26;
      v19 = v27;
    }
    operator delete(v19, v21);
  }
  result = v14;
  *a1 = (void *)v13;
  a1[1] = (void *)(v13 + 56 * v7);
  a1[2] = (void *)(v11 + v13);
  return result;
}
