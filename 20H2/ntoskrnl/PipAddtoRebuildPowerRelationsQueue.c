/*
 * XREFs of PipAddtoRebuildPowerRelationsQueue @ 0x14073AEEC
 * Callers:
 *     IoResolveDependency @ 0x1403BEC50 (IoResolveDependency.c)
 *     PipAddDependencyEdgeBetweenNodes @ 0x14050A9E0 (PipAddDependencyEdgeBetweenNodes.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14073ACBC (PnpNewDeviceNodeDependencyCheck.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x1407B12D0 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     PipIsDeviceReadyForPowerRelations @ 0x14073AF78 (PipIsDeviceReadyForPowerRelations.c)
 */

_QWORD *__fastcall PipAddtoRebuildPowerRelationsQueue(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v2; // rdx
  __int64 v3; // rdi
  void *v4; // rcx
  _QWORD *v5; // rbx

  result = (_QWORD *)PipIsDeviceReadyForPowerRelations(a1);
  if ( (_BYTE)result )
  {
    if ( v2 )
    {
      result = *(_QWORD **)(v2 + 312);
      v3 = result[10];
    }
    else
    {
      v3 = 0LL;
    }
    if ( v3 )
    {
      v4 = *(void **)(v3 + 48);
      if ( v4 )
      {
        v5 = (_QWORD *)(v3 + 72);
        if ( (_QWORD *)*v5 == v5 )
        {
          ObfReferenceObjectWithTag(v4, 0x44706E50u);
          ++*(_DWORD *)(v3 + 88);
          result = (_QWORD *)qword_140C45508;
          if ( *(__int64 **)qword_140C45508 != &PiRebuildPowerRelationsQueue )
            __fastfail(3u);
          *v5 = &PiRebuildPowerRelationsQueue;
          *(_QWORD *)(v3 + 80) = result;
          *result = v5;
          qword_140C45508 = v3 + 72;
        }
      }
    }
  }
  return result;
}
