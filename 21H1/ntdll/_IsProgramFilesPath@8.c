/*
 * XREFs of _IsProgramFilesPath@8 @ 0x4B2DAE59
 * Callers:
 *     _IsOverlaySupportedPath@12 @ 0x4B2B8E4D (_IsOverlaySupportedPath@12.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlQueryEnvironmentVariable_U@12 @ 0x4B2DB100 (_RtlQueryEnvironmentVariable_U@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __wcsnicmp @ 0x4B2F7AC0 (__wcsnicmp.c)
 */

int __fastcall IsProgramFilesPath(const wchar_t *a1, size_t *a2)
{
  int result; // eax
  wchar_t *Heap; // eax
  int v4; // eax
  wchar_t *v5; // edi
  int v6; // ebx
  size_t v7; // esi
  __int16 v10; // [esp+18h] [ebp-2D0h] BYREF
  __int16 v11; // [esp+1Ah] [ebp-2CEh]
  wchar_t *String2; // [esp+1Ch] [ebp-2CCh]
  _BYTE v13[708]; // [esp+20h] [ebp-2C8h] BYREF

  *a2 = 0;
  String2 = (wchar_t *)v13;
  v11 = 702;
  result = RtlQueryEnvironmentVariable_U(0, &dword_4B281200, &v10);
  if ( result == -1073741789 )
  {
    v11 = v10 + 2;
    Heap = (wchar_t *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, (unsigned __int16)(v10 + 2));
    String2 = Heap;
  }
  else
  {
    if ( result < 0 )
      return result;
    Heap = String2;
  }
  if ( !Heap )
    return -1073741637;
  v4 = RtlQueryEnvironmentVariable_U(0, &dword_4B281200, &v10);
  v5 = String2;
  v6 = v4;
  if ( v4 >= 0 )
  {
    v7 = wcslen(String2);
    if ( _wcsnicmp(a1, String2, v7) )
      v6 = -1073741637;
    else
      *a2 = v7;
  }
  if ( v5 != (wchar_t *)v13 )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v5);
  return v6;
}
