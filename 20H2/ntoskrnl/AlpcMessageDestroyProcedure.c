/*
 * XREFs of AlpcMessageDestroyProcedure @ 0x1406B3D50
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     AlpcpDereferenceBlobEx @ 0x1405F1600 (AlpcpDereferenceBlobEx.c)
 *     PsReturnSharedPoolQuota @ 0x1405F70FC (PsReturnSharedPoolQuota.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1406854E4 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpEnterFreeEventMessageLog @ 0x1408C53AC (AlpcpEnterFreeEventMessageLog.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcMessageDestroyProcedure(__int64 a1)
{
  ULONG_PTR v2; // rcx
  char *v3; // rcx
  void *v4; // rcx
  ULONG_PTR v6; // rdx

  if ( AlpcpMessageLogEnabled )
    AlpcpEnterFreeEventMessageLog(a1);
  v2 = *(_QWORD *)(a1 + 96);
  if ( v2 )
  {
    AlpcpDereferenceBlobEx(v2, 1);
    return 3221225473LL;
  }
  else
  {
    v3 = *(char **)(a1 + 48);
    if ( v3 )
    {
      v6 = 792LL;
      if ( *(_QWORD *)(a1 + 224) )
        v6 = *(_QWORD *)(a1 + 232) + 792LL;
      if ( (*(_DWORD *)(a1 + 40) & 0x400) != 0 )
      {
        PsReturnSharedPoolQuota(v3, v6, 0LL);
      }
      else
      {
        AlpcpReleasePagedPoolQuota((ULONG_PTR)v3, v6);
        ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 48), 0x63706C41u);
      }
      *(_QWORD *)(a1 + 48) = 0LL;
    }
    v4 = *(void **)(a1 + 224);
    if ( v4 )
      ExFreePoolWithTag(v4, 0x42456C41u);
    return 0LL;
  }
}
