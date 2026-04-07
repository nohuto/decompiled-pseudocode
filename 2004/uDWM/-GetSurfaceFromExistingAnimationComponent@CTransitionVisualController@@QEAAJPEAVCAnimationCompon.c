/*
 * XREFs of ?GetSurfaceFromExistingAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@PEBUtagRECT@@_NPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEA_NPEAUMilPoint3F@@@Z @ 0x1800367B4
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180034528 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CTransitionVisualController::GetSurfaceFromExistingAnimationComponent(
        CTransitionVisualController *this,
        struct CAnimationComponent *a2,
        const struct tagRECT *a3,
        char a4,
        struct CImageLegacyMilBrushProxy **a5,
        struct CCachedVisualImageProxy **a6,
        bool *a7,
        struct MilPoint3F *a8)
{
  unsigned int v8; // ebx
  __int64 v9; // r10
  unsigned int v12; // ebp
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rdx
  int v18; // eax
  int v19; // ecx
  volatile signed __int32 *v20; // rbx
  volatile signed __int32 *v21; // rax
  volatile signed __int32 *v22; // rdi
  volatile signed __int32 *v23; // rcx
  char v24; // r14
  __int64 v25; // rax
  __int64 v26; // [rsp+20h] [rbp-28h]
  int v27; // [rsp+28h] [rbp-20h]

  v8 = *((_DWORD *)this + 34);
  v9 = 0LL;
  v12 = -2147467259;
  if ( v8 )
  {
    v14 = *((_QWORD *)this + 14);
    while ( 1 )
    {
      v15 = *(_QWORD *)(v14 + 8 * v9);
      v16 = *(_QWORD *)(v15 + 16);
      if ( (unsigned __int64)(v16 + 1) > 1
        && v16 == *((_QWORD *)a2 + 2)
        && *(_BYTE *)(v15 + 67) == a4
        && (((*(_DWORD *)(v15 + 24) >> 26) ^ (*((_DWORD *)a2 + 6) >> 26)) & 1) == 0
        && (((*(_DWORD *)(v15 + 24) >> 28) ^ (*((_DWORD *)a2 + 6) >> 28)) & 1) == 0 )
      {
        break;
      }
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= v8 )
        return v12;
    }
    v17 = *(_QWORD *)(v15 + 40);
    if ( v17 && !*(_BYTE *)(v17 + 967) && !*(_BYTE *)(v15 + 74) )
    {
      v18 = 0;
      if ( a3->right - a3->left >= 0 )
        v18 = a3->right - a3->left;
      if ( v18 == *(_DWORD *)(v17 + 944) )
      {
        v19 = 0;
        if ( a3->bottom - a3->top >= 0 )
          v19 = a3->bottom - a3->top;
        if ( v19 == HIDWORD(*(_QWORD *)(v17 + 944)) )
        {
          v20 = *(volatile signed __int32 **)(v17 + 576);
          if ( v20 )
            _InterlockedIncrement(v20 + 2);
          v21 = *(volatile signed __int32 **)(v17 + 600);
          v22 = v21;
          if ( v21 )
          {
            v23 = *(volatile signed __int32 **)(v17 + 600);
          }
          else
          {
            v22 = *(volatile signed __int32 **)(v17 + 584);
            v23 = v22;
          }
          if ( v23 )
          {
            if ( !v21 )
              v21 = *(volatile signed __int32 **)(v17 + 584);
            _InterlockedIncrement(v21 + 2);
          }
          v24 = *(_BYTE *)(v15 + 67);
          v27 = *(_DWORD *)(v17 + 812);
          v25 = *(_QWORD *)(v15 + 32);
          v26 = *(_QWORD *)(v17 + 804);
          if ( v25 )
          {
            *((_QWORD *)a2 + 4) = v25;
            _InterlockedIncrement((volatile signed __int32 *)(v25 + 8));
          }
          v12 = 0;
          if ( *a5 )
            CBaseObject::Release(*a5);
          *a5 = (struct CImageLegacyMilBrushProxy *)v22;
          if ( v22 )
            _InterlockedIncrement(v22 + 2);
          if ( *a6 )
            CBaseObject::Release(*a6);
          *a6 = (struct CCachedVisualImageProxy *)v20;
          if ( v20 )
            _InterlockedIncrement(v20 + 2);
          *a7 = v24;
          *(_QWORD *)a8 = v26;
          *((_DWORD *)a8 + 2) = v27;
          if ( v22 )
            CBaseObject::Release((CBaseObject *)v22);
          if ( v20 )
            CBaseObject::Release((CBaseObject *)v20);
        }
      }
    }
  }
  return v12;
}
