/*
 * XREFs of ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C0073A7C
 * Callers:
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C0022710 (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C00228B0 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C0022A08 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 * Callees:
 *     xxxAddFontResourceW @ 0x1C0073C1C (xxxAddFontResourceW.c)
 *     ?vCheckMMInstance@@YAXPEAGPEAUtagDESIGNVECTOR@@@Z @ 0x1C00764C0 (-vCheckMMInstance@@YAXPEAGPEAUtagDESIGNVECTOR@@@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00B9A60 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     ThreadLockExchange @ 0x1C00D750C (ThreadLockExchange.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     ?RtlStringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C01D3D90 (-RtlStringCchCatW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall xxxbEnumerateRegistryFontsInternal(HANDLE KeyHandle)
{
  ULONG v2; // r14d
  __int64 result; // rax
  __int64 v4; // rdi
  ULONG i; // esi
  NTSTATUS v6; // eax
  unsigned __int64 v7; // rax
  __int16 v8; // bx
  WCHAR *v9; // rbx
  __int64 v10; // rax
  void *v11; // rbx
  ULONG ResultLength; // [rsp+30h] [rbp-59h] BYREF
  __int128 v13; // [rsp+38h] [rbp-51h] BYREF
  __int64 v14; // [rsp+48h] [rbp-41h]
  _DWORD v15[20]; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int16 v16[4]; // [rsp+A0h] [rbp+17h] BYREF
  wchar_t v17; // [rsp+A8h] [rbp+1Fh]

  memset(v15, 0, 0x48uLL);
  v2 = 1074;
  *(_QWORD *)v16 = *(_QWORD *)L".FON";
  v17 = aFon[4];
  ResultLength = 0;
  v14 = 0LL;
  v13 = 0LL;
  result = Win32AllocPool(1074LL, 1919972181LL);
  v4 = result;
  if ( result )
  {
    PushW32ThreadLock(result, &v13, Win32FreePool);
    for ( i = 0; ; ++i )
    {
      v6 = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, (PVOID)v4, v2 - 10, &ResultLength);
      if ( v6 != -2147483643 && v6 != -1073741789 )
        goto LABEL_5;
      ResultLength += 10;
      v10 = Win32AllocPool(ResultLength, 1919972181LL);
      v11 = (void *)v10;
      if ( v10 )
      {
        ThreadLockExchange(v10, &v13);
        Win32FreePool(v4);
        v2 = ResultLength;
        v4 = (__int64)v11;
        v6 = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, v11, ResultLength - 10, &ResultLength);
        if ( v6 != -2147483643 && v6 != -1073741789 )
        {
LABEL_5:
          if ( v6 < 0 )
          {
            PopAndFreeAlwaysW32ThreadLock(&v13);
            return 1LL;
          }
          if ( *(_DWORD *)(v4 + 4) == 1 )
          {
            v7 = (unsigned __int64)*(unsigned int *)(v4 + 16) >> 1;
            v8 = *(_WORD *)(v4 + 2 * v7 + 20);
            *(_WORD *)(v4 + 2 * v7 + 20) = 0;
            vCheckMMInstance((unsigned __int16 *)(v4 + 20), (struct tagDESIGNVECTOR *)v15);
            *(_WORD *)(v4 + 2 * ((unsigned __int64)*(unsigned int *)(v4 + 16) >> 1) + 20) = v8;
            v9 = (WCHAR *)(v4 + *(unsigned int *)(v4 + 8));
            if ( wcschr(v9, 0x2Eu) )
              xxxAddFontResourceW(v9);
            else
              RtlStringCchCatW(v9, (unsigned __int64)(v2 - *(_DWORD *)(v4 + 8)) >> 1, v16);
          }
        }
      }
    }
  }
  return result;
}
