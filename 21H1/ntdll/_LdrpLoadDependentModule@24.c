/*
 * XREFs of _LdrpLoadDependentModule@24 @ 0x4B2CB610
 * Callers:
 *     _LdrpMapAndSnapDependency@4 @ 0x4B2CB3D0 (_LdrpMapAndSnapDependency@4.c)
 *     _LdrpResolveForwarder@16 @ 0x4B2ED6C1 (_LdrpResolveForwarder@16.c)
 * Callees:
 *     _LdrpReleaseTlsEntry@8 @ 0x4B2A7CB1 (_LdrpReleaseTlsEntry@8.c)
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _RtlReleaseActivationContext@4 @ 0x4B2B2660 (_RtlReleaseActivationContext@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlDosApplyFileIsolationRedirection_Ustr@36 @ 0x4B2C9830 (_RtlDosApplyFileIsolationRedirection_Ustr@36.c)
 *     _LdrpLoadDependentModule@24 @ 0x4B2CB610 (_LdrpLoadDependentModule@24.c)
 *     _RtlWow64EnableFsRedirectionEx@8 @ 0x4B2CC460 (_RtlWow64EnableFsRedirectionEx@8.c)
 *     _RtlAnsiStringToUnicodeString@12 @ 0x4B2CC520 (_RtlAnsiStringToUnicodeString@12.c)
 *     @RtlDeactivateActivationContextUnsafeFast@4 @ 0x4B2CC6C0 (@RtlDeactivateActivationContextUnsafeFast@4.c)
 *     _LdrpAppendUnicodeStringToFilenameBuffer@8 @ 0x4B2CC7A7 (_LdrpAppendUnicodeStringToFilenameBuffer@8.c)
 *     _LdrpLogDllState@12 @ 0x4B2CDF06 (_LdrpLogDllState@12.c)
 *     _LdrpProcessWork@8 @ 0x4B2CE6E8 (_LdrpProcessWork@8.c)
 *     _ApiSetResolveToHost@20 @ 0x4B2D012C (_ApiSetResolveToHost@20.c)
 *     _LdrpFindOrPrepareLoadingModule@28 @ 0x4B2D2238 (_LdrpFindOrPrepareLoadingModule@28.c)
 *     _LdrpGetFullPath@8 @ 0x4B2D2394 (_LdrpGetFullPath@8.c)
 *     _RtlUTF8ToUnicodeN@20 @ 0x4B2DD1E0 (_RtlUTF8ToUnicodeN@20.c)
 *     _LdrpFreeUnicodeString@4 @ 0x4B2DE399 (_LdrpFreeUnicodeString@4.c)
 *     _LdrpQueueWork@4 @ 0x4B2DE91E (_LdrpQueueWork@4.c)
 *     _LdrpDestroyNode@4 @ 0x4B2E218A (_LdrpDestroyNode@4.c)
 *     _RtlpWakeSRWLock@12 @ 0x4B2E3BAB (_RtlpWakeSRWLock@12.c)
 *     _RtlDetermineDosPathNameType_Ustr@4 @ 0x4B2E42FE (_RtlDetermineDosPathNameType_Ustr@4.c)
 *     _RtlReplaceSystemDirectoryInPath@16 @ 0x4B2E6110 (_RtlReplaceSystemDirectoryInPath@16.c)
 *     _LdrpUnmapModule@4 @ 0x4B2E67DF (_LdrpUnmapModule@4.c)
 *     _LdrpFreeReplacedModule@4 @ 0x4B2F2697 (_LdrpFreeReplacedModule@4.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 *     _RtlRaiseException@4 @ 0x4B308940 (_RtlRaiseException@4.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _NtdllpReallocateStringRoutine@8 @ 0x4B333B47 (_NtdllpReallocateStringRoutine@8.c)
 */

