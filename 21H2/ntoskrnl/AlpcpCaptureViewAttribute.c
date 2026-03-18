/*
 * XREFs of AlpcpCaptureViewAttribute @ 0x1407A45E4
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1407AB790 (AlpcpCaptureAttributes.c)
 * Callees:
 *     AlpcpCaptureViewAttributeInternal @ 0x1407A4638 (AlpcpCaptureViewAttributeInternal.c)
 */

__int64 __fastcall AlpcpCaptureViewAttribute(__int64 a1, __int128 *a2)
{
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int128 v4; // [rsp+30h] [rbp-18h]

  v3 = 0LL;
  *(_QWORD *)&v4 = 0LL;
  DWORD2(v4) = 0;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v3 = *a2;
    v4 = a2[1];
    a2 = &v3;
  }
  return AlpcpCaptureViewAttributeInternal(a1, a2);
}
