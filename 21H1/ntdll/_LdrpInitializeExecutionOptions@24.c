/*
 * XREFs of _LdrpInitializeExecutionOptions@24 @ 0x4B331EB9
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _RtlQueryApplicationKeyOption@32 @ 0x4B2A6C1D (_RtlQueryApplicationKeyOption@32.c)
 *     _RtlQueryImageFileKeyOption@24 @ 0x4B2A6C80 (_RtlQueryImageFileKeyOption@24.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _LdrControlFlowGuardEnforced@0 @ 0x4B2D0100 (_LdrControlFlowGuardEnforced@0.c)
 *     _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0 (_RtlInitUnicodeStringEx@8.c)
 *     _RtlQueryEnvironmentVariable_U@12 @ 0x4B2DB100 (_RtlQueryEnvironmentVariable_U@12.c)
 *     _RtlUnicodeStringToInteger@12 @ 0x4B2E07A0 (_RtlUnicodeStringToInteger@12.c)
 *     _LdrProtectMrdata@4 @ 0x4B2E1D36 (_LdrProtectMrdata@4.c)
 *     _RtlpOpenImageFileOptionsKeyEx@16 @ 0x4B2E5DF9 (_RtlpOpenImageFileOptionsKeyEx@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     _ZwSetInformationProcess@16 @ 0x4B2F2B40 (_ZwSetInformationProcess@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     __chkstk @ 0x4B2F64D0 (__chkstk.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _LdrpConstructModernAppKeyName@8 @ 0x4B331983 (_LdrpConstructModernAppKeyName@8.c)
 *     _LdrpInitializeApplicationVerifierPackage@24 @ 0x4B331CC8 (_LdrpInitializeApplicationVerifierPackage@24.c)
 *     _LdrpInitializeCriticalSectionExceptionGlobalMitigation@0 @ 0x4B331E35 (_LdrpInitializeCriticalSectionExceptionGlobalMitigation@0.c)
 *     _LdrpIsVerifierActivationFilterMatched@12 @ 0x4B333042 (_LdrpIsVerifierActivationFilterMatched@12.c)
 *     _LdrpPayloadRestrictionMitigationsEnabled@0 @ 0x4B3335DC (_LdrpPayloadRestrictionMitigationsEnabled@0.c)
 *     _LdrpQueryAndUpdateVerifierLaunchCounter@8 @ 0x4B333771 (_LdrpQueryAndUpdateVerifierLaunchCounter@8.c)
 *     _LdrpQueryIllegalCWDDevices@4 @ 0x4B33384B (_LdrpQueryIllegalCWDDevices@4.c)
 *     _AVrfOpenCurrentUserImageFileOptionsKey@12 @ 0x4B3388F7 (_AVrfOpenCurrentUserImageFileOptionsKey@12.c)
 *     _RtlOpenModernAppOptionsKey@12 @ 0x4B33FDAB (_RtlOpenModernAppOptionsKey@12.c)
 *     _RtlSetLowFragHeapGlobalFlags@8 @ 0x4B35708B (_RtlSetLowFragHeapGlobalFlags@8.c)
 */

