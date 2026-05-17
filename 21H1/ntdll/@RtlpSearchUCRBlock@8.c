/*
 * XREFs of @RtlpSearchUCRBlock@8 @ 0x4B2ABF52
 * Callers:
 *     _RtlpDeCommitFreeBlock@16 @ 0x4B2AF0D2 (_RtlpDeCommitFreeBlock@16.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall RtlpSearchUCRBlock(int a1, int a2)
{
  _DWORD *v2; // esi
  _DWORD *i; // ecx

  v2 = (_DWORD *)(a1 + 56);
  for ( i = *(_DWORD **)(a1 + 56); v2 != i; i = (_DWORD *)*i )
  {
    if ( i[2] + i[3] == a2 )
      return i - 2;
  }
  return 0;
}
