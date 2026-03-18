/*
 * XREFs of _xxxPSMTextOut@24 @ 0x1AF136
 * Callers:
 *     _xxxDrawMenuBarUnderlines@8 @ 0xCC2CA (_xxxDrawMenuBarUnderlines@8.c)
 *     ?xxxDrawMenuItemText@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGHH@Z @ 0x1A9277 (-xxxDrawMenuItemText@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGHH@Z.c)
 *     _xxxRealDrawMenuItem@24 @ 0x1AA53B (_xxxRealDrawMenuItem@24.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _GreExtTextOutWInternal@40 @ 0x78958 (_GreExtTextOutWInternal@40.c)
 *     _GreGetTextMetricsW@8 @ 0x84442 (_GreGetTextMetricsW@8.c)
 *     _GreSetBkColor@8 @ 0x90F50 (_GreSetBkColor@8.c)
 *     _CALL_LPK@4 @ 0xBC83A (_CALL_LPK@4.c)
 *     _GreGetTextColor@4 @ 0xC1E50 (_GreGetTextColor@4.c)
 *     _GreGetTextExtentW@20 @ 0xE26D8 (_GreGetTextExtentW@20.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _xxxClientPSMTextOut@24 @ 0x19495D (_xxxClientPSMTextOut@24.c)
 *     _GetPrefixCount@16 @ 0x1B837E (_GetPrefixCount@16.c)
 */

unsigned int __stdcall xxxPSMTextOut(HDC a1, ERECTL *a2, struct XDCOBJ *a3, const WCHAR *a4, unsigned int a5, int a6)
{
  unsigned __int16 *v6; // ebx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  unsigned int result; // eax
  int TextMetricsW; // eax
  int v11; // edi
  int v12; // eax
  struct XDCOBJ *v13; // edi
  int TextColor; // eax
  int v15; // esi
  ERECTL *SourceString; // [esp+Ch] [ebp-BCh]
  unsigned __int16 v17; // [esp+10h] [ebp-B8h]
  struct _UNICODE_STRING DestinationString; // [esp+18h] [ebp-B0h] BYREF
  int v19; // [esp+20h] [ebp-A8h]
  struct tagSIZE v20; // [esp+24h] [ebp-A4h] BYREF
  _DWORD v21[15]; // [esp+2Ch] [ebp-9Ch] BYREF
  _BYTE v22[76]; // [esp+68h] [ebp-60h] BYREF
  int v23[4]; // [esp+B4h] [ebp-14h] BYREF

  v20.cx = 0;
  v20.cy = 0;
  v6 = (unsigned __int16 *)&unk_2785E8;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  if ( CALL_LPK(ThreadWin32Thread) )
  {
    *(_DWORD *)&DestinationString.Length = 0;
    DestinationString.Buffer = 0;
    RtlInitUnicodeString(&DestinationString, a4);
    return (unsigned int)xxxClientPSMTextOut(a1, (int)a2, (int)a3, (const void **)&DestinationString, a5, a6);
  }
  else if ( a5 < 0xFF || (result = Win32AllocPool(2 * a5 + 2, 1953657685), (v6 = (unsigned __int16 *)result) != 0) )
  {
    result = GetPrefixCount(v6, a5);
    v17 = result;
    SourceString = a2;
    if ( (((unsigned int)&loc_1FFFFC + 4) & a6) == 0 )
    {
      GreExtTextOutWInternal(a1, a2, a3, 0, 0, v6, (struct tagRECT *)(a5 - HIWORD(result)), 0, 0, 0);
      LOWORD(result) = v17;
    }
    result = (unsigned __int16)result;
    if ( (_WORD)result != 0xFFFF && (a6 & 0x100000) == 0 )
    {
      memset(v22, 0, 0x44u);
      TextMetricsW = GreGetTextMetricsW(a1, (struct RFONTOBJ *)v22);
      qmemcpy(v21, v22, sizeof(v21));
      if ( TextMetricsW )
      {
        v11 = v21[8];
        v19 = v21[1];
      }
      else
      {
        v11 = 0;
        v19 = 0;
      }
      *(_DWORD *)&DestinationString.Length = v11;
      if ( v17 )
      {
        GreGetTextExtentW(a1, v6, v17, &v20, 1);
        v12 = v17;
        SourceString = (ERECTL *)((char *)a2 + v20.cx - v11);
      }
      else
      {
        v12 = 0;
      }
      GreGetTextExtentW(a1, &v6[v12], 1u, &v20, 1);
      v13 = (struct XDCOBJ *)((char *)a3 + v19 + 1);
      v23[0] = (int)SourceString;
      v23[1] = (int)v13;
      v23[2] = (int)SourceString + LOWORD(v20.cx) - *(_DWORD *)&DestinationString.Length / 2;
      v23[3] = (int)v13 + 1;
      TextColor = GreGetTextColor(a1);
      v15 = GreSetBkColor(a1, TextColor);
      GreExtTextOutWInternal(a1, SourceString, v13, 2, (ERECTL **)v23, (unsigned __int16 *)byte_FC318, 0, 0, 0, 0);
      result = GreSetBkColor(a1, v15);
    }
    if ( v6 != (unsigned __int16 *)&unk_2785E8 )
      return Win32FreePool(v6);
  }
  return result;
}
