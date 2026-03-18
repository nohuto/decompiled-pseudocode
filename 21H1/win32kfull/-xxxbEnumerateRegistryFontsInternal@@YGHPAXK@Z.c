/*
 * XREFs of ?xxxbEnumerateRegistryFontsInternal@@YGHPAXK@Z @ 0xD7046
 * Callers:
 *     ?xxxbEnumerateRegistryFonts@@YGHKIPBG0@Z @ 0xD6F2C (-xxxbEnumerateRegistryFonts@@YGHKIPBG0@Z.c)
 * Callees:
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _ThreadLockExchange@8 @ 0xA378E (_ThreadLockExchange@8.c)
 *     _xxxAddFontResourceW@12 @ 0xD716A (_xxxAddFontResourceW@12.c)
 *     ?vCheckMMInstance@@YGXPAGPAUtagDESIGNVECTOR@@@Z @ 0xD7352 (-vCheckMMInstance@@YGXPAGPAUtagDESIGNVECTOR@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?RtlStringCchCatW@@YGJPAGIPBG@Z @ 0x14346B (-RtlStringCchCatW@@YGJPAGIPBG@Z.c)
 */

int __fastcall xxxbEnumerateRegistryFontsInternal(void *a1, void *a2)
{
  ULONG v2; // ebx
  int v3; // esi
  _DWORD *v4; // edi
  NTSTATUS v5; // eax
  int v6; // eax
  __int16 v7; // si
  const WCHAR *v8; // esi
  int v10; // eax
  _DWORD *v11; // esi
  unsigned __int16 *v12; // [esp+0h] [ebp-80h]
  struct tagDESIGNVECTOR *v13; // [esp+4h] [ebp-7Ch]
  HANDLE v14[4]; // [esp+Ch] [ebp-74h] BYREF
  HANDLE KeyHandle; // [esp+1Ch] [ebp-64h]
  ULONG v16; // [esp+20h] [ebp-60h]
  ULONG ResultLength; // [esp+24h] [ebp-5Ch] BYREF
  _DWORD v18[18]; // [esp+28h] [ebp-58h] BYREF
  _DWORD v19[2]; // [esp+70h] [ebp-10h] BYREF
  wchar_t v20; // [esp+78h] [ebp-8h]

  v2 = 0;
  v14[3] = a2;
  KeyHandle = a1;
  memset(v18, 0, sizeof(v18));
  ResultLength = 0;
  v19[0] = *(_DWORD *)L".FON";
  v19[1] = *(_DWORD *)L"ON";
  v20 = aFon[4];
  v3 = 1074;
  memset(v14, 0, 12);
  v16 = 1074;
  v4 = (_DWORD *)Win32AllocPool(1074, 1919972181);
  if ( v4 )
  {
    PushW32ThreadLock((int)v4, v14, (int)Win32FreePool);
    while ( 1 )
    {
      v5 = ZwEnumerateValueKey(KeyHandle, v2, KeyValueFullInformation, v4, v3 - 10, &ResultLength);
      if ( v5 != -2147483643 && v5 != -1073741789 )
        goto LABEL_5;
      ResultLength += 10;
      v10 = Win32AllocPool(ResultLength, 1919972181);
      v11 = (_DWORD *)v10;
      if ( v10 )
      {
        ThreadLockExchange(v10, (int)v14);
        Win32FreePool(v4);
        v16 = ResultLength;
        v4 = v11;
        v5 = ZwEnumerateValueKey(KeyHandle, v2, KeyValueFullInformation, v11, ResultLength - 10, &ResultLength);
        if ( v5 != -2147483643 && v5 != -1073741789 )
        {
LABEL_5:
          if ( v5 < 0 )
          {
            PopAndFreeAlwaysW32ThreadLock((int)v14);
            return 1;
          }
          if ( v4[1] == 1 )
          {
            v6 = v4[4] >> 1;
            v7 = *((_WORD *)v4 + v6 + 10);
            *((_WORD *)v4 + v6 + 10) = 0;
            vCheckMMInstance(v12, v13);
            *((_WORD *)v4 + (v4[4] >> 1) + 10) = v7;
            v8 = (const WCHAR *)((char *)v4 + v4[2]);
            if ( _wcschr(v8, 0x2Eu) )
              xxxAddFontResourceW(v8, v18[1] != 0 ? (unsigned int)v18 : 0);
            else
              RtlStringCchCatW((unsigned __int16 *)v19, (unsigned int)v12, (const unsigned __int16 *)v13);
          }
        }
      }
      v3 = v16;
      ++v2;
    }
  }
  return 0;
}
