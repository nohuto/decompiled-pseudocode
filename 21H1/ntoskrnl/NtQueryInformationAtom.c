/*
 * XREFs of NtQueryInformationAtom @ 0x1406CEE40
 * Callers:
 *     <none>
 * Callees:
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     PsInvokeWin32Callout @ 0x140637B10 (PsInvokeWin32Callout.c)
 *     RtlQueryAtomInAtomTable @ 0x140638160 (RtlQueryAtomInAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x14090EB28 (RtlQueryAtomsInAtomTable.c)
 */

NTSTATUS __cdecl NtQueryInformationAtom(
        RTL_ATOM Atom,
        ATOM_INFORMATION_CLASS AtomInformationClass,
        PVOID AtomInformation,
        ULONG AtomInformationLength,
        PULONG ReturnLength)
{
  __int64 v9; // rcx
  ULONG v10; // ebx
  int AtomsInAtomTable; // edx
  ULONG v12; // eax
  ULONG AtomUsage; // [rsp+34h] [rbp-34h] BYREF
  ULONG AtomNameLength; // [rsp+38h] [rbp-30h] BYREF
  int v16; // [rsp+3Ch] [rbp-2Ch]
  ULONG AtomFlags; // [rsp+40h] [rbp-28h] BYREF
  PVOID AtomTableHandle; // [rsp+48h] [rbp-20h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-18h]

  AtomFlags = 0;
  AtomTableHandle = 0LL;
  AtomNameLength = 0;
  AtomUsage = 0;
  PsInvokeWin32Callout(2, (__int64)&AtomTableHandle, 0, 0LL);
  if ( !AtomTableHandle )
    return -1073741790;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode )
  {
    ProbeForWrite(AtomInformation, AtomInformationLength, 4u);
    if ( ReturnLength )
    {
      v9 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v9 = (__int64)ReturnLength;
      *(_DWORD *)v9 = *(_DWORD *)v9;
    }
  }
  v10 = 0;
  if ( AtomInformationClass )
  {
    if ( AtomInformationClass == AtomTableInformation )
    {
      v10 = 4;
      if ( AtomInformationLength < 4 )
        return -1073741820;
      AtomsInAtomTable = RtlQueryAtomsInAtomTable(
                           AtomTableHandle,
                           (AtomInformationLength - 4) >> 1,
                           AtomInformation,
                           (char *)AtomInformation + 4);
      v16 = AtomsInAtomTable;
      if ( AtomsInAtomTable >= 0 )
        v10 = 2 * *(_DWORD *)AtomInformation + 4;
    }
    else
    {
      AtomsInAtomTable = -1073741821;
      v16 = -1073741821;
    }
  }
  else
  {
    v10 = 6;
    if ( AtomInformationLength < 6 )
      return -1073741820;
    AtomUsage = 0;
    AtomNameLength = AtomInformationLength - 6;
    AtomsInAtomTable = RtlQueryAtomInAtomTable(
                         AtomTableHandle,
                         Atom,
                         &AtomUsage,
                         &AtomFlags,
                         (PWSTR)AtomInformation + 3,
                         &AtomNameLength);
    v16 = AtomsInAtomTable;
    if ( AtomsInAtomTable >= 0 )
    {
      *(_WORD *)AtomInformation = AtomUsage;
      *((_WORD *)AtomInformation + 1) = AtomFlags;
      v12 = AtomNameLength;
      *((_WORD *)AtomInformation + 2) = AtomNameLength;
      v10 = v12 + 8;
    }
  }
  if ( ReturnLength )
    *ReturnLength = v10;
  return AtomsInAtomTable;
}
