/*
 * XREFs of GreSetRectRgn @ 0x1C001CDA0
 * Callers:
 *     SetEmptyRgn @ 0x1C001CD60 (SetEmptyRgn.c)
 *     UserSetDCVisRgn @ 0x1C001F800 (UserSetDCVisRgn.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00462B0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     _GetDCEx @ 0x1C0047DC0 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C004D710 (GetMonitorDC.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C00A2BEC (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     NtGdiSetRectRgn @ 0x1C0140A80 (NtGdiSetRectRgn.c)
 *     EngSetRectRgn @ 0x1C014CFA0 (EngSetRectRgn.c)
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C001CE90 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0040510 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C00406D0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0040820 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 */

__int64 __fastcall GreSetRectRgn(HRGN a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  __int64 v8; // rdi
  unsigned int v9; // r14d
  struct _RECTL v11; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-28h] BYREF
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
      RGNOBJ::vSet((RGNOBJ *)v12, &v11);
      v9 = 1;
    }
  }
  if ( !v13 )
    RGNOBJ::UpdateUserRgn((RGNOBJ *)v12);
  if ( v8 )
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 12));
  return v9;
}
