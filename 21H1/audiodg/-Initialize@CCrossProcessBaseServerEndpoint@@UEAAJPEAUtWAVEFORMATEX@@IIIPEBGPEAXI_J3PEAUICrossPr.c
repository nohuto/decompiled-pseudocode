/*
 * XREFs of ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIIPEBGPEAXI_J3PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x14001E8F0
 * Callers:
 *     ?Initialize@CCrossProcessServerInputEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIIPEBGPEAXI_J3PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x14001F290 (-Initialize@CCrossProcessServerInputEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIIPEBGPEAXI_J3PEAUICrossP.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002134 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140014D54 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140016B84 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140016F64 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140016FBC (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ?AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z @ 0x14001A384 (-AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z.c)
 *     ??4?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUICrossProcessMemory@@@Z @ 0x14001ACB0 (--4-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUICrossProc.c)
 *     ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x14001B030 (-AERTCreateZoneHeap@@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B180 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$copy_to@UICrossProcessMemory@@@?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUICrossProcessMemory@@@Z @ 0x14001B58C (--$copy_to@UICrossProcessMemory@@@-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@.c)
 *     memset_0 @ 0x14001DBE8 (memset_0.c)
 *     memcpy_0 @ 0x14001F43F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x14003FB64 (-reset@-$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?HNSTIME_TO_FRAMES_DOUBLE_SAFE@@YAJ_JIPEAI@Z @ 0x1400580BC (-HNSTIME_TO_FRAMES_DOUBLE_SAFE@@YAJ_JIPEAI@Z.c)
 */

__int64 __fastcall CCrossProcessBaseServerEndpoint::Initialize(
        CCrossProcessBaseServerEndpoint *this,
        struct tWAVEFORMATEX *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int16 *a6,
        _QWORD *a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10,
        struct ICrossProcessMemoryManager *a11,
        struct ICrossProcessEventManager *a12,
        struct ICrossProcessMemory **a13,
        struct ICrossProcessEvent **a14)
{
  __int64 v15; // rsi
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int64 v21; // rdx
  char *v22; // rdi
  __int64 v23; // rax
  __int64 nBlockAlign; // rcx
  WORD wFormatTag; // ax
  unsigned __int64 v26; // rcx
  int v27; // eax
  unsigned __int64 v28; // r14
  void *v29; // rax
  __int64 v30; // rcx
  unsigned int v31; // r14d
  __int64 v32; // rdx
  char *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rdx
  unsigned int v36; // r10d
  unsigned int v37; // r8d
  unsigned int v38; // ecx
  int cbSize; // eax
  unsigned int v40; // r11d
  unsigned int v41; // edx
  unsigned __int64 v42; // rax
  unsigned int v43; // ecx
  unsigned int v44; // r9d
  unsigned __int64 v45; // rax
  unsigned int v46; // ecx
  unsigned int v47; // r8d
  unsigned int v48; // ecx
  int v49; // eax
  int v50; // r9d
  __int64 v51; // r10
  unsigned __int64 v52; // r9
  __int64 v53; // rax
  unsigned __int64 v54; // rax
  unsigned int v55; // ecx
  unsigned int v56; // edx
  size_t v57; // rbx
  void *v58; // rax
  __int64 v59; // rcx
  void *v60; // rax
  __int64 v61; // rax
  void **v62; // rbx
  __int64 v63; // rdx
  __int64 v64; // rdx
  unsigned int v65; // ecx
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rax
  unsigned int v71; // ecx
  __int32 v72; // r13d
  struct ICrossProcessEventManager *v73; // r14
  char v74; // r12
  _QWORD *v75; // rcx
  _DWORD *v76; // r14
  __int64 v77; // rcx
  bool v78; // zf
  struct ICrossProcessEvent *v79; // rcx
  int v80; // edx
  int v81; // r8d
  char v82; // r15
  void *v83; // rax
  int v84; // r8d
  void *v85; // rcx
  unsigned int v86; // [rsp+20h] [rbp-79h]
  unsigned int v87; // [rsp+24h] [rbp-75h]
  int v88; // [rsp+28h] [rbp-71h]
  int v89; // [rsp+2Ch] [rbp-6Dh]
  unsigned int v90; // [rsp+30h] [rbp-69h]
  unsigned int v91; // [rsp+34h] [rbp-65h]
  unsigned int v92; // [rsp+38h] [rbp-61h]
  unsigned int v93; // [rsp+3Ch] [rbp-5Dh]
  unsigned int Size; // [rsp+40h] [rbp-59h]
  __int64 v95; // [rsp+48h] [rbp-51h] BYREF
  PVOID pvAddress; // [rsp+50h] [rbp-49h]
  char *v97; // [rsp+58h] [rbp-41h] BYREF
  unsigned int v98; // [rsp+60h] [rbp-39h] BYREF
  unsigned __int64 v99; // [rsp+68h] [rbp-31h]
  char *v100; // [rsp+70h] [rbp-29h]
  char *v101; // [rsp+80h] [rbp-19h]
  void **v102; // [rsp+90h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+3Fh]
  unsigned int v104; // [rsp+E0h] [rbp+47h] BYREF
  unsigned int v105; // [rsp+F8h] [rbp+5Fh]

