/*
 * XREFs of MiReferenceDataSubsections @ 0x1402FD12C
 * Callers:
 *     MiInsertInSystemSpace @ 0x1402FADE0 (MiInsertInSystemSpace.c)
 * Callees:
 *     MiAddViewsForSection @ 0x1403155F0 (MiAddViewsForSection.c)
 *     MiLocateSubsectionNode @ 0x140316AE0 (MiLocateSubsectionNode.c)
 *     MiOffsetToProtos @ 0x140320B50 (MiOffsetToProtos.c)
 *     MiControlAreaUsingExtents @ 0x140332C50 (MiControlAreaUsingExtents.c)
 *     MiDecrementLargeSubsections @ 0x140540410 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x140541480 (MiIncrementLargeSubsections.c)
 */

__int64 __fastcall MiReferenceDataSubsections(__int64 a1, __int64 *a2, unsigned __int64 a3, int a4, unsigned int *a5)
{
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v10; // rdx
  ULONG_PTR v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r12
  __int16 v14; // si
  int v15; // eax
  int v16; // ebp
  int v17; // eax
  unsigned int v19; // r8d
  __int64 SubsectionNode; // rax
  int v21; // [rsp+24h] [rbp-34h]
  __int64 v22[6]; // [rsp+28h] [rbp-30h] BYREF

  v6 = *a2;
  v7 = 0;
  v22[0] = 0LL;
  *a5 = 3;
  v21 = 0;
  v11 = MiOffsetToProtos(a1, v6, v22);
  if ( !v11 )
    return 3221225503LL;
  v13 = v22[0] + a3;
  if ( a4 )
  {
    v14 = 136;
    if ( !v22[0] && (a3 & 0x1FF) == 0 )
    {
      if ( *(_QWORD *)(a1 + 64) )
      {
        if ( (unsigned int)MiControlAreaUsingExtents(a1, v10, v12) )
        {
          v21 = 1;
          if ( a3 == *(_DWORD *)(v11 + 44) && !*(_QWORD *)(v11 + 8) )
            v14 = 1160;
        }
      }
    }
  }
  else
  {
    v14 = 264;
  }
  v15 = MiAddViewsForSection(v11);
  v16 = v15;
  if ( (v14 & 0x400) == 0 )
    goto LABEL_5;
  if ( v15 < 0 )
  {
    v16 = MiAddViewsForSection(v11);
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
      LOBYTE(v7) = (*(_DWORD *)(v11 + 48) & 0xC0000000) == 0x40000000;
      *a5 = v7;
    }
    else
    {
      v19 = MiIncrementLargeSubsections(v11, v13);
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
          SubsectionNode = MiLocateSubsectionNode(a1, (a3 << 12) + *a2 - 1, 0LL);
          MiDecrementLargeSubsections(v11, SubsectionNode);
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
