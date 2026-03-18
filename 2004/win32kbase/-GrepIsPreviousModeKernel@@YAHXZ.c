/*
 * XREFs of ?GrepIsPreviousModeKernel@@YAHXZ @ 0x1C00CF220
 * Callers:
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0086240 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     GreCreateRectRgn @ 0x1C014F830 (GreCreateRectRgn.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 */

__int64 GrepIsPreviousModeKernel(void)
{
  __int64 ThreadWin32Thread; // rax
  unsigned int v1; // ecx

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v1 = 0;
  if ( !ThreadWin32Thread || (*(_DWORD *)(ThreadWin32Thread + 328) & 0x20) != 0 )
    return 1;
  return v1;
}