  v105 = a4;
  v15 = a4;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this - 384));
  if ( *((_DWORD *)this - 86) == 1 )
  {
    v18 = -2005139440;
    v19 = 574LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
      (const char *)v18);
    return v18;
  }
  if ( !a13 )
  {
    v18 = -2147024809;
    v19 = 576LL;
    goto LABEL_3;
  }
  v21 = a8;
  v22 = (char *)this - 400;
  *a13 = 0LL;
  v23 = *((_QWORD *)this - 50);
  v100 = (char *)this - 400;
  (*(void (__fastcall **)(char *, __int64))(v23 + 48))((char *)this - 400, v21);
  nBlockAlign = a2->nBlockAlign;
  *((_DWORD *)this - 78) = nBlockAlign;
  *((_DWORD *)this - 77) = a2->nChannels;
  *((_DWORD *)this - 73) = 1;
  if ( a2->wFormatTag == 3
    || a2->wFormatTag == 0xFFFE
    && *(_QWORD *)((char *)&a2[1].nSamplesPerSec + 2) == *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1
    && *(_QWORD *)&a2[1].wBitsPerSample == *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 )
  {
    *((_DWORD *)this - 73) = 3;
  }
  *((float *)this - 61) = (float)(int)a2->nSamplesPerSec;
  *((_DWORD *)this - 75) = a2->wBitsPerSample;
  if ( a2->wFormatTag == 0xFFFE )
    wFormatTag = a2[1].wFormatTag;
  else
    wFormatTag = a2->wBitsPerSample;
  v26 = v15 * nBlockAlign;
  *((_DWORD *)this - 74) = wFormatTag;
  if ( v26 > 0xFFFFFFFF )
  {
    v31 = -2147024362;
    v32 = 610LL;
    goto LABEL_116;
  }
  v27 = v26;
  if ( *((_DWORD *)this + 12) != 1 )
    v27 = 0;
  v28 = (unsigned int)v26;
  v88 = v27;
  v29 = (void *)AERTCreateZoneHeap((unsigned int)v26);
  *((_QWORD *)this - 32) = v29;
  if ( !v29 )
  {
    v31 = -2147024882;
    v32 = 617LL;
LABEL_116:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v32,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
      (const char *)v31);
    goto LABEL_117;
  }
  v101 = (char *)this - 400;
  v33 = (char *)this - 400;
  v34 = AE_ALLOCATE_SAFEMULT(v30, v28, v29, AERTZoneAllocate);
  LODWORD(v28) = 0;
  *((_QWORD *)this - 36) = v34;
  if ( !v34 )
  {
    v31 = -2147024882;
    v35 = 626LL;
LABEL_111:
    v52 = v31;
    goto LABEL_112;
  }
  v36 = *((_DWORD *)this - 78);
  if ( a3 % v36 )
    a3 += v36 - a3 % v36;
  *((_DWORD *)this - 62) = a3;
  if ( *((_DWORD *)this + 12) == 1 )
  {
    v37 = a3 / v36 / v105 + 3;
    if ( v37 < 0x19 )
      v37 = 25;
  }
  else
  {
    v37 = 0;
  }
  v38 = 0;
  v91 = v37;
  v87 = 0;
  if ( a9 )
  {
    if ( *((_DWORD *)this + 12) == 1 )
    {
      v38 = a3 / v36 / a5 + 3;
      if ( v38 < 0x19 )
        v38 = 25;
    }
    v87 = v38;
  }
  cbSize = a2->cbSize;
  v40 = cbSize + 200;
  Size = cbSize + 200;
  v41 = (cbSize + 527) & 0xFFFFFF80;
  v92 = 0;
  v93 = v41;
  if ( a9 )
  {
    v45 = (unsigned __int64)v38 << 6;
    if ( v45 > 0xFFFFFFFF )
    {
      v35 = 679LL;
      goto LABEL_110;
    }
    v46 = v45 + v41;
    if ( (unsigned int)v45 + v41 < (unsigned int)v45 )
    {
      v35 = 680LL;
      goto LABEL_110;
    }
    v47 = v46 + 1023;
    if ( v46 + 1023 < v46 )
    {
      v35 = 681LL;
      goto LABEL_110;
    }
    v92 = v47 & 0xFFFFFC00;
    v48 = (v47 & 0xFFFFFC00) + v45;
    if ( v48 < (unsigned int)v45 )
    {
      v35 = 685LL;
      goto LABEL_110;
    }
    v44 = v48 + 1023;
    if ( v48 + 1023 < v48 )
    {
      v35 = 686LL;
      goto LABEL_110;
    }
  }
  else
  {
    v42 = (unsigned __int64)v37 << 6;
    if ( v42 > 0xFFFFFFFF )
    {
      v35 = 671LL;
      goto LABEL_110;
    }
    v43 = v42 + v41;
    if ( (unsigned int)v42 + v41 < (unsigned int)v42 )
    {
      v35 = 672LL;
      goto LABEL_110;
    }
    v44 = v43 + 1023;
    if ( v43 + 1023 < v43 )
    {
      v35 = 673LL;
LABEL_110:
      v31 = -2147024362;
      goto LABEL_111;
    }
  }
  v89 = 0;
  v90 = 0;
  v86 = v44 & 0xFFFFFC00;
  v99 = 0LL;
  v104 = 0;
  if ( a10 )
  {
    v49 = HNSTIME_TO_FRAMES_DOUBLE_SAFE(a10, a2->nSamplesPerSec, &v104);
    v31 = v49;
    if ( v49 < 0 )
    {
      v52 = (unsigned int)v49;
      v35 = 697LL;
LABEL_112:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v35,
        (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
        (const char *)v52);
      goto LABEL_113;
    }
    v28 = v104 * v51;
    v99 = v28;
    if ( v28 > 0xFFFFFFFF )
    {
      v35 = 698LL;
      goto LABEL_110;
    }
    v104 *= (_DWORD)v51;
    if ( *((_DWORD *)this + 12) == 1 )
    {
      v53 = (unsigned int)v28 / (unsigned int)v51 / a5 + 3;
      if ( (unsigned int)v53 < 0x19 )
        v53 = 25LL;
    }
    else
    {
      v53 = 0LL;
    }
    v89 = v53;
    v54 = v53 << 6;
    if ( v54 > 0xFFFFFFFF )
    {
      v35 = 704LL;
      goto LABEL_110;
    }
    v55 = v50 + v54;
    if ( v50 + (int)v54 < (unsigned int)v54 )
    {
      v35 = 705LL;
      goto LABEL_110;
    }
    v56 = v55 + a3;
    if ( v55 + a3 < v55 )
    {
      v35 = 706LL;
      goto LABEL_110;
    }
    v90 = v56 + v88;
    if ( v56 + v88 < v56 )
    {
      v35 = 707LL;
      goto LABEL_110;
    }
  }
  v57 = v40;
  v58 = (void *)AERTGetDLLRTHeap();
  v60 = (void *)AE_ALLOCATE_SAFEMULT(
                  v59,
                  (unsigned int)v57,
                  v58,
                  (__int64 (__fastcall *)(unsigned __int64, void *))AERTAllocate);
  *((_QWORD *)this - 40) = v60;
  if ( !v60 )
  {
    v31 = -2147024882;
    v35 = 711LL;
    goto LABEL_111;
  }
  memset_0(v60, 0, v57);
  v61 = *((_QWORD *)this - 40);
  v62 = (void **)((char *)this - 400);
  v102 = (void **)((char *)this - 400);
  *(_DWORD *)(v61 + 152) = -1;
  *(_DWORD *)(*((_QWORD *)this - 40) + 172LL) = 0;
  *(_DWORD *)(*((_QWORD *)this - 40) + 176LL) = 0;
  *(_DWORD *)(*((_QWORD *)this - 40) + 144LL) = 0;
  *(_DWORD *)(*((_QWORD *)this - 40) + 148LL) = 0;
  *(_QWORD *)(*((_QWORD *)this - 40) + 136LL) = (unsigned int)(int)((double)(int)(a3 / *((_DWORD *)this - 78))
                                                                  * 10000000.0
                                                                  / *((float *)this - 61)
                                                                  + 0.5);
  if ( !a10 )
  {
    v65 = a3 + v88;
    if ( a3 + v88 < a3 )
    {
      v64 = 762LL;
      goto LABEL_101;
    }
    v63 = v65 + v86;
    LODWORD(pvAddress) = v63;
    if ( (unsigned int)v63 < v65 )
    {
      v64 = 763LL;
      goto LABEL_101;
    }
LABEL_70:
    v95 = 0LL;
    v66 = (*(__int64 (__fastcall **)(struct ICrossProcessMemoryManager *, __int64, __int64 *))(*(_QWORD *)a11 + 32LL))(
            a11,
            v63,
            &v95);
    v31 = v66;
    if ( v66 >= 0 )
    {
      v66 = (*(__int64 (__fastcall **)(__int64, unsigned int *, char **))(*(_QWORD *)v95 + 32LL))(v95, &v98, &v97);
      v31 = v66;
      if ( v66 >= 0 )
      {
        if ( v98 < (unsigned int)pvAddress )
        {
          v31 = -2147024882;
          v67 = 775LL;
          v69 = 2147942414LL;
LABEL_85:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v67,
            (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
            (const char *)v69);
          v74 = 1;
          goto LABEL_97;
        }
        *((_DWORD *)this - 76) = v105;
        pvAddress = v97;
        **((_DWORD **)this - 40) = Size;
        *(_DWORD *)(*((_QWORD *)this - 40) + 132LL) = v91;
        v70 = *((_QWORD *)this - 40);
        if ( a9 )
        {
          *(_DWORD *)(v70 + 132) = v87;
          *(_DWORD *)(*((_QWORD *)this - 40) + 144LL) = v87;
          *(_DWORD *)(*((_QWORD *)this - 40) + 152LL) = v93;
          v70 = *((_QWORD *)this - 40);
          v71 = v92;
        }
        else
        {
          v71 = v93;
        }
        *(_DWORD *)(v70 + 156) = v71;
        *(_DWORD *)(*((_QWORD *)this - 40) + 160LL) = v86;
        *(_DWORD *)(*((_QWORD *)this - 40) + 164LL) = v86 + a3;
        v72 = v86 + v88 + a3;
        *(_DWORD *)(*((_QWORD *)this - 40) + 168LL) = v72;
        if ( a10 )
        {
          *(_DWORD *)(*((_QWORD *)this - 40) + 148LL) = v89;
          *(_DWORD *)(*((_QWORD *)this - 40) + 172LL) = v90;
          *(_DWORD *)(*((_QWORD *)this - 40) + 176LL) = v99 + v90;
        }
        v73 = a12;
        if ( a12 )
        {
          wil::com_ptr_t<ICrossProcessEvent,wil::err_returncode_policy>::reset((char *)this + 8, v86, v68, 0LL);
          v66 = (*(__int64 (__fastcall **)(struct ICrossProcessEventManager *, char *))(*(_QWORD *)v73 + 32LL))(
                  v73,
                  (char *)this + 8);
          v31 = v66;
          if ( v66 < 0 )
          {
            v67 = 809LL;
            goto LABEL_84;
          }
          *((_QWORD *)this + 2) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 24LL))(*((_QWORD *)this + 1));
        }
        else if ( a6 )
        {
          StringCchCopyW((unsigned __int16 *)(*((_QWORD *)this - 40) + 4LL), 0x40uLL, (size_t *)a6);
          v75 = a7;
          a7[4] = (char *)this + 24;
          *((_DWORD *)this + 9) = *((_DWORD *)v75 + 4);
        }
        memcpy_0((void *)(*((_QWORD *)this - 40) + 180LL), a2, a2->cbSize + 18LL);
        v76 = pvAddress;
        memcpy_0((char *)pvAddress + 200, *((const void **)this - 40), Size);
        memset_0(v76, 0, 0xC0uLL);
        *((_QWORD *)this - 41) = v76;
        WerRegisterMemoryBlock(v76, 0xC0u);
        v77 = *((_QWORD *)this - 40);
        v78 = a9 == 0;
        *((_QWORD *)this - 35) = &v97[*(unsigned int *)(v77 + 156)];
        if ( !v78 )
          *((_QWORD *)this - 33) = &v97[*(unsigned int *)(v77 + 152)];
        v78 = a10 == 0;
        *(_DWORD *)(*((_QWORD *)this - 41) + 180LL) = -1;
        if ( !v78 )
        {
          _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this - 41) + 180LL), v72);
          v22 = v100;
          v33 = v101;
          v62 = v102;
          *((_QWORD *)this - 34) = &v97[*(unsigned int *)(*((_QWORD *)this - 41) + 180LL)];
        }
        v76[48] = 1162888004;
        wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::operator=((__int64 *)this - 42, v95);
        wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::copy_to<ICrossProcessMemory>(&v95, a13);
        v79 = (struct ICrossProcessEvent *)*((_QWORD *)this + 1);
        if ( v79 )
        {
          *a14 = v79;
          (*(void (__fastcall **)(struct ICrossProcessEvent *))(*(_QWORD *)v79 + 8LL))(v79);
        }
        else
        {
          *a14 = 0LL;
        }
        *((_DWORD *)this - 86) = 1;
        v74 = 0;
        v31 = 0;
LABEL_97:
        wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v95);
        v82 = v74;
        if ( !v74 )
          goto LABEL_103;
        goto LABEL_102;
      }
      v67 = 773LL;
    }
    else
    {
      v67 = 768LL;
    }
LABEL_84:
    v69 = (unsigned int)v66;
    goto LABEL_85;
  }
  v63 = v90 + (unsigned int)v28;
  LODWORD(pvAddress) = v63;
  if ( (unsigned int)v63 >= v90 )
    goto LABEL_70;
  v64 = 758LL;
LABEL_101:
  v31 = -2147024362;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v64,
    (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
    (const char *)0x80070216LL);
  v82 = 1;
LABEL_102:
  v83 = (void *)AERTGetDLLRTHeap();
  AERTFree(v62[10], v83, v84);
  v62[10] = 0LL;
LABEL_103:
  if ( v82 )
  {
LABEL_113:
    v85 = (void *)*((_QWORD *)v33 + 18);
    if ( v85 )
    {
      AERTDestroyZoneHeap(v85, v80, v81);
      *((_QWORD *)v33 + 18) = 0LL;
    }
  }
LABEL_117:
  LeaveCriticalSection((LPCRITICAL_SECTION)(v22 + 16));
  return v31;
}
