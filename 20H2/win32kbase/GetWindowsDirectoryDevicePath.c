/*
 * XREFs of GetWindowsDirectoryDevicePath @ 0x1C0088D30
 * Callers:
 *     ?ConvertHandleAndVerifyLoc@@YAPEAXPEAX@Z @ 0x1C0088AB8 (-ConvertHandleAndVerifyLoc@@YAPEAXPEAX@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ?GetSymbolicLink@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C0088E74 (-GetSymbolicLink@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     wcsrchr @ 0x1C00CBF1C (wcsrchr.c)
 */

__int64 __fastcall GetWindowsDirectoryDevicePath(PUNICODE_STRING DestinationString)
{
  WCHAR *v2; // rdi
  wchar_t *v3; // r14
  __int64 v4; // rax
  WCHAR *v5; // rsi
  int SymbolicLink; // ebx
  WCHAR *v7; // rbx
  wchar_t *v8; // rax
  wchar_t *Str[2]; // [rsp+20h] [rbp-20h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-10h] BYREF

  v2 = 0LL;
  *(_OWORD *)Str = 0LL;
  Destination = 0LL;
  v3 = (wchar_t *)Win32AllocPool(520LL, 0x626B7355u);
  v4 = Win32AllocPool(520LL, 0x626B7355u);
  v5 = (WCHAR *)v4;
  if ( v3 && v4 )
  {
    Str[1] = v3;
    LODWORD(Str[0]) = 34078720;
    SymbolicLink = GetSymbolicLink((PUNICODE_STRING)Str, L"\\SystemRoot");
    if ( SymbolicLink >= 0 )
    {
      Destination.Buffer = v5;
      *(_DWORD *)&Destination.Length = 34078720;
      while ( 1 )
      {
        v7 = v2;
        v8 = wcsrchr(Str[1], 0x5Cu);
        v2 = v8;
        if ( v7 )
          *v7 = 92;
        if ( !v8 )
          break;
        *v8 = 0;
        SymbolicLink = GetSymbolicLink(&Destination, Str[1]);
        if ( SymbolicLink >= 0 )
        {
          *v2 = 92;
          RtlAppendUnicodeToString(&Destination, v2);
          RtlCopyUnicodeString(DestinationString, &Destination);
          goto LABEL_10;
        }
      }
      RtlCopyUnicodeString(DestinationString, (PCUNICODE_STRING)Str);
      SymbolicLink = 0;
    }
  }
  else
  {
    SymbolicLink = -1073741801;
  }
LABEL_10:
  if ( v3 )
    Win32FreePool((__int64)v3);
  if ( v5 )
    Win32FreePool((__int64)v5);
  return (unsigned int)SymbolicLink;
}
