/*
 * XREFs of _LdrResolveDelayLoadedAPI@24 @ 0x4B2CCA20
 * Callers:
 *     _LdrpResolveDelayLoadDescriptor@8 @ 0x4B2CE4C8 (_LdrpResolveDelayLoadDescriptor@8.c)
 *     _LdrQueryOptionalDelayLoadedAPI@16 @ 0x4B32F5D0 (_LdrQueryOptionalDelayLoadedAPI@16.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _LdrResolveDelayLoadedAPI@24 @ 0x4B2CCA20 (_LdrResolveDelayLoadedAPI@24.c)
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 *     _LdrpHandleProtectedDelayload@24 @ 0x4B2CF930 (_LdrpHandleProtectedDelayload@24.c)
 *     _LdrControlFlowGuardEnforcedWithExportSuppression@0 @ 0x4B2D00AD (_LdrControlFlowGuardEnforcedWithExportSuppression@0.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _LdrpHandleUnprotectedDelayLoad@24 @ 0x4B32F837 (_LdrpHandleUnprotectedDelayLoad@24.c)
 *     _LdrpUnsuppressAddressTakenIat@12 @ 0x4B3345D2 (_LdrpUnsuppressAddressTakenIat@12.c)
 */

PVOID __cdecl LdrResolveDelayLoadedAPI(
        PVOID ParentModuleBase,
        PCIMAGE_DELAYLOAD_DESCRIPTOR DelayloadDescriptor,
        PDELAYLOAD_FAILURE_DLL_CALLBACK FailureDllHook,
        PDELAYLOAD_FAILURE_SYSTEM_ROUTINE FailureSystemHook,
        PIMAGE_THUNK_DATA ThunkAddress,
        ULONG Flags)
{
  void *v6; // edi
  ULONG v7; // edx
  int v8; // eax
  volatile signed __int32 *v9; // ebx
  _RTL_BALANCED_NODE *Root; // eax
  _RTL_BALANCED_NODE *v11; // ecx
  _RTL_BALANCED_NODE *v12; // eax
  int v13; // eax
  int v15; // eax
  char v16; // cl
  char v17; // cl
  int v18; // [esp+0h] [ebp-40h]
  int v19; // [esp+4h] [ebp-3Ch]
  void *ForwarderString; // [esp+24h] [ebp-1Ch]

  v6 = 0;
  v7 = Flags;
  if ( (Flags & 0xFFFFDFFF) == 8 || ((LdrpPolicyBits & 4) == 0 ? (v8 = -31489) : (v8 = -32513), (v8 & Flags) == 0) )
  {
    if ( (DelayloadDescriptor->Attributes.AllAttributes & 1) != 0 )
    {
      v9 = 0;
      if ( ParentModuleBase )
      {
        if ( ParentModuleBase == (PVOID)LdrpSystemDllBase )
        {
          v9 = (volatile signed __int32 *)LdrpNtDllDataTableEntry;
        }
        else
        {
          RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
          Root = LdrpModuleBaseAddressIndex.Root;
          if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && LdrpModuleBaseAddressIndex.Root )
            Root = (_RTL_BALANCED_NODE *)((unsigned int)&LdrpModuleBaseAddressIndex ^ (unsigned int)LdrpModuleBaseAddressIndex.Root);
          if ( Root )
          {
            while ( ParentModuleBase >= Root[-7].Children[1] )
            {
              if ( ParentModuleBase <= Root[-7].Children[1] )
                goto LABEL_20;
              v11 = Root->Children[1];
              if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) == 0 || !v11 )
                goto LABEL_18;
              Root = (_RTL_BALANCED_NODE *)((unsigned int)v11 ^ (unsigned int)Root);
LABEL_19:
              if ( !Root )
              {
LABEL_20:
                if ( Root )
                {
                  v9 = (volatile signed __int32 *)&Root[-9].Children[1];
                  v12 = Root[-2].Children[0];
                  if ( v12[1].Children[0] != (_RTL_BALANCED_NODE *)-1 && ((int)v12->Children[0][-3].Right & 0x20) == 0 )
                    _InterlockedIncrement(v9 + 39);
                }
                goto LABEL_22;
              }
            }
            v11 = Root->Children[0];
            if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && v11 )
            {
              Root = (_RTL_BALANCED_NODE *)((unsigned int)v11 ^ (unsigned int)Root);
              goto LABEL_19;
            }
LABEL_18:
            Root = v11;
            goto LABEL_19;
          }
LABEL_22:
          RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
          v7 = Flags;
        }
      }
      if ( v9 )
        v13 = 0;
      else
        v13 = -1073741515;
      if ( v13 >= 0 )
      {
        ForwarderString = (void *)ThunkAddress->u1.ForwarderString;
        if ( (unsigned int)(LODWORD(ThunkAddress->u1.ForwarderString) - (_DWORD)ParentModuleBase) < *((_DWORD *)v9 + 8) )
        {
          if ( (v9[13] & 0x8000) != 0 )
          {
            v6 = (void *)LdrpHandleProtectedDelayload(FailureDllHook, FailureSystemHook, ThunkAddress, v7, v18, v19);
            goto LABEL_28;
          }
          ForwarderString = (void *)LdrpHandleUnprotectedDelayLoad(FailureDllHook, FailureSystemHook, ThunkAddress, v7);
          if ( ForwarderString )
          {
            if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
            {
              v15 = LdrpUnsuppressAddressTakenIat(ParentModuleBase, (char *)ThunkAddress - (_BYTE *)ParentModuleBase);
              if ( v15 < 0 )
              {
                v16 = ShowSnaps;
                if ( (ShowSnaps & 3) != 0 )
                {
                  LdrpLogDbgPrint(
                    "minkernel\\ntdll\\ldrdload.c",
                    1236,
                    "LdrResolveDelayLoadedAPI",
                    0,
                    "LdrResolveDelayLoadedAPI:Unable to unsuppress the export suppressed functions that are imported in t"
                    "he DLL based at 0x%p.Status = 0x%x\n",
                    ParentModuleBase,
                    v15);
                  v16 = ShowSnaps;
                }
                if ( (v16 & 0x10) != 0 )
                  __debugbreak();
              }
            }
          }
        }
        v6 = ForwarderString;
LABEL_28:
        LdrpDereferenceModule((PVOID)v9);
        return v6;
      }
      v17 = ShowSnaps;
      if ( (ShowSnaps & 3) != 0 )
      {
        LdrpLogDbgPrint(
          "minkernel\\ntdll\\ldrdload.c",
          1257,
          "LdrResolveDelayLoadedAPI",
          0,
          "LdrResolveDelayLoadedAPI:Unable to locate DLL based at 0x%p.Status = 0x%x\n",
          ParentModuleBase,
          v13);
        v17 = ShowSnaps;
      }
      if ( (v17 & 0x10) != 0 )
        __debugbreak();
    }
  }
  return v6;
}
