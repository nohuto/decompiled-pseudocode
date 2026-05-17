/*
 * XREFs of _LdrpMakeUnicodeStringFromPathElement@12 @ 0x4B330CBB
 * Callers:
 *     _LdrpLogEtwDllSearchResults@8 @ 0x4B32FECC (_LdrpLogEtwDllSearchResults@8.c)
 * Callees:
 *     _RtlGetCurrentDirectory_U@8 @ 0x4B2A7BB0 (_RtlGetCurrentDirectory_U@8.c)
 *     _RtlCreateUnicodeString@8 @ 0x4B2D40C0 (_RtlCreateUnicodeString@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlStringCchCopyExW@24 @ 0x4B330DC4 (_RtlStringCchCopyExW@24.c)
 */

int __fastcall LdrpMakeUnicodeStringFromPathElement(int a1, int a2, int *a3)
{
  unsigned int v4; // edi
  _DWORD *v5; // eax
  unsigned int v6; // edx
  const unsigned __int16 *v7; // ecx
  int v8; // eax
  int v10; // [esp+10h] [ebp-C8Ch] BYREF
  int v11; // [esp+14h] [ebp-C88h]
  unsigned __int16 Src[1598]; // [esp+18h] [ebp-C84h] BYREF

  v10 = 0;
  v11 = 0;
  if ( a2 == 4 )
  {
    if ( RtlGetCurrentDirectory_U(0xC78u, (char *)Src) )
    {
      if ( !RtlCreateUnicodeString((int)&v10, Src) )
        return 0;
LABEL_4:
      *a3 = v10;
      a3[1] = v11;
      return 0;
    }
  }
  else
  {
    v4 = *(unsigned __int16 *)(a1 + 68);
    v5 = (_DWORD *)(a1 + 20);
    v6 = 0;
    while ( *v5 != a2 )
    {
      ++v6;
      ++v5;
      if ( v6 >= v4 )
        return -1073741275;
    }
    if ( v6 >= v4 )
      return -1073741275;
    v7 = *(const unsigned __int16 **)(a1 + 4 * v6 + 44);
    if ( v6 != v4 - 1 )
    {
      v8 = RtlStringCchCopyExW(v7, 0, 0, v7);
      if ( v8 < 0 && v8 != -2147483643 )
        return -1073741823;
      v7 = Src;
    }
    if ( RtlCreateUnicodeString((int)&v10, v7) )
      goto LABEL_4;
  }
  return -1073741823;
}
