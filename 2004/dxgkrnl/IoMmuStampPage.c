/*
 * XREFs of IoMmuStampPage @ 0x1C005654C
 * Callers:
 *     IoMmuUpdatePfn @ 0x1C00566D0 (IoMmuUpdatePfn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoMmuStampPage(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 != -1 )
  {
    *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 40) + 48) = a2;
    result = ((unsigned __int8)*(_DWORD *)(a1 + 40) + 1) & 3;
    *(_DWORD *)(a1 + 40) = result;
  }
  return result;
}
