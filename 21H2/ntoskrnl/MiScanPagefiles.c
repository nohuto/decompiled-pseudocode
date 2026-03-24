/*
 * XREFs of MiScanPagefiles @ 0x1402732EC
 * Callers:
 *     MiWorkingSetManager @ 0x140272C60 (MiWorkingSetManager.c)
 * Callees:
 *     MiFreePageFileHashPfns @ 0x140273264 (MiFreePageFileHashPfns.c)
 *     MiSufficientAvailablePages @ 0x140275470 (MiSufficientAvailablePages.c)
 *     PsReferencePartitionSafe @ 0x1402AC004 (PsReferencePartitionSafe.c)
 *     ExQueueWorkItemToPartition @ 0x1402F78AC (ExQueueWorkItemToPartition.c)
 */

__int64 __fastcall MiScanPagefiles(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // ecx
  int v4; // edx
  __int64 i; // r8
  __int64 v6; // rcx
  __int64 v7; // r10

  MiFreePageFileHashPfns(a1);
  result = MiSufficientAvailablePages(a1, 1056LL);
  if ( !(_DWORD)result )
  {
    v3 = *(_DWORD *)(a1 + 6936);
    if ( v3 )
    {
      if ( *(_QWORD *)(a1 + 7600) && !*(_QWORD *)(a1 + 984) )
      {
        result = *(unsigned int *)(a1 + 992);
        if ( (unsigned int)result >= 0x1E )
        {
          v4 = 0;
          for ( i = a1 + 6944; (*(_BYTE *)(*(_QWORD *)i + 204LL) & 0x50) != 0 || !*(_QWORD *)(*(_QWORD *)i + 24LL); i += 8LL )
          {
            if ( ++v4 >= v3 )
            {
              if ( *(_BYTE *)(a1 + 675) == 1 )
              {
                v6 = *(_QWORD *)(a1 + 176);
                *(_BYTE *)(a1 + 675) = 0;
                *(_DWORD *)(a1 + 992) = 0;
                result = PsReferencePartitionSafe(v6);
                if ( (_BYTE)result )
                {
                  *(_QWORD *)(a1 + 984) = a1;
                  *(_QWORD *)(a1 + 976) = MiScanPagefileSpace;
                  *(_QWORD *)(a1 + 960) = v7;
                  return ExQueueWorkItemToPartition(a1 + 960);
                }
              }
              return result;
            }
          }
        }
        else
        {
          result = (unsigned int)(result + 1);
          *(_DWORD *)(a1 + 992) = result;
        }
      }
    }
  }
  return result;
}