int __fastcall LdrpInitializeExecutionOptions(unsigned __int16 *a1, int a2, int a3, HANDLE *a4, HANDLE *a5, int a6)
{
  int v6; // ebx
  int v7; // esi
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // esi
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  _DWORD *v20; // edi
  int ValueKey; // eax
  int v22; // esi
  int v23; // eax
  int v24; // esi
  void *ProcessHeap; // ecx
  unsigned int Heap; // eax
  int v27; // eax
  _DWORD *v28; // edi
  int v29; // eax
  int v30; // esi
  int v31; // eax
  int v32; // esi
  void *v33; // ecx
  unsigned int v34; // eax
  int v35; // eax
  _DWORD *v36; // edi
  int v37; // eax
  int v38; // esi
  int v39; // eax
  int v40; // esi
  void *v41; // ecx
  unsigned int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // esi
  _DWORD *v46; // esi
  int v47; // eax
  int v48; // edi
  int v49; // eax
  int v50; // ebx
  void *v51; // ecx
  int v52; // eax
  int v53; // eax
  int v54; // esi
  bool *v55; // ecx
  int v56; // ecx
  _DWORD *v57; // esi
  int v58; // eax
  int v59; // edi
  int v60; // eax
  int v61; // ebx
  int v62; // eax
  int v63; // eax
  int v64; // esi
  int v65; // ecx
  int v66; // esi
  int v67; // eax
  bool v68; // zf
  int v69; // edi
  char v70; // al
  HANDLE *v71; // ebx
  HANDLE *v72; // ebx
  int v74; // [esp-8h] [ebp-1678h]
  int v75; // [esp-8h] [ebp-1678h]
  int v76; // [esp+Ch] [ebp-1664h] BYREF
  int v77[2]; // [esp+10h] [ebp-1660h] BYREF
  int v78; // [esp+18h] [ebp-1658h]
  unsigned int v79; // [esp+1Ch] [ebp-1654h]
  int v80; // [esp+20h] [ebp-1650h] BYREF
  char v81; // [esp+27h] [ebp-1649h]
  int v82; // [esp+28h] [ebp-1648h] BYREF
  int v83; // [esp+2Ch] [ebp-1644h] BYREF
  int v84; // [esp+30h] [ebp-1640h] BYREF
  int v85; // [esp+34h] [ebp-163Ch] BYREF
  int v86; // [esp+38h] [ebp-1638h] BYREF
  HANDLE Handle; // [esp+3Ch] [ebp-1634h] BYREF
  int v88[2]; // [esp+40h] [ebp-1630h] BYREF
  void *v89; // [esp+48h] [ebp-1628h] BYREF
  unsigned __int16 *v90; // [esp+4Ch] [ebp-1624h]
  int v91; // [esp+50h] [ebp-1620h] BYREF
  int v92; // [esp+54h] [ebp-161Ch]
  unsigned __int16 v93[2]; // [esp+58h] [ebp-1618h] BYREF
  _DWORD *v94; // [esp+5Ch] [ebp-1614h]
  unsigned __int16 v95[2]; // [esp+60h] [ebp-1610h] BYREF
  _DWORD *v96; // [esp+64h] [ebp-160Ch]
  unsigned __int16 v97[2]; // [esp+68h] [ebp-1608h] BYREF
  _DWORD *v98; // [esp+6Ch] [ebp-1604h]
  unsigned __int16 v99[2]; // [esp+70h] [ebp-1600h] BYREF
  _DWORD *v100; // [esp+74h] [ebp-15FCh]
  unsigned __int16 v101[2]; // [esp+78h] [ebp-15F8h] BYREF
  _DWORD *v102; // [esp+7Ch] [ebp-15F4h]
  int v103; // [esp+80h] [ebp-15F0h] BYREF
  HANDLE *v104; // [esp+84h] [ebp-15ECh]
  HANDLE *v105; // [esp+88h] [ebp-15E8h]
  unsigned __int16 v106[2]; // [esp+8Ch] [ebp-15E4h] BYREF
  char *v107; // [esp+90h] [ebp-15E0h]
  int v108; // [esp+94h] [ebp-15DCh]
  int v109; // [esp+98h] [ebp-15D8h] BYREF
  int v110; // [esp+9Ch] [ebp-15D4h]
  _DWORD v111[6]; // [esp+A0h] [ebp-15D0h] BYREF
  UNICODE_STRING DestinationString; // [esp+B8h] [ebp-15B8h] BYREF
  _BYTE v113[1024]; // [esp+C0h] [ebp-15B0h] BYREF
  _BYTE v114[1024]; // [esp+4C0h] [ebp-11B0h] BYREF
  _BYTE v115[1024]; // [esp+8C0h] [ebp-DB0h] BYREF
  _BYTE v116[1024]; // [esp+CC0h] [ebp-9B0h] BYREF
  _BYTE v117[1024]; // [esp+10C0h] [ebp-5B0h] BYREF
  char v118; // [esp+14C0h] [ebp-1B0h] BYREF
  WCHAR SourceString[198]; // [esp+14E0h] [ebp-190h] BYREF

  v78 = a2;
  v90 = a1;
  v108 = a3;
  v110 = a6;
  *a4 = 0;
  v6 = 0;
  v105 = a5;
  v7 = 0;
  *a5 = 0;
  v8 = 0;
  v104 = a4;
  LOBYTE(v92) = 0;
  v76 = 0;
  Handle = 0;
  v91 = 0;
  v89 = 0;
  v81 = 1;
  v80 = 0;
  v103 = 0;
  LdrpInitializeCriticalSectionExceptionGlobalMitigation();
  if ( (*(_DWORD *)(*(_DWORD *)(v78 + 16) + 8) & 0x4000) != 0 )
    goto LABEL_171;
  v9 = RtlpOpenImageFileOptionsKeyEx(v90, 9, 0, &v76);
  v6 = v76;
  if ( v9 < 0 )
    goto LABEL_171;
  v11 = v78;
  *v104 = (HANDLE)v76;
  if ( (*(_BYTE *)(v11 + 3) & 0x10) != 0 && LdrpConstructModernAppKeyName(SourceString) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v12 = RtlOpenModernAppOptionsKey(&v89);
    v8 = (int)v89;
    if ( v12 >= 0 )
      *v105 = v89;
  }
  RtlQueryApplicationKeyOption(v8, v6, (int)L"DisableHeapLookaside", 4, &RtlpDisableHeapLookaside, 4, v10, 0);
  RtlQueryApplicationKeyOption(v8, v6, (int)L"FrontEndHeapDebugOptions", 4, &v91, 4, v13, 0);
  RtlQueryApplicationKeyOption(v8, v6, (int)L"ShutdownFlags", 4, &RtlpShutdownProcessFlags, 4, v14, 0);
  v77[0] = 0;
  RtlQueryApplicationKeyOption(v8, v6, (int)L"UnloadEventTraceDepth", 4, v77, 4, v15, 0);
  if ( v77[0] )
    RtlpUnloadEventTraceExNumber = v77[0];
  v77[0] = 0;
  RtlQueryApplicationKeyOption(v8, v6, (int)L"MaxLoaderThreads", 4, v77, 4, v16, 0);
  v17 = v77[0];
  if ( v77[0] )
    *(_DWORD *)(*(_DWORD *)(v11 + 16) + 672) = v77[0];
  v77[0] = 0;
  RtlQueryApplicationKeyOption(v8, v6, (int)L"UseImpersonatedDeviceMap", 4, v77, 4, v17, 0);
  if ( v77[0] )
    LdrpUseImpersonatedDeviceMap = 1;
  v77[0] = 0;
  RtlQueryApplicationKeyOption(v8, v6, (int)L"TracingFlags", 4, v77, 4, v18, 0);
  v19 = v77[0];
  if ( v77[0] )
    _InterlockedOr((volatile signed __int32 *)(v11 + 576), v77[0]);
  v77[0] = 0;
  if ( RtlQueryApplicationKeyOption(v8, v6, (int)L"RaiseExceptionOnPossibleDeadlock", 4, v77, 4, v19, 0) >= 0 )
    RtlpRaiseExceptionOnPossibleDeadlock = v77[0] != 0;
  v88[0] = 0;
  if ( RtlInitUnicodeStringEx((int)v93, L"ExecuteOptions") >= 0 )
  {
    v20 = v113;
    ValueKey = ZwQueryValueKey(v6, (int)v93, 2, (int)v113, 1024, (int)&v82);
    v22 = ValueKey;
    if ( ValueKey >= 0 )
    {
      v79 = 0;
LABEL_20:
      v23 = v20[1];
      if ( v23 != 3 && v23 != 7 )
      {
        if ( v23 == 4 )
        {
          if ( v20[2] == 4 )
          {
            v82 = 4;
            v88[0] = v20[3];
          }
          else
          {
            v22 = -1073741820;
          }
          goto LABEL_38;
        }
        if ( v23 == 1 )
        {
          if ( ((unsigned __int8)v88 & 3) != 0 )
          {
            v22 = -2147483646;
          }
          else
          {
            v82 = 4;
            v94 = v20 + 3;
            v93[0] = *((_WORD *)v20 + 4);
            v93[1] = *((_WORD *)v20 + 4);
            v22 = RtlUnicodeStringToInteger(v93, 0, v88);
          }
LABEL_38:
          if ( v79 )
          {
            RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v79);
            v6 = v76;
          }
          goto LABEL_40;
        }
      }
      v22 = -1073741788;
      goto LABEL_38;
    }
    if ( ValueKey != -2147483643 )
    {
LABEL_40:
      if ( v22 >= 0 )
        v88[0] = v88[0] != 0 ? 2 : 13;
      goto LABEL_42;
    }
    while ( 1 )
    {
      v24 = v82;
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( !ProcessHeap )
        break;
      Heap = RtlAllocateHeap((int)ProcessHeap, NtdllBaseTag + 1572864, v82);
      v79 = Heap;
      if ( !Heap )
        break;
      v6 = v76;
      v20 = (_DWORD *)Heap;
      v27 = ZwQueryValueKey(v76, (int)v93, 2, Heap, v24, (int)&v82);
      v22 = v27;
      if ( v27 >= 0 )
        goto LABEL_20;
      if ( v27 != -2147483643 )
        goto LABEL_38;
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v20);
    }
    v6 = v76;
  }
