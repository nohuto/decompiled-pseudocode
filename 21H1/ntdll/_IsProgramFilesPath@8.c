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

NTSTATUS __fastcall IsProgramFilesPath(const wchar_t *a1, unsigned int *a2)
{
  NTSTATUS result; // eax
  wchar_t *Heap; // eax
  NTSTATUS v4; // eax
  wchar_t *Buffer; // edi
  int v6; // ebx
  unsigned int v7; // esi
  SIZE_T v8; // [esp-4h] [ebp-2ECh]
  _UNICODE_STRING Value; // [esp+18h] [ebp-2D0h] BYREF
  _BYTE v12[708]; // [esp+20h] [ebp-2C8h] BYREF

  *a2 = 0;
  Value.Buffer = (wchar_t *)v12;
  Value.MaximumLength = 702;
  result = RtlQueryEnvironmentVariable_U(0, (PUNICODE_STRING)&stru_4B281200, &Value);
  if ( result == -1073741789 )
  {
    Value.MaximumLength = Value.Length + 2;
    LODWORD(v8) = (unsigned __int16)(Value.Length + 2);
    Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v8);
    Value.Buffer = Heap;
  }
  else
  {
    if ( result < 0 )
      return result;
    Heap = Value.Buffer;
  }
  if ( !Heap )
    return -1073741637;
  v4 = RtlQueryEnvironmentVariable_U(0, (PUNICODE_STRING)&stru_4B281200, &Value);
  Buffer = Value.Buffer;
  v6 = v4;
  if ( v4 >= 0 )
  {
    v7 = wcslen(Value.Buffer);
    LODWORD(v8) = v7;
    if ( _wcsnicmp(a1, Value.Buffer, v8) )
      v6 = -1073741637;
    else
      *a2 = v7;
  }
  if ( Buffer != (wchar_t *)v12 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
  return v6;
}
