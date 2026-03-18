/*
 * XREFs of ?GeneratePointerMessageFromMouse@@YGHPAUtagQMSG@@I0PAUtagWND@@H@Z @ 0x14CF17
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?MiPConvertPoint@@YG?AUtagPOINT@@PBU1@@Z @ 0x14D3EC (-MiPConvertPoint@@YG-AUtagPOINT@@PBU1@@Z.c)
 *     ?RefreshMiPIdleNotificationTimer@@YGXPAUtagWND@@@Z @ 0x14D989 (-RefreshMiPIdleNotificationTimer@@YGXPAUtagWND@@@Z.c)
 *     ?StopMiPIdleNotificationTimer@@YGXPAUtagWND@@@Z @ 0x14DB71 (-StopMiPIdleNotificationTimer@@YGXPAUtagWND@@@Z.c)
 */

int __userpurge GeneratePointerMessageFromMouse@<eax>(
        int a1@<edx>,
        unsigned int *a2@<ecx>,
        struct tagQMSG *a3,
        _DWORD *a4,
        struct tagQMSG *a5,
        struct tagWND *a6,
        int a7)
{
  _DWORD *v8; // eax
  int NextFrameId; // eax
  int PointerFlagsFromMouse; // eax
  int v11; // eax
  int v12; // eax
  _DWORD *v13; // ecx
  unsigned int v14; // eax
  _DWORD *v16; // eax
  int v17; // [esp-Ch] [ebp-7Ch]
  const struct tagPOINT *v18; // [esp+0h] [ebp-70h]
  struct tagWND *v19; // [esp+0h] [ebp-70h]
  unsigned int *v20; // [esp+Ch] [ebp-64h]
  _QWORD v23[11]; // [esp+18h] [ebp-58h] BYREF

  memset(v23, 0, sizeof(v23));
  v8 = *(_DWORD **)(_gptiCurrent + 720);
  if ( !v8 )
  {
    v8 = (_DWORD *)Win32AllocPoolZInit(320, 1347253077);
    if ( !v8 )
      goto LABEL_30;
    *(_DWORD *)(_gptiCurrent + 720) = v8;
  }
  if ( a5 && (*v8 & 0x10) != 0 )
  {
    *v8 &= ~0x10u;
    **(_DWORD **)(_gptiCurrent + 720) &= ~4u;
  }
  if ( IsMiPMouseMessage(*((_DWORD *)a3 + 3)) )
  {
    qmemcpy(a2, a3, 0x78u);
    v23[0] = 0x100000004LL;
    a2[1] = 0;
    *a2 = 0;
    NextFrameId = GetNextFrameId();
    LODWORD(v23[2]) = -1;
    LODWORD(v23[1]) = NextFrameId;
    HIDWORD(v23[2]) = a4 ? *a4 : 0;
    HIDWORD(v23[7]) = 1;
    v17 = *((_DWORD *)a3 + 4);
    LODWORD(v23[7]) = *((_DWORD *)a3 + 6);
    v23[9] = *((_QWORD *)a3 + 11);
    v20 = a2 + 3;
    PointerFlagsFromMouse = GetPointerFlagsFromMouse(a2 + 3, a1, v17, (char *)&v23[8] + 4, &v23[10]);
    HIDWORD(v23[1]) = PointerFlagsFromMouse;
    if ( PointerFlagsFromMouse )
    {
      if ( (**(_BYTE **)(_gptiCurrent + 720) & 4) == 0 )
      {
        PointerFlagsFromMouse |= 0x2000u;
        HIDWORD(v23[1]) = PointerFlagsFromMouse;
      }
      if ( (*((_DWORD *)a3 + 16) & 0x2000) != 0 )
        HIDWORD(v23[1]) = PointerFlagsFromMouse | 0x400000;
      LODWORD(v23[3]) = *((__int16 *)a3 + 10);
      HIDWORD(v23[3]) = *((__int16 *)a3 + 11);
      v23[4] = MiPConvertPoint(v18);
      v23[6] = v23[4];
      v11 = HIDWORD(v23[1]);
      v23[5] = v23[3];
      a2[17] = _gptiCurrent;
      if ( (((unsigned int)&loc_17FFFE + 2) & v11) != 0 )
      {
        LODWORD(v23[8]) = *((__int16 *)a3 + 9);
        v12 = LOWORD(v23[8]);
      }
      else
      {
        v12 = v11 & 0xE1F7;
      }
      a2[4] = (v12 << 16) | 1;
      qmemcpy((void *)(*(_DWORD *)(_gptiCurrent + 720) + 16), v23, 0x58u);
      **(_DWORD **)(_gptiCurrent + 720) |= 1u;
      if ( a5 && (*v20 == 583 || *v20 == 579) )
      {
        v13 = *(_DWORD **)(_gptiCurrent + 720);
        if ( (*v13 & 4) != 0 )
        {
          *v13 |= 0x10u;
          **(_DWORD **)(_gptiCurrent + 720) &= ~2u;
        }
      }
      v14 = *v20;
      if ( *v20 < 0x241 || v14 > 0x242 && v14 - 581 > 1 )
      {
        StopMiPIdleNotificationTimer(v19);
      }
      else
      {
        *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 720) + 312) = a2[5];
        RefreshMiPIdleNotificationTimer(v19);
      }
      return 1;
    }
  }
LABEL_30:
  v16 = *(_DWORD **)(_gptiCurrent + 720);
  if ( v16 )
    *v16 &= ~1u;
  return 0;
}
