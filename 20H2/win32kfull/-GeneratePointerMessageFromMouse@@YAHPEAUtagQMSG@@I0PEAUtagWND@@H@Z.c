/*
 * XREFs of ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C01DFD8C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D8A90 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     memset @ 0x1C015F880 (memset.c)
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C01E02F8 (-MiPConvertPoint@@YA-AUtagPOINT@@PEBU1@@Z.c)
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01E0914 (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01E0B78 (-StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall GeneratePointerMessageFromMouse(
        struct tagQMSG *a1,
        unsigned int a2,
        struct tagQMSG *a3,
        struct tagWND *a4,
        int a5)
{
  _DWORD *v9; // rax
  __int128 v10; // xmm0
  int NextFrameId; // eax
  unsigned int *v12; // r15
  __int64 v13; // r8
  int v14; // r8d
  struct tagPOINT v15; // rax
  bool v16; // zf
  int v17; // eax
  __int64 v18; // rax
  _DWORD *v19; // rcx
  unsigned int v20; // eax
  _DWORD *v22; // rax
  _OWORD v23[6]; // [rsp+38h] [rbp-31h] BYREF

  memset(v23, 0, sizeof(v23));
  v9 = *(_DWORD **)(gptiCurrent + 1280LL);
  if ( !v9 )
  {
    v9 = (_DWORD *)Win32AllocPoolZInit(384LL, 1347253077LL);
    if ( !v9 )
      goto LABEL_29;
    *(_QWORD *)(gptiCurrent + 1280LL) = v9;
  }
  if ( a5 && (*v9 & 0x10) != 0 )
  {
    *v9 &= ~0x10u;
    **(_DWORD **)(gptiCurrent + 1280LL) &= ~4u;
  }
  if ( (unsigned int)IsMiPMouseMessage(*((unsigned int *)a3 + 6)) )
  {
    v10 = *(_OWORD *)a3;
    *(_QWORD *)&v23[0] = 0x100000004LL;
    *(_OWORD *)a1 = v10;
    *((_OWORD *)a1 + 1) = *((_OWORD *)a3 + 1);
    *((_OWORD *)a1 + 2) = *((_OWORD *)a3 + 2);
    *((_OWORD *)a1 + 3) = *((_OWORD *)a3 + 3);
    *((_OWORD *)a1 + 4) = *((_OWORD *)a3 + 4);
    *((_OWORD *)a1 + 5) = *((_OWORD *)a3 + 5);
    *((_OWORD *)a1 + 6) = *((_OWORD *)a3 + 6);
    *((_OWORD *)a1 + 7) = *((_OWORD *)a3 + 7);
    *((_OWORD *)a1 + 8) = *((_OWORD *)a3 + 8);
    *((_OWORD *)a1 + 9) = *((_OWORD *)a3 + 9);
    *((_QWORD *)a1 + 1) = 0LL;
    *(_QWORD *)a1 = 0LL;
    NextFrameId = GetNextFrameId();
    *(_QWORD *)&v23[1] = -1LL;
    DWORD2(v23[0]) = NextFrameId;
    *((_QWORD *)&v23[1] + 1) = a4 ? *(_QWORD *)a4 : 0LL;
    v12 = (unsigned int *)((char *)a1 + 24);
    v13 = *((_QWORD *)a3 + 4);
    LODWORD(v23[4]) = *((_DWORD *)a3 + 12);
    *(_QWORD *)&v23[5] = *((_QWORD *)a3 + 16);
    DWORD1(v23[4]) = 1;
    HIDWORD(v23[0]) = GetPointerFlagsFromMouse((char *)a1 + 24, a2, v13, (char *)&v23[4] + 12, (char *)&v23[5] + 8);
    v14 = HIDWORD(v23[0]);
    if ( HIDWORD(v23[0]) )
    {
      if ( (**(_DWORD **)(gptiCurrent + 1280LL) & 4) == 0 )
      {
        v14 = HIDWORD(v23[0]) | 0x2000;
        HIDWORD(v23[0]) |= 0x2000u;
      }
      if ( (*((_DWORD *)a3 + 25) & 0x2000) != 0 )
        HIDWORD(v23[0]) = v14 | 0x400000;
      LODWORD(v23[2]) = *((__int16 *)a3 + 20);
      DWORD1(v23[2]) = *((__int16 *)a3 + 21);
      v15 = MiPConvertPoint((const struct tagPOINT *)&v23[2]);
      v16 = (HIDWORD(v23[0]) & 0x180000) == 0;
      *(_QWORD *)&v23[3] = *(_QWORD *)&v23[2];
      *((struct tagPOINT *)&v23[2] + 1) = v15;
      *((struct tagPOINT *)&v23[3] + 1) = v15;
      *((_QWORD *)a1 + 13) = gptiCurrent;
      if ( v16 )
      {
        v17 = WORD6(v23[0]) & 0xE1F7;
      }
      else
      {
        DWORD2(v23[4]) = *((__int16 *)a3 + 17);
        v17 = WORD4(v23[4]);
      }
      *((_QWORD *)a1 + 4) = (unsigned int)(v17 << 16) | 1LL;
      v18 = *(_QWORD *)(gptiCurrent + 1280LL);
      *(_OWORD *)(v18 + 24) = v23[0];
      *(_OWORD *)(v18 + 40) = v23[1];
      *(_OWORD *)(v18 + 56) = v23[2];
      *(_OWORD *)(v18 + 72) = v23[3];
      *(_OWORD *)(v18 + 88) = v23[4];
      *(_OWORD *)(v18 + 104) = v23[5];
      **(_DWORD **)(gptiCurrent + 1280LL) |= 1u;
      if ( a5 )
      {
        if ( ((*v12 - 579) & 0xFFFFFFFB) == 0 )
        {
          v19 = *(_DWORD **)(gptiCurrent + 1280LL);
          if ( (*v19 & 4) != 0 )
          {
            *v19 |= 0x10u;
            **(_DWORD **)(gptiCurrent + 1280LL) &= ~2u;
          }
        }
      }
      v20 = *v12;
      if ( *v12 < 0x241 || v20 > 0x242 && v20 - 581 > 1 )
      {
        StopMiPIdleNotificationTimer(a4);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(gptiCurrent + 1280LL) + 376LL) = *((_QWORD *)a1 + 5);
        RefreshMiPIdleNotificationTimer(a4);
      }
      return 1LL;
    }
  }
LABEL_29:
  v22 = *(_DWORD **)(gptiCurrent + 1280LL);
  if ( v22 )
    *v22 &= ~1u;
  return 0LL;
}
