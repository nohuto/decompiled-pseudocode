/*
 * XREFs of ?xxxHandleMenuPainting@@YGXPAUtagWND@@ABV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x196AEB
 * Callers:
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     _xxxEndPaint@8 @ 0x12580 (_xxxEndPaint@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxBeginPaint@8 @ 0x7140C (_xxxBeginPaint@8.c)
 *     _xxxMenuDraw@12 @ 0xB5D6E (_xxxMenuDraw@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall xxxHandleMenuPainting(struct tagVWPL **a1, int **a2)
{
  int *v4; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v7; // edx
  _DWORD v9[3]; // [esp+Ch] [ebp-54h] BYREF
  HDC v10[17]; // [esp+18h] [ebp-48h] BYREF

  v9[2] = 0;
  memset(v10, 0, 0x40u);
  v4 = a2[2];
  if ( !v4 )
    v4 = (int *)**a2;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v9[0] = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = v9;
  v9[1] = v4;
  if ( v4 )
    HMLockObject(v4);
  xxxBeginPaint(a1, v10);
  v7 = (int)a2[2];
  if ( !v7 )
    v7 = **a2;
  xxxMenuDraw(v10[0], v7, a1);
  xxxEndPaint(a1, v10);
  return ThreadUnlock1();
}
