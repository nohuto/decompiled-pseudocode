/*
 * XREFs of LdrpLoadDependentModule @ 0x180017BE0
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x180017990 (LdrpMapAndSnapDependency.c)
 *     LdrpResolveForwarder @ 0x1800332E8 (LdrpResolveForwarder.c)
 * Callees:
 *     LdrpQueueWork @ 0x18000F420 (LdrpQueueWork.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseActivationContext @ 0x180013570 (RtlReleaseActivationContext.c)
 *     LdrpLoadKnownDll @ 0x180014398 (LdrpLoadKnownDll.c)
 *     RtlpWakeSRWLock @ 0x180015200 (RtlpWakeSRWLock.c)
 *     RtlAnsiStringToUnicodeString @ 0x180019580 (RtlAnsiStringToUnicodeString.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x1800197B0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpLogDllState @ 0x18001A6CC (LdrpLogDllState.c)
 *     ApiSetResolveToHost @ 0x18001A728 (ApiSetResolveToHost.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x18001A8AC (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001A9E0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18001C1AC (RtlDetermineDosPathNameType_Ustr.c)
 *     LdrpFindLoadedDllByName @ 0x18002113C (LdrpFindLoadedDllByName.c)
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 *     RtlRaiseException @ 0x180051070 (RtlRaiseException.c)
 *     RtlUTF8ToUnicodeN @ 0x1800594B0 (RtlUTF8ToUnicodeN.c)
 *     LdrpProcessWork @ 0x18005EC2C (LdrpProcessWork.c)
 *     LdrpGetFullPath @ 0x18005F4AC (LdrpGetFullPath.c)
 *     LdrpFreeUnicodeString @ 0x18005F8E0 (LdrpFreeUnicodeString.c)
 *     LdrpFreeReplacedModule @ 0x180066618 (LdrpFreeReplacedModule.c)
 *     LdrpAllocatePlaceHolder @ 0x18006B32C (LdrpAllocatePlaceHolder.c)
 *     NtdllpAllocateStringRoutine @ 0x18006DBB0 (NtdllpAllocateStringRoutine.c)
 *     LdrpDestroyNode @ 0x18006E5B4 (LdrpDestroyNode.c)
 *     LdrpUnmapModule @ 0x180070DB0 (LdrpUnmapModule.c)
 *     LdrpReleaseTlsEntry @ 0x18007E6C0 (LdrpReleaseTlsEntry.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 *     LdrpFindOrPrepareEnclaveModule @ 0x1800CD7D0 (LdrpFindOrPrepareEnclaveModule.c)
 *     LdrpLogDbgPrint @ 0x1800CDCC8 (LdrpLogDbgPrint.c)
 *     LdrpLogEtwEvent @ 0x1800CF2C0 (LdrpLogEtwEvent.c)
 *     NtdllpReallocateStringRoutine @ 0x1800D4C74 (NtdllpReallocateStringRoutine.c)
 */

