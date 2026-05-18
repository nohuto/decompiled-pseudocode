/*
 * XREFs of sub_18007FC0C @ 0x18007FC0C
 * Callers:
 *     _initp_eh_hooks @ 0x180003F10 (_initp_eh_hooks.c)
 *     _initp_eh_hooks_0 @ 0x180003F60 (_initp_eh_hooks_0.c)
 *     sub_180072F30 @ 0x180072F30 (sub_180072F30.c)
 *     sub_1800B9740 @ 0x1800B9740 (sub_1800B9740.c)
 *     sub_1800BB10C @ 0x1800BB10C (sub_1800BB10C.c)
 *     sub_1800D6F28 @ 0x1800D6F28 (sub_1800D6F28.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18007FC0C(_QWORD *a1)
{
  unsigned int v1; // edx
  unsigned int v2; // r8d

  if ( a1[3] >= 0x10uLL )
    a1 = (_QWORD *)*a1;
  v1 = 0;
  if ( a1 )
  {
    v2 = 5381;
    while ( *(_BYTE *)a1 )
    {
      v2 = *(char *)a1 + 33 * v2;
      a1 = (_QWORD *)((char *)a1 + 1);
    }
    return v2;
  }
  return v1;
}
