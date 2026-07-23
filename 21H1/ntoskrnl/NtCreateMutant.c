/*
 * XREFs of NtCreateMutant @ 0x140679390
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeMutant @ 0x1402DEBD0 (KeInitializeMutant.c)
 *     ObCreateObjectEx @ 0x140601F10 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140602150 (ObInsertObjectEx.c)
 */

NTSTATUS __cdecl NtCreateMutant(
        PHANDLE MutantHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN InitialOwner)
{
  char PreviousMode; // di
  __int64 v8; // rcx
  NTSTATUS inserted; // ecx
  __int64 v11; // [rsp+20h] [rbp-48h]
  PRKMUTANT Mutant; // [rsp+50h] [rbp-18h] BYREF
  __int64 v13; // [rsp+58h] [rbp-10h] BYREF

  v13 = 0LL;
  Mutant = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)MutantHandle < 0x7FFFFFFF0000LL )
      v8 = (__int64)MutantHandle;
    *(_QWORD *)v8 = *(_QWORD *)v8;
  }
  inserted = ObCreateObjectEx(
               PreviousMode,
               ExMutantObjectType,
               (__int64)ObjectAttributes,
               PreviousMode,
               v11,
               56,
               0,
               0,
               &Mutant,
               0LL);
  if ( inserted >= 0 )
  {
    KeInitializeMutant(Mutant, InitialOwner);
    inserted = ObInsertObjectEx((PADAPTER_OBJECT)Mutant, 0LL, DesiredAccess, 0, 0, 0LL, &v13);
    LODWORD(Mutant) = inserted;
    if ( inserted >= 0 )
      *MutantHandle = (HANDLE)v13;
  }
  return inserted;
}
