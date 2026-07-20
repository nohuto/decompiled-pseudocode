/*
 * XREFs of SmpConfigureEnvironment @ 0x14000DEC0
 * Callers:
 *     <none>
 * Callees:
 *     memcpy_0 @ 0x14000EF97 (memcpy_0.c)
 */

NTSTATUS __fastcall SmpConfigureEnvironment(wchar_t *Str1, __int64 a2, const WCHAR *a3, unsigned int a4)
{
  SIZE_T v5; // rsi
  NTSTATUS result; // eax
  WCHAR *Heap; // rax
  const WCHAR *v9; // rbx
  struct _UNICODE_STRING Value; // [rsp+20h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v5 = a4;
  RtlInitUnicodeString(&DestinationString, Str1);
  RtlInitUnicodeString(&Value, a3);
  result = RtlSetEnvironmentVariable(0LL, &DestinationString, &Value);
  if ( result >= 0 )
  {
    if ( !_wcsicmp(Str1, L"Path") && ++SmpCalledConfigEnv == 2 )
    {
      Heap = (WCHAR *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v5);
      SmpDefaultLibPathBuffer = (__int64)Heap;
      v9 = Heap;
      if ( !Heap )
        return -1073741801;
      memcpy_0(Heap, a3, v5);
      RtlInitUnicodeString(&SmpDefaultLibPath, v9);
    }
    return 0;
  }
  return result;
}
