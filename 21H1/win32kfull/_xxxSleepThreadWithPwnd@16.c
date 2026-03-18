/*
 * XREFs of _xxxSleepThreadWithPwnd@16 @ 0xAB35C
 * Callers:
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 * Callees:
 *     ?xxxRealSleepThread@@YGHIKHHPAW4SLEEP_STATUS@@@Z @ 0x45220 (-xxxRealSleepThread@@YGHIKHHPAW4SLEEP_STATUS@@@Z.c)
 *     _WaitMaskIncludesUserInput@4 @ 0x45832 (_WaitMaskIncludesUserInput@4.c)
 *     _xxxUpdateInputHangInfo@8 @ 0x6C0FA (_xxxUpdateInputHangInfo@8.c)
 */

int __fastcall xxxSleepThreadWithPwnd(int a1, int a2, int a3, int a4)
{
  int v6; // edi
  int v7; // ebx
  int v9; // [esp+0h] [ebp-Ch]
  enum SLEEP_STATUS *v10; // [esp+4h] [ebp-8h]

  v6 = 0;
  if ( WaitMaskIncludesUserInput(a2) && *(_DWORD *)(a1 + 8) == _gptiCurrent )
  {
    v6 = 1;
    xxxUpdateInputHangInfo(a1, 0);
  }
  v7 = xxxRealSleepThread(0, a2, 1u, 0, 0, v9, v10);
  if ( v6 )
    xxxUpdateInputHangInfo(a1, 1);
  return v7;
}
