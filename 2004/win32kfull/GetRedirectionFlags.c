/*
 * XREFs of GetRedirectionFlags @ 0x1C0024D40
 * Callers:
 *     _SetLayeredWindowAttributes @ 0x1C001EDB4 (_SetLayeredWindowAttributes.c)
 *     zzzUpdateLayeredWindow @ 0x1C0024D74 (zzzUpdateLayeredWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C0051748 (RecreateRedirectionBitmap.c)
 *     _GetLayeredWindowAttributes @ 0x1C01353EC (_GetLayeredWindowAttributes.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01E7E1C (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     xxxPrintWindow @ 0x1C01E8730 (xxxPrintWindow.c)
 * Callees:
 *     _GetProp @ 0x1C0022FD8 (_GetProp.c)
 */

__int64 __fastcall GetRedirectionFlags(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 Prop; // rax

  v1 = 0;
  Prop = GetProp(a1, (unsigned __int16)atomLayer, 1LL);
  if ( Prop )
    return *(unsigned int *)(Prop + 32);
  return v1;
}