LABEL_42:
  if ( RtlInitUnicodeStringEx((int)v95, L"DisableExceptionChainValidation") < 0 )
    goto LABEL_74;
  v28 = v114;
  v29 = ZwQueryValueKey(v6, (int)v95, 2, (int)v114, 1024, (int)&v83);
  v30 = v29;
  if ( v29 >= 0 )
  {
    v79 = 0;
LABEL_45:
    v31 = v28[1];
    if ( v31 != 3 && v31 != 7 )
    {
      if ( v31 == 4 )
      {
        if ( v28[2] == 4 )
        {
          v83 = 4;
          RtlpProcessECVPolicy = v28[3];
        }
        else
        {
          v30 = -1073741820;
        }
        goto LABEL_64;
      }
      if ( v31 == 1 )
      {
        if ( ((unsigned __int8)&RtlpProcessECVPolicy & 3) != 0 )
        {
          v30 = -2147483646;
        }
        else
        {
          v83 = 4;
          v96 = v28 + 3;
          v95[0] = *((_WORD *)v28 + 4);
          v95[1] = *((_WORD *)v28 + 4);
          v30 = RtlUnicodeStringToInteger(v95, 0, &RtlpProcessECVPolicy);
        }
LABEL_64:
        if ( v79 )
        {
          RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v79);
          v6 = v76;
        }
        goto LABEL_66;
      }
    }
    v30 = -1073741788;
    goto LABEL_64;
  }
  if ( v29 == -2147483643 )
  {
    while ( 1 )
    {
      v32 = v83;
      v33 = NtCurrentPeb()->ProcessHeap;
      if ( !v33 )
        break;
      v34 = RtlAllocateHeap((int)v33, NtdllBaseTag + 1572864, v83);
      v79 = v34;
      if ( !v34 )
        break;
      v6 = v76;
      v28 = (_DWORD *)v34;
      v35 = ZwQueryValueKey(v76, (int)v95, 2, v34, v32, (int)&v83);
      v30 = v35;
      if ( v35 >= 0 )
        goto LABEL_45;
      if ( v35 != -2147483643 )
        goto LABEL_64;
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v28);
    }
    v6 = v76;
    goto LABEL_74;
  }
