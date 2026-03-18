/*
 * XREFs of GreExtTextOutWInternal @ 0x1C00188EC
 * Callers:
 *     NtGdiExtTextOutW @ 0x1C0018530 (NtGdiExtTextOutW.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0062C10 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z @ 0x1C0063270 (-DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z.c)
 *     ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x1C011241C (-FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z.c)
 *     ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C011BD78 (-DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C014B43C (xxxDrawCaptionTemp.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C0223C70 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C0243DEC (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C024D214 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMTextOut @ 0x1C02540DC (xxxPSMTextOut.c)
 *     ?UserTextOutWInternal@@YAHPEAUHDC__@@HHPEBGIK@Z @ 0x1C025FC30 (-UserTextOutWInternal@@YAHPEAUHDC__@@HHPEBGIK@Z.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C001936C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0079350 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C00802E0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00FEC0C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall GreExtTextOutWInternal(
        HDC a1,
        int a2,
        int a3,
        unsigned int a4,
        struct tagRECT *a5,
        unsigned __int16 *a6,
        unsigned int a7,
        int *a8,
        void *a9,
        unsigned int a10)
{
  unsigned int v13; // ebx
  DC *v14; // rcx
  unsigned int v15; // eax
  struct _DC_ATTR *UserAttr; // rax
  __int64 v17; // rdi
  int v19; // [rsp+68h] [rbp-59h] BYREF
  DC *v20; // [rsp+70h] [rbp-51h] BYREF
  __int64 v21; // [rsp+78h] [rbp-49h]
  __int128 v22; // [rsp+88h] [rbp-39h] BYREF
  __int64 v23; // [rsp+98h] [rbp-29h]
  int v24; // [rsp+A0h] [rbp-21h]
  _QWORD v25[2]; // [rsp+A8h] [rbp-19h] BYREF
  __int16 v26; // [rsp+B8h] [rbp-9h]
  __int64 v27; // [rsp+C0h] [rbp-1h]
  __int64 v28; // [rsp+C8h] [rbp+7h]
  __int64 v29; // [rsp+D0h] [rbp+Fh]

  v20 = 0LL;
  v21 = 0LL;
  v13 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v20, a1);
  v14 = v20;
  if ( v20 )
  {
    if ( (*((_DWORD *)v20 + 9) & 0x10000) == 0 )
    {
      v25[1] = 0LL;
      v22 = 0LL;
      v26 = 256;
      v23 = 0LL;
      v24 = 0;
      v25[0] = 0LL;
      v29 = 0LL;
      v28 = 0LL;
      v27 = 0LL;
      if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v22, (struct XDCOBJ *)&v20, 0) )
        v15 = GreExtTextOutWLocked(
                (struct XDCOBJ *)&v20,
                a2,
                a3,
                a4,
                a5,
                a6,
                a7,
                a8,
                *(unsigned __int8 *)(*((_QWORD *)v20 + 122) + 213LL),
                a9,
                a10);
      else
        v15 = XDCOBJ::bFullScreen((XDCOBJ *)&v20);
      v13 = v15;
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v22);
      if ( v25[0] )
        DLODCOBJ::vUnlock((DLODCOBJ *)v25);
      v14 = v20;
    }
    if ( v14 )
    {
      if ( (_DWORD)v21 && (*((_DWORD *)v14 + 11) & 2) != 0 )
      {
        if ( !HIDWORD(v21) )
        {
          UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v20);
          v14 = v20;
          if ( UserAttr )
          {
            DC::RestoreAttributes(v20, UserAttr);
            v14 = v20;
          }
        }
        *((_DWORD *)v14 + 11) &= ~2u;
        v14 = v20;
        LODWORD(v21) = 0;
      }
      v19 = 0;
      v17 = *(_QWORD *)v14;
      HmgDecrementExclusiveReferenceCountEx(v14, HIDWORD(v21), &v19);
      if ( v19 )
        bDeleteDCInternalEx(v17, 0LL);
    }
  }
  return v13;
}