__int64 __fastcall LdrpLoadDependentModule(
        PCANSI_STRING SourceString,
        __int64 a2,
        __int64 a3,
        int a4,
        PVOID *a5,
        __int64 a6)
{
  __int64 v6; // r9
  __int64 v7; // r13
  PVOID *v9; // r12
  wchar_t *v10; // rbx
  unsigned __int16 v11; // dx
  unsigned int v12; // esi
  int FullPath; // edi
  ULONG Length; // eax
  int v15; // r8d
  char *Buffer; // r9
  int v17; // ecx
  __int64 v18; // r8
  __int64 v19; // rdx
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // r8
  unsigned __int64 ActiveFrame; // rcx
  unsigned int v22; // esi
  char v23; // r14
  _UNICODE_STRING *p_OriginalName; // r12
  struct _PEB *v25; // r13
  char v26; // r15
  int v27; // ebx
  void *ApiSetMap; // rdi
  char v29; // si
  unsigned __int16 v30; // bx
  unsigned __int16 v31; // ax
  __int64 v32; // r9
  int *SharedData; // rcx
  __int64 v34; // r14
  __int64 v35; // rbx
  unsigned __int64 v36; // rbx
  __int16 v37; // ax
  unsigned int v38; // ecx
  int v39; // edi
  unsigned int v40; // ecx
  int v41; // ebx
  char *v42; // rdx
  size_t v43; // rbx
  unsigned int v44; // ecx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  _UNICODE_STRING *v46; // rbx
  wchar_t *v47; // rdx
  wchar_t *v48; // rax
  wchar_t v49; // cx
  unsigned int v50; // r14d
  _QWORD **v51; // rdi
  char v52; // cl
  _QWORD *v53; // r15
  volatile signed __int32 *v54; // rsi
  wchar_t *v55; // rax
  unsigned __int16 *v56; // r9
  unsigned __int64 v57; // r10
  unsigned __int64 v58; // r11
  __int64 v59; // rax
  signed __int64 v60; // rax
  __int64 v61; // rcx
  unsigned int v62; // ebx
  __int64 v63; // r14
  __int64 v64; // r15
  _QWORD *v65; // rbx
  signed __int64 v66; // rdx
  __int64 v67; // rcx
  int v68; // eax
  signed __int64 v69; // rax
  int v70; // esi
  char *v71; // rax
  char *v72; // r14
  __int64 v73; // rcx
  _QWORD *v74; // r8
  _DWORD *v75; // rcx
  __int64 v76; // rbx
  __int64 v77; // r15
  int v78; // edx
  int v79; // ecx
  __int64 v80; // rax
  signed __int64 v81; // rax
  void *v82; // rbx
  char **v83; // rdx
  PVOID *v84; // rcx
  _QWORD *v85; // rbx
  _QWORD *v86; // rdi
  _ACTIVATION_CONTEXT *v87; // rcx
  _QWORD *v88; // rdx
  _QWORD *v89; // rax
  _QWORD *v90; // rdx
  _QWORD *v91; // rdx
  _QWORD *v92; // r8
  bool v93; // zf
  int v94; // eax
  signed __int64 v95; // r8
  __int64 v96; // rdx
  signed __int64 v97; // rdx
  signed __int64 v98; // rtt
  signed __int64 v99; // rcx
  __int64 v100; // rdx
  signed __int64 v101; // rdx
  signed __int64 v102; // rtt
  signed __int64 v103; // rcx
  __int64 v104; // rdx
  signed __int64 v105; // rtt
  wchar_t *v106; // rcx
  _QWORD *v107; // rbx
  wchar_t *i; // r9
  wchar_t *v109; // rcx
  __int16 v110; // cx
  int v111; // r10d
  int v112; // r11d
  int v113; // eax
  unsigned __int64 v114; // r8
  PVOID Heap; // rax
  NTSTATUS v116; // ebx
  wchar_t *v117; // rax
  unsigned int v118; // r12d
  unsigned int v119; // eax
  void *v120; // r13
  unsigned int v121; // edi
  unsigned int v122; // eax
  void *v123; // rsi
  unsigned int v124; // r14d
  unsigned int v125; // eax
  void *v126; // r12
  const char *v127; // rax
  char *v128; // rcx
  char v129; // al
  __int64 v130; // rbx
  _DWORD *v131; // rax
  wchar_t *v132; // rbx
  __int64 v134; // rax
  wchar_t *StringRoutine; // rax
  PULONG NewFlags; // [rsp+30h] [rbp-528h]
  char v137; // [rsp+52h] [rbp-506h] BYREF
  char v138; // [rsp+53h] [rbp-505h]
  int v139; // [rsp+54h] [rbp-504h]
  unsigned int v140; // [rsp+58h] [rbp-500h]
  char v141; // [rsp+5Ch] [rbp-4FCh]
  char v142; // [rsp+5Dh] [rbp-4FBh]
  char v143; // [rsp+5Eh] [rbp-4FAh]
  char v144; // [rsp+5Fh] [rbp-4F9h]
  char v145; // [rsp+60h] [rbp-4F8h]
  char v146; // [rsp+61h] [rbp-4F7h]
  __int16 v147; // [rsp+62h] [rbp-4F6h]
  __int16 v148; // [rsp+64h] [rbp-4F4h]
  __int16 v149; // [rsp+66h] [rbp-4F2h]
  int appended; // [rsp+68h] [rbp-4F0h]
  int v151; // [rsp+6Ch] [rbp-4ECh]
  ULONG UnicodeStringActualByteCount; // [rsp+70h] [rbp-4E8h] BYREF
  unsigned int v153; // [rsp+74h] [rbp-4E4h]
  struct _PEB *v154; // [rsp+78h] [rbp-4E0h]
  int v155; // [rsp+80h] [rbp-4D8h]
  int v156; // [rsp+84h] [rbp-4D4h] BYREF
  int v157; // [rsp+88h] [rbp-4D0h]
  int v158; // [rsp+90h] [rbp-4C8h]
  int v159; // [rsp+94h] [rbp-4C4h]
  int v160; // [rsp+98h] [rbp-4C0h]
  int v161; // [rsp+9Ch] [rbp-4BCh]
  _UNICODE_STRING *p_String1; // [rsp+A0h] [rbp-4B8h]
  __int64 v163; // [rsp+A8h] [rbp-4B0h]
  __int64 v164; // [rsp+B0h] [rbp-4A8h]
  __int64 v165; // [rsp+B8h] [rbp-4A0h]
  int v166; // [rsp+C0h] [rbp-498h]
  int v167; // [rsp+C4h] [rbp-494h]
  int v168; // [rsp+C8h] [rbp-490h]
  int v169; // [rsp+CCh] [rbp-48Ch]
  int v170; // [rsp+D0h] [rbp-488h]
  int v171; // [rsp+D4h] [rbp-484h]
  int v172; // [rsp+D8h] [rbp-480h]
  int v173; // [rsp+DCh] [rbp-47Ch]
  wchar_t *v174; // [rsp+E0h] [rbp-478h]
  PVOID *v175; // [rsp+E8h] [rbp-470h]
  __int64 v176; // [rsp+F0h] [rbp-468h]
  __int64 v177; // [rsp+F8h] [rbp-460h]
  _DWORD *v178; // [rsp+100h] [rbp-458h]
  _UNICODE_STRING DestinationString; // [rsp+108h] [rbp-450h] BYREF
  __int64 v180; // [rsp+118h] [rbp-440h]
  __int64 v181; // [rsp+120h] [rbp-438h]
  unsigned __int16 v182; // [rsp+128h] [rbp-430h] BYREF
  void *Src; // [rsp+130h] [rbp-428h]
  void *v184; // [rsp+138h] [rbp-420h]
  void *v185; // [rsp+140h] [rbp-418h]
  void *v186; // [rsp+148h] [rbp-410h]
  _UNICODE_STRING *v187; // [rsp+150h] [rbp-408h]
  wchar_t *v188; // [rsp+158h] [rbp-400h]
  wchar_t *v189; // [rsp+160h] [rbp-3F8h]
  ULONG v190; // [rsp+168h] [rbp-3F0h]
  wchar_t *v191; // [rsp+170h] [rbp-3E8h]
  wchar_t *v192; // [rsp+178h] [rbp-3E0h]
  unsigned __int16 *v193; // [rsp+180h] [rbp-3D8h]
  PVOID v194; // [rsp+188h] [rbp-3D0h]
  _DWORD *v195; // [rsp+190h] [rbp-3C8h]
  PVOID v196; // [rsp+198h] [rbp-3C0h]
  wchar_t *v197; // [rsp+1A0h] [rbp-3B8h]
  __int64 v198; // [rsp+1A8h] [rbp-3B0h]
  ULONG v199; // [rsp+1B0h] [rbp-3A8h]
  __int64 v200; // [rsp+1C0h] [rbp-398h] BYREF
  int v201; // [rsp+1C8h] [rbp-390h]
  __int128 v202; // [rsp+1D0h] [rbp-388h] BYREF
  __int128 v203; // [rsp+1E0h] [rbp-378h]
  __int128 v204; // [rsp+1F0h] [rbp-368h]
  __int64 v205; // [rsp+200h] [rbp-358h]
  _UNICODE_STRING DynamicString; // [rsp+210h] [rbp-348h] BYREF
  __int16 v207; // [rsp+220h] [rbp-338h]
  __int16 v208; // [rsp+222h] [rbp-336h]
  wchar_t *v209; // [rsp+228h] [rbp-330h]
  __int64 v210; // [rsp+230h] [rbp-328h]
  struct _TEB *v211; // [rsp+238h] [rbp-320h]
  __int128 v212; // [rsp+240h] [rbp-318h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+250h] [rbp-308h] BYREF
  _UNICODE_STRING String1; // [rsp+2F0h] [rbp-268h] BYREF
  _WORD v215[128]; // [rsp+300h] [rbp-258h] BYREF
  _UNICODE_STRING OriginalName; // [rsp+400h] [rbp-158h] BYREF
  _WORD v217[128]; // [rsp+410h] [rbp-148h] BYREF
  _UNKNOWN *retaddr; // [rsp+558h] [rbp+0h]

  v170 = a4;
  v6 = a3;
  v163 = a3;
  v7 = a2;
  v177 = a2;
  v9 = a5;
  v175 = a5;
  v164 = a6;
  String1.Buffer = v215;
  *(_DWORD *)&String1.Length = 0x1000000;
  v215[0] = 0;
  v10 = v217;
  OriginalName.Buffer = v217;
  v11 = 0;
  OriginalName.Length = 0;
  LOWORD(v12) = 256;
  OriginalName.MaximumLength = 256;
  v217[0] = 0;
  FullPath = 0;
  Length = SourceString->Length;
  if ( !(_WORD)Length )
    goto LABEL_10;
  v15 = SourceString->Length;
  Buffer = SourceString->Buffer;
  v17 = 0;
  if ( NlsActiveCodePageIsUTF8 )
  {
    RtlUTF8ToUnicodeN(0LL, 0, &UnicodeStringActualByteCount, Buffer, Length);
    v10 = OriginalName.Buffer;
    LOWORD(v12) = OriginalName.MaximumLength;
    v11 = OriginalName.Length;
    v17 = UnicodeStringActualByteCount;
    goto LABEL_6;
  }
  if ( !NlsMbCodePageTag )
  {
    v17 = 2 * Length;
    goto LABEL_5;
  }
  while ( 1 )
  {
    --v15;
    v134 = (unsigned __int8)*Buffer++;
    if ( NlsLeadByteInfoTable[v134] )
      break;
LABEL_334:
    v17 += 2;
    if ( !v15 )
      goto LABEL_5;
  }
  if ( v15 )
  {
    --v15;
    ++Buffer;
    goto LABEL_334;
  }
  v17 += 2;
LABEL_5:
  UnicodeStringActualByteCount = v17;
LABEL_6:
  v18 = v17 + (unsigned int)v11 + 2;
  if ( (unsigned int)v18 > (unsigned __int16)v12 )
  {
    if ( (unsigned int)v18 > 0xFFFE )
    {
      FullPath = -1073741562;
      goto LABEL_7;
    }
    v12 = (v18 + 63) & 0xFFFFFFC0;
    if ( v12 > 0xFFFE )
      v12 = 65534;
    if ( v10 == v217 )
    {
      StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v12);
      v10 = StringRoutine;
      if ( StringRoutine )
      {
        v11 = OriginalName.Length;
        if ( !OriginalName.Length )
          goto LABEL_347;
        memmove(StringRoutine, OriginalName.Buffer, OriginalName.Length);
      }
    }
    else
    {
      v10 = (wchar_t *)NtdllpReallocateStringRoutine(v12, v10, v18, Buffer);
    }
    v11 = OriginalName.Length;
LABEL_347:
    if ( v10 )
    {
      OriginalName.Buffer = v10;
      OriginalName.MaximumLength = v12;
    }
    else
    {
      FullPath = -1073741801;
      v10 = OriginalName.Buffer;
      LOWORD(v12) = OriginalName.MaximumLength;
    }
  }
