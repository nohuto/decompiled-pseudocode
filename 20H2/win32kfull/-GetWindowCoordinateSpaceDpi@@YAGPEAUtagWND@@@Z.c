/*
 * XREFs of ?GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z @ 0x1C010A5DC
 * Callers:
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C00441B0 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     IsChildWindowDpiBoundary @ 0x1C0046590 (IsChildWindowDpiBoundary.c)
 *     ScaleDpiOffsetWithSubpixel @ 0x1C01E56DC (ScaleDpiOffsetWithSubpixel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetWindowCoordinateSpaceDpi(struct tagWND *a1)
{
  __int64 v1; // rcx
  unsigned __int16 v2; // bx
  __int64 v3; // rax

  v1 = *((_QWORD *)a1 + 5);
  v2 = (*(_DWORD *)(v1 + 288) >> 8) & 0x1FF;
  if ( !v2 )
  {
    v3 = ValidateHmonitorNoRip(*(_QWORD *)(v1 + 256));
    if ( v3 )
      return *(unsigned __int16 *)(*(_QWORD *)(v3 + 40) + 64LL);
  }
  return v2;
}
