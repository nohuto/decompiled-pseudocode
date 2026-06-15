/*
 * XREFs of sub_180067CA0 @ 0x180067CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_180067CA0(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)a1[3];
  if ( v2 )
    CoTaskMemFree(v2);
  v3 = (void *)a1[2];
  if ( v3 )
    CoTaskMemFree(v3);
  v4 = (void *)a1[1];
  if ( v4 )
    CoTaskMemFree(v4);
}
