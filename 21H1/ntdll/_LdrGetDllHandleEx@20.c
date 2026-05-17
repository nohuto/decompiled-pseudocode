/*
 * XREFs of _LdrGetDllHandleEx@20 @ 0x4B2CABE0
 * Callers:
 *     _LdrGetDllHandle@16 @ 0x4B2CC810 (_LdrGetDllHandle@16.c)
 *     _SbpResolveBasedOnName@4 @ 0x4B386048 (_SbpResolveBasedOnName@4.c)
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _LdrpPreprocessDllName@16 @ 0x4B2CB090 (_LdrpPreprocessDllName@16.c)
 *     _RtlWow64EnableFsRedirectionEx@8 @ 0x4B2CC460 (_RtlWow64EnableFsRedirectionEx@8.c)
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 *     _LdrpFindLoadedDllByName@20 @ 0x4B2CF350 (_LdrpFindLoadedDllByName@20.c)
 *     _LdrpIncrementModuleLoadCount@4 @ 0x4B2CF5D2 (_LdrpIncrementModuleLoadCount@4.c)
 *     _LdrpDrainWorkQueue@4 @ 0x4B2D19AF (_LdrpDrainWorkQueue@4.c)
 *     _LdrpResolveDllName@20 @ 0x4B2D1F2E (_LdrpResolveDllName@20.c)
 *     _LdrpSearchPath@36 @ 0x4B2D2450 (_LdrpSearchPath@36.c)
 *     _LdrpFreeUnicodeString@4 @ 0x4B2DE399 (_LdrpFreeUnicodeString@4.c)
 *     _RtlReleasePath@4 @ 0x4B2DE7B0 (_RtlReleasePath@4.c)
 *     _LdrpFindLoadedDllByMappingFile@12 @ 0x4B2E5721 (_LdrpFindLoadedDllByMappingFile@12.c)
 *     _LdrpDropLastInProgressCount@0 @ 0x4B2E79C9 (_LdrpDropLastInProgressCount@0.c)
 *     _LdrpPinModule@4 @ 0x4B2E7DC6 (_LdrpPinModule@4.c)
 *     _LdrpFindLoadedDllInternal@20 @ 0x4B2E9DE3 (_LdrpFindLoadedDllInternal@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _LdrpLogDllStateEx2@16 @ 0x4B32FDF3 (_LdrpLogDllStateEx2@16.c)
 *     _LdrpLogEtwEvent@24 @ 0x4B330117 (_LdrpLogEtwEvent@24.c)
 */

