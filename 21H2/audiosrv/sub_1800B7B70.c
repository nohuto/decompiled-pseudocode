/*
 * XREFs of sub_1800B7B70 @ 0x1800B7B70
 * Callers:
 *     sub_18007C90E @ 0x18007C90E (sub_18007C90E.c)
 * Callees:
 *     <none>
 */

HLOCAL __fastcall sub_1800B7B70(__int64 a1)
{
  HLOCAL result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return LocalFree(**(HLOCAL **)a1);
  }
  return result;
}
