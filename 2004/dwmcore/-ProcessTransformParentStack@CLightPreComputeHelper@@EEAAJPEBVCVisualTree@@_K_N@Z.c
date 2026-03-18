/*
 * XREFs of ?ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x18019BDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x180003B58 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x180004440 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ @ 0x180006018 (-GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800A1EB8 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A28A8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?Pop@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z @ 0x1800D5C4C (-Pop@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z.c)
 *     ?UpdateRelativeLayout@CPreComputeHelper@@IEAAXPEAVCVisual@@@Z @ 0x18019C140 (-UpdateRelativeLayout@CPreComputeHelper@@IEAAXPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CLightPreComputeHelper::ProcessTransformParentStack(
        CLightPreComputeHelper *this,
        const struct CVisualTree *a2,
        __int64 a3,
        char a4)
{
  int *v4; // r13
  __int64 **TreeData; // r14
  unsigned __int64 v7; // r15
  CVisual *v8; // rbx
  CVisual *TransformParentNoRef; // rax
  char v10; // bp
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // edi
  struct CVisual *v14; // rax
  CPreComputeHelper *v15; // rcx
  struct CTreeData *v16; // rsi
  unsigned __int64 v17; // rax
  int updated; // eax
  __int64 v19; // rcx
  CVisual *v21; // [rsp+80h] [rbp+8h] BYREF
  struct CTreeData *v22; // [rsp+88h] [rbp+10h] BYREF
  __int64 v23; // [rsp+90h] [rbp+18h]
  char v24; // [rsp+98h] [rbp+20h]

  v24 = a4;
  v23 = a3;
  v21 = 0LL;
  v4 = (int *)((char *)this + 8);
  TreeData = 0LL;
  v7 = 1LL;
  CWatermarkStack<CVisual *,64,2,10>::Pop((int *)this + 2, &v21);
  v8 = v21;
  if ( v21 != *((CVisual **)a2 + 7) )
  {
    TransformParentNoRef = CVisual::GetTransformParentNoRef(v21);
    if ( !TransformParentNoRef )
      TransformParentNoRef = (CVisual *)*((_QWORD *)v8 + 10);
    TreeData = CVisual::FindTreeData(TransformParentNoRef, a2);
    v7 = (unsigned __int64)TreeData[15];
  }
  while ( 1 )
  {
    v22 = 0LL;
    v10 = 0;
    v11 = CVisual::EnsureTreeData(v8, a2, &v22);
    v13 = v11;
    if ( v11 < 0 )
      break;
    v14 = CVisual::GetTransformParentNoRef(v8);
    v16 = v22;
    if ( v14 && (!*((_BYTE *)v22 + 18) || *((_QWORD *)v22 + 35) != v23) )
      v10 = 1;
    CPreComputeHelper::UpdateRelativeLayout(v15, v8);
    v17 = *((_QWORD *)v16 + 15);
    if ( v17 < v7 )
    {
      updated = CVisual::UpdateWorldTransform((CComposition **)v8, a2, v16, v10, (const struct CTreeData *)TreeData);
      v13 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, updated, 0x2A8u, 0LL);
        return v13;
      }
      if ( !v24 )
        CVisual::PropagateFlags((__int64)v8, 5u);
      *((_QWORD *)v16 + 30) = 0LL;
      v17 = *((_QWORD *)v16 + 15);
    }
    TreeData = (__int64 **)v16;
    v7 = v17;
    if ( !CWatermarkStack<CVisual *,64,2,10>::Pop(v4, &v21) )
      return v13;
    v8 = v21;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x295u, 0LL);
  return v13;
}
