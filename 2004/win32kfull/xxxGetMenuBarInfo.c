/*
 * XREFs of xxxGetMenuBarInfo @ 0x1C00A76D4
 * Callers:
 *     NtUserGetMenuBarInfo @ 0x1C00A3B70 (NtUserGetMenuBarInfo.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1C0024D1C (GetWindowDpiLastNotify.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C005C53C (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     xxxGetSysMenu @ 0x1C005C55C (xxxGetSysMenu.c)
 *     GetWindowBordersForDpi @ 0x1C0060694 (GetWindowBordersForDpi.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C008EC2C (safe_cast_fnid_to_PMENUWND.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0097EC0 (xxxSendTransformableMessageTimeout.c)
 *     GetDpiDependentMetric @ 0x1C00A002C (GetDpiDependentMetric.c)
 *     _HasCaptionIcon @ 0x1C00A08F8 (_HasCaptionIcon.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C00A7698 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FC8C0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106CB4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 */

__int64 __fastcall xxxGetMenuBarInfo(unsigned __int64 a1, int a2, int a3, __int64 a4)
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
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned int v23; // r15d
  __int64 v24; // rdx
  _DWORD *v25; // rcx
  unsigned int WindowDpiLastNotify; // ebx
  struct _KTHREAD *v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 *v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  struct _KTHREAD *v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 *v40; // rax
  _QWORD *v41; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  _QWORD *v45; // rax
  int v46; // r8d
  __int64 v47; // rax
  int v48; // ecx
  __int64 v49; // rax
  __int64 v50; // rcx
  int v51; // eax
  __int64 *v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // r8
  __int64 v57; // r9
  int WindowBordersForDpi; // eax
  __int64 v59; // rdx
  int v60; // r12d
  __int64 *v61; // rcx
  __int64 v62; // rdx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v65; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v67; // rax
  int v68; // ebx
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rcx
  int v75; // ecx
  int v76; // edx
  int v77; // edx
  int v78; // eax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rbx
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rcx
  int v86; // ecx
  int v87; // edx
  int v88; // edx
  __int64 v89; // rax
  _QWORD *v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  int v94; // ebx
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rax
  int v98; // ebx
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // [rsp+50h] [rbp-30h] BYREF
  __int64 v102; // [rsp+58h] [rbp-28h] BYREF
  __int64 v103; // [rsp+60h] [rbp-20h] BYREF
  __int64 v104; // [rsp+68h] [rbp-18h] BYREF
  _QWORD *v105; // [rsp+70h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v6 = a3;
  v9 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v11, v10, v12),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v65),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v9 = *ThreadWin32Thread;
  }
  v103 = gSmartObjNullRef;
  v104 = *(_QWORD *)(v9 + 1464);
  *(_QWORD *)(v9 + 1464) = &v104;
  v15 = 0LL;
  v105 = 0LL;
  v16 = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(v14)
    || (v67 = PsGetCurrentProcess(v18, v17, v19),
        v68 = PsGetProcessSessionIdEx(v67),
        v70 = PsGetCurrentThreadProcess(v69),
        v68 == (unsigned int)PsGetProcessSessionIdEx(v70)) )
  {
    v20 = (__int64 *)PsGetThreadWin32Thread(v16);
    if ( v20 )
      v15 = *v20;
  }
  v101 = gSmartObjNullRef;
  v102 = *(_QWORD *)(v15 + 1464);
  *(_QWORD *)(v15 + 1464) = &v102;
  if ( *(_DWORD *)a4 != 48 )
  {
    UserSetLastError(87LL, v21, v22);
    goto LABEL_15;
  }
  v23 = 1;
  *(_OWORD *)(a4 + 4) = 0LL;
  *(_DWORD *)(a4 + 40) &= 0xFFFFFFFC;
  *(_QWORD *)(a4 + 24) = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  v24 = *(_QWORD *)(a1 + 40);
  v25 = (_DWORD *)(*(_DWORD *)(v24 + 288) & 0xF);
  if ( (_DWORD)v25 == 3 )
  {
    WindowDpiLastNotify = (*(_DWORD *)(v24 + 288) >> 8) & 0x1FF;
  }
  else if ( (*(_DWORD *)(v24 + 232) & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
  }
  else if ( !(_DWORD)v25
         && (v54 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 448LL)) != 0
         && (v25 = **(_DWORD ***)(v54 + 8), (v25[16] & 1) != 0) )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    v25 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 416LL);
    WindowDpiLastNotify = *((unsigned __int16 *)v25 + 142);
  }
  if ( a2 != -3 )
  {
    if ( a2 == -1 )
    {
      if ( (*(_BYTE *)(v24 + 30) & 8) != 0 )
      {
        xxxGetSysMenu((struct tagWND *)a1, 0);
        v105 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(&v103);
        if ( SmartObjStackRef<tagMENU>::operator bool((__int64)&v103) && (int)v6 >= 0 )
        {
          v25 = *(_DWORD **)v103;
          if ( (unsigned int)v6 <= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v103 + 40LL) + 44LL) )
          {
            v55 = v105;
            if ( !v105 )
              v55 = *(_QWORD **)v103;
            *(_QWORD *)(a4 + 24) = *v55;
            if ( (unsigned int)HasCaptionIcon(a1) )
            {
              WindowBordersForDpi = GetWindowBordersForDpi(
                                      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 28LL),
                                      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 24LL),
                                      v56,
                                      v57,
                                      WindowDpiLastNotify);
              v59 = *(_QWORD *)(a1 + 40);
              v60 = WindowBordersForDpi;
              if ( (*(_BYTE *)(v59 + 26) & 0x40) != 0 )
              {
                *(_DWORD *)(a4 + 12) = *(_DWORD *)(v59 + 96) - WindowBordersForDpi;
                *(_DWORD *)(a4 + 4) = *(_DWORD *)(a4 + 12)
                                    - GetDpiDependentMetric(
                                        ((*(char *)(*(_QWORD *)(a1 + 40) + 24LL) >> 7) & 0xBu) + 12,
                                        WindowDpiLastNotify);
              }
              else
              {
                *(_DWORD *)(a4 + 4) = WindowBordersForDpi + *(_DWORD *)(v59 + 88);
                *(_DWORD *)(a4 + 12) = *(_DWORD *)(a4 + 4)
                                     + GetDpiDependentMetric(
                                         ((*(char *)(*(_QWORD *)(a1 + 40) + 24LL) >> 7) & 0xBu) + 12,
                                         WindowDpiLastNotify);
              }
              *(_DWORD *)(a4 + 8) = v60 + *(_DWORD *)(*(_QWORD *)(a1 + 40) + 92LL);
              *(_DWORD *)(a4 + 16) = *(_DWORD *)(a4 + 8)
                                   + GetDpiDependentMetric(
                                       ((*(char *)(*(_QWORD *)(a1 + 40) + 24LL) >> 7) & 0xBu) + 13,
                                       WindowDpiLastNotify);
            }
            v61 = *(__int64 **)(*(_QWORD *)(a1 + 16) + 600LL);
            if ( v61 )
              v62 = *v61;
            else
              v62 = 0LL;
            SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v101, v62);
            if ( *(_QWORD *)v101 )
            {
              v25 = *(_DWORD **)v101;
              if ( (**(_DWORD **)v101 & 2) != 0 )
              {
                v25 = *(_DWORD **)v101;
                if ( (**(_DWORD **)v101 & 4) != 0 )
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
      v81 = xxxSendTransformableMessageTimeout(a1, 0x1E1u, 0LL, 0LL, 0, 0, 0LL, 1, 1);
      ValidateHmenu(v81);
      v105 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(&v103);
      if ( SmartObjStackRef<tagMENU>::operator bool((__int64)&v103) && (int)v6 >= 0 )
      {
        v25 = *(_DWORD **)v103;
        if ( (unsigned int)v6 <= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v103 + 40LL) + 44LL) )
        {
          *(_QWORD *)(a4 + 24) = v81;
          if ( (_DWORD)v6 )
          {
            v82 = *(_QWORD *)(a1 + 40);
            v83 = 96 * v6;
            v84 = *(_QWORD *)(*(_QWORD *)v103 + 88LL);
            v85 = *(_QWORD *)(96 * v6 + v84 - 96);
            if ( (*(_BYTE *)(v82 + 26) & 0x40) != 0 )
            {
              v86 = *(_DWORD *)(v82 + 112) - *(_DWORD *)(v85 + 64);
              *(_DWORD *)(a4 + 12) = v86;
              *(_DWORD *)(a4 + 4) = v86 - *(_DWORD *)(*(_QWORD *)(v83 + v84 - 96) + 72LL);
            }
            else
            {
              v87 = *(_DWORD *)(v85 + 64) + *(_DWORD *)(v82 + 104);
              *(_DWORD *)(a4 + 4) = v87;
              *(_DWORD *)(a4 + 12) = v87 + *(_DWORD *)(*(_QWORD *)(v83 + v84 - 96) + 72LL);
            }
            v88 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 108LL) + *(_DWORD *)(*(_QWORD *)(v83 + v84 - 96) + 68LL);
            *(_DWORD *)(a4 + 8) = v88;
            *(_DWORD *)(a4 + 16) = v88 + *(_DWORD *)(*(_QWORD *)(v83 + v84 - 96) + 76LL);
          }
          else
          {
            *(_OWORD *)(a4 + 4) = *(_OWORD *)(*(_QWORD *)(a1 + 40) + 104LL);
          }
          v89 = safe_cast_fnid_to_PMENUWND(a1);
          if ( v89 )
          {
            SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v101, *(_QWORD *)(v89 + 8));
            if ( *(_QWORD *)v101 )
            {
              v25 = *(_DWORD **)v101;
              v90 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 600LL);
              v91 = v90 ? *v90 : 0LL;
              if ( *((_QWORD *)v25 + 8) == v91 )
              {
                v78 = *(_DWORD *)(a4 + 40) | 1;
                *(_DWORD *)(a4 + 40) = v78;
                if ( (_DWORD)v6 )
                {
                  v25 = *(_DWORD **)v101;
                  if ( (_DWORD)v6 != *(_DWORD *)(*(_QWORD *)v101 + 80LL) + 1 )
                    goto LABEL_16;
                  v92 = v101;
                  *(_DWORD *)(a4 + 40) |= 2u;
                  v25 = *(_DWORD **)v92;
                  if ( *(_QWORD *)(*(_QWORD *)v92 + 24LL) )
                  {
                    v25 = *(_DWORD **)v101;
                    v80 = **(_QWORD **)(*(_QWORD *)v101 + 24LL);
                    goto LABEL_111;
                  }
LABEL_110:
                  v80 = 0LL;
                  goto LABEL_111;
                }
LABEL_109:
                *(_DWORD *)(a4 + 40) = v78 | 2;
                goto LABEL_16;
              }
            }
          }
          goto LABEL_16;
        }
      }
    }
