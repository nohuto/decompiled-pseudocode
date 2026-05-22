/*
 * XREFs of ?GetCursorDefaultState@@YAJW4InputType@@PEAUCursorState@@@Z @ 0x18002607C
 * Callers:
 *     ?CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z @ 0x180025C20 (-CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z.c)
 *     ?OnCursorTargetChanged@CursorManager@@IEAAJPEAUCursorMessage@@@Z @ 0x1801875D0 (-OnCursorTargetChanged@CursorManager@@IEAAJPEAUCursorMessage@@@Z.c)
 *     ?OnTargetChanged@DWMCursorBroker@@UEAAJPEAUCursorId@@@Z @ 0x18019C0D0 (-OnTargetChanged@DWMCursorBroker@@UEAAJPEAUCursorId@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCursorDefaultState(char a1, __int64 a2)
{
  char v2; // al

  if ( (a1 & 8) != 0 )
  {
    v2 = 1;
  }
  else
  {
    *(_WORD *)(a2 + 1) = 1;
    v2 = 0;
    *(_QWORD *)(a2 + 8) = 32512LL;
  }
  *(_BYTE *)a2 = v2;
  return 0LL;
}
