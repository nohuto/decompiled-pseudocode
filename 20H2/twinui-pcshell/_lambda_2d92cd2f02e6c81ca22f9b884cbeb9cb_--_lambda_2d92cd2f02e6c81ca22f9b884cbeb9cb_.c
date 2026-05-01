/*
 * XREFs of _lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_::_lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_ @ 0x1803BCBD0
 * Callers:
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x1803BC89C (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31.c)
 *     ElementDragData::HideDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x1803BC95C (ElementDragData--HideDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___.c)
 *     ElementDragData::MoveDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x1803BCB20 (ElementDragData--MoveDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_0688f707641f84dad399f01864cccda0___lambda_b0b710aa7dd78fb14938fbcb95e31413___::CAnimationCallbackHandler__lambda_0688f707641f84dad399f01864cccda0___lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x1803BCD10 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_0688f707641f84dad399f01864cccda0___lamb.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetRectWithPreAndPostCallbacks__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb___ @ 0x18042A0C4 (DCompThumbnailHelpers--DCompThumbnail_SetRectWithPreAndPostCallbacks__lambda_ed8ffcce05179564df3.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb___ @ 0x18042A14C (DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_-__lambda_ed.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb___::CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb___ @ 0x18042A3CC (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lamb.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_::_lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)a1 = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)a1);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  return a1;
}
