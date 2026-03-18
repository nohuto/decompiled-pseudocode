/*
 * XREFs of _UserJobCallout@4 @ 0x9D26C
 * Callers:
 *     <none>
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _WPP_RECORDER_SF_qqq@32 @ 0x350A8 (_WPP_RECORDER_SF_qqq@32.c)
 *     ??0ReEnterLeaveCrit@@QAE@XZ @ 0x6FC2E (--0ReEnterLeaveCrit@@QAE@XZ.c)
 *     _WPP_RECORDER_SF_qq@28 @ 0x6FDEA (_WPP_RECORDER_SF_qq@28.c)
 *     ?JobCalloutTerminate@@YGHPAUtagW32JOB@@@Z @ 0x9D20C (-JobCalloutTerminate@@YGHPAUtagW32JOB@@@Z.c)
 *     ?UpdateJob@@YGXPAUtagW32JOB@@@Z @ 0x9D3F8 (-UpdateJob@@YGXPAUtagW32JOB@@@Z.c)
 *     ?JobCalloutAddProcess@@YGHPAUtagW32JOB@@PAUtagPROCESSINFO@@@Z @ 0x9D446 (-JobCalloutAddProcess@@YGHPAUtagW32JOB@@PAUtagPROCESSINFO@@@Z.c)
 *     ?CreateW32Job@@YGPAUtagW32JOB@@PAU_EJOB@@@Z @ 0x9D5D4 (-CreateW32Job@@YGPAUtagW32JOB@@PAU_EJOB@@@Z.c)
 *     _WPP_RECORDER_SF_Dq@28 @ 0x183A03 (_WPP_RECORDER_SF_Dq@28.c)
 */

int __userpurge UserJobCallout@<eax>(struct tagW32JOB *a1@<esi>, int *a2)
{
  int v2; // edi
  int v3; // ecx
  int v4; // ebx
  int v5; // eax
  int result; // eax
  int DLT; // eax
  int v8; // edx
  struct tagW32JOB *i; // esi
  int v10; // eax
  int v11; // [esp-18h] [ebp-34h]
  int v12; // [esp-14h] [ebp-30h]
  int v13; // [esp-10h] [ebp-2Ch]
  struct tagW32JOB *v14; // [esp-4h] [ebp-20h]
  struct tagPROCESSINFO *v15; // [esp+0h] [ebp-1Ch]
  _BYTE v16[8]; // [esp+8h] [ebp-14h] BYREF
  int v17; // [esp+10h] [ebp-Ch] BYREF
  int v18; // [esp+14h] [ebp-8h]
  int v19; // [esp+18h] [ebp-4h]
  int v20; // [esp+24h] [ebp+8h]

  v2 = 0;
  v3 = a2[1];
  v4 = *a2;
  v5 = a2[2];
  v19 = 0;
  v18 = v3;
  v20 = v5;
  if ( v3 == 1 )
  {
    result = PsGetProcessWin32Process(v5);
    v19 = result;
    if ( !result )
      return result;
  }
  v14 = a1;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v17);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v16);
  DLT = DLT_JOB::getDLT();
  GetDomainLockRef(DLT);
  for ( i = (struct tagW32JOB *)_gpJobsList; i && *((_DWORD *)i + 1) != v4; i = *(struct tagW32JOB **)i )
    ;
  if ( v18 )
  {
    if ( v18 != 1 )
    {
      if ( v18 == 2 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v8) = 4;
          WPP_RECORDER_SF_qq(v18, v8, 0xDu, 13, (int)&WPP_8d1b82f3b1933447d2872340d476a1f2_Traceguids, v4, (char)i);
        }
        if ( i )
          JobCalloutTerminate(i);
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Dq(v11, v12, v13, v18, v4);
        v2 = -1073741822;
      }
      goto LABEL_31;
    }
    if ( i )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 4;
        WPP_RECORDER_SF_qqq(v18, v8, 0xDu, 12, (int)&WPP_8d1b82f3b1933447d2872340d476a1f2_Traceguids, v4, (char)i, v20);
      }
      JobCalloutAddProcess(v14, v15);
      goto LABEL_31;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_q(v18, v8, 0xDu, 11, (int)&WPP_8d1b82f3b1933447d2872340d476a1f2_Traceguids, v4);
    }
    goto LABEL_25;
  }
  if ( i )
  {
    v10 = v20;
    if ( v20 == *((_DWORD *)i + 3) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(13, 10, &WPP_8d1b82f3b1933447d2872340d476a1f2_Traceguids);
      goto LABEL_31;
    }
    goto LABEL_30;
  }
  i = CreateW32Job(v14);
  if ( i )
  {
    v10 = v20;
LABEL_30:
    *((_DWORD *)i + 3) = v10;
    UpdateJob(v14);
    goto LABEL_31;
  }
LABEL_25:
  v2 = -1073741823;
LABEL_31:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v16);
  if ( !v17 )
    UserSessionSwitchLeaveCrit();
  return v2;
}
