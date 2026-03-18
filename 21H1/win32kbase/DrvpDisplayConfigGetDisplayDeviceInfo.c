/*
 * XREFs of DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C00B6BAC
 * Callers:
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00CFBB0 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000F390 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0017CA0 (EngAcquireSemaphore.c)
 *     UserIsCurrentProcessDwm @ 0x1C002EAC0 (UserIsCurrentProcessDwm.c)
 *     UserIsWddmConnectedSession @ 0x1C0093360 (UserIsWddmConnectedSession.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C00B4CE8 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     DCompositionIsShellProcess @ 0x1C00B5F8C (DCompositionIsShellProcess.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C00B69CC (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
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
  __int64 v11; // r9
  __int64 v12; // r14
  __int64 v13; // rcx
  wchar_t *v14; // rdi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // r8d
  char v19; // r11
  struct PDEV *i; // rsi
  int v21; // eax
  int v22; // eax
  int v23; // ecx
  unsigned int v24; // eax
  int v25; // ecx
  unsigned int v26; // eax
  __int64 v27; // rcx
  _WORD *v28; // rcx
  __int64 v29; // rdx
  char *v30; // rdi
  __int16 v31; // ax
  _WORD *v32; // rax
  int IsWddmConnectedSession; // eax
  struct tagSIZE v35; // rax
  int v36; // r9d
  struct tagSIZE v37; // rax
  int v38; // r10d
  unsigned int v39; // ecx
  int v40; // eax
  unsigned int v41; // ecx
  int v42; // eax
  int v43; // ecx
  int v44; // eax
  int v45; // ecx
  int v46; // eax
  int v47; // ecx
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  struct PDEV *v54; // [rsp+70h] [rbp+40h] BYREF
  __int64 v55; // [rsp+78h] [rbp+48h] BYREF
  __int64 v56; // [rsp+80h] [rbp+50h] BYREF

  v3 = *a1;
  v5 = 0;
  if ( (unsigned int)a1[1] < 0x808 )
  {
    LODWORD(v12) = -1073741789;
    if ( v3 == -21 )
    {
      v5 = 1144084225;
      v48 = (_QWORD *)WdLogNewEntry5_WdError(a1, a2, a3);
      v48[3] = (unsigned int)a1[1];
      v48[4] = 2056LL;
      v48[5] = 1144084225LL;
      goto LABEL_77;
    }
    return (unsigned int)v12;
  }
  v6 = (unsigned int)a1[4];
  a1[513] = 0;
  v7 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, int *))qword_1C0252940)(*((_QWORD *)a1 + 1), v6, 0LL, a1);
  v12 = v7;
  if ( v7 < 0 && v3 == -21 )
  {
    v49 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8, v10);
    v49[3] = a1[3];
    v49[4] = (unsigned int)a1[2];
    v49[5] = (unsigned int)a1[4];
    v49[6] = v12;
    WdLogEvent5_WdError(v49);
    v5 = a1[506];
    goto LABEL_42;
  }
  v13 = (unsigned int)a1[4];
  if ( (_DWORD)v13 == -1 )
    goto LABEL_42;
  v14 = gpGraphicsDeviceList;
  if ( !gpGraphicsDeviceList )
    goto LABEL_87;
  v8 = (unsigned int)a1[2];
  v10 = 0x800000LL;
  while ( (*((_DWORD *)v14 + 40) & 0x800000) != 0 )
  {
    if ( (_DWORD)v8 == *((_DWORD *)v14 + 62) )
    {
      v15 = *((_DWORD *)v14 + 63);
      goto LABEL_9;
    }
LABEL_44:
    v14 = (wchar_t *)*((_QWORD *)v14 + 16);
    if ( !v14 )
      goto LABEL_11;
  }
  if ( (_DWORD)v8 != *((_DWORD *)v14 + 74) )
    goto LABEL_44;
  v15 = *((_DWORD *)v14 + 75);
LABEL_9:
  if ( a1[3] != v15 || *((_DWORD *)v14 + 64) != (_DWORD)v13 )
    goto LABEL_44;
LABEL_11:
  if ( v14 && (*((_QWORD *)v14 + 18) || *((_QWORD *)v14 + 38)) )
  {
    if ( (*((_DWORD *)v14 + 40) & 0x800000) == 0 && !*((_DWORD *)v14 + 74) && !*((_DWORD *)v14 + 75) )
    {
      v50 = WdLogNewEntry5_WdAssertion(v13, v8, 0x800000LL, v11);
      WdLogEvent5_WdAssertion(v50);
    }
    if ( (*((_DWORD *)v14 + 41) & 1) != 0 )
    {
      LODWORD(v12) = -1073741130;
      if ( v3 == -21 )
      {
        v5 = 1144084228;
        v51 = (_QWORD *)WdLogNewEntry5_WdError(v13, v8, v10);
        v51[3] = a1[3];
        v51[4] = (unsigned int)a1[2];
        v51[5] = (unsigned int)a1[4];
        v51[6] = *((unsigned int *)v14 + 40);
        v51[7] = 1144084228LL;
        WdLogEvent5_WdError(v51);
      }
      else
      {
        v52 = WdLogNewEntry5_WdEvent(v13, v8, v10);
        *(_QWORD *)(v52 + 24) = -1073741130LL;
        WdLogEvent5_WdEvent(v52);
      }
      goto LABEL_70;
    }
    EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
    if ( !UserIsCurrentProcessDwm(v17, v16) && !DCompositionIsShellProcess()
      || (IsWddmConnectedSession = UserIsWddmConnectedSession(), v19 = 1, !IsWddmConnectedSession) )
    {
      v19 = 0;
    }
    for ( i = gppdevList; i; i = *(struct PDEV **)i )
    {
      v54 = i;
      v21 = *((_DWORD *)i + 10);
      if ( (v21 & 1) != 0 && (v21 & 0x400) == 0 )
      {
        if ( v19 )
        {
          if ( (v21 & 0x20000) == 0 )
          {
            if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v54) )
            {
              if ( a1[411] == *((_DWORD *)i + 646) && a1[412] == *((_DWORD *)i + 647) )
              {
                v35 = PDEVOBJ::sizl((PDEVOBJ *)&v54, &v55);
                if ( a1[413] == v36 + *(_DWORD *)v35.cx )
                {
                  v37 = PDEVOBJ::sizl((PDEVOBJ *)&v54, &v56);
                  if ( a1[414] == v38 + *(_DWORD *)(*(_QWORD *)&v37 + 4LL) )
                  {
                    v39 = a1[513] & 0xFFFFFFFE;
                    a1[513] = v39;
                    if ( *((_DWORD *)i + 646) || (v40 = 2, *((_DWORD *)i + 647)) )
                      v40 = 0;
                    v41 = v40 | v39 & 0xFFFFFFFD;
                    v42 = 0;
                    a1[513] = v41;
                    if ( *((wchar_t **)i + 322) == v14 )
                      v42 = 4;
                    v26 = v41 & 0xFFFFFFFB | v42;
                    goto LABEL_29;
                  }
                }
              }
            }
          }
        }
        else if ( *((wchar_t **)i + 322) == v14 )
        {
          v22 = UserIsWddmConnectedSession();
          a1[411] = *((_DWORD *)i + 646);
          a1[412] = *((_DWORD *)i + 647);
          if ( v22 )
          {
            a1[413] = *((_DWORD *)i + 646) + *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v54, &v55).cx;
            v23 = *((_DWORD *)i + 647) + *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v54, &v55) + 4LL);
            v24 = a1[513] & 0xFFFFFFFE;
            a1[414] = v23;
            a1[513] = v24;
            if ( *((_DWORD *)i + 646) || (v25 = 2, *((_DWORD *)i + 647)) )
              v25 = 0;
            v26 = v25 | v24 & 0xFFFFFFFD | 4;
          }
          else
          {
            a1[413] = *((_DWORD *)i + 646) + *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v54, &v55).cx;
            v43 = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v54, &v55) + 4LL);
            v44 = a1[4];
            a1[414] = *((_DWORD *)i + 647) + v43;
            a1[479] = v44;
            a1[480] = 0;
            a1[481] = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v54, &v55).cx;
            a1[482] = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v54, &v55) + 4LL);
            *((_QWORD *)a1 + 244) = 0LL;
            a1[490] = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v54, &v55).cx;
            v45 = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v54, &v55) + 4LL);
            v46 = a1[513] | 1;
            a1[491] = v45;
            a1[513] = v46;
            a1[483] = 4;
            a1[484] = 60000;
            a1[485] = 1000;
            *((_QWORD *)a1 + 243) = 1LL;
            if ( *((_DWORD *)i + 646) || (v47 = 2, *((_DWORD *)i + 647)) )
              v47 = 0;
            v26 = v47 | v46 & 0xFFFFFFFD | 4;
          }
LABEL_29:
          a1[513] = v26;
          break;
        }
      }
    }
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v18);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
      PsLeavePriorityRegion(v27);
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
    v28 = a1 + 415;
    v29 = 128LL;
    v30 = (char *)((char *)v14 - (char *)(a1 + 415));
    do
    {
      if ( v29 == 96 )
        break;
      v31 = *(_WORD *)((char *)v28 + (_QWORD)v30 + 64);
      if ( !v31 )
        break;
      *v28++ = v31;
      --v29;
    }
    while ( v29 );
    v32 = v28 - 1;
    if ( v29 )
      v32 = v28;
    *v32 = 0;
LABEL_42:
    if ( (int)v12 >= 0 )
      return 0LL;
LABEL_70:
    if ( v3 == -21 )
      goto LABEL_73;
    return (unsigned int)v12;
  }
LABEL_87:
  LODWORD(v12) = -1073741275;
  if ( v3 != -21 )
  {
    v53 = WdLogNewEntry5_WdWarning(v13, v8, v10);
    WdLogEvent5_WdWarning(v53);
    goto LABEL_42;
  }
  if ( v14 )
  {
    v5 = 1144084227;
    v48 = (_QWORD *)WdLogNewEntry5_WdError(v13, v8, v10);
    v48[3] = a1[3];
    v48[4] = (unsigned int)a1[2];
    v48[5] = (unsigned int)a1[4];
    v48[6] = *((unsigned int *)v14 + 40);
    v48[7] = 1144084227LL;
  }
  else
  {
    v5 = 1144084226;
    v48 = (_QWORD *)WdLogNewEntry5_WdError(v13, v8, v10);
    v48[3] = a1[3];
    v48[4] = (unsigned int)a1[2];
    v48[5] = (unsigned int)a1[4];
    v48[6] = 1144084226LL;
  }
LABEL_77:
  WdLogEvent5_WdError(v48);
LABEL_73:
  a1[506] = v5;
  return (unsigned int)v12;
}