LABEL_66:
  if ( v30 < 0 )
  {
LABEL_74:
    if ( v88[0] )
      ZwSetInformationProcess(-1, 34, (int)v88, 4);
    goto LABEL_76;
  }
  if ( RtlpProcessECVPolicy && RtlpProcessECVPolicy != 3 && RtlpProcessECVPolicy != 2 )
    RtlpProcessECVPolicy = 1;
  if ( v88[0] )
  {
    if ( RtlpProcessECVPolicy == 1 )
      v88[0] |= 0x40u;
    goto LABEL_74;
  }
LABEL_76:
  v77[0] = 0;
  if ( RtlInitUnicodeStringEx((int)v97, L"CFGOptions") < 0 )
    goto LABEL_103;
  v36 = v115;
  v37 = ZwQueryValueKey(v6, (int)v97, 2, (int)v115, 1024, (int)&v84);
  v38 = v37;
  if ( v37 >= 0 )
  {
    v79 = 0;
LABEL_79:
    v39 = v36[1];
    if ( v39 != 3 && v39 != 7 )
    {
      if ( v39 == 4 )
      {
        if ( v36[2] == 4 )
        {
          v84 = 4;
          v77[0] = v36[3];
        }
        else
        {
          v38 = -1073741820;
        }
        goto LABEL_98;
      }
      if ( v39 == 1 )
      {
        if ( ((unsigned __int8)v77 & 3) != 0 )
        {
          v38 = -2147483646;
        }
        else
        {
          v84 = 4;
          v98 = v36 + 3;
          v97[0] = *((_WORD *)v36 + 4);
          v97[1] = *((_WORD *)v36 + 4);
          v38 = RtlUnicodeStringToInteger(v97, 0, v77);
        }
LABEL_98:
        if ( v79 )
        {
          RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v79);
          v6 = v76;
        }
        goto LABEL_100;
      }
    }
    v38 = -1073741788;
    goto LABEL_98;
  }
  if ( v37 != -2147483643 )
  {
LABEL_100:
    if ( v38 >= 0 && (v77[0] & 1) != 0 )
    {
      LdrProtectMrdata(0);
      RtlGuardAllowSuppressedCalls = 1;
      LdrProtectMrdata(1);
    }
    goto LABEL_103;
  }
  while ( 1 )
  {
    v40 = v84;
    v41 = NtCurrentPeb()->ProcessHeap;
    if ( !v41 )
      break;
    v42 = RtlAllocateHeap((int)v41, NtdllBaseTag + 1572864, v84);
    v79 = v42;
    if ( !v42 )
      break;
    v6 = v76;
    v36 = (_DWORD *)v42;
    v43 = ZwQueryValueKey(v76, (int)v97, 2, v42, v40, (int)&v84);
    v38 = v43;
    if ( v43 >= 0 )
      goto LABEL_79;
    if ( v43 != -2147483643 )
      goto LABEL_98;
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v36);
  }
  v6 = v76;
