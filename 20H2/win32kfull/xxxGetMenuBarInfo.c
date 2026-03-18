/*
 * XREFs of xxxGetMenuBarInfo @ 0x1C00B2E88
 * Callers:
 *     NtUserGetMenuBarInfo @ 0x1C00F0C30 (NtUserGetMenuBarInfo.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     GetDpiDependentMetric @ 0x1C005BD0C (GetDpiDependentMetric.c)
 *     _HasCaptionIcon @ 0x1C005C5D8 (_HasCaptionIcon.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C007920C (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     xxxGetSysMenu @ 0x1C007C474 (xxxGetSysMenu.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C00B2E4C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     GetWindowBordersForDpi @ 0x1C00C7CA0 (GetWindowBordersForDpi.c)
 *     GetWindowDpiLastNotify @ 0x1C00C9744 (GetWindowDpiLastNotify.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00D3FCC (safe_cast_fnid_to_PMENUWND.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00F7AF4 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106F84 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 */

__int64 __fastcall xxxGetMenuBarInfo(struct tagWND *a1, int a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v6; // r14
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // rcx
  __int64 v15; // r15
  struct _KTHREAD *v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 *v20; // rax
  unsigned int v21; // r15d
  __int64 v22; // rdx
  _DWORD *v23; // rcx
  unsigned int WindowDpiLastNotify; // ebx
  struct _KTHREAD *v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 *v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rax
  struct _KTHREAD *v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 *v38; // rax
  _QWORD *v39; // rcx
  int v41; // r8d
  int v42; // r9d
  _QWORD *v43; // rax
  int v44; // r8d
  __int64 v45; // rax
  int v46; // ecx
  __int64 v47; // rax
  __int64 v48; // rcx
  int v49; // eax
  __int64 *v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rax
  _QWORD *v53; // rax
  int v54; // r8d
  int v55; // r9d
  int WindowBordersForDpi; // eax
  __int64 v57; // rdx
  int v58; // r12d
  __int64 *v59; // rcx
  __int64 v60; // rdx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v63; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v65; // rax
  int v66; // ebx
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rcx
  int v73; // ecx
  int v74; // edx
  int v75; // edx
  int v76; // eax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rbx
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rcx
  int v84; // ecx
  int v85; // edx
  int v86; // edx
  __int64 v87; // rax
  _QWORD *v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  int v92; // ebx
  __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rax
  int v96; // ebx
  __int64 v97; // rcx
  __int64 v98; // rax
  __int64 v99; // [rsp+50h] [rbp-30h] BYREF
  __int64 v100; // [rsp+58h] [rbp-28h] BYREF
  __int64 v101; // [rsp+60h] [rbp-20h] BYREF
  __int64 v102; // [rsp+68h] [rbp-18h] BYREF
  _QWORD *v103; // [rsp+70h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v6 = a3;
  v9 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v11, v10, v12),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v63),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v9 = *ThreadWin32Thread;
  }
  v101 = gSmartObjNullRef;
  v102 = *(_QWORD *)(v9 + 1472);
  *(_QWORD *)(v9 + 1472) = &v102;
  v15 = 0LL;
  v103 = 0LL;
  v16 = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(v14)
    || (v65 = PsGetCurrentProcess(v18, v17, v19),
        v66 = PsGetProcessSessionIdEx(v65),
        v68 = PsGetCurrentThreadProcess(v67),
        v66 == (unsigned int)PsGetProcessSessionIdEx(v68)) )
  {
    v20 = (__int64 *)PsGetThreadWin32Thread(v16);
    if ( v20 )
      v15 = *v20;
  }
  v99 = gSmartObjNullRef;
  v100 = *(_QWORD *)(v15 + 1472);
  *(_QWORD *)(v15 + 1472) = &v100;
  if ( *(_DWORD *)a4 != 48 )
  {
    UserSetLastError(87LL);
    goto LABEL_15;
  }
  v21 = 1;
  *(_OWORD *)(a4 + 4) = 0LL;
  *(_DWORD *)(a4 + 40) &= 0xFFFFFFFC;
  *(_QWORD *)(a4 + 24) = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  v22 = *((_QWORD *)a1 + 5);
  v23 = (_DWORD *)(*(_DWORD *)(v22 + 288) & 0xF);
  if ( (_DWORD)v23 == 3 )
  {
    WindowDpiLastNotify = (*(_DWORD *)(v22 + 288) >> 8) & 0x1FF;
  }
  else if ( (*(_DWORD *)(v22 + 232) & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
  }
  else if ( !(_DWORD)v23
         && (v52 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
         && (v23 = **(_DWORD ***)(v52 + 8), (v23[16] & 1) != 0) )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    v23 = *(_DWORD **)(*((_QWORD *)a1 + 2) + 424LL);
    WindowDpiLastNotify = *((unsigned __int16 *)v23 + 142);
  }
  if ( a2 != -3 )
  {
    if ( a2 == -1 )
    {
      if ( (*(_BYTE *)(v22 + 30) & 8) != 0 )
      {
        xxxGetSysMenu(a1, 0);
        v103 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(&v101);
        if ( SmartObjStackRef<tagMENU>::operator bool((__int64)&v101) && (int)v6 >= 0 )
        {
          v23 = *(_DWORD **)v101;
          if ( (unsigned int)v6 <= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v101 + 40LL) + 44LL) )
          {
            v53 = v103;
            if ( !v103 )
              v53 = *(_QWORD **)v101;
            *(_QWORD *)(a4 + 24) = *v53;
            if ( (unsigned int)HasCaptionIcon((__int64)a1) )
            {
              WindowBordersForDpi = GetWindowBordersForDpi(
                                      *(_DWORD *)(*((_QWORD *)a1 + 5) + 28LL),
                                      *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL),
                                      v54,
                                      v55,
                                      WindowDpiLastNotify);
              v57 = *((_QWORD *)a1 + 5);
              v58 = WindowBordersForDpi;
              if ( (*(_BYTE *)(v57 + 26) & 0x40) != 0 )
              {
                *(_DWORD *)(a4 + 12) = *(_DWORD *)(v57 + 96) - WindowBordersForDpi;
                *(_DWORD *)(a4 + 4) = *(_DWORD *)(a4 + 12)
                                    - GetDpiDependentMetric(
                                        ((*(char *)(*((_QWORD *)a1 + 5) + 24LL) >> 7) & 0xBu) + 12,
                                        WindowDpiLastNotify);
              }
              else
              {
                *(_DWORD *)(a4 + 4) = WindowBordersForDpi + *(_DWORD *)(v57 + 88);
                *(_DWORD *)(a4 + 12) = *(_DWORD *)(a4 + 4)
                                     + GetDpiDependentMetric(
                                         ((*(char *)(*((_QWORD *)a1 + 5) + 24LL) >> 7) & 0xBu) + 12,
                                         WindowDpiLastNotify);
              }
              *(_DWORD *)(a4 + 8) = v58 + *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL);
              *(_DWORD *)(a4 + 16) = *(_DWORD *)(a4 + 8)
                                   + GetDpiDependentMetric(
                                       ((*(char *)(*((_QWORD *)a1 + 5) + 24LL) >> 7) & 0xBu) + 13,
                                       WindowDpiLastNotify);
            }
            v59 = *(__int64 **)(*((_QWORD *)a1 + 2) + 608LL);
            if ( v59 )
              v60 = *v59;
            else
              v60 = 0LL;
            SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v99, v60);
            if ( *(_QWORD *)v99 )
            {
              v23 = *(_DWORD **)v99;
              if ( (**(_DWORD **)v99 & 2) != 0 )
              {
                v23 = *(_DWORD **)v99;
                if ( (**(_DWORD **)v99 & 4) != 0 )
                  goto LABEL_80;
              }
            }
            goto LABEL_16;
          }
        }
      }
    }
    else if ( a2 == -4 )
    {
      _InterlockedAdd(&glSendMessage, 1u);
      v79 = xxxSendTransformableMessageTimeout((unsigned __int64)a1, 0x1E1u, 0LL, 0LL, 0, 0, 0LL, 1, 1);
      ValidateHmenu(v79);
      v103 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(&v101);
      if ( SmartObjStackRef<tagMENU>::operator bool((__int64)&v101) && (int)v6 >= 0 )
      {
        v23 = *(_DWORD **)v101;
        if ( (unsigned int)v6 <= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v101 + 40LL) + 44LL) )
        {
          *(_QWORD *)(a4 + 24) = v79;
          if ( (_DWORD)v6 )
          {
            v80 = *((_QWORD *)a1 + 5);
            v81 = 96 * v6;
            v82 = *(_QWORD *)(*(_QWORD *)v101 + 88LL);
            v83 = *(_QWORD *)(96 * v6 + v82 - 96);
            if ( (*(_BYTE *)(v80 + 26) & 0x40) != 0 )
            {
              v84 = *(_DWORD *)(v80 + 112) - *(_DWORD *)(v83 + 64);
              *(_DWORD *)(a4 + 12) = v84;
              *(_DWORD *)(a4 + 4) = v84 - *(_DWORD *)(*(_QWORD *)(v81 + v82 - 96) + 72LL);
            }
            else
            {
              v85 = *(_DWORD *)(v83 + 64) + *(_DWORD *)(v80 + 104);
              *(_DWORD *)(a4 + 4) = v85;
              *(_DWORD *)(a4 + 12) = v85 + *(_DWORD *)(*(_QWORD *)(v81 + v82 - 96) + 72LL);
            }
            v86 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 108LL) + *(_DWORD *)(*(_QWORD *)(v81 + v82 - 96) + 68LL);
            *(_DWORD *)(a4 + 8) = v86;
            *(_DWORD *)(a4 + 16) = v86 + *(_DWORD *)(*(_QWORD *)(v81 + v82 - 96) + 76LL);
          }
          else
          {
            *(_OWORD *)(a4 + 4) = *(_OWORD *)(*((_QWORD *)a1 + 5) + 104LL);
          }
          v87 = safe_cast_fnid_to_PMENUWND(a1);
          if ( v87 )
          {
            SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v99, *(_QWORD *)(v87 + 8));
            if ( *(_QWORD *)v99 )
            {
              v23 = *(_DWORD **)v99;
              v88 = *(_QWORD **)(*((_QWORD *)a1 + 2) + 608LL);
              v89 = v88 ? *v88 : 0LL;
              if ( *((_QWORD *)v23 + 8) == v89 )
              {
                v76 = *(_DWORD *)(a4 + 40) | 1;
                *(_DWORD *)(a4 + 40) = v76;
                if ( (_DWORD)v6 )
                {
                  v23 = *(_DWORD **)v99;
                  if ( (_DWORD)v6 != *(_DWORD *)(*(_QWORD *)v99 + 80LL) + 1 )
                    goto LABEL_16;
                  v90 = v99;
                  *(_DWORD *)(a4 + 40) |= 2u;
                  v23 = *(_DWORD **)v90;
                  if ( *(_QWORD *)(*(_QWORD *)v90 + 24LL) )
                  {
                    v23 = *(_DWORD **)v99;
                    v78 = **(_QWORD **)(*(_QWORD *)v99 + 24LL);
                    goto LABEL_111;
                  }
LABEL_110:
                  v78 = 0LL;
                  goto LABEL_111;
                }
LABEL_109:
                *(_DWORD *)(a4 + 40) = v76 | 2;
                goto LABEL_16;
              }
            }
          }
          goto LABEL_16;
        }
      }
    }