int __stdcall LdrGetDllHandleEx(int a1, int a2, int a3, int a4, _DWORD *a5)
{
  int v5; // edi
  char v6; // bl
  _DWORD *v7; // edi
  int LoadedDllByName; // esi
  int v9; // eax
  int v10; // esi
  int v11; // edi
  unsigned __int16 *i; // ebx
  unsigned int v13; // eax
  int v14; // eax
  int *v15; // ecx
  int *v16; // eax
  int *v17; // edx
  unsigned __int16 *v18; // edi
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // ebx
  _DWORD *v22; // eax
  int v23; // eax
  int v24; // eax
  __int16 v25; // ax
  __int16 v26; // ax
  int v28; // edi
  int v29; // eax
  char *v30; // eax
  int Count; // eax
  int *v32; // [esp+10h] [ebp-2A0h] BYREF
  bool v33; // [esp+17h] [ebp-299h]
  _DWORD *v34; // [esp+18h] [ebp-298h]
  int v35; // [esp+1Ch] [ebp-294h] BYREF
  int v36; // [esp+20h] [ebp-290h] BYREF
  int *v37; // [esp+24h] [ebp-28Ch]
  int *v38; // [esp+28h] [ebp-288h]
  _DWORD v39[2]; // [esp+2Ch] [ebp-284h] BYREF
  int v40; // [esp+34h] [ebp-27Ch]
  int v41; // [esp+38h] [ebp-278h] BYREF
  _DWORD v42[2]; // [esp+3Ch] [ebp-274h] BYREF
  int v43; // [esp+44h] [ebp-26Ch]
  _DWORD v44[20]; // [esp+48h] [ebp-268h] BYREF
  int v45; // [esp+98h] [ebp-218h] BYREF
  unsigned __int16 *v46; // [esp+9Ch] [ebp-214h]
  _WORD v47[128]; // [esp+A0h] [ebp-210h] BYREF
  int v48; // [esp+1A0h] [ebp-110h] BYREF
  _WORD *v49; // [esp+1A4h] [ebp-10Ch]
  _WORD v50[130]; // [esp+1A8h] [ebp-108h] BYREF

  v34 = a5;
  if ( (ShowSnaps & 9) != 0 )
    LdrpLogDbgPrint("minkernel\\ntdll\\ldrapi.c", 844, "LdrGetDllHandleEx", 3, "DLL name: %wZ\n", a4);
  v5 = *(_DWORD *)(a4 + 4);
  memset(v44, 0, sizeof(v44));
  if ( (a2 & 1) == 0 && a2 )
  {
    v44[0] = a2;
    if ( (ShowSnaps & 5) != 0 )
      LdrpLogDbgPrint(
        "minkernel\\ntdll\\ldrutil.c",
        1445,
        "LdrpInitializeDllPath",
        2,
        "DLL search path passed in externally: %ws\n",
        a2);
    LdrpLogDllStateEx2(v44[0], 5312);
  }
  else
  {
    v44[4] = v5;
    v44[3] = a2 & 0xFFFFFFFE;
  }
  v6 = a1;
  if ( (a1 & 0xFFFFFFF8) != 0 )
  {
    LoadedDllByName = -1073741811;
    goto LABEL_60;
  }
  if ( (a1 & 3) == 3 )
  {
    LoadedDllByName = -1073741811;
    goto LABEL_60;
  }
  v7 = v34;
  if ( !v34 && (a1 & 2) == 0 )
  {
    LoadedDllByName = -1073741811;
    goto LABEL_60;
  }
  v33 = RtlWow64EnableFsRedirectionEx(0, &v41) >= 0;
  v35 = 0;
  v46 = v47;
  v32 = 0;
  v47[0] = 0;
  v45 = 0x1000000;
  LoadedDllByName = LdrpPreprocessDllName(0, &v35);
  if ( LoadedDllByName >= 0 )
  {
    v9 = v35;
    if ( (v35 & 0x20) != 0 )
    {
      v10 = 0;
      v11 = (unsigned __int16)v45 >> 1;
      for ( i = v46; v11; v10 = (unsigned __int16)v13 + 65599 * v10 )
      {
        v13 = *i++;
        --v11;
        v37 = (int *)v13;
        if ( v13 >= 0x61 )
        {
          if ( v13 > 0x7A )
          {
            if ( Nls844UnicodeUpcaseTable && (unsigned __int16)v13 >= 0xC0u )
              LOWORD(v13) = (_WORD)v37
                          + *(_WORD *)(Nls844UnicodeUpcaseTable
                                     + 2
                                     * ((v13 & 0xF)
                                      + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                            + 2
                                                            * ((((unsigned __int16)v13 >> 4) & 0xF)
                                                             + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                   + 2 * BYTE1(v13))))));
          }
          else
          {
            LOWORD(v13) = v13 - 32;
          }
        }
      }
      if ( !v10 )
        v10 = 0x80000000;
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      v14 = v10 & 0x1F;
      v15 = (int *)LdrpHashTable[2 * v14];
      v38 = &LdrpHashTable[2 * v14];
      v37 = v15;
      if ( v15 == v38 )
        goto LABEL_66;
      v16 = &LdrpHashTable[2 * v14];
      while ( 1 )
      {
        v17 = v15 - 15;
        v39[0] = v15 - 15;
        if ( v10 != v15[21] || (v35 & 8) != 0 && (v17[13] & 1) == 0 || (v17[13] & 0x10000000) != 0 )
          goto LABEL_65;
        if ( (unsigned __int16)v45 != *((unsigned __int16 *)v17 + 22) )
          goto LABEL_100;
        v18 = v46;
        v42[0] = (char *)v46 + (unsigned __int16)v45;
        if ( (unsigned int)v46 >= v42[0] )
        {
LABEL_29:
          v22 = (_DWORD *)v17[20];
          if ( v22[3] != -1 && (*(_BYTE *)(*v22 - 32) & 0x20) == 0 )
            _InterlockedIncrement(v17 + 39);
          v23 = v17[20];
          LoadedDllByName = 0;
          v32 = v17;
          v36 = *(_DWORD *)(v23 + 32);
LABEL_31:
          RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
          if ( RtlGetCurrentServiceSessionId() )
            v24 = (int)NtCurrentPeb()->SharedData + 554;
          else
            v24 = 2147353476;
          if ( *(_BYTE *)v24 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
          {
            v30 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
            if ( (*v30 & 0x20) != 0 )
              LdrpLogEtwEvent(0, LoadedDllByName >= 0 ? 0 : 3, &v45, 0);
          }
          v6 = a1;
          goto LABEL_35;
        }
        v19 = v17[12] - (_DWORD)v46;
        v43 = v19;
        while ( 1 )
        {
          v20 = *(unsigned __int16 *)((char *)v18 + v19);
          v21 = *v18;
          v40 = v20;
          if ( (_WORD)v21 != (_WORD)v20 )
            break;
LABEL_27:
          if ( (unsigned int)++v18 >= v42[0] )
          {
            v17 = (int *)v39[0];
            goto LABEL_29;
          }
        }
        if ( v21 >= 0x61 )
        {
          if ( v21 <= 0x7A )
          {
            v25 = v21 - 32;
LABEL_54:
            LOWORD(v21) = v25;
            goto LABEL_55;
          }
          if ( Nls844UnicodeUpcaseTable && (unsigned __int16)v21 >= 0xC0u )
          {
            LOWORD(v20) = v40;
            v25 = v21
                + *(_WORD *)(Nls844UnicodeUpcaseTable
                           + 2
                           * ((v21 & 0xF)
                            + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                  + 2
                                                  * (((unsigned __int8)v21 >> 4)
                                                   + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v21 >> 8))))));
            goto LABEL_54;
          }
        }
