/*
 * XREFs of AlpcpCaptureHandleAttribute32 @ 0x1407734A4
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1406D59F0 (AlpcpCaptureAttributes.c)
 * Callees:
 *     AlpcpCaptureHandleAttributeInternal @ 0x1405E2350 (AlpcpCaptureHandleAttributeInternal.c)
 */

__int64 __fastcall AlpcpCaptureHandleAttribute32(__int64 a1, __int64 a2)
{
  __int128 v3; // [rsp+30h] [rbp-28h] BYREF
  __int64 v4; // [rsp+40h] [rbp-18h]

  v3 = 0LL;
  v4 = 0LL;
  LODWORD(v3) = *(_DWORD *)a1;
  *((_QWORD *)&v3 + 1) = *(int *)(a1 + 4);
  v4 = *(_QWORD *)(a1 + 8);
  return AlpcpCaptureHandleAttributeInternal((__int64)&v3, a2);
}
