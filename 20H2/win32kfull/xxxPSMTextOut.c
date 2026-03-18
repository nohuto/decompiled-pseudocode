/*
 * XREFs of xxxPSMTextOut @ 0x1C0252ACC
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C0122314 (xxxDrawMenuBarUnderlines.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C024BC0C (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C024D304 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GreGetTextMetricsW @ 0x1C0024D94 (GreGetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x1C0024ECC (GreGetTextExtentW.c)
 *     GreSetBkColor @ 0x1C0092394 (GreSetBkColor.c)
 *     GreExtTextOutWInternal @ 0x1C009A950 (GreExtTextOutWInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     GreGetTextColor @ 0x1C014CF8C (GreGetTextColor.c)
 *     CALL_LPK @ 0x1C014E024 (CALL_LPK.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     xxxClientPSMTextOut @ 0x1C0232F54 (xxxClientPSMTextOut.c)
 *     GetPrefixCount @ 0x1C025E8C4 (GetPrefixCount.c)
 */

HDC __fastcall xxxPSMTextOut(HDC a1, unsigned int a2, unsigned int a3, const WCHAR *a4, unsigned int a5, int a6)
{
  unsigned __int16 *v6; // rsi
  int v8; // r12d
  __int64 ThreadWin32Thread; // rax
  HDC result; // rax
  int PrefixCount; // edi
  int TextMetricsW; // eax
  int v16; // ebx
  LONG v17; // edi
  int TextColor; // eax
  int v19; // ebx
  struct tagSIZE v20; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v22; // [rsp+68h] [rbp-98h]
  __int128 v23; // [rsp+88h] [rbp-78h]
  _OWORD v24[5]; // [rsp+B0h] [rbp-50h] BYREF
  struct tagRECT v25; // [rsp+100h] [rbp+0h] BYREF

  v6 = &word_1C0340A50;
  v8 = 0;
  v20 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, a4);
    return xxxClientPSMTextOut(a1, a2, a3, &DestinationString.Length, a5, a6);
  }
  else if ( a5 < 0xFF
         || (result = (HDC)Win32AllocPool(2LL * (int)(a5 + 1), 1953657685LL), (v6 = (unsigned __int16 *)result) != 0LL) )
  {
    PrefixCount = GetPrefixCount(a4, a5, v6, a5);
    if ( (a6 & 0x200000) == 0 )
      GreExtTextOutWInternal(a1, a2, a3, 0, 0LL, v6, a5 - HIWORD(PrefixCount), 0LL, 0LL, 0);
    if ( (_WORD)PrefixCount != 0xFFFF && (a6 & 0x100000) == 0 )
    {
      memset(v24, 0, 0x44uLL);
      TextMetricsW = GreGetTextMetricsW(a1, (struct _TMW_INTERNAL *)v24);
      v22 = v24[0];
      v23 = v24[2];
      if ( TextMetricsW )
      {
        v16 = v23;
        v8 = DWORD1(v22);
      }
      else
      {
        v16 = 0;
      }
      if ( (_WORD)PrefixCount )
      {
        GreGetTextExtentW(a1, v6, (unsigned __int16)PrefixCount, &v20, 1u);
        a2 += v20.cx - v16;
      }
      GreGetTextExtentW(a1, &v6[(unsigned __int16)PrefixCount], 1u, &v20, 1u);
      v17 = v8 + a3 + 1;
      v25.left = a2;
      v25.top = v17;
      v25.bottom = v17 + 1;
      v25.right = a2 + LOWORD(v20.cx) - v16 / 2;
      TextColor = GreGetTextColor(a1);
      v19 = GreSetBkColor(a1, TextColor);
      GreExtTextOutWInternal(a1, a2, v17, 2u, &v25, (unsigned __int16 *)&word_1C02E436C, 0, 0LL, 0LL, 0);
      GreSetBkColor(a1, v19);
    }
    result = (HDC)&word_1C0340A50;
    if ( v6 != &word_1C0340A50 )
      return (HDC)Win32FreePool(v6);
  }
  return result;
}