LABEL_15:
    v23 = 0;
    goto LABEL_16;
  }
  if ( (*(_BYTE *)(v24 + 31) & 0x40) != 0 )
    goto LABEL_15;
  if ( !*(_QWORD *)(a1 + 168) )
    goto LABEL_15;
  v105 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(&v103);
  if ( !SmartObjStackRef<tagMENU>::operator bool((__int64)&v103) )
    goto LABEL_15;
  if ( (int)v6 < 0 )
    goto LABEL_15;
  v25 = *(_DWORD **)v103;
  if ( (unsigned int)v6 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v103 + 40LL) + 44LL) )
    goto LABEL_15;
  v45 = v105;
  if ( !v105 )
    v45 = *(_QWORD **)v103;
  *(_QWORD *)(a4 + 24) = *v45;
  if ( *(_DWORD *)(*(_QWORD *)v103 + 64LL) && *(_DWORD *)(*(_QWORD *)v103 + 68LL) )
  {
    if ( (_DWORD)v6 )
    {
      v71 = *(_QWORD *)(a1 + 40);
      v72 = 96 * v6;
      v73 = *(_QWORD *)(*(_QWORD *)v103 + 88LL);
      v74 = *(_QWORD *)(96 * v6 + v73 - 96);
      if ( (*(_BYTE *)(v71 + 26) & 0x40) != 0 )
      {
        v75 = *(_DWORD *)(v71 + 96) - *(_DWORD *)(v74 + 64);
        *(_DWORD *)(a4 + 12) = v75;
        *(_DWORD *)(a4 + 4) = v75 - *(_DWORD *)(*(_QWORD *)(v72 + v73 - 96) + 72LL);
      }
      else
      {
        v76 = *(_DWORD *)(v74 + 64) + *(_DWORD *)(v71 + 88);
        *(_DWORD *)(a4 + 4) = v76;
        *(_DWORD *)(a4 + 12) = v76 + *(_DWORD *)(*(_QWORD *)(v72 + v73 - 96) + 72LL);
      }
      v77 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 92LL) + *(_DWORD *)(*(_QWORD *)(v72 + v73 - 96) + 68LL);
      *(_DWORD *)(a4 + 8) = v77;
      v51 = v77 + *(_DWORD *)(*(_QWORD *)(v72 + v73 - 96) + 76LL);
    }
    else
    {
      v46 = GetWindowBordersForDpi(
              *(_DWORD *)(*(_QWORD *)(a1 + 40) + 28LL),
              *(_DWORD *)(*(_QWORD *)(a1 + 40) + 24LL),
              v43,
              v44,
              WindowDpiLastNotify);
      v47 = *(_QWORD *)(a1 + 40);
      if ( (*(_BYTE *)(v47 + 26) & 0x40) != 0 )
      {
        *(_DWORD *)(a4 + 12) = *(_DWORD *)(v47 + 96) - v46;
        *(_DWORD *)(a4 + 4) = *(_DWORD *)(a4 + 12) - *(_DWORD *)(*(_QWORD *)v103 + 64LL);
      }
      else
      {
        v48 = *(_DWORD *)(v47 + 88);
        v49 = v103;
        *(_DWORD *)(a4 + 4) = v46 + v48;
        *(_DWORD *)(a4 + 12) = *(_DWORD *)(a4 + 4) + *(_DWORD *)(*(_QWORD *)v49 + 64LL);
      }
      *(_DWORD *)(a4 + 8) = v46 + *(_DWORD *)(*(_QWORD *)(a1 + 40) + 92LL);
      v50 = *(_QWORD *)(a1 + 40);
      if ( (*(_BYTE *)(v50 + 16) & 8) != 0 )
        *(_DWORD *)(a4 + 8) += GetDpiDependentMetric(((*(char *)(v50 + 24) >> 7) & 0x14u) + 2, WindowDpiLastNotify);
      v51 = *(_DWORD *)(a4 + 8) + *(_DWORD *)(*(_QWORD *)v103 + 68LL);
    }
    *(_DWORD *)(a4 + 16) = v51;
  }
  v52 = *(__int64 **)(*(_QWORD *)(a1 + 16) + 600LL);
  if ( v52 )
    v53 = *v52;
  else
    v53 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v101, v53);
  if ( *(_QWORD *)v101 )
  {
    v25 = *(_DWORD **)v101;
    if ( (**(_DWORD **)v101 & 2) != 0 )
    {
      v25 = *(_DWORD **)v101;
      if ( (**(_DWORD **)v101 & 4) == 0 )
      {
LABEL_80:
        v25 = *(_DWORD **)v101;
        if ( *(_QWORD *)(*(_QWORD *)v101 + 8LL) != a1 )
          goto LABEL_16;
        v78 = *(_DWORD *)(a4 + 40) | 1;
        *(_DWORD *)(a4 + 40) = v78;
        if ( (_DWORD)v6 )
        {
          v25 = *(_DWORD **)v101;
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v101 + 64LL) + 80LL) != (_DWORD)v6 - 1 )
            goto LABEL_16;
          v79 = v101;
          *(_DWORD *)(a4 + 40) |= 2u;
          v25 = *(_DWORD **)v79;
          if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v79 + 64LL) + 24LL) )
          {
            v25 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)v101 + 64LL) + 24LL);
            v80 = *(_QWORD *)v25;
