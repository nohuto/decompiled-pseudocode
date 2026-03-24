/*
 * XREFs of AlpcpCaptureViewAttribute @ 0x140661E2C
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1405E6290 (AlpcpCaptureAttributes.c)
 * Callees:
 *     AlpcpCaptureViewAttributeInternal @ 0x140661E7C (AlpcpCaptureViewAttributeInternal.c)
 */

__int64 __fastcall AlpcpCaptureViewAttribute(__int64 a1, __int128 *a2, __int64 a3, __int64 a4)
{
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v6 = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v5 = *a2;
    v6 = a2[1];
    a2 = &v5;
  }
  return AlpcpCaptureViewAttributeInternal(a1, a2, a3, a4);
}