LABEL_103:
  if ( (*(_BYTE *)(v78 + 3) & 1) != 0 )
  {
    v111[4] = 0;
    v111[5] = 0;
    v111[0] = 24;
    v111[1] = v6;
    v111[3] = 64;
    v111[2] = &dword_4B281A38;
    v44 = ZwOpenKey((int)&LdrpLargePageDllKeyHandle, 1, (int)v111);
    v45 = v44;
    if ( v44 == -1073741772 )
    {
      LdrpLargePageDllKeyHandle = 0;
    }
    else if ( v44 < 0 )
    {
      goto LABEL_199;
    }
  }
  if ( RtlInitUnicodeStringEx((int)v99, L"MinimumStackCommitInBytes") >= 0 )
  {
    v46 = v116;
    v47 = ZwQueryValueKey(v6, (int)v99, 2, (int)v116, 1024, (int)&v85);
    if ( v47 < 0 )
    {
      if ( v47 != -2147483643 )
        goto LABEL_128;
      while ( 1 )
      {
        v50 = v85;
        v51 = NtCurrentPeb()->ProcessHeap;
        if ( !v51 )
          goto LABEL_127;
        v52 = RtlAllocateHeap((int)v51, NtdllBaseTag + 1572864, v85);
        v48 = v52;
        if ( !v52 )
          goto LABEL_127;
        v46 = (_DWORD *)v52;
        v74 = v50;
        v6 = v76;
        v53 = ZwQueryValueKey(v76, (int)v99, 2, v52, v74, (int)&v85);
        if ( v53 >= 0 )
          goto LABEL_111;
        if ( v53 != -2147483643 )
          goto LABEL_125;
        RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v48);
      }
    }
    v48 = 0;
