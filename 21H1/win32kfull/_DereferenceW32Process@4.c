/*
 * XREFs of _DereferenceW32Process@4 @ 0xECA22
 * Callers:
 *     <none>
 * Callees:
 *     _DereferenceW32ProcessEx@8 @ 0x480CE (_DereferenceW32ProcessEx@8.c)
 */

// positive sp value has been detected, the output may be wrong!
void __userpurge DereferenceW32Process(int a1@<ebp>, int a2)
{
  int v2; // [esp-8h] [ebp-8h]
  int v3; // [esp-4h] [ebp-4h]

  DereferenceW32ProcessEx(v3, 1, a1, v2);
}