int __fastcall LdrpLoadDependentModule(PCANSI_STRING SourceString, int a2, _DWORD *a3, int a4, int *a5, int a6)
{
  int v7; // ecx
  _WORD *StringRoutine; // esi
  int FullPath; // ebx
  int Length; // edx
  char *Buffer; // ebx
  int v12; // ecx
  unsigned int v13; // ecx
  int v14; // edx
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // esi
  unsigned int ActiveFrame; // ecx
  int v17; // edi
  char v18; // al
  _DWORD *v19; // esi
  unsigned __int16 v20; // si
  int v21; // eax
  int *SharedData; // eax
  int v23; // eax
  unsigned __int16 v24; // dx
  unsigned int v25; // ecx
  int v26; // esi
  unsigned int v27; // ecx
  int v28; // esi
  _DWORD *v29; // edx
  size_t v30; // esi
  unsigned int v31; // ecx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // eax
  bool v33; // al
  int **v34; // ecx
  int *v35; // esi
  int *v36; // eax
  int v37; // eax
  const void *v38; // edi
  unsigned __int16 v39; // cx
  _WORD *v40; // ecx
  int v41; // edx
  unsigned int v43; // ecx
  unsigned __int16 v44; // dx
  int v45; // eax
  unsigned int v46; // esi
  unsigned int v47; // esi
  unsigned __int16 v48; // dx
  _WORD *v49; // edi
  unsigned __int16 *v50; // eax
  unsigned __int16 *v51; // edi
  unsigned __int16 *v52; // ecx
  unsigned __int16 v53; // dx
  unsigned int v54; // ecx
  __int16 v55; // si
  unsigned int v56; // ebx
  unsigned int v57; // edx
  __int16 v58; // cx
  unsigned int v59; // edx
  unsigned __int16 *v60; // eax
  int v61; // ecx
  _WORD *v62; // ecx
  int *v63; // ebx
  int *v64; // esi
  int v65; // eax
  int v66; // edx
  int v67; // esi
  int v68; // edi
  int v69; // eax
  int v70; // ecx
  int v71; // edx
  _DWORD **v72; // edx
  _DWORD *v73; // edx
  _DWORD *v74; // esi
  _DWORD *v75; // eax
  unsigned int v76; // eax
  int v77; // eax
  int v78; // esi
  int v79; // edx
  _DWORD *v80; // eax
  int v81; // edi
  signed __int32 v82; // edx
  int *v83; // esi
  _DWORD *v85; // ecx
  _DWORD *v86; // ecx
  int v87; // eax
  _DWORD *v88; // ecx
  int v89; // esi
  int Heap; // eax
  int v91; // esi
  unsigned __int16 *v92; // eax
  int v93; // ecx
  signed __int32 v94; // ecx
  signed __int32 v95; // eax
  _WORD *v96; // esi
  int v97; // eax
  unsigned int v98; // eax
  unsigned int v99; // edi
  void *v100; // ebx
  unsigned int v101; // edi
  void *v102; // ebx
  unsigned int v103; // edi
  void *v104; // ecx
  bool v105; // zf
  const char *v106; // eax
  int v107; // eax
  int v108; // edx
  _DWORD *v109; // ecx
  int *v110; // esi
  int v111; // eax
  int v112; // [esp+20h] [ebp-5B8h]
  _DWORD v113[2]; // [esp+28h] [ebp-5B0h] BYREF
  unsigned __int16 *v114; // [esp+30h] [ebp-5A8h]
  unsigned __int16 *v115; // [esp+34h] [ebp-5A4h]
  unsigned __int16 *v116; // [esp+38h] [ebp-5A0h]
  void *v117; // [esp+3Ch] [ebp-59Ch]
  int v118; // [esp+40h] [ebp-598h]
  int v119; // [esp+44h] [ebp-594h]
  int v120; // [esp+48h] [ebp-590h]
  unsigned __int16 *v121; // [esp+4Ch] [ebp-58Ch]
  void *v122; // [esp+50h] [ebp-588h]
  int v123; // [esp+54h] [ebp-584h]
  int v124; // [esp+58h] [ebp-580h]
  int v125; // [esp+5Ch] [ebp-57Ch]
  int v126; // [esp+60h] [ebp-578h]
  _WORD *v127; // [esp+64h] [ebp-574h]
  _DWORD v128[2]; // [esp+68h] [ebp-570h] BYREF
  unsigned int v129; // [esp+70h] [ebp-568h] BYREF
  int v130; // [esp+74h] [ebp-564h]
  int v131; // [esp+78h] [ebp-560h]
  int v132; // [esp+7Ch] [ebp-55Ch]
  int v133; // [esp+80h] [ebp-558h]
  void *v134; // [esp+84h] [ebp-554h]
  int v135; // [esp+88h] [ebp-550h]
  int v136; // [esp+8Ch] [ebp-54Ch]
  _WORD *v137; // [esp+90h] [ebp-548h]
  int v138; // [esp+94h] [ebp-544h]
  const wchar_t *v139; // [esp+98h] [ebp-540h]
  unsigned __int16 v140; // [esp+9Ch] [ebp-53Ch] BYREF
  void *Src; // [esp+A0h] [ebp-538h]
  UNICODE_STRING DestinationString; // [esp+A4h] [ebp-534h] BYREF
  int v143; // [esp+ACh] [ebp-52Ch]
  int v144; // [esp+B0h] [ebp-528h] BYREF
  _DWORD *v145; // [esp+B4h] [ebp-524h]
  int v146; // [esp+B8h] [ebp-520h]
  int v147; // [esp+BCh] [ebp-51Ch]
  UNICODE_STRING v148; // [esp+C0h] [ebp-518h] BYREF
  void *v149; // [esp+C8h] [ebp-510h]
  int v150; // [esp+CCh] [ebp-50Ch]
  int v151; // [esp+D0h] [ebp-508h]
  int v152; // [esp+D4h] [ebp-504h]
  _WORD v153[2]; // [esp+D8h] [ebp-500h] BYREF
  char *v154; // [esp+DCh] [ebp-4FCh]
  int v155; // [esp+E0h] [ebp-4F8h]
  struct _PEB *v156; // [esp+E4h] [ebp-4F4h]
  int v157; // [esp+E8h] [ebp-4F0h]
  int *v158; // [esp+ECh] [ebp-4ECh]
  int v159; // [esp+F0h] [ebp-4E8h]
  int v160; // [esp+F4h] [ebp-4E4h] BYREF
  int v161; // [esp+F8h] [ebp-4E0h]
  int *v162; // [esp+FCh] [ebp-4DCh]
  int v163; // [esp+100h] [ebp-4D8h]
  int v164; // [esp+104h] [ebp-4D4h]
  int *v165; // [esp+108h] [ebp-4D0h]
  int v166; // [esp+10Ch] [ebp-4CCh]
  int v167; // [esp+110h] [ebp-4C8h]
  __int16 v168; // [esp+116h] [ebp-4C2h]
  char v169; // [esp+118h] [ebp-4C0h]
  char v170; // [esp+119h] [ebp-4BFh]
  char v171; // [esp+11Ah] [ebp-4BEh]
  char v172; // [esp+11Bh] [ebp-4BDh]
  _DWORD *v173; // [esp+11Ch] [ebp-4BCh]
  unsigned int v174; // [esp+120h] [ebp-4B8h]
  int v175; // [esp+124h] [ebp-4B4h]
  int v176; // [esp+128h] [ebp-4B0h]
  char v177; // [esp+12Dh] [ebp-4ABh]
  bool v178; // [esp+12Eh] [ebp-4AAh]
  char v179; // [esp+12Fh] [ebp-4A9h] BYREF
  int v180; // [esp+130h] [ebp-4A8h]
  char v181; // [esp+137h] [ebp-4A1h]
  int v182; // [esp+138h] [ebp-4A0h]
  char v183; // [esp+13Fh] [ebp-499h]
  EXCEPTION_RECORD ExceptionRecord; // [esp+140h] [ebp-498h] BYREF
  int v185; // [esp+190h] [ebp-448h] BYREF
  void *v186; // [esp+194h] [ebp-444h]
  _WORD v187[128]; // [esp+198h] [ebp-440h] BYREF
  int v188; // [esp+298h] [ebp-340h] BYREF
  void *v189; // [esp+29Ch] [ebp-33Ch]
  _WORD v190[128]; // [esp+2A0h] [ebp-338h] BYREF
  _WORD v191[270]; // [esp+3A0h] [ebp-238h] BYREF
  CPPEH_RECORD ms_exc; // [esp+5C0h] [ebp-18h]
  void *retaddr; // [esp+5DCh] [ebp+4h]

  v167 = a2;
  v125 = a2;
  v7 = (int)a3;
  v173 = a3;
  v165 = a5;
  v161 = a6;
  v189 = v190;
  v188 = 0x1000000;
  v190[0] = 0;
  StringRoutine = v187;
  v186 = v187;
  v185 = 0x1000000;
  v187[0] = 0;
  FullPath = 0;
  if ( !SourceString->Length )
    goto LABEL_9;
  Length = SourceString->Length;
  Buffer = SourceString->Buffer;
  v12 = 0;
  if ( NlsActiveCodePageIsUTF8 )
  {
    if ( SourceString->Length )
    {
      RtlUTF8ToUnicodeN(0, 0, &v160, Buffer, Length);
      StringRoutine = v186;
      v12 = v160;
    }
    else
    {
      v12 = 0;
    }
  }
  else
  {
    if ( !NlsMbCodePageTag )
    {
      v12 = 2 * Length;
      goto LABEL_5;
    }
    if ( SourceString->Length )
    {
      do
      {
        --Length;
        v97 = (unsigned __int8)*Buffer++;
        if ( NlsLeadByteInfoTable[v97] )
        {
          if ( !Length )
          {
            v12 += 2;
            break;
          }
          --Length;
          ++Buffer;
        }
        v12 += 2;
      }
      while ( Length );
    }
  }
LABEL_5:
  v13 = (unsigned __int16)v185 + 2 + v12;
  FullPath = 0;
  if ( v13 > HIWORD(v185) )
  {
    if ( v13 > 0xFFFE )
    {
      FullPath = -1073741562;
      goto LABEL_6;
    }
    v98 = (v13 + 63) & 0xFFFFFFC0;
    v182 = v98;
    if ( v98 > 0xFFFE )
    {
      v98 = 65534;
      v182 = 65534;
    }
    if ( StringRoutine == v187 )
    {
      StringRoutine = (_WORD *)NtdllpAllocateStringRoutine(v98);
      if ( !StringRoutine )
        goto LABEL_201;
      if ( (_WORD)v185 )
        memcpy(StringRoutine, v186, (unsigned __int16)v185);
    }
    else
    {
      StringRoutine = (_WORD *)NtdllpReallocateStringRoutine(v98, StringRoutine);
    }
    if ( StringRoutine )
    {
      v186 = StringRoutine;
      HIWORD(v185) = v182;
      goto LABEL_6;
    }
LABEL_201:
    FullPath = -1073741801;
    StringRoutine = v186;
  }
LABEL_6:
  if ( FullPath >= 0 )
  {
    DestinationString.Buffer = (_WORD *)((char *)StringRoutine + (unsigned __int16)v185);
    DestinationString.Length = 0;
    DestinationString.MaximumLength = HIWORD(v185) - v185;
    RtlAnsiStringToUnicodeString(&DestinationString, SourceString, 0);
    LOWORD(v185) = DestinationString.Length + v185;
  }
  v7 = (int)v173;
LABEL_9:
  v175 = FullPath;
  if ( FullPath < 0 )
  {
LABEL_287:
    *v165 = 0;
    **(_DWORD **)(v167 + 24) = FullPath;
    v96 = v186;
    goto LABEL_119;
  }
  v128[0] = 36;
  v128[1] = 1;
  v129 = 0;
  v130 = 0;
  v131 = 0;
  v132 = 0;
  v133 = 0;
  v134 = 0;
  v135 = 0;
  v14 = *(_DWORD *)(v7 + 72);
  ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
  if ( ActivationContextStackPointer )
    ActiveFrame = (unsigned int)ActivationContextStackPointer->ActiveFrame;
  else
    ActiveFrame = 0;
  v132 = ~ActiveFrame;
  v133 = ~v14;
  v134 = retaddr;
  if ( ActiveFrame && (*(_DWORD *)(ActiveFrame + 8) & 0x70) != 0x20 )
  {
    ExceptionRecord.ExceptionRecord = 0;
    ExceptionRecord.NumberParameters = 4;
    ExceptionRecord.ExceptionInformation[0] = (unsigned int)ActivationContextStackPointer;
    ExceptionRecord.ExceptionInformation[1] = ActiveFrame;
    ExceptionRecord.ExceptionInformation[2] = ActiveFrame;
    ExceptionRecord.ExceptionInformation[3] = *(_DWORD *)(ActiveFrame + 8);
    ExceptionRecord.ExceptionCode = -1072365548;
    ExceptionRecord.ExceptionFlags = 1;
    RtlRaiseException(&ExceptionRecord);
  }
  v129 = ActiveFrame;
  v130 = v14;
  v131 = 32;
  if ( ActiveFrame )
  {
    if ( *(_DWORD *)(ActiveFrame + 4) == v14 )
      goto LABEL_15;
  }
  else if ( !v14 )
  {
LABEL_15:
    v131 = 48;
    goto LABEL_16;
  }
  ActivationContextStackPointer->ActiveFrame = (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)&v129;
LABEL_16:
  ms_exc.registration.TryLevel = 0;
  v182 = *(_DWORD *)(v167 + 16) & 0x1800800;
  v17 = v182;
  v178 = RtlWow64EnableFsRedirectionEx(0, &v144) >= 0;
  FullPath = 0;
  v180 = 0;
  v166 = 0;
  v18 = 0;
  v183 = 0;
  if ( (v17 & 0x800008) != 0 )
    goto LABEL_44;
  v162 = &v185;
  v156 = NtCurrentPeb();
  v183 = 0;
  v181 = 1;
  v19 = v173 + 11;
  LdrpLogDllState(5328);
  FullPath = ApiSetResolveToHost(v19, &v179, &v140);
  v180 = FullPath;
  if ( FullPath >= 0 && v179 )
  {
    v20 = v140;
    if ( v140 )
      v21 = 5329;
    else
      v21 = 5330;
  }
  else
  {
    v21 = 5331;
    v20 = v140;
  }
  LdrpLogDllState(v21);
  v159 = FullPath;
  if ( !v179 )
    goto LABEL_148;
  if ( !v20 )
  {
    FullPath = -1073740671;
    goto LABEL_154;
  }
  LOWORD(v188) = 0;
  SharedData = (int *)NtCurrentPeb()->SharedData;
  if ( !SharedData )
  {
    v124 = 0;
LABEL_25:
    v23 = 2147352624;
    goto LABEL_26;
  }
  v124 = *SharedData;
  if ( !v124 )
    goto LABEL_25;
  v23 = (int)NtCurrentPeb()->SharedData + 30;
LABEL_26:
  v126 = v23;
  RtlInitUnicodeString(&v148, (PCWSTR)v23);
  v118 = 0;
  v24 = v148.Length;
  if ( !v148.Length )
    goto LABEL_30;
  v25 = v148.Length + (unsigned __int16)v188 + 2;
  v180 = v25;
  v26 = 0;
  v152 = 0;
  if ( v25 > HIWORD(v188) )
  {
    if ( v25 > 0xFFFE )
    {
      v26 = -1073741562;
      v152 = -1073741562;
      goto LABEL_28;
    }
    v99 = (v25 + 63) & 0xFFFFFFC0;
    v180 = v99;
    if ( v99 > 0xFFFE )
    {
      v99 = 65534;
      v180 = 65534;
    }
    if ( v189 == v190 )
    {
      v100 = (void *)NtdllpAllocateStringRoutine(v99);
      v117 = v100;
      if ( !v100 )
        goto LABEL_218;
      if ( (_WORD)v188 )
        memcpy(v100, v189, (unsigned __int16)v188);
    }
    else
    {
      v100 = (void *)NtdllpReallocateStringRoutine(v99, v189);
      v117 = v100;
    }
    if ( v100 )
    {
      v189 = v100;
      HIWORD(v188) = v99;
LABEL_219:
      v24 = v148.Length;
      goto LABEL_28;
    }
LABEL_218:
    v26 = -1073741801;
    v152 = -1073741801;
    goto LABEL_219;
  }
LABEL_28:
  v118 = v26;
  if ( v26 >= 0 )
  {
    memcpy((char *)v189 + (unsigned __int16)v188, v148.Buffer, v24);
    LOWORD(v188) = v148.Length + v188;
    *((_WORD *)v189 + ((unsigned __int16)v188 >> 1)) = 0;
  }
LABEL_30:
  v119 = 0;
  v27 = (unsigned __int16)v188 + 22;
  v151 = v27;
  v28 = 0;
  v150 = 0;
  if ( v27 <= HIWORD(v188) )
    goto LABEL_31;
  if ( v27 > 0xFFFE )
  {
    v28 = -1073741562;
    v150 = -1073741562;
    goto LABEL_31;
  }
  v101 = ((unsigned __int16)v188 + 85) & 0xFFFFFFC0;
  v151 = v101;
  if ( v101 > 0xFFFE )
  {
    v101 = 65534;
    v151 = 65534;
  }
  if ( v189 == v190 )
  {
    v102 = (void *)NtdllpAllocateStringRoutine(v101);
    v122 = v102;
    if ( !v102 )
      goto LABEL_231;
    if ( (_WORD)v188 )
      memcpy(v102, v189, (unsigned __int16)v188);
  }
  else
  {
    v102 = (void *)NtdllpReallocateStringRoutine(v101, v189);
    v122 = v102;
  }
  if ( v102 )
  {
    v189 = v102;
    HIWORD(v188) = v101;
    goto LABEL_31;
  }
LABEL_231:
  v28 = -1073741801;
  v150 = -1073741801;
LABEL_31:
  v119 = v28;
  if ( v28 >= 0 )
  {
    v29 = (char *)v189 + (unsigned __int16)v188;
    *v29 = *(_DWORD *)L"\\SYSTEM32\\";
    v29[1] = *(_DWORD *)L"YSTEM32\\";
    v29[2] = *(_DWORD *)L"TEM32\\";
    v29[3] = *(_DWORD *)L"M32\\";
    v29[4] = *(_DWORD *)L"2\\";
    LOWORD(v188) = v188 + 20;
    *((_WORD *)v189 + ((unsigned __int16)v188 >> 1)) = 0;
  }
  v123 = 0;
  v30 = v140;
  v31 = v140 + (unsigned __int16)v188 + 2;
  v160 = v31;
  FullPath = 0;
  v180 = 0;
  v143 = 0;
  if ( v31 > HIWORD(v188) )
  {
    if ( v31 > 0xFFFE )
    {
      FullPath = -1073741562;
      v180 = -1073741562;
      v143 = -1073741562;
      goto LABEL_34;
    }
    v103 = (v31 + 63) & 0xFFFFFFC0;
    v160 = v103;
    if ( v103 > 0xFFFE )
    {
      v103 = 65534;
      v160 = 65534;
    }
    if ( v189 == v190 )
    {
      v104 = (void *)NtdllpAllocateStringRoutine(v103);
      v149 = v104;
      if ( !v104 )
      {
LABEL_243:
        FullPath = -1073741801;
        v180 = -1073741801;
        v143 = -1073741801;
        goto LABEL_34;
      }
      if ( (_WORD)v188 )
      {
        memcpy(v104, v189, (unsigned __int16)v188);
        v104 = v149;
      }
    }
    else
    {
      v104 = (void *)NtdllpReallocateStringRoutine(v103, v189);
      v149 = v104;
    }
    if ( v104 )
    {
      v189 = v104;
      HIWORD(v188) = v103;
      goto LABEL_34;
    }
    goto LABEL_243;
  }
LABEL_34:
  v123 = FullPath;
  if ( FullPath >= 0 )
  {
    memcpy((char *)v189 + (unsigned __int16)v188, Src, v30);
    LOWORD(v188) = v30 + v188;
    *((_WORD *)v189 + ((unsigned __int16)v188 >> 1)) = 0;
  }
  v159 = FullPath;
  if ( FullPath < 0 )
  {
LABEL_148:
    v34 = (int **)v162;
    v33 = v181;
    goto LABEL_41;
  }
  ProcessParameters = v156->ProcessParameters;
  v33 = ProcessParameters && (ProcessParameters->Flags & 0x1000) != 0;
  v181 = v33;
  v34 = (int **)&v188;
  v162 = &v188;
LABEL_41:
  if ( FullPath < 0 || !v33 || LdrpIsSecureProcess )
    goto LABEL_43;
  v91 = RtlDosApplyFileIsolationRedirection_Ustr(1, v34, (int)&LdrpDefaultExtension, 0, v113, 0, 0, 0, 0);
  if ( v91 >= 0 )
  {
    v183 = 1;
    LdrpGetFullPath(v113, &v188);
    LdrpFreeUnicodeString(v113);
  }
  if ( v91 == -1072365560 )
    goto LABEL_43;
  FullPath = v91;
LABEL_154:
  v159 = FullPath;
  v180 = FullPath;
LABEL_43:
  v166 = FullPath;
  v17 = v182;
  v18 = v183;
LABEL_44:
  if ( FullPath < 0 )
    goto LABEL_264;
  v35 = &v185;
  v158 = &v185;
  if ( !(_WORD)v188 )
  {
    v92 = (unsigned __int16 *)((char *)v186 + (unsigned __int16)v185);
    v121 = v92;
    while ( 1 )
    {
      v121 = --v92;
      if ( v92 < v186 )
        break;
      v93 = *v92;
      if ( v93 == 92 || v93 == 47 )
      {
        v172 = 0;
        if ( RtlDetermineDosPathNameType_Ustr(&v185) != 5 )
        {
          FullPath = LdrpGetFullPath(&v185, &v188);
          v180 = FullPath;
          v166 = FullPath;
          if ( FullPath >= 0 )
          {
            v17 |= 0x600u;
            v182 = v17;
            goto LABEL_50;
          }
LABEL_264:
          if ( (ShowSnaps & 3) != 0 )
            LdrpLogDbgPrint(
              "minkernel\\ntdll\\ldrutil.c",
              2738,
              "LdrpPreprocessDllName",
              0,
              "LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
              &v185,
              FullPath);
          if ( (ShowSnaps & 0x10) != 0 )
            __debugbreak();
          goto LABEL_92;
        }
LABEL_161:
        FullPath = LdrpAppendUnicodeStringToFilenameBuffer(&v188, &v185);
        v166 = FullPath;
        v180 = FullPath;
        goto LABEL_50;
      }
    }
    v172 = 1;
    v17 |= 0x20u;
    v182 = v17;
    goto LABEL_161;
  }
  if ( (ShowSnaps & 5) != 0 )
  {
    v105 = v18 == 0;
    v106 = "SxS";
    if ( v105 )
      v106 = "API set";
    LdrpLogDbgPrint(
      "minkernel\\ntdll\\ldrutil.c",
      2680,
      "LdrpPreprocessDllName",
      2,
      "DLL %wZ was redirected to %wZ by %s\n",
      &v185,
      &v188,
      v106);
    v18 = v183;
  }
  v17 |= 0x200u;
  v182 = v17;
  if ( v18 )
  {
    v17 |= 4u;
    v182 = v17;
  }
  v35 = &v188;
  v158 = &v188;
LABEL_50:
  if ( FullPath < 0 )
    goto LABEL_264;
  if ( (v17 & 0x200) == 0 )
    goto LABEL_81;
  v137 = v191;
  v136 = 34865152;
  v36 = (int *)NtCurrentPeb()->SharedData;
  if ( !v36 )
  {
    v120 = 0;
LABEL_54:
    v37 = 2147352624;
    goto LABEL_55;
  }
  v120 = *v36;
  if ( !v120 )
    goto LABEL_54;
  v37 = (int)NtCurrentPeb()->SharedData + 30;
LABEL_55:
  v38 = (const void *)v37;
  v155 = v37;
  v39 = 0;
  if ( v37 )
  {
    v146 = 0;
    v147 = v37;
    v40 = (_WORD *)v37;
    v41 = v37 + 2;
    while ( *v40++ )
      ;
    v43 = ((int)v40 - v41) >> 1;
    v156 = (struct _PEB *)v43;
    if ( v43 > 0x7FFE )
    {
      v157 = -1073741562;
      v45 = -1073741562;
      v44 = v146;
    }
    else
    {
      v44 = 2 * v43;
      v156 = (struct _PEB *)(2 * v43);
      LOWORD(v146) = 2 * v43;
      HIWORD(v146) = 2 * v43 + 2;
      v157 = 0;
      v45 = 0;
    }
    v39 = 0;
    if ( v45 >= 0 )
    {
      v46 = v44;
      if ( v44 <= 0x214u )
      {
        memmove(v191, v38, v44);
        LOWORD(v136) = v46;
        v39 = v46;
        if ( v46 + 1 < 0x214 )
          v191[v46 >> 1] = 0;
      }
    }
  }
  v155 = v39;
  v139 = L"\\SysWOW64";
  v163 = 18;
  v138 = 1310738;
  v47 = v39 + 18;
  v48 = v39;
  if ( v47 <= 0x214 )
  {
    v49 = &v191[v39 >> 1];
    memmove(v49, L"\\SysWOW64", 0x12u);
    LOWORD(v136) = v47;
    v48 = v47;
    if ( (unsigned int)(unsigned __int16)v47 + 1 < 0x214 )
      v49[9] = 0;
  }
  v50 = v191;
  v116 = v191;
  v51 = (unsigned __int16 *)v189;
  v115 = (unsigned __int16 *)v189;
  if ( (unsigned __int16)v188 < (unsigned int)v48 )
    goto LABEL_80;
  v52 = (_WORD *)((char *)v191 + v48);
  v157 = (int)v52;
  while ( v50 < v52 )
  {
    v53 = *v50;
    v54 = *v50;
    v55 = *v51;
    v56 = *v51;
    if ( (_WORD)v54 == (_WORD)v56 )
      goto LABEL_71;
    if ( v54 < 0x61 )
    {
LABEL_124:
      v57 = v54;
      goto LABEL_75;
    }
    if ( v54 <= 0x7A )
    {
      LOWORD(v54) = v53 - 32;
      v57 = (unsigned __int16)(v53 - 32);
LABEL_75:
      HIWORD(v174) = v54;
      goto LABEL_76;
    }
    if ( !Nls844UnicodeUpcaseTable )
      goto LABEL_124;
    v163 = 192;
    if ( (unsigned __int16)v54 < 0xC0u )
      goto LABEL_124;
    HIWORD(v174) = *v50
                 + *(_WORD *)(Nls844UnicodeUpcaseTable
                            + 2
                            * ((v54 & 0xF)
                             + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                   + 2
                                                   * (((unsigned __int8)v54 >> 4)
                                                    + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v54 >> 8))))));
    v57 = HIWORD(v174);
    v55 = *v51;
