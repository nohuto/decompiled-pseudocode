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

unsigned int __stdcall LdrStandardizeSystemPath(unsigned __int16 *a1)
{
  int *v1; // ebx
  void *NtSystemRoot; // eax
  unsigned __int16 v3; // si
  unsigned int result; // eax
  _WORD *v5; // edi
  char *v6; // eax
  int v7; // ebx
  int v8; // ecx
  __int16 v9; // si
  int v10; // [esp+10h] [ebp-234h] BYREF
  int v11; // [esp+14h] [ebp-230h]
  int v12; // [esp+18h] [ebp-22Ch] BYREF
  char *v13; // [esp+1Ch] [ebp-228h]
  char v14; // [esp+20h] [ebp-224h] BYREF

  v1 = (int *)a1;
  v13 = &v14;
  v12 = 34865152;
  NtSystemRoot = (void *)RtlGetNtSystemRoot();
  RtlAppendUnicodeToString((int)&v12, NtSystemRoot);
  v3 = v12;
  v11 = (unsigned __int16)v12;
  RtlAppendUnicodeToString((int)&v12, L"\\SysWOW64");
  result = *a1;
  v5 = v13;
  if ( result >= (unsigned __int16)v12 )
  {
    v6 = &v13[(unsigned __int16)v12];
    v13 = v6;
    if ( v5 < (_WORD *)((char *)v5 + (unsigned __int16)v12) )
    {
      v7 = *((_DWORD *)a1 + 1) - (_DWORD)v5;
      do
      {
        if ( *v5 != *(_WORD *)((char *)v5 + v7) )
        {
          v9 = NLS_UPCASE(*(unsigned __int16 *)((char *)v5 + v7));
          result = NLS_UPCASE((unsigned __int16)*v5);
          if ( (_WORD)result != v9 )
            return result;
          v6 = v13;
        }
        ++v5;
      }
      while ( v5 < (_WORD *)v6 );
      v1 = (int *)a1;
      v3 = v11;
    }
    v8 = v1[1];
    v10 = *v1;
    LOWORD(v10) = v10 - v3;
    HIWORD(v10) -= v3;
    v11 = v8 + 2 * (v3 >> 1);
    return RtlReplaceSystemDirectoryInPath(&v10, 332, 1, 0);
  }
  return result;
}
