/*
 * XREFs of MiReferenceDataSubsections @ 0x14024C080
 * Callers:
 *     MiInsertInSystemSpace @ 0x14024C1E0 (MiInsertInSystemSpace.c)
 * Callees:
 *     MiAddViewsForSection @ 0x14022C750 (MiAddViewsForSection.c)
 *     MiLocateSubsectionNode @ 0x14022E700 (MiLocateSubsectionNode.c)
 *     MiOffsetToProtos @ 0x1402A42A0 (MiOffsetToProtos.c)
 *     MiControlAreaUsingExtents @ 0x1402B5EA0 (MiControlAreaUsingExtents.c)
 *     MiDecrementLargeSubsections @ 0x14053E910 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x14053F980 (MiIncrementLargeSubsections.c)
 */

__int64 __fastcall MiReferenceDataSubsections(__int64 a1, __int64 *a2, unsigned __int64 a3, int a4, unsigned int *a5)
{
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v10; // rdi
  unsigned __int64 v11; // r12
  unsigned int v12; // esi
  int v13; // eax
  int v14; // ebp
  int v15; // eax
  unsigned int v17; // r8d
  _QWORD *SubsectionNode; // rax
  int v19; // [rsp+24h] [rbp-34h]
  __int64 v20[6]; // [rsp+28h] [rbp-30h] BYREF

  v6 = *a2;
  v7 = 0;
  v20[0] = 0LL;
  *a5 = 3;
  v19 = 0;
  v10 = MiOffsetToProtos(a1, v6, v20);
  if ( !v10 )
    return 3221225503LL;
  v11 = v20[0] + a3;
  if ( a4 )
  {
    v12 = 136;
    if ( !v20[0] && (a3 & 0x1FF) == 0 )
    {
      if ( *(_QWORD *)(a1 + 64) )
      {
        if ( (unsigned int)MiControlAreaUsingExtents(a1) )
        {
          v19 = 1;
          if ( a3 == *(_DWORD *)(v10 + 44) && !*(_QWORD *)(v10 + 8) )
            v12 = 1160;
        }
      }
    }
  }
  else
  {
    v12 = 264;
  }
  v13 = MiAddViewsForSection((__int64 **)v10, v11, (_DWORD *)v12);
  v14 = v13;
  if ( (v12 & 0x400) == 0 )
    goto LABEL_5;
  if ( v13 < 0 )
  {
    v14 = MiAddViewsForSection((__int64 **)v10, v11, (_DWORD *)(v12 & 0xFFFFFBFF));
LABEL_5:
    v15 = 0;
    goto LABEL_6;
  }
  v15 = 1;
LABEL_6:
  if ( v14 >= 0 && v19 )
  {
    if ( v15 )
    {
      LOBYTE(v7) = (*(_DWORD *)(v10 + 48) & 0xC0000000) == 0x40000000;
      *a5 = v7;
    }
    else
    {
      v17 = MiIncrementLargeSubsections(v10, v11);
      if ( v17 != -1 )
      {
        do
        {
          if ( !(a3 % MiLargePageSizes[v17]) )
            break;
          ++v17;
        }
        while ( v17 <= 1 );
        if ( v17 > 1 )
        {
          SubsectionNode = MiLocateSubsectionNode(a1, (a3 << 12) + *a2 - 1, 0);
          MiDecrementLargeSubsections(v10, SubsectionNode);
        }
        else
        {
          *a5 = v17;
        }
      }
    }
  }
  return (unsigned int)v14;
}
