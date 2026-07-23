/*
 * XREFs of FsRtlIs32BitProcess @ 0x14088BDF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall FsRtlIs32BitProcess(__int64 a1)
{
  __int64 v1; // rdx
  char result; // al
  __int16 v3; // cx

  v1 = *(_QWORD *)(a1 + 1408);
  result = 0;
  if ( v1 )
  {
    v3 = *(_WORD *)(v1 + 8);
    if ( v3 == 332 || v3 == 452 )
      return 1;
  }
  return result;
}
