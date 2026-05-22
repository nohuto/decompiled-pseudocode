/*
 * XREFs of ?GetCandidateGestureParameters@EdgyImpl@@QEBA_NPEAIPEAW4OrientationBias@@@Z @ 0x18017BD4C
 * Callers:
 *     ?ConfigureRecognizer@EdgyProcessorTarget@@AEAAJXZ @ 0x18017A61C (-ConfigureRecognizer@EdgyProcessorTarget@@AEAAJXZ.c)
 * Callees:
 *     ?FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z @ 0x180178FAC (-FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z.c)
 */

char __fastcall EdgyImpl::GetCandidateGestureParameters(
        const struct CandidateIdentity ***this,
        unsigned int *a2,
        enum OrientationBias *a3)
{
  const struct CandidateIdentity **v5; // rax
  const struct CandidateIdentity *v7; // rbx
  const struct CandidateIdentity *v8; // r14
  int v9; // edi
  const struct CandidateIdentity **v10; // rbp
  int Edge; // eax
  __int64 v12; // rax
  int v13; // edx
  int v14; // ecx

  *a2 = 0;
  *(_DWORD *)a3 = 0;
  v5 = *this;
  if ( !*this )
    return 0;
  v7 = *v5;
  v8 = v5[1];
  if ( *v5 == v8 )
    return 0;
  v9 = 0;
  do
  {
    v10 = this[3];
    Edge = Edges::FindEdge((Edges *)(v10 + 9), v7);
    if ( Edge >= 0 )
    {
      v12 = (__int64)v10[9] + 128 * (__int64)Edge;
      v13 = *(_DWORD *)(v12 + 92);
      v14 = *(_DWORD *)(v12 + 96);
      if ( v13 )
      {
        if ( v14 )
        {
          *a2 |= v13;
          if ( !v9 )
            *(_DWORD *)a3 = v14;
          ++v9;
        }
      }
    }
    v7 = (const struct CandidateIdentity *)((char *)v7 + 40);
  }
  while ( v7 != v8 );
  return 1;
}