LABEL_7:
  if ( FullPath >= 0 )
  {
    DestinationString.Buffer = (wchar_t *)((char *)v10 + v11);
    DestinationString.Length = 0;
    DestinationString.MaximumLength = v12 - v11;
    RtlAnsiStringToUnicodeString(&DestinationString, SourceString, 0);
    OriginalName.Length += DestinationString.Length;
  }
  v6 = v163;
LABEL_10:
  if ( FullPath < 0 )
    goto LABEL_351;
  v200 = 72LL;
  v201 = 1;
  v202 = 0LL;
  v203 = 0LL;
  v204 = 0LL;
  v205 = 0LL;
  v19 = *(_QWORD *)(v6 + 136);
  ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
  if ( ActivationContextStackPointer )
    ActiveFrame = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
  else
    ActiveFrame = 0LL;
  *((_QWORD *)&v203 + 1) = ~ActiveFrame;
  *(_QWORD *)&v204 = ~v19;
  *((_QWORD *)&v204 + 1) = retaddr;
  if ( ActiveFrame && (*(_DWORD *)(ActiveFrame + 16) & 0x70) != 0x20 )
  {
    ExceptionRecord.ExceptionRecord = 0LL;
    ExceptionRecord.NumberParameters = 4;
    ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)ActivationContextStackPointer;
    ExceptionRecord.ExceptionInformation[1] = ActiveFrame;
    ExceptionRecord.ExceptionInformation[2] = ActiveFrame;
    ExceptionRecord.ExceptionInformation[3] = *(unsigned int *)(ActiveFrame + 16);
    ExceptionRecord.ExceptionCode = -1072365548;
    ExceptionRecord.ExceptionFlags = 1;
    RtlRaiseException(&ExceptionRecord);
    LODWORD(v6) = v163;
    goto LABEL_17;
  }
  *(_QWORD *)&v202 = ActiveFrame;
  *((_QWORD *)&v202 + 1) = v19;
  LODWORD(v203) = 32;
  if ( ActiveFrame )
  {
    if ( *(_QWORD *)(ActiveFrame + 8) == v19 )
      goto LABEL_16;
  }
  else if ( !v19 )
  {
LABEL_16:
    LODWORD(v203) = 48;
    goto LABEL_17;
  }
  ActivationContextStackPointer->ActiveFrame = (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)&v202;