LABEL_76:
    v174 = v57;
    if ( v56 < 0x61 )
      goto LABEL_77;
    if ( v56 > 0x7A )
    {
      if ( !Nls844UnicodeUpcaseTable || (unsigned __int16)v56 < 0xC0u )
      {
LABEL_77:
        v58 = v56;
        v168 = v56;
        goto LABEL_78;
      }
      v168 = *v51
           + *(_WORD *)(Nls844UnicodeUpcaseTable
                      + 2
                      * ((v56 & 0xF)
                       + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                             + 2
                                             * (((unsigned __int8)v56 >> 4)
                                              + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v56 >> 8))))));
      v58 = v168;
      LOWORD(v57) = v174;
    }
    else
    {
      v168 = v55 - 32;
      v58 = v55 - 32;
    }
LABEL_78:
    if ( (_WORD)v57 != v58 )
      goto LABEL_79;
LABEL_71:
    v116 = ++v50;
    v115 = ++v51;
    v52 = (unsigned __int16 *)v157;
  }
  v154 = (char *)v189 + 2 * ((unsigned __int16)v155 >> 1);
  v153[0] = v188 - v155;
  v153[1] = HIWORD(v188) - v155;
  RtlReplaceSystemDirectoryInPath(v153, 332, 1, 0);
