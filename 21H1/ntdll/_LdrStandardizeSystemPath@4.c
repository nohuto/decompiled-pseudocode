/*
 * XREFs of _LdrStandardizeSystemPath@4 @ 0x4B2BFCB0
 * Callers:
 *     _GetOverlayFilePath@16 @ 0x4B2B8D7B (_GetOverlayFilePath@16.c)
 *     _LdrLoadAlternateResourceModuleEx@20 @ 0x4B2BBDA0 (_LdrLoadAlternateResourceModuleEx@20.c)
 *     _LdrpPreprocessDllName@16 @ 0x4B2CB090 (_LdrpPreprocessDllName@16.c)
 *     _LdrpMapDllSearchPath@4 @ 0x4B2DE148 (_LdrpMapDllSearchPath@4.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _NLS_UPCASE@4 @ 0x4B2BFDC8 (_NLS_UPCASE@4.c)
 *     _RtlAppendUnicodeToString@8 @ 0x4B2BFE00 (_RtlAppendUnicodeToString@8.c)
 *     _RtlGetNtSystemRoot@0 @ 0x4B2C0180 (_RtlGetNtSystemRoot@0.c)
 *     _RtlReplaceSystemDirectoryInPath@16 @ 0x4B2E6110 (_RtlReplaceSystemDirectoryInPath@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

PUNICODE_STRING __cdecl LdrStandardizeSystemPath(PUNICODE_STRING SystemPath)
{
  PUNICODE_STRING v1; // ebx
  const WCHAR *NtSystemRoot; // eax
  unsigned __int16 Length; // si
  PUNICODE_STRING result; // eax
  wchar_t *Buffer; // edi
  wchar_t *v6; // eax
  char *v7; // ebx
  wchar_t *v8; // ecx
  __int16 v9; // si
  _UNICODE_STRING v10; // [esp+10h] [ebp-234h] BYREF
  _UNICODE_STRING Destination; // [esp+18h] [ebp-22Ch] BYREF
  char v12; // [esp+20h] [ebp-224h] BYREF

  v1 = SystemPath;
  Destination.Buffer = (wchar_t *)&v12;
  *(_DWORD *)&Destination.Length = 34865152;
  NtSystemRoot = RtlGetNtSystemRoot();
  RtlAppendUnicodeToString(&Destination, NtSystemRoot);
  Length = Destination.Length;
  v10.Buffer = (wchar_t *)Destination.Length;
  RtlAppendUnicodeToString(&Destination, L"\\SysWOW64");
  result = (PUNICODE_STRING)SystemPath->Length;
  Buffer = Destination.Buffer;
  if ( (unsigned int)result >= Destination.Length )
  {
    v6 = (wchar_t *)((char *)Destination.Buffer + Destination.Length);
    Destination.Buffer = v6;
    if ( Buffer < (wchar_t *)((char *)Buffer + Destination.Length) )
    {
      v7 = (char *)((char *)SystemPath->Buffer - (char *)Buffer);
      do
      {
        if ( *Buffer != *(wchar_t *)((char *)Buffer + (_DWORD)v7) )
        {
          v9 = NLS_UPCASE(*(unsigned __int16 *)((char *)Buffer + (_DWORD)v7));
          result = (PUNICODE_STRING)NLS_UPCASE(*Buffer);
          if ( (_WORD)result != v9 )
            return result;
          v6 = Destination.Buffer;
        }
        ++Buffer;
      }
      while ( Buffer < v6 );
      v1 = SystemPath;
      Length = (unsigned __int16)v10.Buffer;
    }
    v8 = v1->Buffer;
    *(_DWORD *)&v10.Length = *(_DWORD *)&v1->Length;
    v10.Length -= Length;
    v10.MaximumLength -= Length;
    v10.Buffer = &v8[Length >> 1];
    return (PUNICODE_STRING)RtlReplaceSystemDirectoryInPath(&v10, 0x14Cu, 1u, 0);
  }
  return result;
}
