/*
 * XREFs of _RtlpAnalyzeHeapFailure@12 @ 0x4B36D496
 * Callers:
 *     @RtlpCollectFreeBlocks@4 @ 0x4B2AF680 (@RtlpCollectFreeBlocks@4.c)
 *     _RtlpGrowBlockInPlace@20 @ 0x4B2B1340 (_RtlpGrowBlockInPlace@20.c)
 *     @RtlpCreateSplitBlock@28 @ 0x4B2B16CC (@RtlpCreateSplitBlock@28.c)
 *     _RtlpPopulateListIndex@8 @ 0x4B2B19E4 (_RtlpPopulateListIndex@8.c)
 *     _RtlpExtendHeap@8 @ 0x4B2C0405 (_RtlpExtendHeap@8.c)
 *     _RtlpFindAndCommitPages@8 @ 0x4B2C0640 (_RtlpFindAndCommitPages@8.c)
 *     _RtlpCoalesceFreeBlocks@16 @ 0x4B2C1E63 (_RtlpCoalesceFreeBlocks@16.c)
 *     _RtlpReAllocateHeapInternal@24 @ 0x4B2C2710 (_RtlpReAllocateHeapInternal@24.c)
 *     @RtlpReAllocateHeap@16 @ 0x4B2C2870 (@RtlpReAllocateHeap@16.c)
 *     @RtlpFreeHeap@16 @ 0x4B2C3C10 (@RtlpFreeHeap@16.c)
 *     @RtlpAllocateHeap@24 @ 0x4B2C6F90 (@RtlpAllocateHeap@24.c)
 *     _RtlGetUserInfoHeap@20 @ 0x4B2E37E0 (_RtlGetUserInfoHeap@20.c)
 *     _RtlSetUserValueHeap@16 @ 0x4B2E3990 (_RtlSetUserValueHeap@16.c)
 *     _RtlSetUserFlagsHeap@20 @ 0x4B357160 (_RtlSetUserFlagsHeap@20.c)
 *     _RtlpCoalesceHeap@4 @ 0x4B35776F (_RtlpCoalesceHeap@4.c)
 *     @RtlpSetupExtendedBlock@24 @ 0x4B35CF90 (@RtlpSetupExtendedBlock@24.c)
 *     _RtlZeroHeap@8 @ 0x4B35D0F0 (_RtlZeroHeap@8.c)
 *     _RtlDebugAllocateHeap@12 @ 0x4B35EF05 (_RtlDebugAllocateHeap@12.c)
 *     _RtlDebugFreeHeap@12 @ 0x4B35F758 (_RtlDebugFreeHeap@12.c)
 *     _RtlDebugReAllocateHeap@16 @ 0x4B35FC56 (_RtlDebugReAllocateHeap@16.c)
 *     _RtlpValidateHeap@8 @ 0x4B360697 (_RtlpValidateHeap@8.c)
 *     _RtlpValidateHeapSegment@32 @ 0x4B360CCF (_RtlpValidateHeapSegment@32.c)
 * Callees:
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlpHeapExceptionFilter@8 @ 0x4B375DFF (_RtlpHeapExceptionFilter@8.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 */