LABEL_17:
  v22 = *(_DWORD *)(v7 + 32) & 0x1800800;
  v140 = v22;
  FullPath = 0;
  appended = 0;
  v23 = 0;
  if ( (v22 & 0x800008) == 0 )
  {
    p_OriginalName = &OriginalName;
    p_String1 = &OriginalName;
    v25 = NtCurrentPeb();
    v154 = v25;
    v26 = 1;
    v141 = 1;
    v27 = v6 + 88;
    ApiSetMap = v25->ApiSetMap;
    LdrpLogDllState(0LL, &OriginalName, 5328LL);
    FullPath = ApiSetResolveToHost(
                 (_DWORD)ApiSetMap,
                 (unsigned int)&OriginalName,
                 v27,
                 (unsigned int)&v137,
                 (__int64)&v182);
    v29 = v137;
    if ( FullPath >= 0 && v137 )
    {
      v30 = v182;
      if ( v182 )
        v31 = 5329;
      else
        v31 = 5330;
    }
    else
    {
      v31 = 5331;
      v30 = v182;
    }
    LdrpLogDllState(0LL, &OriginalName, v31);
    v155 = FullPath;
    if ( !v29 )
      goto LABEL_49;
    if ( v30 )
    {
      String1.Length = 0;
      SharedData = (int *)NtCurrentPeb()->SharedData;
      if ( !SharedData )
      {
        v171 = 0;
        goto LABEL_26;
      }
      v171 = *SharedData;
      if ( v171 )
        v34 = (__int64)NtCurrentPeb()->SharedData + 30;
      else
LABEL_26:
        v34 = 2147352624LL;
      v198 = v34;
      v180 = 0LL;
      v181 = v34;
      if ( v34 )
      {
        v35 = -1LL;
        do
          ++v35;
        while ( *(_WORD *)(v34 + 2 * v35) );
        v36 = 2 * v35;
        v176 = v36;
        v37 = v36;
        if ( v36 >= 0xFFFE )
        {
          LOWORD(v36) = -4;
          v176 = 65532LL;
          v37 = -4;
        }
        LOWORD(v180) = v36;
        WORD1(v180) = v37 + 2;
      }
      else
      {
        LOWORD(v36) = v180;
      }
      v172 = 0;
      if ( (_WORD)v36 )
      {
        v38 = (unsigned __int16)v36 + 2;
        v157 = v38;
        v39 = 0;
        v158 = 0;
        if ( v38 > String1.MaximumLength )
        {
          if ( v38 <= 0xFFFE )
          {
            v118 = ((unsigned __int16)v36 + 65) & 0xFFFFFFC0;
            v157 = v118;
            v119 = v118;
            if ( v118 > 0xFFFE )
            {
              LOWORD(v118) = -2;
              v157 = 65534;
              v119 = 65534;
            }
            if ( String1.Buffer == v215 )
            {
              v120 = (void *)NtdllpAllocateStringRoutine(v119);
              v184 = v120;
              if ( v120 && String1.Length )
                memmove(v120, String1.Buffer, String1.Length);
            }
            else
            {
              v120 = (void *)NtdllpReallocateStringRoutine(v119, String1.Buffer, 0LL, v32);
              v184 = v120;
            }
            if ( v120 )
            {
              String1.Buffer = (wchar_t *)v120;
              String1.MaximumLength = v118;
            }
            else
            {
              v39 = -1073741801;
              v158 = -1073741801;
            }
            v25 = v154;
            p_OriginalName = p_String1;
          }
          else
          {
            v39 = -1073741562;
            v158 = -1073741562;
          }
        }
        v172 = v39;
        if ( v39 >= 0 )
        {
          memmove((char *)String1.Buffer + String1.Length, (const void *)v34, (unsigned __int16)v36);
          String1.Length += v36;
          String1.Buffer[(unsigned __int64)String1.Length >> 1] = 0;
        }
      }
      v173 = 0;
      v40 = String1.Length + 22;
      LODWORD(v165) = v40;
      v41 = 0;
      v159 = 0;
      if ( v40 > String1.MaximumLength )
      {
        if ( v40 <= 0xFFFE )
        {
          v121 = (String1.Length + 85) & 0xFFFFFFC0;
          LODWORD(v165) = v121;
          v122 = v121;
          if ( v121 > 0xFFFE )
          {
            LOWORD(v121) = -2;
            LODWORD(v165) = 65534;
            v122 = 65534;
          }
          if ( String1.Buffer == v215 )
          {
            v123 = (void *)NtdllpAllocateStringRoutine(v122);
            v185 = v123;
            if ( v123 && String1.Length )
              memmove(v123, String1.Buffer, String1.Length);
          }
          else
          {
            v123 = (void *)NtdllpReallocateStringRoutine(v122, String1.Buffer, 0LL, v32);
            v185 = v123;
          }
          if ( v123 )
          {
            String1.Buffer = (wchar_t *)v123;
            String1.MaximumLength = v121;
          }
          else
          {
            v41 = -1073741801;
            v159 = -1073741801;
          }
        }
        else
        {
          v41 = -1073741562;
          v159 = -1073741562;
        }
      }
      v173 = v41;
      if ( v41 >= 0 )
      {
        v42 = (char *)String1.Buffer + String1.Length;
        *(_OWORD *)v42 = *(_OWORD *)SlashSystem32SlashString.Buffer;
        *((_DWORD *)v42 + 4) = *((_DWORD *)SlashSystem32SlashString.Buffer + 4);
        String1.Length += 20;
        String1.Buffer[(unsigned __int64)String1.Length >> 1] = 0;
      }
      v166 = 0;
      v43 = v182;
      v44 = v182 + String1.Length + 2;
      LODWORD(v154) = v44;
      FullPath = 0;
      v160 = 0;
      if ( v44 > String1.MaximumLength )
      {
        if ( v44 <= 0xFFFE )
        {
          v124 = (v44 + 63) & 0xFFFFFFC0;
          LODWORD(v154) = v124;
          v125 = v124;
          if ( v124 > 0xFFFE )
          {
            LOWORD(v124) = -2;
            LODWORD(v154) = 65534;
            v125 = 65534;
          }
          if ( String1.Buffer == v215 )
          {
            v126 = (void *)NtdllpAllocateStringRoutine(v125);
            v186 = v126;
            if ( v126 && String1.Length )
              memmove(v126, String1.Buffer, String1.Length);
          }
          else
          {
            v126 = (void *)NtdllpReallocateStringRoutine(v125, String1.Buffer, 0LL, v32);
            v186 = v126;
          }
          if ( v126 )
          {
            String1.Buffer = (wchar_t *)v126;
            String1.MaximumLength = v124;
          }
          else
          {
            FullPath = -1073741801;
            v160 = -1073741801;
          }
          p_OriginalName = p_String1;
        }
        else
        {
          FullPath = -1073741562;
          v160 = -1073741562;
        }
      }
      v166 = FullPath;
      if ( FullPath >= 0 )
      {
        memmove((char *)String1.Buffer + String1.Length, Src, v43);
        String1.Length += v43;
        String1.Buffer[(unsigned __int64)String1.Length >> 1] = 0;
      }
      v155 = FullPath;
      if ( FullPath >= 0 )
      {
        ProcessParameters = v25->ProcessParameters;
        if ( !ProcessParameters || (ProcessParameters->Flags & 0x1000) == 0 )
          v26 = 0;
        v141 = v26;
        p_OriginalName = &String1;
        p_String1 = &String1;
      }
      v23 = 0;
LABEL_49:
      if ( FullPath >= 0 && v26 && !LdrpIsSecureProcess )
      {
        v116 = RtlDosApplyFileIsolationRedirection_Ustr(
                 1u,
                 p_OriginalName,
                 (PUNICODE_STRING)&LdrpDefaultExtension,
                 0LL,
                 &DynamicString,
                 0LL,
                 0LL,
                 0LL,
                 0LL);
        if ( v116 >= 0 )
        {
          v23 = 1;
          LdrpGetFullPath(&DynamicString, &String1);
          LdrpFreeUnicodeString(&DynamicString);
        }
        if ( v116 != -1072365560 )
        {
          FullPath = v116;
          v155 = v116;
        }
      }
    }
    else
    {
      FullPath = -1073740671;
      v155 = -1073740671;
    }
    appended = FullPath;
    v22 = v140;
    v9 = v175;
    v7 = v177;
  }
  if ( FullPath < 0 )
    goto LABEL_282;
  v46 = &OriginalName;
  v187 = &OriginalName;
  if ( !String1.Length )
  {
    v117 = (wchar_t *)((char *)OriginalName.Buffer + OriginalName.Length);
    v188 = v117;
    while ( 1 )
    {
      v188 = --v117;
      if ( v117 < OriginalName.Buffer )
        break;
      if ( *v117 == 92 || *v117 == 47 )
      {
        v142 = 0;
        if ( (unsigned int)RtlDetermineDosPathNameType_Ustr(&OriginalName) != 5 )
        {
          FullPath = LdrpGetFullPath(&OriginalName, &String1);
          appended = FullPath;
          if ( FullPath >= 0 )
          {
            v22 |= 0x600u;
            v140 = v22;
          }
          goto LABEL_58;
        }
LABEL_230:
        appended = LdrpAppendUnicodeStringToFilenameBuffer(&String1, &OriginalName);
        FullPath = appended;
        goto LABEL_58;
      }
    }
    v142 = 1;
    v22 |= 0x20u;
    v140 = v22;
    goto LABEL_230;
  }
  if ( (LdrpDebugFlags & 5) != 0 )
  {
    v127 = "SxS";
    if ( !v23 )
      v127 = "API set";
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrutil.c",
      2680,
      (unsigned int)"LdrpPreprocessDllName",
      2,
      (__int64)"DLL %wZ was redirected to %wZ by %s\n",
      &OriginalName,
      &String1,
      v127);
  }
  v22 |= 0x200u;
  v140 = v22;
  if ( v23 )
  {
    v22 |= 4u;
    v140 = v22;
  }
  v46 = &String1;
  v187 = &String1;
