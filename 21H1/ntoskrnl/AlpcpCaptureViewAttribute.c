/*
 * XREFs of AlpcpCaptureViewAttribute @ 0x14070A68C
 * Callers:
 *     AlpcpCaptureAttributes @ 0x14060EA80 (AlpcpCaptureAttributes.c)
 * Callees:
 *     AlpcpCaptureViewAttributeInternal @ 0x14070A6DC (AlpcpCaptureViewAttributeInternal.c)
 */

__int64 __fastcall AlpcpCaptureViewAttribute(__int64 a1, __int128 *a2)
{
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int128 v4; // [rsp+30h] [rbp-18h]

  v3 = 0LL;
  v4 = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v3 = *a2;
    v4 = a2[1];
    a2 = &v3;
  }
  return AlpcpCaptureViewAttributeInternal(a1, a2);
}
