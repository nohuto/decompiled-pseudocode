/*
 * XREFs of TransformForInputMagnification @ 0x1C01CF220
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x1C00406DC (PtInRect.c)
 *     AcquireMagInputLock @ 0x1C0107148 (AcquireMagInputLock.c)
 *     ConvertPointCoordinates @ 0x1C01CEED4 (ConvertPointCoordinates.c)
 *     MagInputTransform @ 0x1C0213B18 (MagInputTransform.c)
 *     MagnificationTransformPoint @ 0x1C0213BD4 (MagnificationTransformPoint.c)
 */

__int64 __fastcall TransformForInputMagnification(__int64 a1, _QWORD *a2, unsigned __int64 *a3)
{
  __int64 result; // rax
  __int64 v7; // r9
  __int64 v8; // rcx
  __int128 v9; // xmm1
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  int v11[6]; // [rsp+30h] [rbp-18h] BYREF

  AcquireMagInputLock();
  result = MagInputTransform();
  if ( result )
  {
    result = PtInRect((_DWORD *)(result + 16), *a3);
    if ( (_DWORD)result )
    {
      MagnificationTransformPoint(v7, a3);
      v8 = *a3;
      v9 = *(_OWORD *)(a1 + 160);
      v10 = *(_OWORD *)(a1 + 176);
      *(_OWORD *)v11 = v9;
      result = ConvertPointCoordinates(v8, v11, (int *)&v10, a2);
    }
  }
  _InterlockedExchange64(&gpMagInputLock, 0LL);
  return result;
}