LABEL_58:
  if ( FullPath < 0 )
    goto LABEL_282;
  v47 = v46->Buffer;
  v48 = (wchar_t *)((char *)v47 + v46->Length);
  v189 = v48;
  v143 = 0;
  while ( 1 )
  {
    v189 = --v48;
    if ( v48 < v47 )
    {
LABEL_231:
      FullPath = LdrpAppendUnicodeStringToFilenameBuffer(&String1, &LdrpDefaultExtension);
      appended = FullPath;
      goto LABEL_196;
    }
    v49 = *v48;
    if ( *v48 == 46 )
      break;
    if ( v49 == 47 || v49 == 92 )
      goto LABEL_231;
  }
  v143 = 1;
  v106 = (wchar_t *)((char *)String1.Buffer + String1.Length);
  v197 = v106;
  while ( 1 )
  {
    v197 = --v106;
    if ( v106 < String1.Buffer || *v106 != 46 )
      break;
    String1.Length -= 2;
  }
  v106[1] = 0;
LABEL_196:
  if ( FullPath < 0 )
  {
LABEL_282:
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(NewFlags) = FullPath;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrutil.c",
        2738,
        (unsigned int)"LdrpPreprocessDllName",
        0,
        (__int64)"LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
        &OriginalName,
        NewFlags);
    }
    if ( (LdrpDebugFlags & 0x10) != 0 )
      __debugbreak();
  }
  v139 = FullPath;
  if ( FullPath < 0 )
    goto LABEL_320;
  if ( (v22 & 0x800000) != 0 )
  {
    FullPath = LdrpFindOrPrepareEnclaveModule(
                 *(_QWORD *)(v7 + 168),
                 &String1,
                 *(_QWORD *)(v7 + 16),
                 v22,
                 v163,
                 v9,
                 *(_QWORD *)(v7 + 40));
    v139 = FullPath;
    goto LABEL_320;
  }
  v107 = (_QWORD *)v164;
  if ( !*(_QWORD *)v164 )
  {
    v190 = NtdllBaseTag + 2621440;
    Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 2621440, 0x20uLL);
    *v107 = Heap;
    if ( !Heap )
    {
      FullPath = -1073741801;
      v139 = -1073741801;
      goto LABEL_320;
    }
  }
  v63 = *(_QWORD *)(v7 + 40);
  v176 = v63;
  v62 = v22;
  LODWORD(v154) = v22;
  v64 = *(_QWORD *)(v7 + 16);
  v165 = v64;
  *v9 = 0LL;
  v156 = 0;
  if ( (v22 & 0x20) != 0 )
  {
    FullPath = LdrpFindLoadedDllByName(&String1, 0LL, (__int64)&v156);
    v151 = FullPath;
    goto LABEL_99;
  }
  if ( (v22 & 0x200) == 0 )
  {
    v151 = -1073741515;
    goto LABEL_169;
  }
  v174 = (wchar_t *)((char *)String1.Buffer + String1.Length);
  for ( i = v174 - 1; ; --i )
  {
    v109 = i;
    v174 = i;
    if ( i <= String1.Buffer )
      break;
    if ( *i == 92 || *i == 47 )
    {
      ++i;
      v174 = v109 + 1;
      LOWORD(v109) = (_WORD)v109 + 2;
      break;
    }
  }
  v110 = (_WORD)v109 - LOWORD(String1.Buffer);
  v209 = i;
  v207 = String1.Length - v110;
  v208 = String1.MaximumLength - v110;
  v111 = 0;
  v168 = 0;
  v191 = i;
  v153 = 0;
  v112 = (unsigned __int16)(String1.Length - v110) >> 1;
  v167 = v112;
  while ( 2 )
  {
    v113 = v112--;
    v167 = v112;
    if ( v113 )
    {
      v114 = *i++;
      v191 = i;
      if ( (unsigned int)v114 < 0x61 )
        goto LABEL_213;
      if ( (unsigned int)v114 <= 0x7A )
      {
        LOWORD(v114) = v114 - 32;
        goto LABEL_213;
      }
      if ( Nls844UnicodeUpcaseTable && (unsigned __int16)v114 >= 0xC0u )
      {
        LOWORD(v114) = v114
                     + *(_WORD *)(Nls844UnicodeUpcaseTable
                                + 2
                                * ((v114 & 0xF)
                                 + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                       + 2LL
                                                       * (((unsigned __int8)v114 >> 4)
                                                        + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                            + 2 * (v114 >> 8))))));
        v147 = v114;
      }
      else
      {
LABEL_213:
        v147 = v114;
      }
      v111 = (unsigned __int16)v114 + 65599 * v111;
      v168 = v111;
      continue;
    }
    break;
  }
  v153 = v111;
  v50 = v111;
  if ( !v111 )
  {
    v50 = 0x80000000;
    v153 = 0x80000000;
  }
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v51 = (_QWORD **)((char *)&LdrpHashTable + 16 * (v50 & 0x1F));
  v52 = 0;
  v53 = *v51;
  while ( 2 )
  {
    if ( v53 == v51 )
    {
      v9 = v175;
      goto LABEL_90;
    }
    v54 = (volatile signed __int32 *)(v53 - 14);
    if ( v50 != *((_DWORD *)v53 + 38) || ((unsigned __int8)v154 & 8) != 0 && (v54[26] & 1) == 0 )
    {
LABEL_84:
      v53 = (_QWORD *)*v53;
      continue;
    }
    break;
  }
  if ( String1.Length != *((unsigned __int16 *)v54 + 36) )
  {
LABEL_83:
    v52 = 0;
    goto LABEL_84;
  }
  v55 = String1.Buffer;
  v192 = String1.Buffer;
  v56 = (unsigned __int16 *)*((_QWORD *)v54 + 10);
  v193 = v56;
  while ( v55 < (wchar_t *)((char *)String1.Buffer + String1.Length) )
  {
    v57 = *v55;
    v58 = *v56;
    if ( (_WORD)v57 == (_WORD)v58 )
      goto LABEL_75;
    if ( (unsigned int)v57 < 0x61 )
      goto LABEL_79;
    if ( (unsigned int)v57 <= 0x7A )
    {
      LOWORD(v57) = v57 - 32;
LABEL_79:
      v148 = v57;
      goto LABEL_80;
    }
    if ( !Nls844UnicodeUpcaseTable || (unsigned __int16)v57 < 0xC0u )
      goto LABEL_79;
    LOWORD(v57) = v57
                + *(_WORD *)(Nls844UnicodeUpcaseTable
                           + 2
                           * ((v57 & 0xF)
                            + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                  + 2LL
                                                  * (((unsigned __int8)v57 >> 4)
                                                   + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                       + 2 * (v57 >> 8))))));
    v148 = v57;