LABEL_79:
  FullPath = v180;
LABEL_80:
  v35 = v158;
  v17 = v182;
LABEL_81:
  v59 = v35[1];
  v60 = (unsigned __int16 *)(v59 + *(unsigned __int16 *)v35);
  v114 = v60;
  v171 = 0;
  while ( 1 )
  {
    v114 = --v60;
    if ( (unsigned int)v60 < v59 )
    {
LABEL_86:
      FullPath = LdrpAppendUnicodeStringToFilenameBuffer(&v188, &LdrpDefaultExtension);
      v166 = FullPath;
      goto LABEL_91;
    }
    v61 = *v60;
    if ( v61 == 46 )
      break;
    if ( v61 == 47 || v61 == 92 )
      goto LABEL_86;
  }
  v171 = 1;
  v62 = (char *)v189 + (unsigned __int16)v188;
  v127 = v62;
  while ( 1 )
  {
    v127 = --v62;
    if ( v62 < v189 || *v62 != 46 )
      break;
    LOWORD(v188) = v188 - 2;
  }
  v62[1] = 0;
LABEL_91:
  if ( FullPath < 0 )
    goto LABEL_264;
LABEL_92:
  if ( v178 )
    RtlWow64EnableFsRedirectionEx(v144, &v144);
  v175 = FullPath;
  if ( FullPath < 0 )
    goto LABEL_118;
  if ( (v17 & 0x800000) != 0 )
  {
    FullPath = -1073741637;
    v175 = -1073741637;
    goto LABEL_118;
  }
  v63 = (int *)v161;
  if ( !*(_DWORD *)v161 )
  {
    Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 2621440, 16);
    *v63 = Heap;
    if ( !Heap )
    {
      FullPath = -1073741801;
      v175 = -1073741801;
      goto LABEL_118;
    }
  }
  v64 = v165;
  v65 = LdrpFindOrPrepareLoadingModule(v17, a4, v173, v165, *(_DWORD *)(v167 + 24));
  FullPath = v65;
  v175 = v65;
  v67 = *v64;
  if ( !v67 )
    goto LABEL_118;
  v68 = v17 & 0x400;
  if ( v68 && v65 == -1073741515 )
  {
    v112 = *(_DWORD *)(v67 + 92);
    *(_DWORD *)(v112 + 16) |= 0x4000000u;
    LOBYTE(v66) = 1;
    LdrpProcessWork(v112, v66);
    FullPath = **(_DWORD **)(v112 + 24);
    v175 = FullPath;
  }
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v69 = *v165;
  v70 = v69;
  v176 = *v165;
  if ( v69 )
  {
    v71 = *(_DWORD *)(v69 + 92);
    if ( v71 )
    {
      if ( (*(_DWORD *)(v71 + 16) & 0x80000) == 0 && *(_DWORD *)(v71 + 32) != v69 )
      {
        v70 = *(_DWORD *)(v71 + 32);
        v176 = v70;
        *(_DWORD *)(v71 + 32) = v69;
      }
    }
  }
  v72 = (_DWORD **)v161;
  *(_DWORD *)(*(_DWORD *)v161 + 12) &= ~1u;
  v73 = *v72;
  v145 = v73;
  v74 = *(_DWORD **)(v70 + 80);
  v75 = *(_DWORD **)(*(_DWORD *)(v167 + 32) + 80);
  v182 = (int)v75;
  if ( v75 == v74 )
  {
LABEL_105:
    v177 = 1;
    v76 = v74[3];
    if ( v76 != -1 && v76 > 1 )
      v74[3] = v76 - 1;
  }
  else
  {
    if ( v74[8] != 9 )
      goto LABEL_133;
    if ( v74[3] == -1 || (*(_BYTE *)(*v74 - 32) & 0x20) != 0 )
    {
      v170 = 1;
      goto LABEL_105;
    }
    v170 = 0;
    v75 = (_DWORD *)v182;
LABEL_133:
    if ( v75[6] )
    {
      v173 = (_DWORD *)v75[6];
      do
      {
        v173 = (_DWORD *)*v173;
        v70 = v176;
        if ( (_DWORD *)v173[1] == v74 )
          goto LABEL_105;
      }
      while ( v173 != (_DWORD *)v75[6] );
    }
    v177 = 0;
    if ( v73 )
    {
LABEL_138:
      v85 = (_DWORD *)v75[6];
      if ( v85 )
      {
        *v73 = *v85;
        *v85 = v73;
        v75 = (_DWORD *)v182;
      }
      else
      {
        *v73 = v73;
      }
      v75[6] = v73;
      v73[1] = v74;
      v86 = v73 + 2;
      v163 = v74[7];
      v87 = v182;
      if ( v163 )
      {
        v88 = (_DWORD *)v163;
        v73[2] = *(_DWORD *)v163;
        *v88 = v73 + 2;
        v87 = v182;
        v86 = v73 + 2;
      }
      else
      {
        *v86 = v86;
      }
      v74[7] = v86;
      v89 = v73[3] & 1;
      v73[3] = v87;
      v70 = v176;
      if ( v89 )
        v73[3] = v89 | v87 & 0xFFFFFFFE;
      v73 = 0;
      v145 = 0;
    }
    else
    {
      v107 = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 2359296, 16);
      v73 = (_DWORD *)v107;
      v145 = (_DWORD *)v107;
      if ( v107 )
      {
        *(_DWORD *)(v107 + 12) |= 1u;
        v75 = (_DWORD *)v182;
        goto LABEL_138;
      }
      MEMORY[0] = -1073741801;
      v70 = v176;
    }
  }
  v164 = (int)v73;
  *(_DWORD *)v161 = v73;
  if ( FullPath != -1073741515 )
  {
    v77 = FullPath;
    if ( FullPath != -1073741267 )
      goto LABEL_108;
    FullPath = 0;
    v175 = 0;
    goto LABEL_109;
  }
  v77 = -1073741515;
  if ( !v68 )
  {
    LdrpQueueWork(*(_DWORD *)(v70 + 92));
    FullPath = 0;
    v175 = 0;
    v70 = v176;
    goto LABEL_109;
  }
