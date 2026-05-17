/*
 * XREFs of _RtlpxLookupFunctionTable@8 @ 0x4B2BD6C0
 * Callers:
 *     _RtlQueryInformationActivationContext@28 @ 0x4B2B4CC0 (_RtlQueryInformationActivationContext@28.c)
 *     _RtlGuardCheckImageBase@8 @ 0x4B2BC5F3 (_RtlGuardCheckImageBase@8.c)
 *     _RtlPcToFileHeader@8 @ 0x4B2BC650 (_RtlPcToFileHeader@8.c)
 *     _LdrpSnapModule@4 @ 0x4B2BDE10 (_LdrpSnapModule@4.c)
 *     _LdrpHandleProtectedDelayload@24 @ 0x4B2CF930 (_LdrpHandleProtectedDelayload@24.c)
 *     _RtlQueueWorkItem@12 @ 0x4B2E8AE0 (_RtlQueueWorkItem@12.c)
 *     _RtlIsValidHandler@12 @ 0x4B2E9163 (_RtlIsValidHandler@12.c)
 *     _EtwpProviderArrivalCallback@8 @ 0x4B2F1DFF (_EtwpProviderArrivalCallback@8.c)
 *     _RtlGuardCheckLongJumpTarget@12 @ 0x4B3639C0 (_RtlGuardCheckLongJumpTarget@12.c)
 *     _RtlCreateInvertedFunctionTableCacheEntry@8 @ 0x4B36D377 (_RtlCreateInvertedFunctionTableCacheEntry@8.c)
 * Callees:
 *     _RtlpImageDirectoryEntryToData64@24 @ 0x4B2A7346 (_RtlpImageDirectoryEntryToData64@24.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlAddressInSectionTable@12 @ 0x4B2B95F0 (_RtlAddressInSectionTable@12.c)
 *     _RtlImageDirectoryEntryToData@16 @ 0x4B2BDDE0 (_RtlImageDirectoryEntryToData@16.c)
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _RtlpWakeSRWLock@12 @ 0x4B2E3BAB (_RtlpWakeSRWLock@12.c)
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 */

