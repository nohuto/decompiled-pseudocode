/*
 * XREFs of KiEnumerateNextProcessorNumber @ 0x1402CCDF0
 * Callers:
 *     KeGenericProcessorCallback @ 0x14029C4C8 (KeGenericProcessorCallback.c)
 *     PoExecuteIdleCheck @ 0x1402CC750 (PoExecuteIdleCheck.c)
 *     PpmIdleSelectStates @ 0x1403956D0 (PpmIdleSelectStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiEnumerateNextProcessorNumber(__int64 a1, unsigned __int16 **a2)
{
  unsigned int v3; // r9d
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rcx
  __int64 result; // rax

  if ( *a2 )
    v3 = **a2;
  else
    v3 = *((unsigned __int16 *)a2 + 8) + 1;
  v4 = (unsigned __int64)a2[1];
  if ( v4 )
  {
LABEL_4:
    _BitScanForward64(&v5, v4);
    *(_BYTE *)(a1 + 2) = v5;
    *(_WORD *)a1 = *((_WORD *)a2 + 8);
    result = 0LL;
    a2[1] = (unsigned __int16 *)(v4 & ~(1LL << v5));
  }
  else
  {
    while ( (unsigned __int16)++*((_WORD *)a2 + 8) < v3 )
    {
      v4 = *(_QWORD *)&(*a2)[4 * *((unsigned __int16 *)a2 + 8) + 4];
      a2[1] = (unsigned __int16 *)v4;
      if ( v4 )
        goto LABEL_4;
    }
    return 3221226021LL;
  }
  return result;
}