LABEL_111:
    v49 = v46[1];
    if ( v49 != 3 && v49 != 7 )
    {
      if ( v49 == 4 )
      {
        if ( v46[2] == 4 )
        {
          v85 = 4;
          v77[0] = v46[3];
        }
      }
      else if ( v49 == 1 && ((unsigned __int8)v77 & 3) == 0 )
      {
        v85 = 4;
        v100 = v46 + 3;
        v99[0] = *((_WORD *)v46 + 4);
        v99[1] = *((_WORD *)v46 + 4);
        RtlUnicodeStringToInteger(v99, 0, v77);
      }
    }
LABEL_125:
    if ( v48 )
    {
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v48);
LABEL_127:
      v6 = v76;
    }
  }
LABEL_128:
  if ( *(_DWORD *)(v78 + 520) < v77[0] )
    *(_DWORD *)(v78 + 520) = v77[0];
  v54 = 0;
  while ( 1 )
  {
    v77[0] = 0;
    RtlQueryImageFileKeyOption(v6, (int)(&off_4B281A60)[v54], 4, v77, 4u, 0);
    v55 = *(bool **)((char *)&off_4B281A64 + v54 * 4);
    v54 += 2;
    *v55 = v77[0] != 0;
    if ( v54 == 6 )
      break;
    v6 = v76;
  }
  v77[0] = 0;
  if ( RtlInitUnicodeStringEx((int)v101, L"MaxDeadActivationContexts") < 0 )
  {
LABEL_155:
    v6 = v76;
    goto LABEL_156;
  }
  v6 = v76;
  v57 = v117;
  v58 = ZwQueryValueKey(v76, (int)v101, 2, (int)v117, 1024, (int)&v80);
  if ( v58 < 0 )
  {
    if ( v58 != -2147483643 )
      goto LABEL_156;
    while ( 1 )
    {
      v61 = v80;
      v56 = (int)NtCurrentPeb()->ProcessHeap;
      if ( !v56 )
        goto LABEL_155;
      v62 = RtlAllocateHeap(v56, NtdllBaseTag + 1572864, v80);
      v59 = v62;
      if ( !v62 )
        goto LABEL_155;
      v57 = (_DWORD *)v62;
      v75 = v61;
      v6 = v76;
      v63 = ZwQueryValueKey(v76, (int)v101, 2, v62, v75, (int)&v80);
      if ( v63 >= 0 )
        goto LABEL_136;
      if ( v63 != -2147483643 )
        goto LABEL_151;
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v59);
    }
  }
  v59 = 0;
LABEL_136:
  v60 = v57[1];
  if ( v60 == 3 || v60 == 7 )
  {
    v56 = 4;
  }
  else
  {
    v56 = 4;
    if ( v60 == 4 )
    {
      if ( v57[2] == 4 )
      {
        v80 = 4;
        v77[0] = v57[3];
      }
    }
    else if ( v60 == 1 && ((unsigned __int8)v77 & 3) == 0 )
    {
      v80 = 4;
      v102 = v57 + 3;
      v101[0] = *((_WORD *)v57 + 4);
      v101[1] = *((_WORD *)v57 + 4);
      RtlUnicodeStringToInteger(v101, 0, v77);
    }
  }
LABEL_151:
  if ( v59 )
  {
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v59);
    v6 = v76;
  }
  if ( v77[0] )
    g_SxsMaxDeadActivationContexts = v77[0];
LABEL_156:
  v64 = v78;
  v8 = (int)v89;
  v79 = (*(_DWORD *)(v78 + 104) >> 8) & 0xFFFFFF01;
  if ( RtlQueryApplicationKeyOption((int)v89, v6, (int)L"GlobalFlag", 4, &v86, 4, v56, &v103) >= 0 )
  {
    v66 = v86;
    if ( (v86 & 0x2000100) != 0 )
    {
      if ( !LdrpIsVerifierActivationFilterMatched(v6) )
      {
        v66 &= 0xFDFFFEFF;
        v86 = v66;
      }
      if ( (v66 & 0x2000100) != 0 )
      {
        if ( LdrpQueryAndUpdateVerifierLaunchCounter(v90, &v109) < 0 )
        {
          v64 = v78;
          goto LABEL_166;
        }
        if ( !v109 )
        {
          v66 &= 0xFDFFFEFF;
          v86 = v66;
        }
      }
    }
    v67 = v78;
    *(_DWORD *)(v78 + 104) = v66;
    v64 = v67;
  }
