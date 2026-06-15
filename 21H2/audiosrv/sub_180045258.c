/*
 * XREFs of sub_180045258 @ 0x180045258
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_180045258(__int64 a1)
{
  void *v1; // r8

  if ( *(_BYTE *)(a1 + 16) )
  {
    v1 = **(void ***)a1;
    **(_QWORD **)a1 = *(_QWORD *)(a1 + 8);
    if ( v1 )
      CoTaskMemFree(v1);
  }
}
