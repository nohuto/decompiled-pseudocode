/*
 * XREFs of ?SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z @ 0x1C0258F98
 * Callers:
 *     ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z @ 0x1C0258B38 (-GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z.c)
 *     ?SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z @ 0x1C0258EC0 (-SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z.c)
 * Callees:
 *     xxxSendInput @ 0x1C00BA53C (xxxSendInput.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

void __fastcall InteractiveControlDefaultScroller::SendZoomModifiers(char a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int8 v6; // al
  __int64 v7; // rdi
  __int64 v8; // rsi
  unsigned int v9; // r14d
  __int64 v10; // rbx
  __int64 CurrentKbdTables; // rax
  __int16 v12; // ax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int16 v15; // ax
  _DWORD v16[32]; // [rsp+28h] [rbp-49h] BYREF

  memset(v16, 0, 0x78uLL);
  v6 = a1 & 1;
  if ( (a1 & 1) != 0 )
  {
    v5 = 17LL;
    LOWORD(v16[2]) = 17;
  }
  v7 = v6;
  if ( (a1 & 2) != 0 )
  {
    v5 = 5LL * v6;
    LOWORD(v16[10 * v6 + 2]) = 18;
    v7 = (unsigned int)v6 + 1;
  }
  if ( (a1 & 4) != 0 )
  {
    v5 = 5 * v7;
    LOWORD(v16[10 * v7 + 2]) = 16;
    LODWORD(v7) = v7 + 1;
  }
  v8 = 0LL;
  if ( (_DWORD)v7 )
  {
    v9 = 0;
    if ( a2 )
    {
      do
      {
        v10 = 5LL * v9;
        v16[10 * v9] = 1;
        CurrentKbdTables = GetCurrentKbdTables(v5, v4);
        v12 = InternalMapVirtualKeyEx(LOWORD(v16[10 * v9++ + 2]), 0LL, CurrentKbdTables);
        v16[2 * v10 + 3] = 0;
        HIWORD(v16[2 * v10 + 2]) = v12;
      }
      while ( v9 != (_DWORD)v7 );
    }
    else
    {
      do
      {
        v13 = 5 * v8;
        v16[10 * v8] = 1;
        v14 = GetCurrentKbdTables(v5, v4);
        v15 = InternalMapVirtualKeyEx(LOWORD(v16[10 * v8 + 2]), 0LL, v14);
        v8 = (unsigned int)(v8 + 1);
        v16[2 * v13 + 3] = 2;
        HIWORD(v16[2 * v13 + 2]) = v15;
      }
      while ( (_DWORD)v8 != (_DWORD)v7 );
    }
    xxxSendInput(v7, (__int64)v16);
  }
}
