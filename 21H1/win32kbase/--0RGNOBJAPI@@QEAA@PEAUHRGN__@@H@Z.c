/*
 * XREFs of ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C007F290
 * Callers:
 *     GreCopyVisRgn @ 0x1C0016B90 (GreCopyVisRgn.c)
 *     GreRectInRegion @ 0x1C0019130 (GreRectInRegion.c)
 *     GreGetRgnBox @ 0x1C001C210 (GreGetRgnBox.c)
 *     GrePtInRegion @ 0x1C001E180 (GrePtInRegion.c)
 *     GreEqualRgn @ 0x1C002F4A0 (GreEqualRgn.c)
 *     GreIsValidRegion @ 0x1C0043B50 (GreIsValidRegion.c)
 *     NtGdiDeleteObjectApp @ 0x1C006C610 (NtGdiDeleteObjectApp.c)
 *     GreOffsetRgn @ 0x1C0076320 (GreOffsetRgn.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C007D8D0 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreCombineRgn @ 0x1C007DB50 (GreCombineRgn.c)
 *     SetRectRgnIndirect @ 0x1C007EE60 (SetRectRgnIndirect.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00854A0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreDeleteObject @ 0x1C008B120 (GreDeleteObject.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C008CE0C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreSetRectRgn @ 0x1C00A97A0 (GreSetRectRgn.c)
 *     bDeleteRegion @ 0x1C00A9EB0 (bDeleteRegion.c)
 *     GreGetRegionData @ 0x1C00AB040 (GreGetRegionData.c)
 *     EngDeleteRgn @ 0x1C0155420 (EngDeleteRgn.c)
 *     EngEqualRgn @ 0x1C0155490 (EngEqualRgn.c)
 *     InitializeGre @ 0x1C029CF90 (InitializeGre.c)
 * Callees:
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x1C007A500 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C007F140 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     HmgLock @ 0x1C00818B0 (HmgLock.c)
 *     HmgPentryFromPobj @ 0x1C0082780 (HmgPentryFromPobj.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ?GrepIsPreviousModeKernel@@YAHXZ @ 0x1C00CE828 (-GrepIsPreviousModeKernel@@YAHXZ.c)
 */

RGNOBJAPI *__fastcall RGNOBJAPI::RGNOBJAPI(RGNOBJAPI *this, HRGN a2, int a3)
{
  HRGN v4; // rbx
  __int64 v6; // rax
  BOOL v7; // ebx
  __int64 v8; // rdi
  char v9; // cl
  struct _RECTL v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]

  v4 = a2;
  LOBYTE(a2) = 4;
  v6 = HmgLock(v4, a2);
  *(_QWORD *)this = v6;
  *((_QWORD *)this + 1) = v4;
  *((_DWORD *)this + 4) = a3;
  if ( !v6 )
    return this;
  v7 = 1;
  if ( *(_DWORD *)(v6 + 36) )
  {
    v7 = GrepIsPreviousModeKernel() != 0;
    goto LABEL_17;
  }
  v8 = *(_QWORD *)(HmgPentryFromPobj(v6) + 16);
  if ( v8 )
  {
    v11 = *(struct _RECTL *)v8;
    v12 = *(_QWORD *)(v8 + 16);
    v9 = _mm_cvtsi128_si32((__m128i)v11);
    if ( (v9 & 0x11) == 0x10 )
    {
      if ( (v9 & 0x20) == 0 )
        goto LABEL_17;
      if ( v11.top == 1 )
      {
        RGNOBJ::vSet(this);
LABEL_15:
        *(_DWORD *)v8 &= ~0x20u;
        goto LABEL_17;
      }
      if ( v11.top != 2 )
        goto LABEL_17;
      if ( (((v11.right & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((HIDWORD(v12) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((v12 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((v11.bottom & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
      {
        RGNOBJ::vSet((struct _RECTL **)this, (struct _RECTL *)&v11.right);
        goto LABEL_15;
      }
    }
    v7 = 0;
  }
LABEL_17:
  if ( !v7 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
  }
  return this;
}
