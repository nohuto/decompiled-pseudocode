/*
 * XREFs of ?IsOfType@CDropShadow@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C5090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDropShadow::IsOfType(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  bool result; // al

  result = 0;
  if ( (unsigned int)a2 <= 0x35 )
  {
    v2 = 0x20202000004000LL;
    if ( _bittest64(&v2, a2) )
      return 1;
  }
  return result;
}
