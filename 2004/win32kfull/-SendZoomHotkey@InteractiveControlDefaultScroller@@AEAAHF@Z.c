/*
 * XREFs of ?SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z @ 0x1C025A4D0
 * Callers:
 *     ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z @ 0x1C025A148 (-GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z.c)
 * Callees:
 *     xxxSendInput @ 0x1C003A9BC (xxxSendInput.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ?SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z @ 0x1C025A5A8 (-SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z.c)
 */

__int64 __fastcall InteractiveControlDefaultScroller::SendZoomHotkey(
        InteractiveControlDefaultScroller *this,
        __int16 a2)
{
  unsigned int v4; // edi
  unsigned __int16 v5; // si
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 CurrentKbdTables; // rax
  _OWORD v10[5]; // [rsp+20h] [rbp-50h] BYREF

  v4 = 1;
  InteractiveControlDefaultScroller::SendZoomModifiers(*((_BYTE *)this + 53), 1);
  if ( *((_BYTE *)this + 52) != 2 )
  {
    memset(v10, 0, sizeof(v10));
    LODWORD(v10[0]) = 1;
    v5 = ((a2 >> 15) & 2) + 187;
    WORD4(v10[0]) = v5;
    CurrentKbdTables = GetCurrentKbdTables(v7, v6);
    WORD5(v10[0]) = InternalMapVirtualKeyEx(v5, 0LL, CurrentKbdTables);
    *(_OWORD *)((char *)&v10[2] + 8) = v10[0];
    DWORD1(v10[3]) = 2;
    *((_QWORD *)&v10[4] + 1) = *(_QWORD *)&v10[2];
    *(_OWORD *)((char *)&v10[3] + 8) = v10[1];
    xxxSendInput(2u, (__int64)v10);
    return 0;
  }
  return v4;
}
