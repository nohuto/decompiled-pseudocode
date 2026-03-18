/*
 * XREFs of MiScanPagefiles @ 0x1402402B8
 * Callers:
 *     MiWorkingSetManager @ 0x140240450 (MiWorkingSetManager.c)
 * Callees:
 *     ExQueueWorkItemToPartition @ 0x14023505C (ExQueueWorkItemToPartition.c)
 *     MiFreePageFileHashPfns @ 0x1402402EC (MiFreePageFileHashPfns.c)
 *     MiSufficientAvailablePages @ 0x1402A1900 (MiSufficientAvailablePages.c)
 *     PsReferencePartitionSafe @ 0x1402D4758 (PsReferencePartitionSafe.c)
 */

__int64 __fastcall MiScanPagefiles(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // r10

  MiFreePageFileHashPfns();
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
          LODWORD(v4) = 0;
          v5 = a1 + 6944;
          while ( (*(_BYTE *)(*(_QWORD *)v5 + 204LL) & 0x50) != 0 || !*(_QWORD *)(*(_QWORD *)v5 + 24LL) )
          {
            v4 = (unsigned int)(v4 + 1);
            v5 += 8LL;
            if ( (unsigned int)v4 >= v3 )
            {
              if ( *(_BYTE *)(a1 + 675) == 1 )
              {
                v6 = *(_QWORD *)(a1 + 176);
                *(_BYTE *)(a1 + 675) = 0;
                *(_DWORD *)(a1 + 992) = 0;
                result = PsReferencePartitionSafe(v6, v4, v5);
                if ( (_BYTE)result )
                {
                  *(_QWORD *)(a1 + 984) = a1;
                  *(_QWORD *)(a1 + 976) = MiScanPagefileSpace;
                  *(_QWORD *)(a1 + 960) = v7;
                  return ExQueueWorkItemToPartition((_QWORD *)(a1 + 960), 2, 0xFFFFFFFF, *(_QWORD *)(a1 + 176));
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
