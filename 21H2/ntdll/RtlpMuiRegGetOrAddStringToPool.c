/*
 * XREFs of RtlpMuiRegGetOrAddStringToPool @ 0x18003B794
 * Callers:
 *     RtlpMuiRegGetOrAddString @ 0x18003AB74 (RtlpMuiRegGetOrAddString.c)
 *     LdrpLangFallbackListFindNode @ 0x18003B628 (LdrpLangFallbackListFindNode.c)
 * Callees:
 *     RtlpMuiRegGetStringIndexInPool @ 0x18003B9AC (RtlpMuiRegGetStringIndexInPool.c)
 *     memmove @ 0x1800A4480 (memmove.c)
 */

__int64 __fastcall RtlpMuiRegGetOrAddStringToPool(__int64 a1, _WORD *a2, char a3, _DWORD *a4)
{
  int StringIndexInPool; // eax
  __int64 v9; // rbp
  __int64 v11; // rbx
  __int64 v12; // r15
  unsigned __int64 v13; // rbx
  unsigned __int16 v14; // cx
  __int64 v15; // rax

  StringIndexInPool = RtlpMuiRegGetStringIndexInPool();
  LODWORD(v9) = StringIndexInPool;
  if ( a4 )
    *a4 = 0;
  if ( StringIndexInPool >= 0 )
    return (unsigned int)v9;
  if ( a1 && a2 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a2[v11] );
    v12 = *(unsigned __int16 *)(a1 + 10);
    v13 = v11 + 1;
    if ( v13 + v12 > *(unsigned __int16 *)(a1 + 8) )
    {
      if ( a4 )
        *a4 = v13;
    }
    else if ( a3 )
    {
      v14 = *(_WORD *)(a1 + 6);
      if ( v14 < *(_WORD *)(a1 + 4) && is_mul_ok(v13, 2uLL) )
      {
        v9 = *(unsigned __int16 *)(a1 + 6);
        *(_WORD *)(a1 + 6) = v14 + 1;
        *(_WORD *)(a1 + 10) = v12 + 1;
        memmove((void *)(*(_QWORD *)(a1 + 24) + 2LL * (__int16)v12), a2, 2 * v13);
        v15 = *(_QWORD *)(a1 + 16);
        *(_WORD *)(a1 + 10) += v13;
        *(_WORD *)(v15 + 2 * v9) = v12;
        return (unsigned int)v9;
      }
    }
  }
  return 0xFFFFFFFFLL;
}
