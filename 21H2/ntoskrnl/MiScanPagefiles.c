/*
 * XREFs of MiScanPagefiles @ 0x14026128C
 * Callers:
 *     MiWorkingSetManager @ 0x140260C00 (MiWorkingSetManager.c)
 * Callees:
 *     MiFreePageFileHashPfns @ 0x140261204 (MiFreePageFileHashPfns.c)
 *     MiSufficientAvailablePages @ 0x140263410 (MiSufficientAvailablePages.c)
 *     PsReferencePartitionSafe @ 0x1402745B0 (PsReferencePartitionSafe.c)
 *     ExQueueWorkItemToPartition @ 0x1403025FC (ExQueueWorkItemToPartition.c)
 */

__int64 __fastcall MiScanPagefiles(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 result; // rax
  unsigned int v6; // ecx
  int v7; // edx
  __int64 i; // r8
  __int64 v9; // rcx
  __int64 v10; // r10

  MiFreePageFileHashPfns(a1, a2, a3, a4);
  result = MiSufficientAvailablePages(a1, 1056LL);
  if ( !(_DWORD)result )
  {
    v6 = *(_DWORD *)(a1 + 6936);
    if ( v6 )
    {
      if ( *(_QWORD *)(a1 + 7600) && !*(_QWORD *)(a1 + 984) )
      {
        result = *(unsigned int *)(a1 + 992);
        if ( (unsigned int)result >= 0x1E )
        {
          v7 = 0;
          for ( i = a1 + 6944; (*(_BYTE *)(*(_QWORD *)i + 204LL) & 0x50) != 0 || !*(_QWORD *)(*(_QWORD *)i + 24LL); i += 8LL )
          {
            if ( ++v7 >= v6 )
            {
              if ( *(_BYTE *)(a1 + 675) == 1 )
              {
                v9 = *(_QWORD *)(a1 + 176);
                *(_BYTE *)(a1 + 675) = 0;
                *(_DWORD *)(a1 + 992) = 0;
                result = PsReferencePartitionSafe(v9);
                if ( (_BYTE)result )
                {
                  *(_QWORD *)(a1 + 984) = a1;
                  *(_QWORD *)(a1 + 976) = MiScanPagefileSpace;
                  *(_QWORD *)(a1 + 960) = v10;
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
