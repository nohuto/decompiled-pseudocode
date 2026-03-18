/*
 * XREFs of ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180048E38
 * Callers:
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x1800460F4 (-SetSize@CVisual@@QEAAXMM@Z.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x180047600 (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800487B4 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180048940 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z @ 0x18004C450 (-CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z.c)
 *     ?UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z @ 0x18008F470 (-UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180091060 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x1800A24D0 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x1800E11F0 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORM@@@Z @ 0x1800E2DFC (-ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORM@@@Z.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x1800E941C (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x1800F058C (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPA.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::OnOuterTransformChanged(CVisual *this)
{
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 v4; // rcx
  _BYTE *v5; // rdx
  unsigned int v6; // eax
  _QWORD ***v7; // rcx
  _QWORD **v8; // rcx
  _QWORD *i; // rax
  __int64 v10; // rcx
  _BYTE *v11; // rdx
  unsigned int v12; // eax
  _QWORD ***v13; // rcx
  _QWORD **v14; // rcx
  _QWORD *j; // rax

  *((_QWORD *)this + 76) = 0LL;
  v2 = *((_QWORD *)this + 29);
  if ( *(int *)v2 >= 0 )
    goto LABEL_2;
  v4 = *(unsigned int *)(v2 + 4);
  v5 = (_BYTE *)(v2 + 8);
  v6 = 0;
  if ( (_DWORD)v4 )
  {
    while ( *v5 != 1 )
    {
      ++v6;
      ++v5;
      if ( v6 >= (unsigned int)v4 )
        goto LABEL_19;
    }
    goto LABEL_6;
  }
LABEL_19:
  if ( v6 < (unsigned int)v4 )
  {
LABEL_6:
    v7 = (_QWORD ***)(v4 + 15 + v2 + 8LL * v6 - (((_BYTE)v4 + 15) & 7));
    goto LABEL_7;
  }
  v7 = 0LL;
LABEL_7:
  v8 = *v7;
  if ( v8 )
  {
    for ( i = *v8; i != v8; i = (_QWORD *)*i )
      *(i - 14) = 0LL;
  }
LABEL_2:
  *((_BYTE *)this + 522) = 1;
  v3 = *((_QWORD *)this + 29);
  if ( *(int *)v3 >= 0 )
    return;
  v10 = *(unsigned int *)(v3 + 4);
  v11 = (_BYTE *)(v3 + 8);
  v12 = 0;
  if ( (_DWORD)v10 )
  {
    while ( *v11 != 1 )
    {
      ++v12;
      ++v11;
      if ( v12 >= (unsigned int)v10 )
        goto LABEL_22;
    }
    goto LABEL_13;
  }
LABEL_22:
  if ( v12 < (unsigned int)v10 )
  {
LABEL_13:
    v13 = (_QWORD ***)(v10 + 15 + v3 + 8LL * v12 - (((_BYTE)v10 + 15) & 7));
    goto LABEL_14;
  }
  v13 = 0LL;
LABEL_14:
  v14 = *v13;
  if ( v14 )
  {
    for ( j = *v14; j != v14; j = (_QWORD *)*j )
      *((_BYTE *)j - 198) = 1;
  }
}
