/*
 * XREFs of UserJobCallout @ 0x1C010AAA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C003E8B4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_qq @ 0x1C003EB74 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x1C003EC50 (WPP_RECORDER_SF_q.c)
 *     ??0?$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ @ 0x1C003ED04 (--0-$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0040298 (WPP_RECORDER_SF_.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00D899C (WPP_RECORDER_SF_qqq.c)
 *     ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x1C010AC60 (-UpdateJob@@YAXPEAUtagW32JOB@@@Z.c)
 *     ?CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z @ 0x1C010ACE4 (-CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z.c)
 *     ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C010ADCC (-JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z @ 0x1C010B000 (-JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z.c)
 *     WPP_RECORDER_SF_Dq @ 0x1C02204C4 (WPP_RECORDER_SF_Dq.c)
 */

__int64 __fastcall UserJobCallout(__int64 a1)
{
  int v1; // r14d
  unsigned int v2; // edi
  struct _EJOB *v3; // rbp
  struct tagPROCESSINFO *ProcessWin32Process; // r15
  __int64 v5; // rsi
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  struct tagW32JOB *i; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  _BYTE v13[56]; // [rsp+40h] [rbp-38h] BYREF
  int v14; // [rsp+80h] [rbp+8h] BYREF
  char v15; // [rsp+88h] [rbp+10h] BYREF

  v1 = *(_DWORD *)(a1 + 8);
  v2 = 0;
  v3 = *(struct _EJOB **)a1;
  ProcessWin32Process = 0LL;
  v5 = *(_QWORD *)(a1 + 16);
  if ( v1 == 1 )
  {
    ProcessWin32Process = (struct tagPROCESSINFO *)PsGetProcessWin32Process(*(_QWORD *)(a1 + 16));
    if ( !ProcessWin32Process )
      return 0LL;
  }
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v14);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v15);
  CLockDomainExclusive<DLT_JOB>::CLockDomainExclusive<DLT_JOB>((__int64)v13);
  for ( i = (struct tagW32JOB *)gpJobsList; i && *((struct _EJOB **)i + 1) != v3; i = *(struct tagW32JOB **)i )
    ;
  if ( v1 )
  {
    v10 = (unsigned int)(v1 - 1);
    if ( v1 != 1 )
    {
      if ( v1 == 2 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qq(
            (unsigned int)(v1 - 1),
            4u,
            v1 - 1 + 12,
            v1 - 1 + 12,
            (__int64)&WPP_8d1b82f3b1933447d2872340d476a1f2_Traceguids,
            v3,
            i);
        if ( i )
          JobCalloutTerminate(i);
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Dq(v10, v6, v7, v8);
        v2 = -1073741822;
      }
      goto LABEL_11;
    }
    if ( i )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqq(v10, 4u, 0xDu, 0xCu, (__int64)&WPP_8d1b82f3b1933447d2872340d476a1f2_Traceguids, v3, i, v5);
      JobCalloutAddProcess(i, ProcessWin32Process);
      goto LABEL_11;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_q(0, v6, 13, 11, (__int64)&WPP_8d1b82f3b1933447d2872340d476a1f2_Traceguids, (char)v3);
    }
    goto LABEL_30;
  }
  if ( i )
  {
    if ( (_DWORD)v5 == *((_DWORD *)i + 6) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 4;
        WPP_RECORDER_SF_(0, v6, 13, 10, (__int64)&WPP_8d1b82f3b1933447d2872340d476a1f2_Traceguids);
      }
      goto LABEL_11;
    }
  }
  else
  {
    i = CreateW32Job(v3);
    if ( !i )
    {
LABEL_30:
      v2 = -1073741823;
      goto LABEL_11;
    }
  }
  *((_DWORD *)i + 6) = v5;
  UpdateJob(i);
LABEL_11:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v15);
  if ( !v14 )
    UserSessionSwitchLeaveCrit(v11);
  return v2;
}