void __fastcall RtlpAnalyzeHeapFailure(unsigned int a1, unsigned int a2, int a3)
{
  _DWORD *v5; // edx
  unsigned __int8 v6; // al
  char v7; // al
  unsigned int v8; // eax
  unsigned __int16 *v9; // eax
  unsigned __int16 v10; // ax
  unsigned __int16 v11; // cx
  int v12; // ecx
  unsigned __int16 *v13; // eax
  int v14; // ecx
  unsigned __int16 v15; // ax
  unsigned __int16 *v16; // [esp+20h] [ebp-2Ch]
  unsigned __int16 *v17; // [esp+20h] [ebp-2Ch]
  unsigned __int16 v18; // [esp+28h] [ebp-24h]
  int v19; // [esp+30h] [ebp-1Ch]

  v5 = 0;
  v19 = 0;
  if ( byte_4B3A5DA8 )
    return;
  if ( (*(_DWORD *)(a1 + 76) & *(_DWORD *)a2) == 0 )
  {
    v19 = 10;
    if ( (*(_DWORD *)(a1 + 64) & 0x4000000) != 0
      || *(_BYTE *)(a2 + 3) == (*(_BYTE *)a2 ^ (unsigned __int8)(*(_BYTE *)(a2 + 1) ^ *(_BYTE *)(a2 + 2))) )
    {
      v19 = 1;
      v6 = *(_BYTE *)(a2 + 6);
      v5 = (_DWORD *)(v6 ? (a2 & 0xFFFF0000) + ((1 - v6) << 16) : a1);
      if ( v5[2] == -1114130 )
      {
        v7 = *(_BYTE *)(a2 + 7);
        if ( v7 == 4 || (v19 = 2, a2 >= v5[7]) && a2 < v5[10] && v5[6] == a1 )
        {
          v19 = 3;
          if ( v7 == 3 )
          {
            v8 = *(_DWORD *)(a2 + 24);
            if ( (v8 & 0xFFF) == 0
              && v8 >= v5[7]
              && (unsigned int)(*(_DWORD *)(a2 + 24) + *(_DWORD *)(a2 + 28)) <= v5[10] )
            {
              v19 = 4;
              v16 = **(unsigned __int16 ***)(a2 + 12);
              if ( v16 == *(unsigned __int16 **)(*(_DWORD *)(a2 + 8) + 4) && v16 == (unsigned __int16 *)(a2 + 8) )
              {
                v19 = 5;
                v9 = **(unsigned __int16 ***)(a2 + 20);
                if ( v9 == *(unsigned __int16 **)(*(_DWORD *)(a2 + 16) + 4) && v9 == (unsigned __int16 *)(a2 + 16) )
                {
                  v10 = *(_WORD *)(a1 + 84);
                  v18 = v10;
LABEL_24:
                  v19 = 7;
                  v12 = *(unsigned __int16 *)(a2 + 4);
                  if ( v10 == (_WORD)v12 )
                    goto LABEL_31;
                  v13 = (unsigned __int16 *)(a2 - 8 * (v10 ^ v12));
                  if ( *(_DWORD *)(a1 + 76) )
                  {
                    v14 = *(_DWORD *)v13;
                    if ( (*(_DWORD *)v13 & *(_DWORD *)(a1 + 76)) != 0 )
                      v14 ^= *(_DWORD *)(a1 + 80);
                    v15 = *(_WORD *)(a1 + 84);
                  }
                  else
                  {
                    LOWORD(v14) = *v13;
                    v15 = v18;
                  }
                  if ( (_WORD)v14 == (v15 ^ *(_WORD *)(a2 + 4)) )
                  {
LABEL_31:
                    v19 = 8;
                    if ( (*(_BYTE *)(a2 + 2) & 1) != 0
                      || (v17 = **(unsigned __int16 ***)(a2 + 12), v17 == *(unsigned __int16 **)(*(_DWORD *)(a2 + 8) + 4))
                      && v17 == (unsigned __int16 *)(a2 + 8) )
                    {
                      v19 = 9;
                    }
                  }
                }
              }
            }
          }
          else
          {
            v19 = 6;
            v11 = *(_WORD *)(a1 + 84);
            v18 = v11;
            if ( (v11 ^ *(_WORD *)(a2 + 8 * *(unsigned __int16 *)a2 + 4)) == *(_WORD *)a2 )
            {
              v10 = v11;
              goto LABEL_24;
            }
          }
        }
      }
    }
  }
  if ( *(_DWORD *)(a1 + 76) )
  {
    *(_BYTE *)(a2 + 3) = *(_BYTE *)a2 ^ *(_BYTE *)(a2 + 1) ^ *(_BYTE *)(a2 + 2);
    *(_DWORD *)a2 ^= *(_DWORD *)(a1 + 80);
  }
  switch ( v19 )
  {
    case 2:
      RtlpLogHeapFailure(a2, v5[6], 0, 0);
      break;
    case 3:
      RtlpLogHeapFailure(a2, 3, 0, 0);
      break;
    case 8:
      RtlpLogHeapFailure(a2, 8, 0, 0);
      break;
    default:
      RtlpLogHeapFailure(a2, v19, 0, 0);
      break;
  }
}