LABEL_15:
    v21 = 0;
    goto LABEL_16;
  }
  if ( (*(_BYTE *)(v22 + 31) & 0x40) != 0 )
    goto LABEL_15;
  if ( !*((_QWORD *)a1 + 21) )
    goto LABEL_15;
  v103 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(&v101);
  if ( !SmartObjStackRef<tagMENU>::operator bool((__int64)&v101) )
    goto LABEL_15;
  if ( (int)v6 < 0 )
    goto LABEL_15;
  v23 = *(_DWORD **)v101;
  if ( (unsigned int)v6 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v101 + 40LL) + 44LL) )
    goto LABEL_15;
  v43 = v103;
  if ( !v103 )
    v43 = *(_QWORD **)v101;
  *(_QWORD *)(a4 + 24) = *v43;
  if ( *(_DWORD *)(*(_QWORD *)v101 + 64LL) && *(_DWORD *)(*(_QWORD *)v101 + 68LL) )
  {
    if ( (_DWORD)v6 )
    {
      v69 = *((_QWORD *)a1 + 5);
      v70 = 96 * v6;
      v71 = *(_QWORD *)(*(_QWORD *)v101 + 88LL);
      v72 = *(_QWORD *)(96 * v6 + v71 - 96);
      if ( (*(_BYTE *)(v69 + 26) & 0x40) != 0 )
      {
        v73 = *(_DWORD *)(v69 + 96) - *(_DWORD *)(v72 + 64);
        *(_DWORD *)(a4 + 12) = v73;
        *(_DWORD *)(a4 + 4) = v73 - *(_DWORD *)(*(_QWORD *)(v70 + v71 - 96) + 72LL);
      }
      else
      {
        v74 = *(_DWORD *)(v72 + 64) + *(_DWORD *)(v69 + 88);
        *(_DWORD *)(a4 + 4) = v74;
        *(_DWORD *)(a4 + 12) = v74 + *(_DWORD *)(*(_QWORD *)(v70 + v71 - 96) + 72LL);
      }
      v75 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL) + *(_DWORD *)(*(_QWORD *)(v70 + v71 - 96) + 68LL);
      *(_DWORD *)(a4 + 8) = v75;
      v49 = v75 + *(_DWORD *)(*(_QWORD *)(v70 + v71 - 96) + 76LL);
    }
    else
    {
      v44 = GetWindowBordersForDpi(
              *(_DWORD *)(*((_QWORD *)a1 + 5) + 28LL),
              *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL),
              v41,
              v42,
              WindowDpiLastNotify);
      v45 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v45 + 26) & 0x40) != 0 )
      {
        *(_DWORD *)(a4 + 12) = *(_DWORD *)(v45 + 96) - v44;
        *(_DWORD *)(a4 + 4) = *(_DWORD *)(a4 + 12) - *(_DWORD *)(*(_QWORD *)v101 + 64LL);
      }
      else
      {
        v46 = *(_DWORD *)(v45 + 88);
        v47 = v101;
        *(_DWORD *)(a4 + 4) = v44 + v46;
        *(_DWORD *)(a4 + 12) = *(_DWORD *)(a4 + 4) + *(_DWORD *)(*(_QWORD *)v47 + 64LL);
      }
      *(_DWORD *)(a4 + 8) = v44 + *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL);
      v48 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v48 + 16) & 8) != 0 )
        *(_DWORD *)(a4 + 8) += GetDpiDependentMetric(((*(char *)(v48 + 24) >> 7) & 0x14u) + 2, WindowDpiLastNotify);
      v49 = *(_DWORD *)(a4 + 8) + *(_DWORD *)(*(_QWORD *)v101 + 68LL);
    }
    *(_DWORD *)(a4 + 16) = v49;
  }
  v50 = *(__int64 **)(*((_QWORD *)a1 + 2) + 608LL);
  if ( v50 )
    v51 = *v50;
  else
    v51 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v99, v51);
  if ( *(_QWORD *)v99 )
  {
    v23 = *(_DWORD **)v99;
    if ( (**(_DWORD **)v99 & 2) != 0 )
    {
      v23 = *(_DWORD **)v99;
      if ( (**(_DWORD **)v99 & 4) == 0 )
      {
LABEL_80:
        v23 = *(_DWORD **)v99;
        if ( *(struct tagWND **)(*(_QWORD *)v99 + 8LL) != a1 )
          goto LABEL_16;
        v76 = *(_DWORD *)(a4 + 40) | 1;
        *(_DWORD *)(a4 + 40) = v76;
        if ( (_DWORD)v6 )
        {
          v23 = *(_DWORD **)v99;
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v99 + 64LL) + 80LL) != (_DWORD)v6 - 1 )
            goto LABEL_16;
          v77 = v99;
          *(_DWORD *)(a4 + 40) |= 2u;
          v23 = *(_DWORD **)v77;
          if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v77 + 64LL) + 24LL) )
          {
            v23 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)v99 + 64LL) + 24LL);
            v78 = *(_QWORD *)v23;
