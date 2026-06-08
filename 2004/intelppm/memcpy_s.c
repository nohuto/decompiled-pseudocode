/*
 * XREFs of memcpy_s @ 0x1C00042D8
 * Callers:
 *     AcpiEval_OSC @ 0x1C0003864 (AcpiEval_OSC.c)
 *     AcpiEval_PDC @ 0x1C0031B04 (AcpiEval_PDC.c)
 * Callees:
 *     AcpiCStateIdleCancel @ 0x1C00015A0 (AcpiCStateIdleCancel.c)
 *     memmove @ 0x1C0004500 (memmove.c)
 *     memset @ 0x1C00047C0 (memset.c)
 */

errno_t __cdecl memcpy_s(void *a1, rsize_t DstSize, const void *Src, rsize_t MaxCount)
{
  errno_t v8; // ebx

  if ( !MaxCount )
    return 0;
  if ( !a1 )
    goto LABEL_11;
  if ( Src && DstSize >= MaxCount )
  {
    memmove(a1, Src, MaxCount);
    return 0;
  }
  memset(a1, 0, DstSize);
  if ( Src )
  {
    if ( DstSize >= MaxCount )
      return 22;
    v8 = 34;
  }
  else
  {
LABEL_11:
    v8 = 22;
  }
  AcpiCStateIdleCancel();
  return v8;
}
