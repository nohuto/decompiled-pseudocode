/*
 * XREFs of CmpKeyFullNameLength @ 0x1407C4930
 * Callers:
 *     CmpDoWritethroughReparse @ 0x140680100 (CmpDoWritethroughReparse.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x1406E137C (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpCreateKeyControlBlock @ 0x1407C3850 (CmpCreateKeyControlBlock.c)
 *     CmpConstructNameFromKeyNodes @ 0x1407C8830 (CmpConstructNameFromKeyNodes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpKeyFullNameLength(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // rdx
  int v3; // eax

  v1 = 0;
  while ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0x40000) != 0 && *(_QWORD *)(a1 + 72) )
    {
      a1 = *(_QWORD *)(a1 + 72);
    }
    else
    {
      v2 = *(_QWORD *)(a1 + 80);
      v3 = *(unsigned __int16 *)(v2 + 24);
      if ( (*(_DWORD *)v2 & 1) != 0 )
        v3 *= 2;
      a1 = *(_QWORD *)(a1 + 72);
      v1 += v3 + 2;
    }
  }
  return v1;
}
