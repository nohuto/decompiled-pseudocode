/*
 * XREFs of MiReferenceDataSubsections @ 0x1402648D8
 * Callers:
 *     MiInsertInSystemSpace @ 0x140264130 (MiInsertInSystemSpace.c)
 * Callees:
 *     MiControlAreaUsingExtents @ 0x1402241C0 (MiControlAreaUsingExtents.c)
 *     MiOffsetToProtos @ 0x14022EFF0 (MiOffsetToProtos.c)
 *     MiAddViewsForSection @ 0x140248C90 (MiAddViewsForSection.c)
 *     MiLocateSubsectionNode @ 0x14024A460 (MiLocateSubsectionNode.c)
 *     MiDecrementLargeSubsections @ 0x14053AF40 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x14053BFB0 (MiIncrementLargeSubsections.c)
 */

__int64 __fastcall MiReferenceDataSubsections(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        int a4,
        unsigned int *a5)
{
  unsigned __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v10; // rdi
  __int64 v11; // r9
  unsigned __int64 v12; // r12
  unsigned int v13; // esi
  int v14; // eax
  __int64 v15; // r9
  int v16; // ebp
  int v17; // eax
  unsigned int v19; // r8d
  _QWORD *SubsectionNode; // rax
  int v21; // [rsp+24h] [rbp-34h]
  unsigned __int64 v22[6]; // [rsp+28h] [rbp-30h] BYREF

  v6 = *a2;
  v7 = 0;
  v22[0] = 0LL;
  *a5 = 3;
  v21 = 0;
  v10 = MiOffsetToProtos(a1, v6, v22);
  if ( !v10 )
    return 3221225503LL;
  v12 = v22[0] + a3;
  if ( a4 )
  {
    v13 = 136;
    if ( !v22[0] && (a3 & 0x1FF) == 0 )
    {
      if ( *(_QWORD *)(a1 + 64) )
      {
        if ( MiControlAreaUsingExtents(a1) )
        {
          v21 = 1;
          if ( a3 == *(_DWORD *)(v10 + 44) && !*(_QWORD *)(v10 + 8) )
            v13 = 1160;
        }
      }
    }
  }
  else
  {
    v13 = 264;
  }
  v14 = MiAddViewsForSection((__int64 **)v10, v12, (_DWORD *)v13, v11);
  v16 = v14;
  if ( (v13 & 0x400) == 0 )
    goto LABEL_5;
  if ( v14 < 0 )
  {
    v16 = MiAddViewsForSection((__int64 **)v10, v12, (_DWORD *)(v13 & 0xFFFFFBFF), v15);
LABEL_5:
    v17 = 0;
    goto LABEL_6;
  }
  v17 = 1;
LABEL_6:
  if ( v16 >= 0 && v21 )
  {
    if ( v17 )
    {
      LOBYTE(v7) = (*(_DWORD *)(v10 + 48) & 0xC0000000) == 0x40000000;
      *a5 = v7;
    }
    else
    {
      v19 = MiIncrementLargeSubsections(v10, v12);
      if ( v19 != -1 )
      {
        do
        {
          if ( !(a3 % MiLargePageSizes[v19]) )
            break;
          ++v19;
        }
        while ( v19 <= 1 );
        if ( v19 > 1 )
        {
          SubsectionNode = MiLocateSubsectionNode(a1, (a3 << 12) + *a2 - 1, 0);
          MiDecrementLargeSubsections(v10, SubsectionNode);
        }
        else
        {
          *a5 = v19;
        }
      }
    }
  }
  return (unsigned int)v16;
}
