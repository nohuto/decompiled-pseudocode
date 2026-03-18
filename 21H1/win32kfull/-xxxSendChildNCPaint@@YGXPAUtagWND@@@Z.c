/*
 * XREFs of ?xxxSendChildNCPaint@@YGXPAUtagWND@@@Z @ 0x715FC
 * Callers:
 *     _xxxBeginPaint@8 @ 0x7140C (_xxxBeginPaint@8.c)
 * Callees:
 *     ?xxxSendNCPaint@@YGXPAUtagWND@@PAUHRGN__@@@Z @ 0x73CC0 (-xxxSendNCPaint@@YGXPAUtagWND@@PAUHRGN__@@@Z.c)
 *     _ThreadLockExchangeAlways@8 @ 0x7D602 (_ThreadLockExchangeAlways@8.c)
 */

void __thiscall xxxSendChildNCPaint(_DWORD *this)
{
  int i; // esi
  int v2; // eax
  struct tagWND *v3; // [esp+0h] [ebp-10h]
  HRGN v4[3]; // [esp+4h] [ebp-Ch] BYREF

  v4[2] = 0;
  v4[0] = *(HRGN *)(_gptiCurrent + 228);
  *(_DWORD *)(_gptiCurrent + 228) = v4;
  v4[1] = 0;
  for ( i = this[15]; i; i = *(_DWORD *)(i + 48) )
  {
    v2 = *(_DWORD *)(i + 20);
    if ( !*(_DWORD *)(v2 + 92) && (*(_BYTE *)(v2 + 9) & 8) != 0 )
    {
      ThreadLockExchangeAlways(i, v4);
      xxxSendNCPaint(v3, v4[0]);
    }
  }
  ThreadUnlock1();
}
