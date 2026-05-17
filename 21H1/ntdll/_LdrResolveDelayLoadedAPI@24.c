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

int __stdcall LdrResolveDelayLoadedAPI(_BYTE *a1, _BYTE *a2, int a3, int a4, char *a5, int a6)
{
  int v6; // edi
  int v7; // edx
  int v8; // eax
  int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // ecx
  _DWORD *v12; // eax
  int v13; // eax
  int v15; // eax
  char v16; // cl
  char v17; // cl
  int v18; // [esp+0h] [ebp-40h]
  int v19; // [esp+4h] [ebp-3Ch]
  int v20; // [esp+24h] [ebp-1Ch]

  v6 = 0;
  v7 = a6;
  if ( (a6 & 0xFFFFDFFF) == 8 || ((LdrpPolicyBits & 4) == 0 ? (v8 = -31489) : (v8 = -32513), (v8 & a6) == 0) )
  {
    if ( (*a2 & 1) != 0 )
    {
      v9 = 0;
      if ( a1 )
      {
        if ( a1 == (_BYTE *)LdrpSystemDllBase )
        {
          v9 = LdrpNtDllDataTableEntry;
        }
        else
        {
          RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
          v10 = LdrpModuleBaseAddressIndex;
          if ( (dword_4B3A67A8 & 1) != 0 && LdrpModuleBaseAddressIndex )
            v10 = (unsigned int)&LdrpModuleBaseAddressIndex ^ LdrpModuleBaseAddressIndex;
          if ( v10 )
          {
            while ( (unsigned int)a1 >= *(_DWORD *)(v10 - 80) )
            {
              if ( (unsigned int)a1 <= *(_DWORD *)(v10 - 80) )
                goto LABEL_20;
              v11 = *(_DWORD *)(v10 + 4);
              if ( (dword_4B3A67A8 & 1) == 0 || !v11 )
                goto LABEL_18;
              v10 ^= v11;
LABEL_19:
              if ( !v10 )
              {
LABEL_20:
                if ( v10 )
                {
                  v9 = v10 - 104;
                  v12 = *(_DWORD **)(v10 - 104 + 80);
                  if ( v12[3] != -1 && (*(_BYTE *)(*v12 - 32) & 0x20) == 0 )
                    _InterlockedIncrement((volatile signed __int32 *)(v9 + 156));
                }
                goto LABEL_22;
              }
            }
            v11 = *(_DWORD *)v10;
            if ( (dword_4B3A67A8 & 1) != 0 && v11 )
            {
              v10 ^= v11;
              goto LABEL_19;
            }
LABEL_18:
            v10 = v11;
            goto LABEL_19;
          }
LABEL_22:
          RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
          v7 = a6;
        }
      }
      if ( v9 )
        v13 = 0;
      else
        v13 = -1073741515;
      if ( v13 >= 0 )
      {
        v20 = *(_DWORD *)a5;
        if ( (unsigned int)(*(_DWORD *)a5 - (_DWORD)a1) < *(_DWORD *)(v9 + 32) )
        {
          if ( (*(_DWORD *)(v9 + 52) & 0x8000) != 0 )
          {
            v6 = LdrpHandleProtectedDelayload(a3, a4, a5, v7, v18, v19);
            goto LABEL_28;
          }
          v20 = LdrpHandleUnprotectedDelayLoad(a3, a4, a5, v7);
          if ( v20 )
          {
            if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
            {
              v15 = LdrpUnsuppressAddressTakenIat(a5 - a1);
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
                    a1,
                    v15);
                  v16 = ShowSnaps;
                }
                if ( (v16 & 0x10) != 0 )
                  __debugbreak();
              }
            }
          }
        }
        v6 = v20;
LABEL_28:
        LdrpDereferenceModule(v9);
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
          a1,
          v13);
        v17 = ShowSnaps;
      }
      if ( (v17 & 0x10) != 0 )
        __debugbreak();
    }
  }
  return v6;
}
