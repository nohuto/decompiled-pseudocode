/*
 * XREFs of CategoryMaskFromEventRange @ 0x1C00441FC
 * Callers:
 *     _SetWinEventHook @ 0x1C0043FA4 (_SetWinEventHook.c)
 *     DestroyEventHook @ 0x1C0044150 (DestroyEventHook.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CategoryMaskFromEventRange(unsigned int a1, unsigned int a2)
{
  __int64 result; // rax
  _DWORD *v3; // r9
  __int64 v4; // r10

  result = 0LL;
  v3 = &unk_1C0333AC4;
  LODWORD(v4) = 0;
  do
  {
    if ( *(v3 - 1) > a2 )
      break;
    v4 = (unsigned int)(v4 + 1);
    if ( *((_DWORD *)&unk_1C0333AC0 + 2 * v4) - 1 >= a1 )
      result = *v3 | (unsigned int)result;
    v3 += 2;
  }
  while ( (unsigned int)v4 < 0xF );
  return result;
}
