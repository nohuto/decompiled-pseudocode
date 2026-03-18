/*
 * XREFs of __GetAltTabInfo@20 @ 0x15D068
 * Callers:
 *     _NtUserGetAltTabInfo@24 @ 0x16194A (_NtUserGetAltTabInfo@24.c)
 * Callees:
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QBEPAU_LARGE_UNICODE_STRING@@AAU3@@Z @ 0x1D702 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QBEPAU_LARGE_UNICODE_STRING@@AAU3@@Z.c)
 *     _TextCopy@12 @ 0x1D7C6 (_TextCopy@12.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?Getpswi@@YGPAUtagSwitchWndInfo@@PAUtagWND@@@Z @ 0x15C2D1 (-Getpswi@@YGPAUtagSwitchWndInfo@@PAUtagWND@@@Z.c)
 */

int __fastcall _GetAltTabInfo(int a1, _DWORD *a2, PCHAR MultiByteString, ULONG BytesInMultiByteString, int a5)
{
  struct tagSwitchWndInfo *v7; // eax
  ULONG v8; // edi
  int v9; // eax
  struct _LARGE_UNICODE_STRING *StrName; // eax
  int v12; // [esp-4h] [ebp-3Ch]
  _BYTE v13[12]; // [esp+10h] [ebp-28h] BYREF
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  if ( gspwndAltTab && (v7 = Getpswi((_DWORD *)gspwndAltTab)) != 0 )
  {
    a2[1] = *((_DWORD *)v7 + 5);
    a2[2] = *((_DWORD *)v7 + 9);
    a2[3] = *((_DWORD *)v7 + 10);
    a2[4] = *((_DWORD *)v7 + 12);
    a2[5] = *((_DWORD *)v7 + 13);
    a2[6] = *((_DWORD *)v7 + 24);
    a2[7] = *((_DWORD *)v7 + 24);
    a2[8] = *((_DWORD *)v7 + 16);
    a2[9] = *((_DWORD *)v7 + 17);
    v8 = BytesInMultiByteString;
    if ( !BytesInMultiByteString || a1 < 0 )
      return 1;
    ms_exc.registration.TryLevel = 0;
    if ( a1 >= *((_DWORD *)v7 + 5)
      || (_mm_lfence(), (v9 = HMValidateHandleNoSecure(*(_DWORD *)(*((_DWORD *)v7 + 2) + 4 * a1 + 16), 1)) == 0) )
    {
      if ( a5 )
        *MultiByteString = 0;
      else
        *(_WORD *)MultiByteString = 0;
      goto LABEL_15;
    }
    if ( !a5 )
    {
      memset(v13, 0, sizeof(v13));
      v12 = BytesInMultiByteString;
      StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                  (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(v9 + 100),
                  (struct _LARGE_UNICODE_STRING *)v13);
      TextCopy((int)StrName, MultiByteString, v12);
      goto LABEL_15;
    }
    BytesInMultiByteString = 0;
    RtlUnicodeToMultiByteN(
      MultiByteString,
      v8 - 1,
      &BytesInMultiByteString,
      *(PCWCH *)(v9 + 100),
      *(_DWORD *)(*(_DWORD *)(v9 + 20) + 116));
    if ( BytesInMultiByteString < v8 )
    {
      MultiByteString[BytesInMultiByteString] = 0;
LABEL_15:
      ms_exc.registration.TryLevel = -2;
      return 1;
    }
    *MultiByteString = 0;
    ms_exc.registration.TryLevel = -2;
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)0x490);
  }
  return 0;
}
