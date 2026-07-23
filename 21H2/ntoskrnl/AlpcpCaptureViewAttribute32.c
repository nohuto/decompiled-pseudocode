/*
 * XREFs of AlpcpCaptureViewAttribute32 @ 0x14061776C
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1406D59F0 (AlpcpCaptureAttributes.c)
 * Callees:
 *     AlpcpCaptureViewAttributeInternal @ 0x140656C9C (AlpcpCaptureViewAttributeInternal.c)
 */

__int64 __fastcall AlpcpCaptureViewAttribute32(__int64 a1, _DWORD *a2)
{
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int128 v4; // [rsp+30h] [rbp-18h]

  v3 = 0LL;
  v4 = 0LL;
  LODWORD(v3) = *a2;
  *((_QWORD *)&v3 + 1) = (unsigned int)a2[1];
  *(_QWORD *)&v4 = (unsigned int)a2[2];
  *((_QWORD *)&v4 + 1) = (unsigned int)a2[3];
  return AlpcpCaptureViewAttributeInternal(a1, &v3);
}
