/*
 * XREFs of GreSetRectRgn @ 0x1C0014BB0
 * Callers:
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0010A5C (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     UserSetDCVisRgn @ 0x1C0013EE0 (UserSetDCVisRgn.c)
 *     SetEmptyRgn @ 0x1C0014B70 (SetEmptyRgn.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C008C520 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     _GetDCEx @ 0x1C008DE30 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C0093FA0 (GetMonitorDC.c)
 *     NtGdiSetRectRgn @ 0x1C0142F60 (NtGdiSetRectRgn.c)
 *     EngSetRectRgn @ 0x1C014F430 (EngSetRectRgn.c)
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0014CA0 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0085F30 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C00860F0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0086240 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
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