int __usercall RtlpxLookupFunctionTable@<eax>(_DWORD *a1@<edx>, _DWORD *a2@<ecx>, int a3@<ebp>)
{
  bool v3; // zf
  _DWORD *v4; // edi
  unsigned int v5; // esi
  int v6; // ecx
  int v7; // edi
  int v8; // edx
  int *v9; // eax
  unsigned int v10; // esi
  unsigned int v11; // ecx
  signed __int32 v12; // eax
  signed __int32 v13; // ecx
  int result; // eax
  int v15; // ecx
  _DWORD *v16; // esi
  unsigned int v17; // ecx
  int v18; // eax
  __int16 v19; // ax
  unsigned int v20; // esi
  int v21; // edx
  __int16 v22; // ax
  unsigned int v23; // edx
  unsigned int v24; // esi
  signed __int32 v25; // eax
  _DWORD *v26; // eax
  int i; // edx
  int v28; // edi
  int v29; // eax
  signed __int32 v30; // edx
  signed __int32 v31; // eax
  int v32; // eax
  _DWORD v33[2]; // [esp-30h] [ebp-3Ch] BYREF
  char v34; // [esp-28h] [ebp-34h]
  int v35; // [esp-24h] [ebp-30h] BYREF
  int v36; // [esp-20h] [ebp-2Ch] BYREF
  int v37; // [esp-1Ch] [ebp-28h] BYREF
  int v38; // [esp-18h] [ebp-24h] BYREF
  int v39; // [esp-14h] [ebp-20h]
  int v40; // [esp-10h] [ebp-1Ch] BYREF
  unsigned int v41; // [esp-Ch] [ebp-18h]
  _DWORD *v42; // [esp-8h] [ebp-14h] BYREF
  char v43; // [esp-1h] [ebp-Dh]
  int v44; // [esp+0h] [ebp-Ch]
  void *v45; // [esp+4h] [ebp-8h]
  void *retaddr; // [esp+Ch] [ebp+0h]

  v44 = a3;
  v45 = retaddr;
  v3 = LdrInitState == 3;
  v4 = a1;
  v39 = 0;
  v5 = (unsigned int)a2;
  v42 = a1;
  v41 = (unsigned int)a2;
  a1[1] = 0;
  a1[2] = 0;
  if ( !v3 )
  {
LABEL_15:
    if ( (int)NtQueryVirtualMemory(-1, v5, 6, v33, 12, 0) < 0
      || (v15 = v33[0], (v41 = v33[0]) == 0)
      || (v34 & 3) != 0
      || v5 < v33[0] )
    {
      v15 = 0;
      v41 = 0;
    }
    else
    {
      v4[2] = v33[1];
    }
    v4[1] = v15;
    if ( !v15 )
      return v39;
    v40 = 0;
    RtlImageNtHeaderEx(1, v15, 0, 0, &v40);
    if ( (*(_WORD *)(v40 + 94) & 0x400) != 0 )
    {
LABEL_48:
      result = -1;
      v4[3] = -1;
      *v4 = -1;
      return result;
    }
    RtlImageNtHeaderEx(1, v41, 0, 0, &v35);
    v16 = 0;
    v43 = 1;
    v17 = v41;
    v42 = (_DWORD *)v41;
    v38 = 0;
    v37 = 0;
    if ( (v41 & 3) != 0 )
    {
      v17 = v41 & 0xFFFFFFFC;
      v42 = (_DWORD *)(v41 & 0xFFFFFFFC);
      v43 = (v41 & 1) == 0;
    }
    v18 = RtlImageNtHeaderEx(1, v17, 0, 0, &v38);
    if ( v38 )
    {
      v19 = *(_WORD *)(v38 + 24);
      if ( v19 == 267 )
      {
        if ( *(_DWORD *)(v38 + 116) <= 0xAu )
          goto LABEL_72;
        v20 = *(_DWORD *)(v38 + 200);
        if ( !v20 )
          goto LABEL_72;
        v21 = *(_DWORD *)(v38 + 204);
        v36 = v21;
        if ( v43 || v20 < *(_DWORD *)(v38 + 84) )
        {
          v16 = (_DWORD *)((char *)v42 + v20);
          goto LABEL_30;
        }
        v16 = (_DWORD *)RtlAddressInSectionTable(v38, (int)v42, v20);
        if ( !v16 )
          goto LABEL_72;
LABEL_78:
        v21 = v36;
LABEL_30:
        if ( v16 && v21 && (v21 == 64 || v21 == *v16) )
        {
          v22 = *(_WORD *)(v35 + 4);
          if ( (v22 == 14948 || v22 == 332) && *v16 >= 0x48u )
          {
            v23 = v16[16];
            if ( v23 )
            {
              v24 = v16[17];
              if ( v24 )
              {
                if ( v23 >= v41 + *(_DWORD *)(v40 + 84) && v24 <= (v41 + *(_DWORD *)(v40 + 80) - v23) >> 2 )
                  goto LABEL_41;
                goto LABEL_48;
              }
            }
          }
        }
LABEL_72:
        v32 = RtlImageDirectoryEntryToData(v41, 1, 14, &v42);
        if ( !v32 || (*(_BYTE *)(v32 + 16) & 1) == 0 )
        {
          v23 = 0;
          v24 = 0;
LABEL_41:
          v4[3] = v24;
          *v4 = v23;
          return v23;
        }
        goto LABEL_48;
      }
      if ( v19 != 523 )
        goto LABEL_72;
      v18 = RtlpImageDirectoryEntryToData64((int)v42, v43, 0xAu, &v36, v38, &v37);
      v16 = (_DWORD *)v37;
    }
    if ( v18 < 0 )
      goto LABEL_72;
    goto LABEL_78;
  }
  RtlAcquireSRWLockShared(&LdrpInvertedFunctionTableSRWLock);
  if ( LdrpInvertedFunctionTable == 1 )
    goto LABEL_12;
  v6 = 1;
  v7 = LdrpInvertedFunctionTable - 1;
  while ( v7 >= v6 )
  {
    v8 = (v6 + v7) >> 1;
    v9 = &dword_4B3A9370[4 * v8];
    v10 = v9[1];
    if ( v41 < v10 )
    {
      v5 = v41;
      if ( !v8 )
        break;
      v7 = v8 - 1;
    }
    else
    {
      v11 = v10 + v9[2];
      v5 = v41;
      if ( v41 < v11 )
      {
        v4 = v42;
        *v42 = *v9;
        v4[1] = v9[1];
        v4[2] = v9[2];
        v4[3] = v9[3];
        v39 = MEMORY[0x7FFE0330] ^ __ROR4__(*v4, 32 - (MEMORY[0x7FFE0330] & 0x1F));
        *v4 = v39;
        goto LABEL_12;
      }
      v6 = v8 + 1;
    }
  }
  v4 = v42;
LABEL_12:
  v12 = _InterlockedCompareExchange(&LdrpInvertedFunctionTableSRWLock, 0, 17);
  v13 = v12;
  if ( v12 != 17 )
  {
    if ( (v12 & 1) == 0 )
      RtlRaiseStatus(-1073741212);
    if ( (v12 & 2) != 0 )
    {
LABEL_55:
      if ( (v13 & 8) != 0 )
      {
        v26 = (_DWORD *)(v13 & 0xFFFFFFF0);
        for ( i = *(_DWORD *)((v13 & 0xFFFFFFF0) + 4); !i; i = v26[1] )
          v26 = (_DWORD *)*v26;
        if ( _InterlockedDecrement((volatile signed __int32 *)(i + 16)) > 0 )
          goto LABEL_13;
        v40 = -9;
      }
      else
      {
        v40 = -1;
      }
      v28 = v40;
      while ( 1 )
      {
        v37 = v13 & 6;
        v29 = v28 + 4;
        if ( v37 != 2 )
          v29 = v28;
        v30 = v13 + v29;
        v31 = _InterlockedCompareExchange(&LdrpInvertedFunctionTableSRWLock, v13 + v29, v13);
        v28 = v40;
        if ( v31 == v13 )
          break;
        v13 = v31;
      }
      v4 = v42;
      if ( v37 == 2 )
        RtlpWakeSRWLock(v30);
      v5 = v41;
      goto LABEL_13;
    }
    while ( 1 )
    {
      v25 = _InterlockedCompareExchange(&LdrpInvertedFunctionTableSRWLock, (v13 & 0xFFFFFFF0) != 16 ? v13 - 16 : 0, v13);
      v4 = v42;
      if ( v25 == v13 )
        break;
      v13 = v25;
      if ( (v25 & 2) != 0 )
        goto LABEL_55;
    }
  }
LABEL_13:
  result = v39;
  if ( !v39 && (byte_4B3A936C || SLOBYTE(NtCurrentPeb()->CrossProcessFlags) < 0) )
    goto LABEL_15;
  return result;
}
