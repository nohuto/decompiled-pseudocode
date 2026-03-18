/*
 * XREFs of XilCoreCommonBuffer_AcquireBuffer @ 0x1C000DBC0
 * Callers:
 *     CommonBuffer_AcquireBuffer @ 0x1C000DB70 (CommonBuffer_AcquireBuffer.c)
 * Callees:
 *     XilCoreCommonBuffer_AcquireBufferWithSegmenter @ 0x1C0009368 (XilCoreCommonBuffer_AcquireBufferWithSegmenter.c)
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C0014874 (XilCoreCommonBuffer_AllocateBuffers.c)
 */

unsigned int *__fastcall XilCoreCommonBuffer_AcquireBuffer(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        bool *a5)
{
  unsigned int v5; // r10d
  unsigned int *v6; // rax
  unsigned int *v11; // rsi
  unsigned int *v12; // rbx
  __int64 v14; // r8

  v5 = 0;
  v6 = (unsigned int *)(a1 + 32);
  do
  {
    v11 = v6;
    if ( a2 <= *v6 )
      break;
    ++v5;
    v6 += 16;
  }
  while ( v5 < 2 );
  *(_BYTE *)(a1 + 25) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
  v12 = XilCoreCommonBuffer_AcquireBufferWithSegmenter(a1, v11, a3, a4, a5);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 16), *(_BYTE *)(a1 + 25));
  if ( !v12 || *a5 )
  {
    if ( KeGetCurrentIrql() )
    {
      *a5 = 1;
    }
    else
    {
      v14 = v12 == 0LL;
      if ( *a5 )
        v14 = v11[4] + (unsigned int)v14;
      XilCoreCommonBuffer_AllocateBuffers(a1, v11, v14);
      *a5 = 0;
      if ( v12 )
        goto LABEL_6;
      *(_BYTE *)(a1 + 25) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
      v12 = XilCoreCommonBuffer_AcquireBufferWithSegmenter(a1, v11, a3, a4, a5);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 16), *(_BYTE *)(a1 + 25));
    }
  }
  if ( v12 )
  {
LABEL_6:
    v12[11] = a2;
    v12[20] = 1;
  }
  return v12;
}