LABEL_55:
        if ( (unsigned __int16)v20 < 0x61u )
          goto LABEL_56;
        if ( (unsigned __int16)v20 > 0x7Au )
        {
          if ( !Nls844UnicodeUpcaseTable || (unsigned __int16)v20 < 0xC0u )
          {
LABEL_56:
            v26 = v20;
            goto LABEL_57;
          }
          v26 = v40
              + *(_WORD *)(Nls844UnicodeUpcaseTable
                         + 2
                         * ((v20 & 0xF)
                          + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                + 2
                                                * ((((unsigned __int16)v20 >> 4) & 0xF)
                                                 + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * BYTE1(v20))))));
        }
        else
        {
          v26 = v20 - 32;
        }
LABEL_57:
        if ( (_WORD)v21 == v26 )
        {
          v19 = v43;
          goto LABEL_27;
        }
        v15 = v37;
LABEL_100:
        v16 = v38;
LABEL_65:
        v15 = (int *)*v15;
        v37 = v15;
        if ( v15 == v16 )
        {
LABEL_66:
          LoadedDllByName = -1073741515;
          goto LABEL_31;
        }
      }
    }
    v28 = v35 & 0x200;
    if ( (v35 & 0x200) != 0 )
    {
      LoadedDllByName = LdrpFindLoadedDllByName(v35, &v32, &v36);
      if ( LoadedDllByName >= 0 )
        goto LABEL_35;
      v9 = v35;
    }
    v48 = 0x1000000;
    v49 = v50;
    v50[0] = 0;
    v39[0] = 0;
    v39[1] = 0;
    if ( v28 )
      v29 = LdrpResolveDllName(v42, v39, v9);
    else
      v29 = LdrpSearchPath(0, 0, &v48, v42, v39, 0, 0);
    LoadedDllByName = v29;
    if ( v29 >= 0 )
    {
      LoadedDllByName = LdrpFindLoadedDllByName(v35, &v32, &v36);
      if ( LoadedDllByName == -1073741515 )
        LoadedDllByName = LdrpFindLoadedDllByMappingFile(&v36);
    }
    LdrpFreeUnicodeString(v39);
    if ( v50 != v49 )
      RtlDeleteBoundaryDescriptor((int)v49);
    v48 = 0x1000000;
    v49 = v50;
    v50[0] = 0;
LABEL_35:
    if ( (ShowSnaps & 9) != 0 )
      LdrpLogDbgPrint(
        "minkernel\\ntdll\\ldrfind.c",
        480,
        "LdrpFindLoadedDllInternal",
        4,
        "Status: 0x%08lx\n",
        LoadedDllByName);
    if ( LoadedDllByName >= 0 && v36 < 6 && (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 )
    {
      LdrpDereferenceModule(v32);
      v32 = 0;
      LdrpDrainWorkQueue(0);
      LoadedDllByName = LdrpFindLoadedDllInternal(&v32, &v36, v35);
      LdrpDropLastInProgressCount();
      if ( LoadedDllByName >= 0 && v36 != 9 )
      {
        LdrpDereferenceModule(v32);
        v32 = 0;
        LoadedDllByName = -1073741515;
      }
    }
    v7 = v34;
  }
  if ( v47 != v46 )
    RtlDeleteBoundaryDescriptor((int)v46);
  v45 = 0x1000000;
  v46 = v47;
  v47[0] = 0;
  if ( v33 )
    RtlWow64EnableFsRedirectionEx(v41, &v41);
  if ( LoadedDllByName >= 0 )
  {
    if ( (v6 & 2) != 0 )
    {
      Count = LdrpPinModule(v32);
    }
    else
    {
      if ( (v6 & 1) != 0 )
        goto LABEL_47;
      Count = LdrpIncrementModuleLoadCount(v32);
    }
    LoadedDllByName = Count;
LABEL_47:
    if ( LoadedDllByName >= 0 && v7 )
      *v7 = v32[6];
    LdrpDereferenceModule(v32);
  }
LABEL_60:
  if ( LOBYTE(v44[19]) )
    RtlReleasePath(v44[0]);
  if ( (ShowSnaps & 9) != 0 )
    LdrpLogDbgPrint("minkernel\\ntdll\\ldrapi.c", 894, "LdrGetDllHandleEx", 4, "Status: 0x%08lx\n", LoadedDllByName);
  return LoadedDllByName;
}