LABEL_111:
            *(_QWORD *)(a4 + 32) = v80;
            goto LABEL_16;
          }
          goto LABEL_110;
        }
        goto LABEL_109;
      }
    }
  }
LABEL_16:
  v27 = KeGetCurrentThread();
  v28 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v25)
    || (v93 = PsGetCurrentProcess(v30, v29, v31),
        v94 = PsGetProcessSessionIdEx(v93),
        v96 = PsGetCurrentThreadProcess(v95),
        v94 == (unsigned int)PsGetProcessSessionIdEx(v96)) )
  {
    v32 = (__int64 *)PsGetThreadWin32Thread(v27);
    if ( v32 )
      v28 = *v32;
  }
  if ( v101 != gSmartObjNullRef && !--*(_DWORD *)(v101 + 8) )
  {
    if ( *(_BYTE *)(v101 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v101);
  }
  v34 = *(_QWORD **)(v28 + 1464);
  if ( v34 )
    *(_QWORD *)(v28 + 1464) = *v34;
  v35 = KeGetCurrentThread();
  v36 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v33)
    || (v97 = PsGetCurrentProcess(v38, v37, v39),
        v98 = PsGetProcessSessionIdEx(v97),
        v100 = PsGetCurrentThreadProcess(v99),
        v98 == (unsigned int)PsGetProcessSessionIdEx(v100)) )
  {
    v40 = (__int64 *)PsGetThreadWin32Thread(v35);
    if ( v40 )
      v36 = *v40;
  }
  SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v103);
  v41 = *(_QWORD **)(v36 + 1464);
  if ( v41 )
    *(_QWORD *)(v36 + 1464) = *v41;
  return v23;
}
