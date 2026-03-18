/*
 * XREFs of GreSetRectRgn @ 0x1C00A97A0
 * Callers:
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0032DA8 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00854A0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     _GetDCEx @ 0x1C0086DA0 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C00908A8 (GetMonitorDC.c)
 *     UserSetDCVisRgn @ 0x1C00A7F90 (UserSetDCVisRgn.c)
 *     SetEmptyRgn @ 0x1C00A9760 (SetEmptyRgn.c)
 *     NtGdiSetRectRgn @ 0x1C01492B0 (NtGdiSetRectRgn.c)
 *     EngSetRectRgn @ 0x1C0155780 (EngSetRectRgn.c)
 * Callees:
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C007EF80 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C007F140 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C007F290 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00A9890 (-vOrder@ERECTL@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetRectRgn(HRGN a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  struct _RECTL *v8; // rdi
  unsigned int v9; // r14d
  struct _RECTL v11; // [rsp+20h] [rbp-38h] BYREF
  struct _RECTL *v12[2]; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+40h] [rbp-18h]

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v12, a1, 0);
  v8 = v12[0];
  v9 = 0;
  if ( v12[0] )
  {
    v11.left = a2;
    v11.top = a3;
    v11.right = a4;
    v11.bottom = a5;
    if ( ((a2 & 0xF8000000) == 0 || (a2 & 0xF8000000) == -134217728)
      && (((a5 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
      && (((a4 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
      && (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
    {
      ERECTL::vOrder((ERECTL *)&v11);
      RGNOBJ::vSet(v12, &v11);
      v9 = 1;
    }
  }
  if ( !v13 )
    RGNOBJ::UpdateUserRgn((RGNOBJ *)v12);
  if ( v8 )
    _InterlockedDecrement(&v8->bottom);
  return v9;
}
