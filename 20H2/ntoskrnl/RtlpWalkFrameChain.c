/*
 * XREFs of RtlpWalkFrameChain @ 0x1402273F0
 * Callers:
 *     RtlWalkFrameChain @ 0x140228EA0 (RtlWalkFrameChain.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x1402265A0 (RtlpGetStackLimits.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x140228100 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpxVirtualUnwind @ 0x140228310 (RtlpxVirtualUnwind.c)
 *     KeQueryCurrentStackInformation @ 0x1402E72F0 (KeQueryCurrentStackInformation.c)
 *     RtlpGetEntireXStateAreaLength @ 0x140325500 (RtlpGetEntireXStateAreaLength.c)
 *     RtlpWalkWowStack @ 0x14032B9F4 (RtlpWalkWowStack.c)
 *     MmIsSessionExecutionValid @ 0x14032D9B0 (MmIsSessionExecutionValid.c)
 *     KeGetNextKernelStackSegment @ 0x140335A08 (KeGetNextKernelStackSegment.c)
 *     RtlLocateExtendedFeature2 @ 0x140380F00 (RtlLocateExtendedFeature2.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     RtlpCaptureContext2 @ 0x140405520 (RtlpCaptureContext2.c)
 *     _alloca_probe @ 0x140405E30 (_alloca_probe.c)
 *     memset @ 0x140411300 (memset.c)
 *     PsWow64GetProcessMachine @ 0x1406941D0 (PsWow64GetProcessMachine.c)
 *     RtlWow64GetCpuAreaInfo @ 0x140695740 (RtlWow64GetCpuAreaInfo.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpWalkFrameChain(__int64 a1, unsigned int a2, char a3, unsigned int a4)
{
  _KPROCESS *Process; // rbx
  int v6; // r13d
  __int64 v7; // rcx
  int v8; // r14d
  char v9; // al
  int v10; // ebx
  __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  int v13; // ecx
  unsigned __int64 v14; // r8
  int v15; // eax
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  void *v19; // rsp
  void *v20; // rsp
  __int64 v21; // rdx
  char *v22; // r8
  unsigned int v23; // edi
  struct _KTHREAD *v24; // rbx
  __int64 v25; // rax
  unsigned int v26; // r12d
  unsigned __int64 v27; // r9
  _QWORD *v28; // r14
  unsigned __int64 *v29; // rbx
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned __int64 **v33; // rcx
  int v34; // ecx
  _KTHREAD *v35; // rcx
  unsigned __int64 *v36; // rax
  char NextKernelStackSegment; // dl
  int v38; // r10d
  __int64 v39; // rdx
  int v40; // ebx
  _QWORD *i; // rcx
  char *v42; // r14
  unsigned __int64 v43; // rcx
  unsigned __int64 *v45; // rdx
  size_t v46; // r12
  int v47; // r13d
  int v48; // [rsp+50h] [rbp+0h] BYREF
  char v49; // [rsp+54h] [rbp+4h]
  bool v50; // [rsp+55h] [rbp+5h]
  char v51; // [rsp+56h] [rbp+6h] BYREF
  unsigned __int8 v52; // [rsp+57h] [rbp+7h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp+8h]
  unsigned int v54; // [rsp+60h] [rbp+10h]
  int v55; // [rsp+64h] [rbp+14h]
  unsigned __int64 v56; // [rsp+68h] [rbp+18h]
  unsigned int v57; // [rsp+70h] [rbp+20h] BYREF
  unsigned __int64 v58; // [rsp+78h] [rbp+28h] BYREF
  __int64 v59; // [rsp+80h] [rbp+30h]
  unsigned __int64 *v60; // [rsp+88h] [rbp+38h] BYREF
  unsigned int v61; // [rsp+90h] [rbp+40h]
  _QWORD *j; // [rsp+98h] [rbp+48h]
  unsigned __int64 v63; // [rsp+A0h] [rbp+50h]
  __int64 v64; // [rsp+A8h] [rbp+58h]
  unsigned int v65; // [rsp+B0h] [rbp+60h]
  unsigned int v66; // [rsp+B4h] [rbp+64h]
  void *Teb; // [rsp+B8h] [rbp+68h]
  unsigned __int64 *v68; // [rsp+C0h] [rbp+70h]
  unsigned __int64 v69; // [rsp+C8h] [rbp+78h]
  unsigned __int64 v70; // [rsp+D0h] [rbp+80h]
  int v71; // [rsp+D8h] [rbp+88h]
  int v72; // [rsp+DCh] [rbp+8Ch]
  __int64 v73; // [rsp+E0h] [rbp+90h]
  unsigned __int64 *v74; // [rsp+E8h] [rbp+98h]
  __int64 v75; // [rsp+F0h] [rbp+A0h]
  __int64 v76; // [rsp+F8h] [rbp+A8h] BYREF
  unsigned __int64 *v77; // [rsp+100h] [rbp+B0h] BYREF
  __int64 v78; // [rsp+108h] [rbp+B8h]
  char *ExtendedFeature2; // [rsp+110h] [rbp+C0h]
  __int128 v80; // [rsp+118h] [rbp+C8h] BYREF
  __int128 v81; // [rsp+128h] [rbp+D8h]
  __int128 v82; // [rsp+138h] [rbp+E8h] BYREF
  unsigned __int64 v83; // [rsp+148h] [rbp+F8h]
  int v84; // [rsp+150h] [rbp+100h]
  __int64 v85; // [rsp+158h] [rbp+108h] BYREF
  __int64 v86; // [rsp+160h] [rbp+110h] BYREF
  __int64 v87; // [rsp+168h] [rbp+118h]
  _QWORD v88[4]; // [rsp+170h] [rbp+120h] BYREF
  _OWORD v89[3]; // [rsp+1A0h] [rbp+150h] BYREF

  v54 = a4;
  v61 = a2;
  v75 = a1;
  v82 = 0LL;
  v83 = 0LL;
  v68 = 0LL;
  v65 = 0;
  v85 = 0LL;
  v86 = 0LL;
  v60 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  v58 = 0LL;
  v66 = 0;
  j = 0LL;
  v64 = 0LL;
  v52 = 1;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v74 = (unsigned __int64 *)Process;
  if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
    Teb = 0LL;
  else
    Teb = CurrentThread->Teb;
  v56 = 0LL;
  v63 = 0LL;
  v6 = 0;
  v48 = 0;
  v55 = 0;
  if ( !(unsigned __int8)RtlpGetStackLimits((__int64)&v58, (__int64)&v60) )
    return 0LL;
  v7 = 0LL;
  v78 = 0LL;
  v8 = a3 & 1;
  if ( v8 && (HIDWORD(Process[2].ReadyListHead.Blink) & 0x4000) != 0 )
  {
    v7 = KeRaiseExceptionForReturnAddressHijack;
    v78 = KeRaiseExceptionForReturnAddressHijack;
  }
  v9 = 0;
  v49 = 0;
  if ( v7 )
  {
    v9 = 1;
    v49 = 1;
  }
  v10 = 1048587;
  v11 = 0LL;
  if ( v9 )
  {
    v10 = 1048651;
    v11 = 2048LL;
  }
  v12 = v11;
  v71 = 0;
  v72 = 0;
  LODWORD(v73) = 0;
  v13 = 1;
  v14 = 0xFFFFF780000003D8uLL;
  if ( (v10 & 0x100040) == 0x100040 )
  {
    if ( !MEMORY[0xFFFFF780000003D8] )
    {
      v16 = v65;
      goto LABEL_12;
    }
    v13 = 3;
  }
  v71 = v13;
  v72 = 16;
  v15 = 1256;
  if ( (v13 & 2) != 0 )
  {
    if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      v12 = v11 & (MEMORY[0xFFFFF78000000708] | MEMORY[0xFFFFF780000003D8] | 0x8000000000000000uLL);
    v15 = RtlpGetEntireXStateAreaLength(v12) + 800;
    v14 = 0xFFFFF780000003D8uLL;
  }
  v16 = (unsigned int)(v15 - 1 + 16);
  LODWORD(v73) = v16;
  v65 = v16;
LABEL_12:
  v17 = v16 + 15;
  if ( v16 + 15 < v16 )
    v17 = 0xFFFFFFFFFFFFFF0LL;
  v18 = v17 & 0xFFFFFFFFFFFFFFF0uLL;
  v19 = alloca(v18);
  v20 = alloca(v18);
  HIDWORD(v73) = 0;
  v21 = 1LL;
  if ( (v10 & 0x100040) != 0x100040 )
    goto LABEL_15;
  if ( MEMORY[0xFFFFF780000003D8] )
  {
    v21 = 3LL;
LABEL_15:
    HIDWORD(v73) = v21;
    LODWORD(v59) = v10;
    LODWORD(STACK[0x52C]) = 1232;
    LODWORD(STACK[0x528]) = -1232;
    LODWORD(STACK[0x520]) = -1232;
    LODWORD(STACK[0x524]) = 1256;
    if ( (v21 & 2) != 0 )
    {
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
        v11 &= MEMORY[0xFFFFF78000000708] | MEMORY[0xFFFFF780000003D8] | 0x8000000000000000uLL;
      v46 = (unsigned int)RtlpGetEntireXStateAreaLength(v11) - 512;
      memset((void *)((unsigned __int64)&STACK[0x577] & 0xFFFFFFFFFFFFFFC0uLL), 0, v46);
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
        *(_QWORD *)(((unsigned __int64)&STACK[0x577] & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v11 | 0x8000000000000000uLL;
      v47 = ((unsigned __int64)&STACK[0x577] & 0xFFFFFFFFFFFFFFC0uLL) - (unsigned int)&STACK[0x520];
      LODWORD(STACK[0x530]) = v47;
      LODWORD(STACK[0x534]) = v46;
      LODWORD(STACK[0x524]) = v46 + v47 - LODWORD(STACK[0x520]);
      v6 = v48;
    }
    else
    {
      STACK[0x530] = 25LL;
    }
    v68 = &STACK[0x520];
  }
  RtlpCaptureContext2(&v48, v21, v14);
  v51 = 0;
  v23 = 0;
  v48 = 0;
  v50 = (a3 & 2) != 0;
  if ( !v8 && (dword_140CFB174 & 1) == 0 )
    v66 = 0x80000000;
  v69 = 0LL;
  v70 = 0LL;
  v24 = CurrentThread;
  if ( v8 )
  {
    for ( i = CurrentThread->InitialStack; (i[1] & 1) != 0; i = (_QWORD *)i[5] )
      ;
    v42 = (char *)(i - 50);
    v56 = (unsigned __int64)(i - 50);
    v63 = (unsigned __int64)(i - 50);
    if ( !Teb || (*((_WORD *)Teb + 3063) & 0x100) != 0 )
      return 0LL;
    if ( (unsigned __int16)PsWow64GetProcessMachine(v74) != 332 || v42[43] == 2 )
    {
      v26 = v54;
    }
    else
    {
      v26 = v54;
      if ( *((_WORD *)v42 + 184) == 35 )
      {
        v48 = 1;
        if ( (unsigned __int8)RtlpWalkWowStack(
                                v75,
                                (int)v42 + 360,
                                (_DWORD)Teb,
                                (unsigned int)&v48,
                                v61,
                                v54,
                                *((_DWORD *)v42 + 86),
                                *((_DWORD *)v42 + 96)) )
        {
          v23 = v48;
          goto LABEL_155;
        }
        v23 = v48;
      }
    }
    v69 = *((_QWORD *)v42 + 48);
    v43 = *((_QWORD *)Teb + 1);
    v70 = v43;
    if ( v43 <= v69 )
      return 0LL;
    if ( v43 > 0x7FFFFFFF0000LL )
      MEMORY[0x7FFFFFFF0000] = 0;
    for ( j = v24->InitialStack; (j[1] & 1) != 0; j = (_QWORD *)j[5] )
      ;
    v25 = j[4];
    v64 = v25;
    v52 = _bittestandset((signed __int32 *)&v24->116, 5u);
  }
  else
  {
    v25 = v64;
    v26 = v54;
  }
  v59 = v25;
  v80 = 0LL;
  v81 = 0LL;
  v82 = *(_OWORD *)&xmmword_140E00020;
  v83 = qword_140E00030;
LABEL_24:
  v27 = 0xFFFF800000000000uLL;
  while ( 1 )
  {
    v28 = j;
    if ( v6 != 1 )
    {
      v22 = (char *)v83;
      if ( v83 >= 0xFFFF800000000000uLL && byte_140C4F848[((v83 >> 39) & 0x1FF) - 256] == 1 )
      {
        if ( !(unsigned int)MmIsSessionExecutionValid(v24, v74, v83, 0xFFFF800000000000uLL) )
          goto LABEL_155;
        v27 = 0xFFFF800000000000uLL;
      }
    }
    v29 = v74;
    v77 = 0LL;
    v76 = 0LL;
    v57 = 0;
    if ( ((unsigned __int8)v74 & 7) != 0 )
      goto LABEL_154;
    if ( (unsigned __int64)v74 < v58 || v74 >= v60 )
      break;
LABEL_31:
    v30 = RtlpLookupFunctionEntryForStackWalks(v83, &v82, v22, v27);
    v88[3] = v30;
    if ( v30 )
    {
      v88[2] = 0LL;
      v88[0] = &v58;
      v88[1] = &v60;
      v84 = RtlpxVirtualUnwind(
              v66,
              DWORD2(v82),
              v83,
              v30,
              (__int64)&v48,
              (__int64)&v51,
              (__int64)&v86,
              (__int64)&v85,
              0LL,
              (__int64)v88);
      if ( v84 < 0 )
      {
        v24 = CurrentThread;
        goto LABEL_155;
      }
      if ( v51 )
        v50 = 0;
      v31 = v83;
    }
    else
    {
      if ( !*((_QWORD *)&v82 + 1) )
      {
        v24 = CurrentThread;
        goto LABEL_155;
      }
      if ( v83 <= 0x7FFFFFFEFFFFLL )
      {
        if ( ((unsigned __int8)v74 & 3) != 0 )
          goto LABEL_145;
        v23 = v48;
        v59 = v64;
        v56 = v63;
        v6 = v55;
      }
      v31 = *v74;
      v83 = *v74++;
    }
    v32 = v31;
    if ( v6 == 1 && v23 && v78 && v31 == v78 )
    {
      ExtendedFeature2 = (char *)RtlLocateExtendedFeature2(v68, 11LL, 0xFFFFF780000003D8uLL);
      v32 = *(_QWORD *)(*((_QWORD *)ExtendedFeature2 + 1) - 8LL);
      v83 = v32;
    }
    if ( !v32 )
    {
      if ( (a3 & 1) == 0 )
        goto LABEL_91;
      if ( (unsigned __int16)PsWow64GetProcessMachine(v74) != 332 )
        goto LABEL_91;
      if ( *(_BYTE *)(v56 + 43) != 2 )
        goto LABEL_91;
      memset(v89, 0, sizeof(v89));
      v40 = (int)Teb;
      if ( (int)RtlWow64GetCpuAreaInfo(*((_QWORD *)Teb + 657), v39, v89) < 0 )
        goto LABEL_91;
      if ( (v89[0] & 3) == 0 )
      {
        if ( (unsigned __int8)RtlpWalkWowStack(
                                v75,
                                0,
                                v40,
                                (unsigned int)&v48,
                                v61,
                                v26,
                                *(_DWORD *)(*(_QWORD *)&v89[0] + 180LL),
                                *(_DWORD *)(*(_QWORD *)&v89[0] + 196LL) - 4) )
        {
          v23 = v48;
          v24 = CurrentThread;
          goto LABEL_155;
        }
        v23 = v48;
LABEL_91:
        v24 = CurrentThread;
        goto LABEL_155;
      }
LABEL_145:
      ExRaiseDatatypeMisalignment();
    }
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        if ( v32 > 0x7FFFFFFEFFFFLL )
        {
          v24 = CurrentThread;
          goto LABEL_155;
        }
        if ( v59 && v32 == *(_QWORD *)(v56 + 360) )
        {
          v6 = 2;
          v55 = 2;
          v83 = *(_QWORD *)(v59 + 312);
          v74 = (unsigned __int64 *)(v59 + 320);
          v75 = *(_QWORD *)(v59 + 248);
          v73 = *(_QWORD *)(v59 + 256);
          v77 = *(unsigned __int64 **)(v59 + 264);
          v76 = *(_QWORD *)(v59 + 272);
          v81 = *(_OWORD *)(v59 + 280);
          v82 = *(_OWORD *)(v59 + 296);
          if ( v49 )
          {
            ExtendedFeature2 = (char *)RtlLocateExtendedFeature2(v68, 11LL, 0xFFFFF780000003D8uLL);
            *(_QWORD *)ExtendedFeature2 = 0LL;
          }
          v59 = v28[4];
          v64 = v59;
          v33 = (unsigned __int64 **)v28[5];
          if ( !v33 )
          {
            v24 = CurrentThread;
            goto LABEL_155;
          }
          j = (_QWORD *)v28[5];
          v58 = (unsigned __int64)v74;
          v60 = *v33;
        }
      }
      else
      {
        if ( v6 != 2 )
        {
          v24 = CurrentThread;
          goto LABEL_155;
        }
        if ( v32 <= 0x7FFFFFFEFFFFLL )
        {
          if ( v32 != *(_QWORD *)(v56 + 360) )
          {
            v24 = CurrentThread;
            goto LABEL_155;
          }
          v87 = *(_QWORD *)(v56 + 384);
          if ( (v87 & 3) != 0 )
            goto LABEL_145;
          v6 = 1;
          v55 = 1;
          v74 = *(unsigned __int64 **)(v87 + 72);
          v58 = v69;
          v60 = (unsigned __int64 *)v70;
          v59 = v64;
          if ( v64 )
          {
            v56 = *(_QWORD *)(v64 + 208);
            v63 = v56;
            v23 = v48;
          }
          else
          {
            v23 = v48;
            v56 = v63;
          }
        }
      }
      goto LABEL_43;
    }
    v27 = 0xFFFF800000000000uLL;
    if ( (a3 & 1) == 0 && v32 < 0xFFFF800000000000uLL )
    {
      v24 = CurrentThread;
      goto LABEL_155;
    }
    if ( (a3 & 1) != 0 )
    {
      if ( v32 < 0xFFFF800000000000uLL )
      {
        if ( v32 > 0x7FFFFFFEFFFFLL )
        {
          v24 = CurrentThread;
          goto LABEL_155;
        }
        if ( v32 != *(_QWORD *)(v56 + 360) )
        {
          v24 = CurrentThread;
          goto LABEL_155;
        }
        v6 = 1;
        v55 = 1;
        if ( v59 )
        {
          v56 = *(_QWORD *)(v59 + 208);
          v63 = v56;
          if ( v56 < 0xFFFF800000000000uLL )
          {
            v24 = CurrentThread;
            goto LABEL_155;
          }
        }
        if ( v49 )
        {
          LODWORD(v59) = v59 | 0x100040;
          v22 = (char *)RtlLocateExtendedFeature2(v68, 11LL, 0xFFFFF780000003D8uLL);
          ExtendedFeature2 = v22;
          *(_QWORD *)v22 = 1LL;
          *((_QWORD *)v22 + 1) = __readmsr(0x6A7u);
        }
        v58 = v69;
        v60 = (unsigned __int64 *)v70;
LABEL_43:
        if ( v23 >= v54 )
          *(_QWORD *)(v75 + 8LL * (v23 - v54)) = v83;
        v48 = ++v23;
        if ( v23 >= v61 )
        {
          v24 = CurrentThread;
          goto LABEL_155;
        }
        v26 = v54;
        v24 = CurrentThread;
        goto LABEL_24;
      }
      if ( !v23 )
        goto LABEL_43;
      v24 = CurrentThread;
    }
    else
    {
      if ( !v50 )
        goto LABEL_43;
      v24 = CurrentThread;
    }
  }
  if ( v58 < 0xFFFF800000000000uLL )
    goto LABEL_154;
  KeQueryCurrentStackInformation(&v57, &v76, &v77, 0xFFFF800000000000uLL);
  if ( v57 <= 9 )
  {
    v34 = 929;
    if ( _bittest(&v34, v57) )
      goto LABEL_154;
  }
  v35 = KeGetCurrentThread();
  v27 = v57;
  if ( v57 != 1 )
  {
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 && v35 != KeGetCurrentPrcb()->IdleThread )
    {
      v45 = (unsigned __int64 *)((char *)KeGetPcr()->Prcb.DpcStack + 80);
      v22 = (char *)v45 - (unsigned int)KeKernelStackSize;
      if ( v22 <= (char *)v29 && v29 < v45 )
      {
        v60 = v45;
        v58 = (unsigned __int64)v45 - (unsigned int)KeKernelStackSize;
        goto LABEL_88;
      }
    }
    v27 = v57;
  }
  LOBYTE(v22) = 0;
  v36 = (unsigned __int64 *)v80;
  if ( !(_QWORD)v80 )
  {
    LOBYTE(v22) = 1;
    KeGetNextKernelStackSegment(v35, &v80, v22);
    v36 = (unsigned __int64 *)v80;
  }
  NextKernelStackSegment = 1;
  if ( (unsigned int)v27 > 0xA || (v38 = 1090, !_bittest(&v38, v27)) || !(_BYTE)v22 )
  {
    NextKernelStackSegment = KeGetNextKernelStackSegment(v35, &v80, 0LL);
    v36 = (unsigned __int64 *)v80;
  }
  if ( NextKernelStackSegment )
  {
    v76 = *((_QWORD *)&v80 + 1);
    v77 = v36;
    if ( (unsigned __int64)v29 >= *((_QWORD *)&v80 + 1) && v29 < v36 )
    {
      v58 = *((_QWORD *)&v80 + 1);
      v60 = v36;
LABEL_88:
      v59 = v64;
      v6 = v55;
      v56 = v63;
      v23 = v48;
      goto LABEL_31;
    }
  }
  v23 = v48;
LABEL_154:
  v24 = CurrentThread;
LABEL_155:
  if ( (a3 & 1) != 0 && !v52 )
    v24->MiscFlags &= ~0x20u;
  return v23;
}
