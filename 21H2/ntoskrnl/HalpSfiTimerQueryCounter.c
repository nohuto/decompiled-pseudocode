/*
 * XREFs of HalpSfiTimerQueryCounter @ 0x1404D5BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpSfiTimerQueryCounter(__int64 a1)
{
  __int64 v1; // r8
  unsigned int v2; // edx
  unsigned int v3; // ecx

  v1 = *(_QWORD *)(a1 + 8);
  v2 = -1 - *(_DWORD *)(v1 + 4);
  do
  {
    v3 = v2;
    v2 = -1 - *(_DWORD *)(v1 + 4);
  }
  while ( v2 < v3 );
  return v2;
}
