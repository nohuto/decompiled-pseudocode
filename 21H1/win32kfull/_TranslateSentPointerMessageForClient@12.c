/*
 * XREFs of _TranslateSentPointerMessageForClient@12 @ 0x15A172
 * Callers:
 *     __QuerySendMessage@8 @ 0x1813B0 (__QuerySendMessage@8.c)
 * Callees:
 *     ?MakePointerMessage@@YGHKIPAXPAIPAJPAGPAKPAHPAPAUHWND__@@@Z @ 0x15AEA9 (-MakePointerMessage@@YGHKIPAXPAIPAJPAGPAKPAHPAPAUHWND__@@@Z.c)
 */

BOOL __fastcall TranslateSentPointerMessageForClient(int a1, unsigned int *a2, void *a3)
{
  void *v3; // eax
  unsigned int v4; // esi
  int *v6; // [esp+0h] [ebp-18h]
  HWND *v7; // [esp+4h] [ebp-14h]
  unsigned int v8; // [esp+Ch] [ebp-Ch] BYREF
  int v9; // [esp+10h] [ebp-8h] BYREF
  unsigned __int16 v10[2]; // [esp+14h] [ebp-4h] BYREF

  v3 = a3;
  v4 = *a2;
  v8 = 0;
  v9 = 0;
  *(_DWORD *)v10 = 0;
  a3 = 0;
  return MakePointerMessage(v4, (unsigned int)a2, v3, &v8, &v9, v10, (unsigned int *)&a3, v6, v7) != 0;
}
