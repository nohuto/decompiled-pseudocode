/*
 * XREFs of CmpKeyFullNameLength @ 0x14061E280
 * Callers:
 *     CmpDoWritethroughReparse @ 0x1405E9D60 (CmpDoWritethroughReparse.c)
 *     CmpCreateKeyControlBlock @ 0x14061CE30 (CmpCreateKeyControlBlock.c)
 *     CmpConstructNameFromKeyNodes @ 0x14061E010 (CmpConstructNameFromKeyNodes.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x140764238 (CmpConstructNameFromKcbNameBlocks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpKeyFullNameLength(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // rax
  int v3; // edx

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
