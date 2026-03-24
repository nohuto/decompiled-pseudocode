/*
 * XREFs of VidSchiStartContextRunningTimeAtISR @ 0x1C00142A0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0piixqq_EtwWriteTransfer @ 0x1C002D230 (McTemplateK0piixqq_EtwWriteTransfer.c)
 */

char __fastcall VidSchiStartContextRunningTimeAtISR(LARGE_INTEGER *a1, int a2, int a3)
{
  LARGE_INTEGER v3; // rdi
  LARGE_INTEGER v5; // r9

  v3 = a1[12];
  a1[56].QuadPart = 0LL;
  if ( *(_DWORD *)(v3.QuadPart + 2884) == 1 )
    a1[58] = KeQueryPerformanceCounter(0LL);
  if ( bTracingEnabled )
  {
    v5 = a1[7];
    if ( !v5.QuadPart || (a1[14].LowPart & 0x40) != 0 )
      v5.LowPart = (unsigned int)a1;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      McTemplateK0piixqq_EtwWriteTransfer(
        a1[56].QuadPart,
        a2,
        a3,
        v5.LowPart,
        a1[56].QuadPart,
        a1[55].QuadPart,
        *(_QWORD *)(v3.QuadPart + 2008),
        a1[54].HighPart,
        0);
  }
  return 1;
}
