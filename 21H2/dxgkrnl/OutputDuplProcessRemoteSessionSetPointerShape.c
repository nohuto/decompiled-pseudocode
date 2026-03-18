/*
 * XREFs of OutputDuplProcessRemoteSessionSetPointerShape @ 0x1C032589C
 * Callers:
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHHH@Z @ 0x1C01A32D0 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 * Callees:
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C01872C0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?ProcessPointerShapeChange@OUTPUTDUPL_MGR@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z @ 0x1C01A1EC0 (-ProcessPointerShapeChange@OUTPUTDUPL_MGR@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SE.c)
 */

OUTPUTDUPL_MGR *__fastcall OutputDuplProcessRemoteSessionSetPointerShape(
        struct _DXGKARG_SETPOINTERPOSITION *a1,
        struct _DXGKARG_SETPOINTERSHAPE *a2,
        UINT a3,
        UINT a4)
{
  OUTPUTDUPL_MGR *result; // rax

  result = FindRemoteOutputDuplMgr();
  if ( result )
    return (OUTPUTDUPL_MGR *)OUTPUTDUPL_MGR::ProcessPointerShapeChange(result, a1, a2, a3, a4);
  return result;
}
