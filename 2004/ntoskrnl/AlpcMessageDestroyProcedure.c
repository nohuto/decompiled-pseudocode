/*
 * XREFs of AlpcMessageDestroyProcedure @ 0x1406DB6D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     PsReturnSharedPoolQuota @ 0x14066A7FC (PsReturnSharedPoolQuota.c)
 *     AlpcpDereferenceBlobEx @ 0x140688570 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1406DB904 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpEnterFreeEventMessageLog @ 0x1408BF5FC (AlpcpEnterFreeEventMessageLog.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
        AlpcpReleasePagedPoolQuota(v3, v6);
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
