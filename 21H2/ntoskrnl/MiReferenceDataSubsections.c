/*
 * XREFs of MiReferenceDataSubsections @ 0x140307E7C
 * Callers:
 *     MiInsertInSystemSpace @ 0x140305B30 (MiInsertInSystemSpace.c)
 * Callees:
 *     MiAddViewsForSection @ 0x140320340 (MiAddViewsForSection.c)
 *     MiLocateSubsectionNode @ 0x140321830 (MiLocateSubsectionNode.c)
 *     MiOffsetToProtos @ 0x14032B8A0 (MiOffsetToProtos.c)
 *     MiControlAreaUsingExtents @ 0x14033D9A0 (MiControlAreaUsingExtents.c)
 *     MiDecrementLargeSubsections @ 0x140540650 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1405416C0 (MiIncrementLargeSubsections.c)
 */

__int64 __fastcall MiReferenceDataSubsections(__int64 a1, __int64 *a2, unsigned __int64 a3, int a4, unsigned int *a5)
{
  __int64 v6; // rdx
  unsigned int v7; // ebx
  ULONG_PTR v10; // rdi
  __int64 v11; // r12
  __int16 v12; // si
  int v13; // eax
  int v14; // ebp
  int v15; // eax
  unsigned int v17; // r8d
  __int64 SubsectionNode; // rax
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
  v13 = MiAddViewsForSection(v10);
  v14 = v13;
  if ( (v12 & 0x400) == 0 )
    goto LABEL_5;
  if ( v13 < 0 )
  {
    v14 = MiAddViewsForSection(v10);
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
          SubsectionNode = MiLocateSubsectionNode(a1, (a3 << 12) + *a2 - 1, 0LL);
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
