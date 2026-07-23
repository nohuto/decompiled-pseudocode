/*
 * XREFs of NtSetInformationSymbolicLink @ 0x1408D9630
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140205DF0 (PsIsCurrentThreadInServerSilo.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtSetInformationSymbolicLink(
        HANDLE LinkHandle,
        SYMBOLIC_LINK_INFO_CLASS SymbolicLinkInformationClass,
        PVOID SymbolicLinkInformation,
        ULONG SymbolicLinkInformationLength)
{
  KPROCESSOR_MODE PreviousMode; // r14
  int v8; // ebx
  __int32 v9; // esi
  int v10; // ecx
  PADAPTER_OBJECT v11; // rax
  int v12; // ecx
  PADAPTER_OBJECT v13; // rdx
  int v14; // eax
  PADAPTER_OBJECT DmaAdapter; // [rsp+38h] [rbp-10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  DmaAdapter = 0LL;
  v8 = ObReferenceObjectByHandle(LinkHandle, 2u, ObpSymbolicLinkObjectType, PreviousMode, (PVOID *)&DmaAdapter, 0LL);
  if ( v8 >= 0 )
  {
    v9 = SymbolicLinkInformationClass - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
      {
        v8 = -1073741821;
LABEL_30:
        HalPutDmaAdapter(DmaAdapter);
        return v8;
      }
      if ( SymbolicLinkInformationLength == 4 )
      {
        if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) && !PsIsCurrentThreadInServerSilo() )
        {
          if ( PreviousMode )
          {
            if ( ((unsigned __int8)SymbolicLinkInformation & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned __int64)SymbolicLinkInformation + 4 > 0x7FFFFFFF0000LL
              || (char *)SymbolicLinkInformation + 4 < SymbolicLinkInformation )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
            }
            v10 = *(_DWORD *)SymbolicLinkInformation;
          }
          else
          {
            v10 = *(_DWORD *)SymbolicLinkInformation;
          }
          v11 = DmaAdapter;
          HIDWORD(DmaAdapter[1].DmaOperations) |= 8u;
          *(_DWORD *)&v11[2].Version = v10;
          v8 = 0;
          goto LABEL_30;
        }
        goto LABEL_29;
      }
    }
    else if ( SymbolicLinkInformationLength == 4 )
    {
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) && !PsIsCurrentThreadInServerSilo() )
      {
        if ( PreviousMode )
        {
          if ( ((unsigned __int8)SymbolicLinkInformation & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)SymbolicLinkInformation + 4 > 0x7FFFFFFF0000LL
            || (char *)SymbolicLinkInformation + 4 < SymbolicLinkInformation )
          {
            MEMORY[0x7FFFFFFF0000] = 0;
          }
          v12 = *(_DWORD *)SymbolicLinkInformation;
        }
        else
        {
          v12 = *(_DWORD *)SymbolicLinkInformation;
        }
        v13 = DmaAdapter;
        v14 = HIDWORD(DmaAdapter[1].DmaOperations) | 1;
        HIDWORD(DmaAdapter[1].DmaOperations) = v14;
        if ( v12 )
          HIDWORD(v13[1].DmaOperations) = v14 | 4;
        goto LABEL_30;
      }
LABEL_29:
      v8 = -1073741727;
      goto LABEL_30;
    }
    v8 = -1073741820;
    goto LABEL_30;
  }
  return v8;
}
