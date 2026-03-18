/*
 * XREFs of ?DxgkEnableFormattingBuffer@@YAXH@Z @ 0x1C0309BD4
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C0029028 (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?EnableFormattingBuffer@DXGGLOBAL@@QEAAXH@Z @ 0x1C0309D30 (-EnableFormattingBuffer@DXGGLOBAL@@QEAAXH@Z.c)
 */

void __fastcall DxgkEnableFormattingBuffer(int a1)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL_GetGlobal();
  DXGGLOBAL::EnableFormattingBuffer(Global, a1);
}
