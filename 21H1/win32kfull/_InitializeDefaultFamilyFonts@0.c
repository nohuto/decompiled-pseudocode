/*
 * XREFs of _InitializeDefaultFamilyFonts@0 @ 0x2926EC
 * Callers:
 *     _vInitMapper@0 @ 0x292920 (_vInitMapper@0.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?StringCchCopyW@@YGJPAGIPBG@Z @ 0x8A554 (-StringCchCopyW@@YGJPAGIPBG@Z.c)
 *     ?StringCchLengthW@@YGJPBGIPAI@Z @ 0xDF3CE (-StringCchLengthW@@YGJPBGIPAI@Z.c)
 *     ?bQueryValueKey@@YGHPBGPAXPAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z @ 0xDF440 (-bQueryValueKey@@YGHPBGPAXPAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z.c)
 *     ?GetGreRegKey@@YGJPAPAXKPBG@Z @ 0xDF7D8 (-GetGreRegKey@@YGJPAPAXKPBG@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __usercall InitializeDefaultFamilyFonts@<eax>(
        struct _KEY_VALUE_PARTIAL_INFORMATION *a1@<edi>,
        unsigned __int16 *a2@<esi>)
{
  int result; // eax
  unsigned int i; // esi
  unsigned __int16 **v4; // eax
  struct _KEY_VALUE_PARTIAL_INFORMATION *v5; // [esp-8h] [ebp-68h]
  unsigned __int16 *v6; // [esp-4h] [ebp-64h]
  unsigned __int16 v7[2]; // [esp+0h] [ebp-60h] BYREF
  HANDLE Handle; // [esp+4h] [ebp-5Ch] BYREF
  char KeyValueInformation[4]; // [esp+8h] [ebp-58h] BYREF
  int v10; // [esp+Ch] [ebp-54h]
  size_t cchDest[18]; // [esp+14h] [ebp-4Ch] BYREF

  result = GetGreRegKey(
             0x20019u,
             &Handle,
             L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\FontMapper\\FamilyDefaults",
             *(unsigned int *)v7,
             0);
  if ( result >= 0 )
  {
    v6 = a2;
    v5 = a1;
    for ( i = 0; i < 6; ++i )
    {
      if ( bQueryValueKey(Handle, (const WCHAR *)dword_24D48C[i], KeyValueInformation, 0x54u, v5, (unsigned int)v6) )
      {
        *(_DWORD *)v7 = 0;
        if ( v10 == 1 && StringCchLengthW((int)cchDest, v7, (unsigned int)v5, (unsigned int *)v6) >= 0 )
        {
          v4 = (unsigned __int16 **)PALLOCMEM2(2 * *(_DWORD *)v7 + 2, 1717855815, 1);
          (&gpwszFamilyDefaultFonts)[i] = v4;
          if ( v4 )
          {
            if ( StringCchCopyW((size_t)cchDest, (unsigned int)v5, v6) < 0 )
            {
              Win32FreePool((PATHOBJ *)(&gpwszFamilyDefaultFonts)[i]);
              (&gpwszFamilyDefaultFonts)[i] = 0;
            }
          }
        }
      }
    }
    return ZwClose(Handle);
  }
  return result;
}
