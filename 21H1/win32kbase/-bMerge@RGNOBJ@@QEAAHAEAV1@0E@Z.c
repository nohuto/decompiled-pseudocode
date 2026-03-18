/*
 * XREFs of ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C007A650
 * Callers:
 *     EngUpdateDeviceSurface @ 0x1C004A300 (EngUpdateDeviceSurface.c)
 *     ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C0074628 (-InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C00747B0 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0075A70 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     GreCombineRgn @ 0x1C007DB50 (GreCombineRgn.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00C52FC (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 * Callees:
 *     EngSetLastError @ 0x1C003C4D0 (EngSetLastError.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0074EF0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     Win32AllocateFromPagedLookasideList @ 0x1C0075F40 (Win32AllocateFromPagedLookasideList.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C008BC60 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     memcmp @ 0x1C00D1E60 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0129144 (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0148A4C (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

__int64 __fastcall RGNOBJ::bMerge(RGNOBJ *this, struct RGNOBJ *a2, struct RGNOBJ *a3, unsigned __int8 a4)
{
  unsigned int *v4; // r15
  RGNOBJ *v5; // r14
  int *v6; // rsi
  int *v7; // rdi
  int v8; // r8d
  unsigned int *v9; // rbx
  unsigned int v10; // edx
  signed int v11; // ebp
  _DWORD *v12; // r12
  int *v13; // r8
  signed int v14; // ecx
  int *v15; // r13
  signed int v16; // edx
  unsigned __int8 v17; // r11
  unsigned __int8 v18; // al
  int v19; // ecx
  int v20; // r10d
  int v21; // edx
  __int64 v22; // r9
  unsigned int v23; // eax
  _DWORD *v24; // rcx
  signed int v25; // eax
  signed int v26; // eax
  signed int v27; // edx
  signed int v28; // eax
  int v29; // eax
  _BYTE *v30; // rax
  unsigned int v32; // ebx
  unsigned __int8 *v33; // rcx
  __int64 v34; // rbp
  __int64 v35; // rax
  __int64 v36; // rax
  struct _KTHREAD *CurrentThread; // r12
  __int64 v38; // rdx
  __int64 v39; // rcx
  _QWORD *ThreadWin32Thread; // rax
  _QWORD *v41; // r12
  __int64 v42; // r13
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 *v46; // rax
  __int64 v47; // rcx
  _QWORD *v48; // rax
  __int64 v49; // rbx
  int v50; // ecx
  __int64 v51; // rcx
  _QWORD *v52; // r12
  _QWORD *v53; // rax
  _QWORD *v54; // rcx
  __int64 v55; // rax
  _QWORD *v56; // rcx
  __int64 v57; // r13
  struct _KTHREAD *v58; // rbp
  __int64 v59; // rdx
  __int64 v60; // rcx
  _QWORD *v61; // rax
  _QWORD *v62; // rbp
  __int64 v63; // r12
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 *v67; // rax
  __int64 v68; // rcx
  _QWORD *v69; // rax
  _QWORD *v70; // rbp
  __int64 v71; // r12
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 *v75; // rax
  __int64 v76; // rcx
  _QWORD *v77; // rax
  __int64 *v78; // rbx
  __int64 *v79; // rax
  __int64 **v80; // rcx
  __int64 v81; // rbx
  void *v82; // rbp
  unsigned __int8 *v83; // rcx
  __int64 v84; // rbx
  __int64 v85; // rax
  int v86; // ebx
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v91; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v93; // rax
  int v94; // ebx
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rax
  int v98; // ebx
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rax
  int v102; // ebx
  __int64 v103; // rcx
  __int64 v104; // rax
  struct _KTHREAD *v105; // [rsp+20h] [rbp-78h]
  BOOL v106; // [rsp+20h] [rbp-78h]
  _QWORD *v107; // [rsp+28h] [rbp-70h]
  struct _KTHREAD *v108; // [rsp+28h] [rbp-70h]
  __int64 v109; // [rsp+30h] [rbp-68h]
  struct _KTHREAD *v110; // [rsp+30h] [rbp-68h]
  __int64 v111; // [rsp+38h] [rbp-60h] BYREF
  int v112; // [rsp+40h] [rbp-58h]

  v4 = 0LL;
  v5 = this;
  v6 = *(int **)(*(_QWORD *)a2 + 88LL);
  v7 = *(int **)(*(_QWORD *)a3 + 88LL);
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 40LL)
                 - 4LL
                 - (unsigned int)(4 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 40LL) - 4LL) + 16)
                 + 12) != 0x7FFFFFFF
    || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 40LL)
                 - 4LL
                 - (unsigned int)(4 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 40LL) - 4LL) + 16)
                 + 12) != 0x7FFFFFFF )
  {
    return 0LL;
  }
  *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)(*(_QWORD *)this + 88LL);
  *(_DWORD *)(*(_QWORD *)this + 80LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 84LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 96LL) = 0x7FFFFFFF;
  *(_DWORD *)(*(_QWORD *)this + 100LL) = 0x7FFFFFFF;
  *(_DWORD *)(*(_QWORD *)this + 104LL) = 0x80000000;
  *(_DWORD *)(*(_QWORD *)this + 108LL) = 0x80000000;
LABEL_4:
  v8 = *(_DWORD *)(*(_QWORD *)v5 + 24LL);
  v9 = *(unsigned int **)(*(_QWORD *)v5 + 40LL);
  v10 = 4 * (*v6 + *v7) + 16;
  if ( v10 <= v8 - *(_DWORD *)(*(_QWORD *)v5 + 80LL) )
    goto LABEL_5;
  v112 = 0;
  v32 = v8 + v10 + 1120;
  if ( v32 < 0x70 )
    v32 = 112;
  v33 = gpTypeIsolation[7];
  if ( v33 )
  {
    v34 = NSInstrumentation::CTypeIsolation<28672,112>::Allocate();
    if ( !v34 )
      goto LABEL_58;
    if ( v32 == 112 )
      v35 = Win32AllocateFromPagedLookasideList((__int64)RGNMEMOBJ::s_pSCANLookAsideList);
    else
      v35 = qword_1C0258BD0 && (int)qword_1C0258BD0() >= 0 && qword_1C0258BD8
          ? qword_1C0258BD8(33LL, v32, 1852011335LL)
          : 0LL;
    *(_QWORD *)(v34 + 88) = v35;
    if ( *(_QWORD *)(v34 + 88) )
      goto LABEL_58;
    REGION::vDeleteREGION((REGION *)v34);
  }
  v34 = 0LL;
LABEL_58:
  v111 = v34;
  if ( v34 )
  {
    v36 = *(_QWORD *)(v34 + 88);
    *(_DWORD *)(v34 + 80) = 16;
    *(_DWORD *)(v34 + 84) = 1;
    *(_QWORD *)(v34 + 96) = 0LL;
    *(_QWORD *)(v34 + 104) = 0LL;
    *(_DWORD *)v36 = 0;
    *(_DWORD *)(v36 + 4) = 0x80000000;
    *(_QWORD *)(v36 + 8) = 0x7FFFFFFFLL;
    *(_QWORD *)(v34 + 40) = v36 + 16;
    *(_DWORD *)(v34 + 24) = v32;
    *(_QWORD *)(v34 + 28) = 0LL;
    *(_DWORD *)(v34 + 36) = 0;
    *(_QWORD *)(v34 + 56) = v34 + 48;
    *(_QWORD *)(v34 + 48) = v34 + 48;
  }
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(v33)
    || (v85 = PsGetCurrentProcess(v39, v38),
        v86 = PsGetProcessSessionIdEx(v85),
        v88 = PsGetCurrentThreadProcess(v87),
        v86 == (unsigned int)PsGetProcessSessionIdEx(v88)) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      if ( *ThreadWin32Thread )
      {
        if ( !v34 )
          goto LABEL_139;
        v41 = (_QWORD *)(v34 + 48);
        if ( v34 != -48 )
        {
          KeEnterCriticalRegion();
          v42 = 0LL;
          v105 = KeGetCurrentThread();
          if ( !(unsigned __int8)KeIsAttachedProcess(v43)
            || (CurrentProcess = PsGetCurrentProcess(v45, v44),
                ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                CurrentThreadProcess = PsGetCurrentThreadProcess(v91),
                ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
          {
            v46 = (__int64 *)PsGetThreadWin32Thread(v105);
            if ( v46 )
              v42 = *v46;
          }
          *(_QWORD *)(v34 + 64) = v34;
          *(_QWORD *)(v34 + 72) = CleanUpRegion;
          if ( v42 )
          {
            v47 = *(_QWORD *)(v42 + 88);
            v48 = (_QWORD *)(v42 + 88);
            if ( *(_QWORD *)(v47 + 8) != v42 + 88 )
              goto LABEL_138;
            *v41 = v47;
            *(_QWORD *)(v34 + 56) = v48;
            *(_QWORD *)(v47 + 8) = v41;
            *v48 = v41;
          }
          else
          {
            *(_QWORD *)(v34 + 56) = v34 + 48;
            *v41 = v41;
          }
          KeLeaveCriticalRegion();
        }
      }
    }
  }
  if ( v34 )
  {
    *(_DWORD *)(v34 + 80) = *(_DWORD *)(*(_QWORD *)v5 + 80LL);
    *(_DWORD *)(v34 + 84) = *(_DWORD *)(*(_QWORD *)v5 + 84LL);
    *(_OWORD *)(v34 + 96) = *(_OWORD *)(*(_QWORD *)v5 + 96LL);
    memmove(*(void **)(v34 + 88), *(const void **)(*(_QWORD *)v5 + 88LL), *(unsigned int *)(*(_QWORD *)v5 + 80LL));
    v49 = v34 + 48;
    *(_QWORD *)(v34 + 40) = *(_QWORD *)(v34 + 88)
                          + *(_DWORD *)(*(_QWORD *)v5 + 40LL)
                          - *(_DWORD *)(*(_QWORD *)v5 + 88LL);
    v50 = *(_DWORD *)(*(_QWORD *)v5 + 32LL);
    *(_DWORD *)(*(_QWORD *)v5 + 32LL) = *(_DWORD *)(v34 + 32);
    *(_DWORD *)(v34 + 32) = v50;
    v51 = *(unsigned int *)(*(_QWORD *)v5 + 36LL);
    *(_DWORD *)(*(_QWORD *)v5 + 36LL) = *(_DWORD *)(v34 + 36);
    *(_DWORD *)(v34 + 36) = v51;
    v52 = (_QWORD *)(*(_QWORD *)v5 + 48LL);
    v107 = (_QWORD *)*v52;
    v106 = *(_QWORD *)v49 == v49;
    if ( *(_QWORD *)v5 != -48LL )
    {
      KeEnterCriticalRegion();
      v53 = (_QWORD *)*v52;
      if ( *(_QWORD **)(*v52 + 8LL) != v52 || (v54 = (_QWORD *)v52[1], (_QWORD *)*v54 != v52) )
LABEL_138:
        __fastfail(3u);
      *v54 = v53;
      v53[1] = v54;
      v52[1] = v52;
      *v52 = v52;
      KeLeaveCriticalRegion();
    }
    if ( v34 != -48 )
    {
      KeEnterCriticalRegion();
      v55 = *(_QWORD *)v49;
      if ( *(_QWORD *)(*(_QWORD *)v49 + 8LL) != v49 )
        goto LABEL_138;
      v56 = *(_QWORD **)(v34 + 56);
      if ( *v56 != v49 )
        goto LABEL_138;
      *v56 = v55;
      *(_QWORD *)(v55 + 8) = v56;
      *(_QWORD *)(v34 + 56) = v34 + 48;
      *(_QWORD *)v49 = v49;
      KeLeaveCriticalRegion();
    }
    v57 = *(_QWORD *)v5;
    *(_QWORD *)v5 = v34;
    v58 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(v51)
      || (v93 = PsGetCurrentProcess(v60, v59),
          v94 = PsGetProcessSessionIdEx(v93),
          v96 = PsGetCurrentThreadProcess(v95),
          v94 == (unsigned int)PsGetProcessSessionIdEx(v96)) )
    {
      v61 = (_QWORD *)PsGetThreadWin32Thread(v58);
      if ( v61 )
      {
        if ( *v61 )
        {
          if ( v107 != v52 )
          {
            v109 = *(_QWORD *)v5;
            v62 = (_QWORD *)(*(_QWORD *)v5 + 48LL);
            if ( *(_QWORD *)v5 != -48LL )
            {
              KeEnterCriticalRegion();
              v63 = 0LL;
              v108 = KeGetCurrentThread();
              if ( !(unsigned __int8)KeIsAttachedProcess(v64)
                || (v97 = PsGetCurrentProcess(v66, v65),
                    v98 = PsGetProcessSessionIdEx(v97),
                    v100 = PsGetCurrentThreadProcess(v99),
                    v98 == (unsigned int)PsGetProcessSessionIdEx(v100)) )
              {
                v67 = (__int64 *)PsGetThreadWin32Thread(v108);
                if ( v67 )
                  v63 = *v67;
              }
              v62[2] = v109;
              v62[3] = CleanUpRegion;
              if ( v63 )
              {
                v68 = *(_QWORD *)(v63 + 88);
                v69 = (_QWORD *)(v63 + 88);
                if ( *(_QWORD *)(v68 + 8) != v63 + 88 )
                  goto LABEL_138;
                *v62 = v68;
                v62[1] = v69;
                *(_QWORD *)(v68 + 8) = v62;
                *v69 = v62;
              }
              else
              {
                v62[1] = v62;
                *v62 = v62;
              }
              KeLeaveCriticalRegion();
            }
          }
          if ( !v106 )
          {
            v70 = (_QWORD *)(v57 + 48);
            if ( v57 != -48 )
            {
              KeEnterCriticalRegion();
              v71 = 0LL;
              v110 = KeGetCurrentThread();
              if ( !(unsigned __int8)KeIsAttachedProcess(v72)
                || (v101 = PsGetCurrentProcess(v74, v73),
                    v102 = PsGetProcessSessionIdEx(v101),
                    v104 = PsGetCurrentThreadProcess(v103),
                    v102 == (unsigned int)PsGetProcessSessionIdEx(v104)) )
              {
                v75 = (__int64 *)PsGetThreadWin32Thread(v110);
                if ( v75 )
                  v71 = *v75;
              }
              *(_QWORD *)(v57 + 64) = v57;
              *(_QWORD *)(v57 + 72) = CleanUpRegion;
              if ( v71 )
              {
                v76 = *(_QWORD *)(v71 + 88);
                v77 = (_QWORD *)(v71 + 88);
                if ( *(_QWORD *)(v76 + 8) != v71 + 88 )
                  goto LABEL_138;
                *v70 = v76;
                *(_QWORD *)(v57 + 56) = v77;
                *(_QWORD *)(v76 + 8) = v70;
                *v77 = v70;
              }
              else
              {
                *(_QWORD *)(v57 + 56) = v57 + 48;
                *v70 = v70;
              }
              KeLeaveCriticalRegion();
            }
          }
        }
      }
    }
    if ( v57 )
    {
      v78 = (__int64 *)(v57 + 48);
      if ( v57 != -48 )
      {
        KeEnterCriticalRegion();
        v79 = (__int64 *)*v78;
        if ( *(__int64 **)(*v78 + 8) != v78 )
          goto LABEL_138;
        v80 = *(__int64 ***)(v57 + 56);
        if ( *v80 != v78 )
          goto LABEL_138;
        *v80 = v79;
        v79[1] = (__int64)v80;
        *(_QWORD *)(v57 + 56) = v57 + 48;
        *v78 = (__int64)v78;
        KeLeaveCriticalRegion();
      }
      if ( (struct REGION *)v57 != prgnDefault )
      {
        v81 = *(_QWORD *)(v57 + 88);
        if ( v81 )
        {
          if ( *(_DWORD *)(v57 + 24) == 112 )
          {
            v82 = RGNMEMOBJ::s_pSCANLookAsideList;
            if ( qword_1C0258C20 && (int)qword_1C0258C20() >= 0 && qword_1C0258C28 )
              qword_1C0258C28(v82, v81);
          }
          else if ( *(_DWORD *)(v57 + 24) > 0x70u )
          {
            Win32FreePool(*(_QWORD *)(v57 + 88));
          }
          *(_QWORD *)(v57 + 88) = 0LL;
        }
        v83 = gpTypeIsolation[7];
        if ( v83 )
          NSInstrumentation::CTypeIsolation<28672,112>::Free(v83, v57);
      }
    }
    v84 = *(_QWORD *)v5;
    v111 = 0LL;
    v9 = *(unsigned int **)(v84 + 40);
    if ( v4 )
      v4 = &v9[-*(v9 - 1) - 4];
LABEL_5:
    v11 = v6[2];
    v12 = v9 + 3;
    v13 = v6 + 3;
    v14 = v7[1];
    v15 = v7 + 3;
    v16 = v6[1];
    v17 = a4;
    if ( v11 >= v7[2] )
      v11 = v7[2];
    v9[2] = v11;
    v18 = 1;
    if ( v16 <= v14 )
      v16 = v14;
    v9[1] = v16;
    v19 = *v6;
    v20 = *v7;
    *v9 = 0;
    while ( 1 )
    {
      if ( v19 )
      {
        v21 = *v13;
        v22 = v18;
        if ( v20 )
        {
          v29 = *v15;
          if ( v21 < *v15 )
          {
            v30 = byte_1C0218920;
          }
          else
          {
            ++v15;
            --v20;
            if ( v21 > v29 )
            {
              v21 = v29;
              v30 = byte_1C0218910;
LABEL_42:
              v18 = v30[v22];
              goto LABEL_13;
            }
            v30 = &unk_1C0218900;
          }
          ++v13;
          --v19;
          goto LABEL_42;
        }
        v18 = byte_1C0218920[v18];
        ++v13;
        --v19;
      }
      else
      {
        if ( !v20 )
        {
          v5 = this;
          v9[*v9 + 3] = *v9;
          if ( v4 && *v4 == *v9 && !memcmp(v4 + 3, v9 + 3, 4LL * *v4) )
          {
            v23 = v9[2];
            v9 = v4;
            v4[2] = v23;
          }
          else if ( v4 != v9 )
          {
            *(_QWORD *)(*(_QWORD *)this + 40LL) = &v9[*v9 + 4];
            *(_DWORD *)(*(_QWORD *)this + 80LL) += 4 * *v9 + 16;
            ++*(_DWORD *)(*(_QWORD *)this + 84LL);
          }
          if ( v9[2] == 0x7FFFFFFF )
            return 1LL;
          if ( *v9 )
          {
            v24 = *(_DWORD **)this;
            v25 = v9[3];
            if ( v25 < *(_DWORD *)(*(_QWORD *)this + 96LL) )
            {
              v24[24] = v25;
              v24 = *(_DWORD **)this;
            }
            v26 = v9[1];
            if ( v26 < v24[25] )
            {
              v24[25] = v26;
              v24 = *(_DWORD **)this;
            }
            v27 = v9[*v9 + 2];
            if ( v27 > v24[26] )
            {
              v24[26] = v27;
              v24 = *(_DWORD **)this;
            }
            v28 = v9[2];
            if ( v28 > v24[27] )
              v24[27] = v28;
          }
          if ( v11 == v6[2] )
            v6 = (int *)((char *)v6 + (unsigned int)(4 * *v6 + 16));
          if ( v11 == v7[2] )
            v7 = (int *)((char *)v7 + (unsigned int)(4 * *v7 + 16));
          if ( (unsigned __int64)v6 >= *(_QWORD *)(*(_QWORD *)a2 + 40LL)
            || (unsigned __int64)v7 >= *(_QWORD *)(*(_QWORD *)a3 + 40LL) )
          {
            return 0LL;
          }
          v4 = v9;
          goto LABEL_4;
        }
        v21 = *v15++;
        --v20;
        v18 = byte_1C0218910[v18];
      }
LABEL_13:
      if ( (v17 & v18) != 0 )
      {
        ++*v9;
        *v12++ = v21;
        v17 ^= 0xFu;
      }
    }
  }
LABEL_139:
  EngSetLastError(8u);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v111);
  return 0LL;
}
