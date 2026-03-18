/*
 * XREFs of DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C00A4358
 * Callers:
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00D05B0 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0023BA0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0027A20 (EngAcquireSemaphore.c)
 *     UserIsCurrentProcessDwm @ 0x1C009D410 (UserIsCurrentProcessDwm.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C00A52B8 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C00A609C (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     DCompositionIsShellProcess @ 0x1C00A6530 (DCompositionIsShellProcess.c)
 *     UserIsWddmConnectedSession @ 0x1C00B4A70 (UserIsWddmConnectedSession.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvpDisplayConfigGetDisplayDeviceInfo(int *a1)
{
  int v1; // r12d
  int v3; // r15d
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // r14
  __int64 v7; // rcx
  wchar_t *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r8d
  char v15; // r11
  struct PDEV *i; // rsi
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // eax
  int v21; // ecx
  unsigned int v22; // eax
  __int64 v23; // rcx
  _WORD *v24; // rcx
  __int64 v25; // rdx
  char *v26; // rdi
  __int16 v27; // ax
  _WORD *v28; // rax
  int IsWddmConnectedSession; // eax
  struct tagSIZE v31; // rax
  int v32; // r9d
  struct tagSIZE v33; // rax
  int v34; // r10d
  unsigned int v35; // ecx
  int v36; // eax
  unsigned int v37; // ecx
  int v38; // eax
  int v39; // ecx
  int v40; // eax
  int v41; // ecx
  int v42; // eax
  int v43; // ecx
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  struct PDEV *v50; // [rsp+70h] [rbp+40h] BYREF

  v1 = *a1;
  v3 = 0;
  if ( (unsigned int)a1[1] < 0x808 )
  {
    LODWORD(v6) = -1073741789;
    if ( v1 == -21 )
    {
      v3 = 1144084225;
      v44 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdError)();
      v44[3] = (unsigned int)a1[1];
      v44[4] = 2056LL;
      v44[5] = 1144084225LL;
      goto LABEL_77;
    }
    return (unsigned int)v6;
  }
  v4 = (unsigned int)a1[4];
  a1[513] = 0;
  v5 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, int *))qword_1C024C920)(*((_QWORD *)a1 + 1), v4, 0LL, a1);
  v6 = v5;
  if ( v5 < 0 && v1 == -21 )
  {
    v45 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdError)();
    v45[3] = a1[3];
    v45[4] = (unsigned int)a1[2];
    v45[5] = (unsigned int)a1[4];
    v45[6] = v6;
    WdLogEvent5_WdError(v45);
    v3 = a1[506];
    goto LABEL_42;
  }
  v7 = (unsigned int)a1[4];
  if ( (_DWORD)v7 == -1 )
    goto LABEL_42;
  v8 = gpGraphicsDeviceList;
  if ( !gpGraphicsDeviceList )
    goto LABEL_87;
  v9 = (unsigned int)a1[2];
  v10 = 0x800000LL;
  while ( (*((_DWORD *)v8 + 40) & 0x800000) != 0 )
  {
    if ( (_DWORD)v9 == *((_DWORD *)v8 + 62) )
    {
      v11 = *((_DWORD *)v8 + 63);
      goto LABEL_9;
    }
LABEL_44:
    v8 = (wchar_t *)*((_QWORD *)v8 + 16);
    if ( !v8 )
      goto LABEL_11;
  }
  if ( (_DWORD)v9 != *((_DWORD *)v8 + 74) )
    goto LABEL_44;
  v11 = *((_DWORD *)v8 + 75);
LABEL_9:
  if ( a1[3] != v11 || *((_DWORD *)v8 + 64) != (_DWORD)v7 )
    goto LABEL_44;
LABEL_11:
  if ( v8 && (*((_QWORD *)v8 + 18) || *((_QWORD *)v8 + 38)) )
  {
    if ( (*((_DWORD *)v8 + 40) & 0x800000) == 0 && !*((_DWORD *)v8 + 74) && !*((_DWORD *)v8 + 75) )
    {
      v46 = WdLogNewEntry5_WdAssertion(v7, v9, 0x800000LL);
      WdLogEvent5_WdAssertion(v46);
    }
    if ( (*((_DWORD *)v8 + 41) & 1) != 0 )
    {
      LODWORD(v6) = -1073741130;
      if ( v1 == -21 )
      {
        v3 = 1144084228;
        v47 = (_QWORD *)WdLogNewEntry5_WdError(v7, v9, v10);
        v47[3] = a1[3];
        v47[4] = (unsigned int)a1[2];
        v47[5] = (unsigned int)a1[4];
        v47[6] = *((unsigned int *)v8 + 40);
        v47[7] = 1144084228LL;
        WdLogEvent5_WdError(v47);
      }
      else
      {
        v48 = WdLogNewEntry5_WdEvent(v7, v9, v10);
        *(_QWORD *)(v48 + 24) = -1073741130LL;
        WdLogEvent5_WdEvent(v48);
      }
      goto LABEL_70;
    }
    EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
    if ( !UserIsCurrentProcessDwm(v13, v12) && !(unsigned __int8)DCompositionIsShellProcess()
      || (IsWddmConnectedSession = UserIsWddmConnectedSession(), v15 = 1, !IsWddmConnectedSession) )
    {
      v15 = 0;
    }
    for ( i = gppdevList; i; i = *(struct PDEV **)i )
    {
      v50 = i;
      v17 = *((_DWORD *)i + 10);
      if ( (v17 & 1) != 0 && (v17 & 0x400) == 0 )
      {
        if ( v15 )
        {
          if ( (v17 & 0x20000) == 0 )
          {
            if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v50) )
            {
              if ( a1[411] == *((_DWORD *)i + 646) && a1[412] == *((_DWORD *)i + 647) )
              {
                v31 = PDEVOBJ::sizl((PDEVOBJ *)&v50);
                if ( a1[413] == v32 + *(_DWORD *)v31.cx )
                {
                  v33 = PDEVOBJ::sizl((PDEVOBJ *)&v50);
                  if ( a1[414] == v34 + *(_DWORD *)(*(_QWORD *)&v33 + 4LL) )
                  {
                    v35 = a1[513] & 0xFFFFFFFE;
                    a1[513] = v35;
                    if ( *((_DWORD *)i + 646) || (v36 = 2, *((_DWORD *)i + 647)) )
                      v36 = 0;
                    v37 = v36 | v35 & 0xFFFFFFFD;
                    v38 = 0;
                    a1[513] = v37;
                    if ( *((wchar_t **)i + 322) == v8 )
                      v38 = 4;
                    v22 = v37 & 0xFFFFFFFB | v38;
                    goto LABEL_29;
                  }
                }
              }
            }
          }
        }
        else if ( *((wchar_t **)i + 322) == v8 )
        {
          v18 = UserIsWddmConnectedSession();
          a1[411] = *((_DWORD *)i + 646);
          a1[412] = *((_DWORD *)i + 647);
          if ( v18 )
          {
            a1[413] = *((_DWORD *)i + 646) + *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v50).cx;
            v19 = *((_DWORD *)i + 647) + *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v50) + 4LL);
            v20 = a1[513] & 0xFFFFFFFE;
            a1[414] = v19;
            a1[513] = v20;
            if ( *((_DWORD *)i + 646) || (v21 = 2, *((_DWORD *)i + 647)) )
              v21 = 0;
            v22 = v21 | v20 & 0xFFFFFFFD | 4;
          }
          else
          {
            a1[413] = *((_DWORD *)i + 646) + *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v50).cx;
            v39 = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v50) + 4LL);
            v40 = a1[4];
            a1[414] = *((_DWORD *)i + 647) + v39;
            a1[479] = v40;
            a1[480] = 0;
            a1[481] = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v50).cx;
            a1[482] = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v50) + 4LL);
            *((_QWORD *)a1 + 244) = 0LL;
            a1[490] = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v50).cx;
            v41 = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v50) + 4LL);
            v42 = a1[513] | 1;
            a1[491] = v41;
            a1[513] = v42;
            a1[483] = 4;
            a1[484] = 60000;
            a1[485] = 1000;
            *((_QWORD *)a1 + 243) = 1LL;
            if ( *((_DWORD *)i + 646) || (v43 = 2, *((_DWORD *)i + 647)) )
              v43 = 0;
            v22 = v43 | v42 & 0xFFFFFFFD | 4;
          }
LABEL_29:
          a1[513] = v22;
          break;
        }
      }
    }
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v14);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
      PsLeavePriorityRegion(v23);
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
    v24 = a1 + 415;
    v25 = 128LL;
    v26 = (char *)((char *)v8 - (char *)(a1 + 415));
    do
    {
      if ( v25 == 96 )
        break;
      v27 = *(_WORD *)((char *)v24 + (_QWORD)v26 + 64);
      if ( !v27 )
        break;
      *v24++ = v27;
      --v25;
    }
    while ( v25 );
    v28 = v24 - 1;
    if ( v25 )
      v28 = v24;
    *v28 = 0;
LABEL_42:
    if ( (int)v6 >= 0 )
      return 0LL;
LABEL_70:
    if ( v1 == -21 )
      goto LABEL_73;
    return (unsigned int)v6;
  }
LABEL_87:
  LODWORD(v6) = -1073741275;
  if ( v1 != -21 )
  {
    v49 = WdLogNewEntry5_WdWarning();
    WdLogEvent5_WdWarning(v49);
    goto LABEL_42;
  }
  if ( v8 )
  {
    v3 = 1144084227;
    v44 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdError)();
    v44[3] = a1[3];
    v44[4] = (unsigned int)a1[2];
    v44[5] = (unsigned int)a1[4];
    v44[6] = *((unsigned int *)v8 + 40);
    v44[7] = 1144084227LL;
  }
  else
  {
    v3 = 1144084226;
    v44 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdError)();
    v44[3] = a1[3];
    v44[4] = (unsigned int)a1[2];
    v44[5] = (unsigned int)a1[4];
    v44[6] = 1144084226LL;
  }
LABEL_77:
  WdLogEvent5_WdError(v44);
LABEL_73:
  a1[506] = v3;
  return (unsigned int)v6;
}
