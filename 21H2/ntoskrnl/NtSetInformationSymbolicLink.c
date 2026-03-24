/*
 * XREFs of NtSetInformationSymbolicLink @ 0x1408DCC30
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140351230 (PsIsCurrentThreadInServerSilo.c)
 *     SeSinglePrivilegeCheck @ 0x140627640 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BDF0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtSetInformationSymbolicLink(void *a1, int a2, unsigned __int64 a3, int a4)
{
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS v8; // ebx
  int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ecx
  PADAPTER_OBJECT v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // ecx
  PADAPTER_OBJECT v17; // rdx
  int v18; // eax
  PADAPTER_OBJECT DmaAdapter; // [rsp+38h] [rbp-10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  DmaAdapter = 0LL;
  v8 = ObReferenceObjectByHandle(a1, 2u, ObpSymbolicLinkObjectType, PreviousMode, (PVOID *)&DmaAdapter, 0LL);
  if ( v8 >= 0 )
  {
    v9 = a2 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
      {
        v8 = -1073741821;
LABEL_30:
        HalPutDmaAdapter(DmaAdapter);
        return (unsigned int)v8;
      }
      if ( a4 == 4 )
      {
        if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) && !PsIsCurrentThreadInServerSilo(v11, v10) )
        {
          if ( PreviousMode )
          {
            if ( (a3 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( a3 + 4 > 0x7FFFFFFF0000LL || a3 + 4 < a3 )
              MEMORY[0x7FFFFFFF0000] = 0;
            v12 = *(_DWORD *)a3;
          }
          else
          {
            v12 = *(_DWORD *)a3;
          }
          v13 = DmaAdapter;
          HIDWORD(DmaAdapter[1].DmaOperations) |= 8u;
          *(_DWORD *)&v13[2].Version = v12;
          v8 = 0;
          goto LABEL_30;
        }
        goto LABEL_29;
      }
    }
    else if ( a4 == 4 )
    {
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) && !PsIsCurrentThreadInServerSilo(v15, v14) )
      {
        if ( PreviousMode )
        {
          if ( (a3 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( a3 + 4 > 0x7FFFFFFF0000LL || a3 + 4 < a3 )
            MEMORY[0x7FFFFFFF0000] = 0;
          v16 = *(_DWORD *)a3;
        }
        else
        {
          v16 = *(_DWORD *)a3;
        }
        v17 = DmaAdapter;
        v18 = HIDWORD(DmaAdapter[1].DmaOperations) | 1;
        HIDWORD(DmaAdapter[1].DmaOperations) = v18;
        if ( v16 )
          HIDWORD(v17[1].DmaOperations) = v18 | 4;
        goto LABEL_30;
      }
LABEL_29:
      v8 = -1073741727;
      goto LABEL_30;
    }
    v8 = -1073741820;
    goto LABEL_30;
  }
  return (unsigned int)v8;
}