LABEL_80:
    if ( (unsigned int)v58 < 0x61 )
      goto LABEL_81;
    if ( (unsigned int)v58 <= 0x7A )
    {
      LOWORD(v58) = v58 - 32;
LABEL_81:
      v149 = v58;
      goto LABEL_82;
    }
    if ( !Nls844UnicodeUpcaseTable || (unsigned __int16)v58 < 0xC0u )
      goto LABEL_81;
    LOWORD(v58) = v58
                + *(_WORD *)(Nls844UnicodeUpcaseTable
                           + 2
                           * ((v58 & 0xF)
                            + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                  + 2LL
                                                  * (((unsigned __int8)v58 >> 4)
                                                   + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                       + 2 * (v58 >> 8))))));
    v149 = v58;
LABEL_82:
    if ( (_WORD)v57 != (_WORD)v58 )
      goto LABEL_83;
LABEL_75:
    v192 = ++v55;
    v193 = ++v56;
  }
  v52 = 1;
  v59 = *((_QWORD *)v54 + 19);
  if ( *(_DWORD *)(v59 + 24) == -1 || (*(_BYTE *)(*(_QWORD *)v59 - 56LL) & 0x20) != 0 )
  {
    v144 = 1;
  }
  else
  {
    v144 = 0;
    _InterlockedIncrement(v54 + 69);
  }
  v9 = v175;
  *v175 = (PVOID)v54;
