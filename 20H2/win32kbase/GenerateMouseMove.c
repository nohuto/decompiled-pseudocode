/*
 * XREFs of GenerateMouseMove @ 0x1C0055170
 * Callers:
 *     <none>
 * Callees:
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1C0054F94 (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00554EC (_anonymous_namespace_--GetMouseProcessor.c)
 */

void __fastcall GenerateMouseMove(unsigned int a1)
{
  _DWORD *MouseProcessor; // rax
  __int64 v3; // r8
  __int64 v4; // r9

  MouseProcessor = (_DWORD *)anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
    CMouseProcessor::MoveMouseWindowManagement(MouseProcessor, a1, v3, v4);
}
