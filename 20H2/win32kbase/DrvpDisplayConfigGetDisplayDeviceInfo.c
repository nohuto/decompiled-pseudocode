/*
 * XREFs of DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C0064594
 * Callers:
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00D0244 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 * Callees:
 *     UserIsWddmConnectedSession @ 0x1C0053270 (UserIsWddmConnectedSession.c)
 *     EngAcquireSemaphore @ 0x1C005EA70 (EngAcquireSemaphore.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0060CA8 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     UserIsCurrentProcessDwm @ 0x1C0060F80 (UserIsCurrentProcessDwm.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C0064DAC (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     DCompositionIsShellProcess @ 0x1C00652E0 (DCompositionIsShellProcess.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087050 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvpDisplayConfigGetDisplayDeviceInfo(int *a1, __int64 a2, __int64 a3)
{
  int v3; // r12d
  int v5; // r15d
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r14
  __int64 v12; // rcx
  wchar_t *v13; // rdi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  char v17; // r11
  struct PDEV *i; // rsi
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  unsigned int v22; // eax
  int v23; // ecx
  unsigned int v24; // eax
  __int64 v25; // rcx
  _WORD *v26; // rcx
  __int64 v27; // rdx
  char *v28; // rdi
  __int16 v29; // ax
  _WORD *v30; // rax
  int IsWddmConnectedSession; // eax
  struct tagSIZE v33; // rax
  int v34; // r9d
  struct tagSIZE v35; // rax
  int v36; // r10d
  unsigned int v37; // ecx
  int v38; // eax
  unsigned int v39; // ecx
  int v40; // eax
  int v41; // ecx
  int v42; // eax
  int v43; // ecx
  int v44; // eax
  int v45; // ecx
  _QWORD *v46; // rax
  __int64 v47; // rdx
  _QWORD *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rax
  struct PDEV *v55; // [rsp+70h] [rbp+40h] BYREF

  v3 = *a1;
  v5 = 0;
  if ( (unsigned int)a1[1] < 0x808 )
  {
    LODWORD(v11) = -1073741789;
    if ( v3 == -21 )
    {
      v5 = 1144084225;
      v46 = (_QWORD *)WdLogNewEntry5_WdError(a1, a2, a3);
      v46[3] = (unsigned int)a1[1];
      v46[4] = 2056LL;
      v46[5] = 1144084225LL;
      goto LABEL_77;
    }
    return (unsigned int)v11;
  }
  v6 = (unsigned int)a1[4];
  a1[513] = 0;
  v7 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, int *))qword_1C024A920)(*((_QWORD *)a1 + 1), v6, 0LL, a1);
  v11 = v7;
  if ( v7 < 0 && v3 == -21 )
  {
    v48 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8, v10);
    v48[3] = a1[3];
    v48[4] = (unsigned int)a1[2];
    v48[5] = (unsigned int)a1[4];
    v48[6] = v11;
    WdLogEvent5_WdError(v48, v49);
    v5 = a1[506];
    goto LABEL_42;
  }
  v12 = (unsigned int)a1[4];
  if ( (_DWORD)v12 == -1 )
    goto LABEL_42;
  v13 = gpGraphicsDeviceList;
  if ( !gpGraphicsDeviceList )
    goto LABEL_87;
  v8 = (unsigned int)a1[2];
  v10 = 0x800000LL;
  while ( (*((_DWORD *)v13 + 40) & 0x800000) != 0 )
  {
    if ( (_DWORD)v8 == *((_DWORD *)v13 + 62) )
    {
      v14 = *((_DWORD *)v13 + 63);
      goto LABEL_9;
    }
LABEL_44:
    v13 = (wchar_t *)*((_QWORD *)v13 + 16);
    if ( !v13 )
      goto LABEL_11;
  }
  if ( (_DWORD)v8 != *((_DWORD *)v13 + 74) )
    goto LABEL_44;
  v14 = *((_DWORD *)v13 + 75);
LABEL_9:
  if ( a1[3] != v14 || *((_DWORD *)v13 + 64) != (_DWORD)v12 )
    goto LABEL_44;
LABEL_11:
  if ( v13 && (*((_QWORD *)v13 + 18) || *((_QWORD *)v13 + 38)) )
  {
    if ( (*((_DWORD *)v13 + 40) & 0x800000) == 0 && !*((_DWORD *)v13 + 74) && !*((_DWORD *)v13 + 75) )
    {
      v50 = WdLogNewEntry5_WdAssertion(v12, v8);
      WdLogEvent5_WdAssertion(v50);
    }
    if ( (*((_DWORD *)v13 + 41) & 1) != 0 )
    {
      LODWORD(v11) = -1073741130;
      if ( v3 == -21 )
      {
        v5 = 1144084228;
        v51 = (_QWORD *)WdLogNewEntry5_WdError(v12, v8, v10);
        v51[3] = a1[3];
        v51[4] = (unsigned int)a1[2];
        v51[5] = (unsigned int)a1[4];
        v51[6] = *((unsigned int *)v13 + 40);
        v51[7] = 1144084228LL;
        WdLogEvent5_WdError(v51, v52);
      }
      else
      {
        v53 = WdLogNewEntry5_WdEvent(v12, v8, v10);
        *(_QWORD *)(v53 + 24) = -1073741130LL;
        WdLogEvent5_WdEvent(v53);
      }
      goto LABEL_70;
    }
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
    if ( !UserIsCurrentProcessDwm(v16, v15) && !(unsigned __int8)DCompositionIsShellProcess()
      || (IsWddmConnectedSession = UserIsWddmConnectedSession(), v17 = 1, !IsWddmConnectedSession) )
    {
      v17 = 0;
    }
    for ( i = gppdevList; i; i = *(struct PDEV **)i )
    {
      v55 = i;
      v19 = *((_DWORD *)i + 10);
      if ( (v19 & 1) != 0 && (v19 & 0x400) == 0 )
      {
        if ( v17 )
        {
          if ( (v19 & 0x20000) == 0 )
          {
            if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v55) )
            {
              if ( a1[411] == *((_DWORD *)i + 646) && a1[412] == *((_DWORD *)i + 647) )
              {
                v33 = PDEVOBJ::sizl((PDEVOBJ *)&v55);
                if ( a1[413] == v34 + *(_DWORD *)v33.cx )
                {
                  v35 = PDEVOBJ::sizl((PDEVOBJ *)&v55);
                  if ( a1[414] == v36 + *(_DWORD *)(*(_QWORD *)&v35 + 4LL) )
                  {
                    v37 = a1[513] & 0xFFFFFFFE;
                    a1[513] = v37;
                    if ( *((_DWORD *)i + 646) || (v38 = 2, *((_DWORD *)i + 647)) )
                      v38 = 0;
                    v39 = v38 | v37 & 0xFFFFFFFD;
                    v40 = 0;
                    a1[513] = v39;
                    if ( *((wchar_t **)i + 322) == v13 )
                      v40 = 4;
                    v24 = v39 & 0xFFFFFFFB | v40;
                    goto LABEL_29;
                  }
                }
              }
            }
          }
        }
        else if ( *((wchar_t **)i + 322) == v13 )
        {
          v20 = UserIsWddmConnectedSession();
          a1[411] = *((_DWORD *)i + 646);
          a1[412] = *((_DWORD *)i + 647);
          if ( v20 )
          {
            a1[413] = *((_DWORD *)i + 646) + *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v55).cx;
            v21 = *((_DWORD *)i + 647) + *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v55) + 4LL);
            v22 = a1[513] & 0xFFFFFFFE;
            a1[414] = v21;
            a1[513] = v22;
            if ( *((_DWORD *)i + 646) || (v23 = 2, *((_DWORD *)i + 647)) )
              v23 = 0;
            v24 = v23 | v22 & 0xFFFFFFFD | 4;
          }
          else
          {
            a1[413] = *((_DWORD *)i + 646) + *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v55).cx;
            v41 = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v55) + 4LL);
            v42 = a1[4];
            a1[414] = *((_DWORD *)i + 647) + v41;
            a1[479] = v42;
            a1[480] = 0;
            a1[481] = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v55).cx;
            a1[482] = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v55) + 4LL);
            *((_QWORD *)a1 + 244) = 0LL;
            a1[490] = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v55).cx;
            v43 = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v55) + 4LL);
            v44 = a1[513] | 1;
            a1[491] = v43;
            a1[513] = v44;
            a1[483] = 4;
            a1[484] = 60000;
            a1[485] = 1000;
            *((_QWORD *)a1 + 243) = 1LL;
            if ( *((_DWORD *)i + 646) || (v45 = 2, *((_DWORD *)i + 647)) )
              v45 = 0;
            v24 = v45 | v44 & 0xFFFFFFFD | 4;
          }
LABEL_29:
          a1[513] = v24;
          break;
        }
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
      PsLeavePriorityRegion(v25);
    }
    if ( !i && (!a1[507] || !(unsigned int)UserIsWddmConnectedSession()) )
    {
      *(_QWORD *)(a1 + 481) = 0LL;
      *(_QWORD *)(a1 + 483) = 5LL;
      a1[485] = 1;
      *((_QWORD *)a1 + 243) = 1LL;
      *(_OWORD *)(a1 + 411) = 0LL;
      *((_OWORD *)a1 + 122) = 0LL;
      a1[513] = (gProtocolType != 0) | a1[513] & 0xFFFFFFF8;
    }
    v26 = a1 + 415;
    v27 = 128LL;
    v28 = (char *)((char *)v13 - (char *)(a1 + 415));
    do
    {
      if ( v27 == 96 )
        break;
      v29 = *(_WORD *)((char *)v26 + (_QWORD)v28 + 64);
      if ( !v29 )
        break;
      *v26++ = v29;
      --v27;
    }
    while ( v27 );
    v30 = v26 - 1;
    if ( v27 )
      v30 = v26;
    *v30 = 0;
LABEL_42:
    if ( (int)v11 >= 0 )
      return 0LL;
LABEL_70:
    if ( v3 == -21 )
      goto LABEL_73;
    return (unsigned int)v11;
  }
LABEL_87:
  LODWORD(v11) = -1073741275;
  if ( v3 != -21 )
  {
    v54 = WdLogNewEntry5_WdWarning(v12, v8, v10);
    WdLogEvent5_WdWarning(v54);
    goto LABEL_42;
  }
  if ( v13 )
  {
    v5 = 1144084227;
    v46 = (_QWORD *)WdLogNewEntry5_WdError(v12, v8, v10);
    v46[3] = a1[3];
    v46[4] = (unsigned int)a1[2];
    v46[5] = (unsigned int)a1[4];
    v46[6] = *((unsigned int *)v13 + 40);
    v46[7] = 1144084227LL;
  }
  else
  {
    v5 = 1144084226;
    v46 = (_QWORD *)WdLogNewEntry5_WdError(v12, v8, v10);
    v46[3] = a1[3];
    v46[4] = (unsigned int)a1[2];
    v46[5] = (unsigned int)a1[4];
    v46[6] = 1144084226LL;
  }
LABEL_77:
  WdLogEvent5_WdError(v46, v47);
LABEL_73:
  a1[506] = v5;
  return (unsigned int)v11;
}
