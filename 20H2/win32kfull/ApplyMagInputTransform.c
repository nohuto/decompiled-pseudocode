/*
 * XREFs of ApplyMagInputTransform @ 0x1C01CEE40
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x1C00406DC (PtInRect.c)
 *     AcquireMagInputLock @ 0x1C0107148 (AcquireMagInputLock.c)
 *     MagInputTransform @ 0x1C0213B18 (MagInputTransform.c)
 *     MagnificationTransformPoint @ 0x1C0213BD4 (MagnificationTransformPoint.c)
 */

__int64 __fastcall ApplyMagInputTransform(unsigned __int64 *a1, unsigned __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rdi

  AcquireMagInputLock();
  result = MagInputTransform();
  v5 = result;
  if ( result )
  {
    if ( PtInRect((_DWORD *)(result + 16), *a1) )
      MagnificationTransformPoint(v5, a1);
    result = PtInRect((_DWORD *)(v5 + 16), *a2);
    if ( (_DWORD)result )
      result = MagnificationTransformPoint(v5, a2);
  }
  _InterlockedExchange64(&gpMagInputLock, 0LL);
  return result;
}
