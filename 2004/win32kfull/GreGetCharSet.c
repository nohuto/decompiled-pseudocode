/*
 * XREFs of GreGetCharSet @ 0x1C00A1BE0
 * Callers:
 *     GreGetTextCharsetInfo @ 0x1C00A1AD4 (GreGetTextCharsetInfo.c)
 *     NtGdiGetCharSet @ 0x1C00A1F20 (NtGdiGetCharSet.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C009F6C0 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C00A1D70 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C00A1E3C (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C012526C (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall GreGetCharSet(HDC a1)
{
  DC *v1; // r9
  unsigned int v2; // ebx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v4; // rdi
  struct LFONT *v6; // rbx
  struct LFONT *v7; // [rsp+30h] [rbp-30h] BYREF
  struct _POINTL v8; // [rsp+38h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-20h] BYREF
  DC *v10; // [rsp+48h] [rbp-18h] BYREF
  __int64 v11; // [rsp+50h] [rbp-10h]
  __int64 v12; // [rsp+88h] [rbp+28h] BYREF
  unsigned int v13; // [rsp+90h] [rbp+30h] BYREF
  unsigned int v14; // [rsp+98h] [rbp+38h] BYREF

  v14 = 0;
  v8 = 0LL;
  v13 = 0;
  v10 = 0LL;
  v11 = 0LL;
  XDCOBJ::vLock((XDCOBJ *)&v10, a1);
  v1 = v10;
  if ( v10 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v10 + 122) + 152LL) & 0x10) == 0 )
    {
LABEL_3:
      v2 = *(_DWORD *)(*((_QWORD *)v1 + 122) + 4LL);
      goto LABEL_4;
    }
    v12 = *((_QWORD *)v10 + 6);
    if ( (*(_DWORD *)(v12 + 40) & 0x40) == 0 )
    {
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v12);
      v1 = v10;
    }
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v7, *(struct HLFONT__ **)(*((_QWORD *)v1 + 122) + 296LL), (struct PDEVOBJ *)&v12);
    v6 = v7;
    if ( v7 )
    {
      if ( (int)UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() >= 0 )
      {
        v9 = ghsemPublicPFT;
        GreAcquireSemaphore(ghsemPublicPFT);
        LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v7, (struct XDCOBJ *)&v10, &v14, &v8, &v13, 0);
        SEMOBJ::vUnlock((SEMOBJ *)&v9);
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v6);
        v1 = v10;
        goto LABEL_3;
      }
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v6);
    }
  }
  else
  {
    EngSetLastError(6u);
  }
  v1 = v10;
  v2 = 0x10000;
LABEL_4:
  if ( v1 )
  {
    if ( (_DWORD)v11 && (*((_DWORD *)v1 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v11) )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v10);
        if ( UserAttr )
          DC::RestoreAttributes(v10, UserAttr);
        v1 = v10;
      }
      *((_DWORD *)v1 + 11) &= ~2u;
      v1 = v10;
      LODWORD(v11) = 0;
    }
    LODWORD(v12) = 0;
    v4 = *(_QWORD *)v1;
    HmgDecrementExclusiveReferenceCountEx(v1, HIDWORD(v11), &v12);
    if ( (_DWORD)v12 )
      bDeleteDCInternalEx(v4, 0LL);
  }
  return v2;
}
