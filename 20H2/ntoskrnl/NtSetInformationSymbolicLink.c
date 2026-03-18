/*
 * XREFs of NtSetInformationSymbolicLink @ 0x1408DF470
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140227380 (PsIsCurrentThreadInServerSilo.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x14063B9A0 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtSetInformationSymbolicLink(void *a1, int a2, unsigned __int64 a3, int a4)
{
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS v8; // ebx
  int v9; // esi
  int v10; // ecx
  PADAPTER_OBJECT v11; // rax
  int v12; // ecx
  PADAPTER_OBJECT v13; // rdx
  int v14; // eax
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
        if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) && !PsIsCurrentThreadInServerSilo() )
        {
          if ( PreviousMode )
          {
            if ( (a3 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( a3 + 4 > 0x7FFFFFFF0000LL || a3 + 4 < a3 )
              MEMORY[0x7FFFFFFF0000] = 0;
            v10 = *(_DWORD *)a3;
          }
          else
          {
            v10 = *(_DWORD *)a3;
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
    else if ( a4 == 4 )
    {
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) && !PsIsCurrentThreadInServerSilo() )
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
  return (unsigned int)v8;
}