LABEL_166:
  if ( RtlQueryApplicationKeyOption(v8, v6, (int)L"GlobalFlag2", 4, &v86, 4, v65, 0) >= 0 )
    *(_DWORD *)(v64 + 1144) = v86;
  v68 = (*(_DWORD *)(v64 + 104) & 0x2000100) == 0;
  v7 = v91;
  LOBYTE(v92) = v79;
  if ( v68 )
  {
    v80 = 0;
  }
  else
  {
    v81 = 0;
    v80 = v103;
  }
LABEL_171:
  if ( LdrControlFlowGuardEnforced() )
    v7 |= 1u;
  RtlSetLowFragHeapGlobalFlags(v7, *(_DWORD *)(*(_DWORD *)(v78 + 16) + 8));
  if ( v81 && !LdrpIsSecureProcess && (MEMORY[0x7FFE03A0] & 1) != 0 )
  {
    if ( (int)AVrfOpenCurrentUserImageFileOptionsKey(&Handle) < 0 )
    {
      Handle = 0;
    }
    else if ( RtlQueryImageFileKeyOption((int)Handle, (int)L"GlobalFlag", 4, &v86, 4u, 0) >= 0 )
    {
      *(_DWORD *)(v78 + 104) |= v86 & 0x2000100;
      v80 = (int)Handle;
    }
  }
  v45 = 0;
  if ( (*(_DWORD *)(v78 + 104) & 0x2000100) == 0 && !(unsigned __int8)LdrpPayloadRestrictionMitigationsEnabled() )
  {
    v68 = v8 == 0;
    v69 = v78;
    if ( v68 && !v6 && *(_BYTE *)(v78 + 2) )
    {
      v107 = &v118;
      v106[0] = 0;
      v106[1] = 32;
      if ( RtlQueryEnvironmentVariable_U(
             *(_WORD **)(*(_DWORD *)(v78 + 16) + 72),
             (unsigned __int16 *)&dword_4B281A40,
             (int)v106) < 0 )
      {
        v45 = 0;
      }
      else
      {
        v45 = RtlUnicodeStringToInteger(v106, 0, v77);
        if ( v45 >= 0 && v77[0] )
          goto LABEL_188;
      }
      *(_DWORD *)(v69 + 104) |= 0x70u;
    }
LABEL_188:
    if ( (*(_BYTE *)(v69 + 1144) & 1) != 0 )
      *(_DWORD *)(v69 + 1140) |= 1u;
    goto LABEL_190;
  }
  v69 = v78;
  v45 = LdrpInitializeApplicationVerifierPackage(v90, v78, v92, v80, v108, v110);
  if ( v45 >= 0 )
    goto LABEL_188;
  v70 = ShowSnaps;
  if ( (ShowSnaps & 3) != 0 )
  {
    LdrpLogDbgPrint(
      (int)"minkernel\\ntdll\\ldrinit.c",
      8197,
      "LdrpInitializeExecutionOptions",
      0,
      "Initializing the application verifier package failed with status 0x%08lx\n",
      v45);
    v70 = ShowSnaps;
  }
  if ( (v70 & 0x10) != 0 )
    __debugbreak();
LABEL_190:
  if ( v45 >= 0 )
  {
    LdrpQueryIllegalCWDDevices(v6);
    goto LABEL_203;
  }
LABEL_199:
  v71 = v104;
  if ( *v104 )
  {
    NtClose(*v104);
    *v71 = 0;
  }
  v72 = v105;
  if ( *v105 )
  {
    NtClose(*v105);
    *v72 = 0;
  }
LABEL_203:
  if ( Handle )
    NtClose(Handle);
  return v45;
}
