/*
 * XREFs of NtUserCalculatePopupWindowPosition @ 0x1C01F78C0
 * Callers:
 *     <none>
 * Callees:
 *     _MonitorFromPoint @ 0x1C0025880 (_MonitorFromPoint.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z @ 0x1C0158D44 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C0158D64 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     FindBestPos @ 0x1C024B718 (FindBestPos.c)
 */

__int64 __fastcall NtUserCalculatePopupWindowPosition(
        unsigned __int64 *a1,
        _QWORD *a2,
        int a3,
        __int128 *a4,
        _DWORD *a5)
{
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rsi
  __int64 v18; // r13
  int BestPos; // ebx
  _OWORD *v20; // rcx
  int v22[2]; // [rsp+50h] [rbp-98h]
  __int64 v23; // [rsp+60h] [rbp-88h]
  __int64 v24[5]; // [rsp+68h] [rbp-80h] BYREF
  __int128 v25; // [rsp+90h] [rbp-58h] BYREF

  v25 = 0LL;
  v9 = 0;
  EnterCrit(0LL, 1LL);
  if ( (a3 & 0xFFFE0200) != 0 )
  {
    v12 = 1004LL;
LABEL_3:
    UserSetLastError(v12, v10, v11);
    goto LABEL_28;
  }
  if ( !a5 )
  {
    v12 = 87LL;
    goto LABEL_3;
  }
  if ( a4 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (__int128 *)MmUserProbeAddress;
    v25 = *a4;
    a4 = &v25;
    v24[2] = (__int64)&v25;
  }
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (_QWORD *)MmUserProbeAddress;
  *(_QWORD *)v22 = *a2;
  if ( (int)*a2 < 0 || (HIDWORD(*a2) & 0x80000000) != 0 )
  {
    UserSetLastError(87LL, v10, v11);
  }
  else
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (unsigned __int64 *)MmUserProbeAddress;
    v16 = *a1;
    v23 = v16;
    v17 = HIDWORD(v16);
    v18 = MonitorFromPoint(v16, 2LL, 0);
    if ( (a3 & 4) != 0 )
    {
      LODWORD(v16) = v16 - v22[0] / 2;
    }
    else if ( (a3 & 8) != 0 )
    {
      LODWORD(v16) = v16 - v22[0];
    }
    if ( (a3 & 0x10) != 0 )
    {
      LODWORD(v17) = v22[1] / -2 + v17;
    }
    else if ( (a3 & 0x20) != 0 )
    {
      LODWORD(v17) = v17 - v22[1];
    }
    v9 = 1;
    SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(v24, 0LL);
    BestPos = FindBestPos(v16, v17, v22[0], v22[1], (__int64)a4, a3 | 0x20000u, (__int64)v24, v18, v23);
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v24);
    v20 = a5;
    if ( (unsigned __int64)a5 >= MmUserProbeAddress )
      v20 = (_OWORD *)MmUserProbeAddress;
    *v20 = *v20;
    *a5 = (__int16)BestPos;
    v13 = (unsigned int)SHIWORD(BestPos);
    a5[1] = v13;
    a5[2] = v22[0] + (__int16)BestPos;
    v14 = (unsigned int)(v13 + v22[1]);
    a5[3] = v14;
  }
LABEL_28:
  UserSessionSwitchLeaveCrit(v14, v13, v15);
  return v9;
}