LABEL_90:
  if ( v52 )
  {
    FullPath = 0;
    v156 = *(_DWORD *)(*((_QWORD *)*v9 + 19) + 56LL);
  }
  else
  {
    FullPath = -1073741515;
  }
  v60 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, 0LL, 1LL);
  if ( v60 != 1 )
  {
    do
    {
      v99 = v60 & 6;
      v100 = 3LL;
      if ( v99 != 2 )
        v100 = -1LL;
      v101 = v60 + v100;
      v102 = v60;
      v60 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, v101, v60);
    }
    while ( v102 != v60 );
    if ( v99 == 2 )
      RtlpWakeSRWLock((volatile signed __int64 *)&LdrpModuleDatatableLock, v101, 0);
  }
  if ( FullPath < 0 )
    v161 = 3;
  else
    v161 = 0;
  if ( RtlGetCurrentServiceSessionId() )
    v61 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v61 = 2147353476LL;
  if ( *(_BYTE *)v61 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v128 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v128 & 0x20) != 0 )
      LdrpLogEtwEvent(5280, 0, 0, (unsigned __int8)v161, (__int64)&String1, 0LL);
  }
  v151 = FullPath;
  LOWORD(v22) = v140;
  v62 = (unsigned int)v154;
  v63 = v176;
  LODWORD(v64) = v165;
  v7 = v177;
LABEL_99:
  if ( FullPath != -1073741515 )
  {
    if ( v156 < 0 )
    {
      v129 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        v212 = *(_OWORD *)((char *)*v9 + 72);
        LODWORD(NewFlags) = v156;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrmap.c",
          2979,
          (unsigned int)"LdrpFindOrPrepareLoadingModule",
          0,
          (__int64)"Found circular dependent DLL: \"%wZ\" that failed to load previously, ModuleState: %d\n",
          &v212,
          NewFlags);
        v129 = LdrpDebugFlags;
      }
      if ( (v129 & 0x10) != 0 )
        __debugbreak();
      FullPath = -1073741595;
      v151 = -1073741595;
      LdrpDereferenceModule(*v9);
      *v9 = 0LL;
    }
    else
    {
      v65 = *v9;
      v169 = 0;
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      v67 = v65[19];
      v68 = *(_DWORD *)(v67 + 24);
      if ( v68 != -1 )
      {
        if ( v68 )
        {
          *(_DWORD *)(v67 + 24) = v68 + 1;
        }
        else
        {
          v211 = NtCurrentTeb();
          v66 = 4096LL;
          if ( (v211->SameTebFlags & 0x1000) != 0 )
            ++*(_DWORD *)(v67 + 28);
          else
            v169 = -1073741515;
        }
      }
      v69 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, 0LL, 1LL);
      if ( v69 != 1 )
      {
        do
        {
          v103 = v69 & 6;
          v104 = 3LL;
          if ( v103 != 2 )
            v104 = -1LL;
          v66 = v69 + v104;
          v105 = v69;
          v69 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, v66, v69);
        }
        while ( v105 != v69 );
        if ( v103 == 2 )
          RtlpWakeSRWLock((volatile signed __int64 *)&LdrpModuleDatatableLock, v66, 0);
      }
      LOWORD(v22) = v140;
    }
    goto LABEL_104;
  }
LABEL_169:
  FullPath = LdrpAllocatePlaceHolder((unsigned int)&String1, v64, v62, v170, v163, (__int64)v9, v63);
  v151 = FullPath;
  if ( FullPath >= 0 )
  {
    FullPath = LdrpLoadKnownDll(*((_BYTE **)*v9 + 22));
    v151 = FullPath;
  }