LABEL_111:
            *(_QWORD *)(a4 + 32) = v78;
            goto LABEL_16;
          }
          goto LABEL_110;
        }
        goto LABEL_109;
      }
    }
  }
LABEL_16:
  v25 = KeGetCurrentThread();
  v26 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v23)
    || (v91 = PsGetCurrentProcess(v28, v27, v29),
        v92 = PsGetProcessSessionIdEx(v91),
        v94 = PsGetCurrentThreadProcess(v93),
        v92 == (unsigned int)PsGetProcessSessionIdEx(v94)) )
  {
    v30 = (__int64 *)PsGetThreadWin32Thread(v25);
    if ( v30 )
      v26 = *v30;
  }
  if ( v99 != gSmartObjNullRef && !--*(_DWORD *)(v99 + 8) )
  {
    if ( *(_BYTE *)(v99 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v99);
  }
  v32 = *(_QWORD **)(v26 + 1472);
  if ( v32 )
    *(_QWORD *)(v26 + 1472) = *v32;
  v33 = KeGetCurrentThread();
  v34 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v31)
    || (v95 = PsGetCurrentProcess(v36, v35, v37),
        v96 = PsGetProcessSessionIdEx(v95),
        v98 = PsGetCurrentThreadProcess(v97),
        v96 == (unsigned int)PsGetProcessSessionIdEx(v98)) )
  {
    v38 = (__int64 *)PsGetThreadWin32Thread(v33);
    if ( v38 )
      v34 = *v38;
  }
  SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v101);
  v39 = *(_QWORD **)(v34 + 1472);
  if ( v39 )
    *(_QWORD *)(v34 + 1472) = *v39;
  return v21;
}