LABEL_108:
  if ( v77 >= 0 )
  {
LABEL_109:
    v78 = v167;
    v79 = *(_DWORD *)(v167 + 56);
    if ( v79 )
    {
      if ( *(_DWORD *)v161 || *(int *)(*(_DWORD *)(v70 + 80) + 32) >= 2 )
        *(_DWORD *)(v167 + 56) = v79 - 1;
    }
    else if ( *(int *)(*(_DWORD *)(v70 + 80) + 32) < 2 )
    {
      *(_DWORD *)(v167 + 44) = v70;
      *(_DWORD *)(v78 + 56) = 1;
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v78 + 32) + 80) + 32) = 3;
      FullPath = 259;
      v175 = 259;
    }
  }
  v80 = *(_DWORD **)(v70 + 80);
  if ( v80[3] == -1 || (*(_BYTE *)(*v80 - 32) & 0x20) != 0 )
  {
    v169 = 1;
LABEL_114:
    v81 = v176;
    goto LABEL_115;
  }
  v169 = 0;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v70 + 156), 0xFFFFFFFF) )
    goto LABEL_114;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v81 = v176;
  v108 = *(_DWORD *)(v176 + 84);
  v109 = *(_DWORD **)(v176 + 88);
  if ( *(_DWORD *)(v108 + 4) != v176 + 84 || *v109 != v176 + 84 )
    __fastfail(3u);
  *v109 = v108;
  *(_DWORD *)(v108 + 4) = v109;
  v110 = *(int **)(v81 + 80);
  v164 = *v110;
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  if ( *(_WORD *)(v81 + 58) )
    LdrpReleaseTlsEntry(v81, 0);
  LdrpUnmapModule(v81);
  v111 = *(_DWORD *)(v81 + 72);
  if ( v111 && v111 != -1 )
    RtlReleaseActivationContext(*(volatile signed __int32 **)(v81 + 72));
  if ( *(_DWORD *)(v81 + 40) )
    LdrpFreeUnicodeString(v81 + 36);
  RtlFreeHeap(LdrpHeap, 0, v81);
  if ( (int *)v164 == v110 )
    LdrpDestroyNode(v110);
LABEL_115:
  v82 = _InterlockedCompareExchange(&LdrpModuleDatatableLock, 0, 1);
  if ( v82 != 1 )
  {
    while ( 1 )
    {
      v164 = v82 & 6;
      v94 = v82 + 4 * (v164 == 2) - 1;
      v95 = _InterlockedCompareExchange(&LdrpModuleDatatableLock, v94, v82);
      v81 = v176;
      if ( v95 == v82 )
        break;
      v82 = v95;
    }
    if ( v164 == 2 )
      RtlpWakeSRWLock(v94);
  }
  v83 = v165;
  if ( v81 != *v165 )
  {
    LdrpFreeReplacedModule();
    *v83 = v81;
  }
LABEL_118:
  ms_exc.registration.TryLevel = -2;
  RtlDeactivateActivationContextUnsafeFast(v128);
  v96 = v186;
  if ( FullPath < 0 )
    goto LABEL_287;
LABEL_119:
  if ( v187 != v96 )
    RtlDeleteBoundaryDescriptor((int)v96);
  v186 = v187;
  v185 = 0x1000000;
  v187[0] = 0;
  if ( v190 != v189 )
    RtlDeleteBoundaryDescriptor((int)v189);
  return FullPath;
}