LABEL_104:
  v139 = FullPath;
  if ( *v9 )
  {
    v70 = v22 & 0x400;
    if ( v70 && FullPath == -1073741515 )
    {
      v130 = *((_QWORD *)*v9 + 22);
      v210 = v130;
      *(_DWORD *)(v130 + 32) |= 0x4000000u;
      LOBYTE(v66) = 1;
      LdrpProcessWork(v130, v66);
      FullPath = **(_DWORD **)(v130 + 40);
      v139 = FullPath;
    }
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    v71 = (char *)*v9;
    v72 = v71;
    v194 = *v9;
    if ( v71 )
    {
      v73 = *((_QWORD *)v71 + 22);
      if ( v73 )
      {
        if ( (*(_DWORD *)(v73 + 32) & 0x80000) == 0 && *(char **)(v73 + 56) != v71 )
        {
          v72 = *(char **)(v73 + 56);
          v194 = v72;
          *(_QWORD *)(v73 + 56) = v71;
        }
      }
    }
    v196 = v72;
    v74 = (_QWORD *)v164;
    *(_DWORD *)(*(_QWORD *)v164 + 24LL) &= ~1u;
    v75 = (_DWORD *)*v74;
    v178 = (_DWORD *)*v74;
    v76 = *((_QWORD *)v72 + 19);
    v77 = *(_QWORD *)(*(_QWORD *)(v7 + 56) + 152LL);
    if ( v77 == v76 )
      goto LABEL_112;
    if ( *(_DWORD *)(v76 + 56) != 9 )
      goto LABEL_145;
    if ( *(_DWORD *)(v76 + 24) == -1 || (*(_BYTE *)(*(_QWORD *)v76 - 56LL) & 0x20) != 0 )
    {
      v145 = 1;
      goto LABEL_112;
    }
    v145 = 0;
LABEL_145:
    v88 = *(_QWORD **)(v77 + 40);
    if ( v88 )
    {
      v89 = *(_QWORD **)(v77 + 40);
      while ( 1 )
      {
        v89 = (_QWORD *)*v89;
        if ( v89[1] == v76 )
          break;
        if ( v89 == v88 )
          goto LABEL_149;
      }
LABEL_112:
      v138 = 1;
      v78 = *(_DWORD *)(v76 + 24);
      if ( (unsigned int)(v78 - 2) <= 0xFFFFFFFC )
        *(_DWORD *)(v76 + 24) = v78 - 1;
    }
    else
    {
LABEL_149:
      v138 = 0;
      if ( !v75 )
      {
        v199 = NtdllBaseTag + 2359296;
        v131 = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 2359296, 0x20uLL);
        v75 = v131;
        v178 = v131;
        if ( !v131 )
        {
          MEMORY[0] = -1073741801;
          v75 = 0LL;
          v74 = (_QWORD *)v164;
          goto LABEL_114;
        }
        v131[6] |= 1u;
      }
      v90 = *(_QWORD **)(v77 + 40);
      if ( v90 )
      {
        *(_QWORD *)v75 = *v90;
        *v90 = v75;
      }
      else
      {
        *(_QWORD *)v75 = v75;
      }
      *(_QWORD *)(v77 + 40) = v75;
      *((_QWORD *)v75 + 1) = v76;
      v91 = v75 + 4;
      v92 = *(_QWORD **)(v76 + 48);
      if ( v92 )
      {
        *v91 = *v92;
        *v92 = v91;
      }
      else
      {
        *v91 = v91;
      }
      *(_QWORD *)(v76 + 48) = v91;
      v93 = (v75[6] & 1) == 0;
      v94 = v75[6] & 1;
      *((_QWORD *)v75 + 3) = v77;
      if ( !v93 )
        v75[6] = v94 | v77 & 0xFFFFFFFE;
      v75 = 0LL;
      v178 = 0LL;
      v74 = (_QWORD *)v164;
    }
LABEL_114:
    v195 = v75;
    *v74 = v75;
    if ( FullPath != -1073741515 )
    {
      if ( FullPath != -1073741267 )
        goto LABEL_116;
      v139 = 0;
      goto LABEL_117;
    }
    FullPath = -1073741515;
    if ( !v70 )
    {
      LdrpQueueWork(*((_QWORD *)v72 + 22));
      v139 = 0;
      v74 = (_QWORD *)v164;
      goto LABEL_117;
    }
LABEL_116:
    if ( FullPath >= 0 )
    {
LABEL_117:
      v79 = *(_DWORD *)(v7 + 100);
      if ( v79 )
      {
        if ( *v74 || *(int *)(*((_QWORD *)v72 + 19) + 56LL) >= 2 )
          *(_DWORD *)(v7 + 100) = v79 - 1;
      }
      else if ( *(int *)(*((_QWORD *)v72 + 19) + 56LL) < 2 )
      {
        *(_QWORD *)(v7 + 80) = v72;
        *(_DWORD *)(v7 + 100) = 1;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 56) + 152LL) + 56LL) = 3;
        v139 = 259;
      }
    }
    v80 = *((_QWORD *)v72 + 19);
    if ( *(_DWORD *)(v80 + 24) == -1 || (*(_BYTE *)(*(_QWORD *)v80 - 56LL) & 0x20) != 0 )
    {
      v146 = 1;
    }
    else
    {
      v146 = 0;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v72 + 69, 0xFFFFFFFF) == 1 )
      {
        RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
        v83 = (char **)*((_QWORD *)v72 + 20);
        v84 = (PVOID *)*((_QWORD *)v72 + 21);
        if ( v83[1] != v72 + 160 || *v84 != v72 + 160 )
          __fastfail(3u);
        *v84 = v83;
        v83[1] = (char *)v84;
        v85 = (_QWORD *)*((_QWORD *)v72 + 19);
        v86 = (_QWORD *)*v85;
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        if ( *((_WORD *)v72 + 55) )
          LdrpReleaseTlsEntry(v72, 0LL);
        LdrpUnmapModule(v72);
        v87 = (_ACTIVATION_CONTEXT *)*((_QWORD *)v72 + 17);
        if ( (unsigned __int64)&v87[-1].InlineStorageMapEntries[31] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
          RtlReleaseActivationContext(v87);
        if ( *((_QWORD *)v72 + 10) )
          LdrpFreeUnicodeString(v72 + 72);
        RtlFreeHeap(LdrpHeap, 0, v72);
        if ( v86 == v85 )
          LdrpDestroyNode(v85);
      }
    }
    v81 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, 0LL, 1LL);
    if ( v81 != 1 )
    {
      do
      {
        v95 = v81 & 6;
        v96 = 3LL;
        if ( v95 != 2 )
          v96 = -1LL;
        v97 = v81 + v96;
        v98 = v81;
        v81 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, v97, v81);
      }
      while ( v98 != v81 );
      if ( v95 == 2 )
        RtlpWakeSRWLock((volatile signed __int64 *)&LdrpModuleDatatableLock, v97, 0);
    }
    v82 = v196;
    if ( v196 != *v9 )
    {
      LdrpFreeReplacedModule(*v9);
      *v9 = v82;
    }
    FullPath = v139;
  }
LABEL_320:
  RtlDeactivateActivationContextUnsafeFast(&v200);
  v132 = OriginalName.Buffer;
  if ( FullPath < 0 )
  {
LABEL_351:
    *v9 = 0LL;
    **(_DWORD **)(v7 + 40) = FullPath;
    v132 = OriginalName.Buffer;
  }
  if ( v217 != v132 )
    NtdllpFreeStringRoutine(v132);
  OriginalName.Buffer = v217;
  *(_DWORD *)&OriginalName.Length = 0x1000000;
  v217[0] = 0;
  if ( v215 != String1.Buffer )
    NtdllpFreeStringRoutine(String1.Buffer);
  return (unsigned int)FullPath;
}
