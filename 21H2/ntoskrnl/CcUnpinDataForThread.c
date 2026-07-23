/*
 * XREFs of CcUnpinDataForThread @ 0x1408679E0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceForThreadLite @ 0x140212B30 (ExReleaseResourceForThreadLite.c)
 *     CcUnpinFileDataEx @ 0x1402FF380 (CcUnpinFileDataEx.c)
 *     CcUnpinData @ 0x1406FF050 (CcUnpinData.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __stdcall CcUnpinDataForThread(PVOID Bcb, ERESOURCE_THREAD ResourceThreadId)
{
  _DWORD *v2; // r9
  char *v3; // rbx
  PVOID *i; // rdi

  v3 = (char *)Bcb;
  if ( ((unsigned __int8)Bcb & 1) != 0 )
  {
    v3 = (char *)((unsigned __int64)Bcb & 0xFFFFFFFFFFFFFFFEuLL);
LABEL_9:
    CcUnpinFileDataEx(v3, 1, 0, v2);
    return;
  }
  if ( *(_WORD *)Bcb != 762 )
  {
    ExReleaseResourceForThreadLite((PERESOURCE)((char *)Bcb + 72), ResourceThreadId);
    goto LABEL_9;
  }
  for ( i = (PVOID *)((char *)Bcb + 16); *i; ++i )
    CcUnpinData(*i);
  ExFreePoolWithTag(v3, 0);
}
