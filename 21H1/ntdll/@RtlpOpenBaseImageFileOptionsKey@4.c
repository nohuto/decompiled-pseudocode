/*
 * XREFs of @RtlpOpenBaseImageFileOptionsKey@4 @ 0x4B2E5F35
 * Callers:
 *     _RtlpOpenImageFileOptionsKeyEx@16 @ 0x4B2E5DF9 (_RtlpOpenImageFileOptionsKeyEx@16.c)
 *     _RtlQueryImageFileExecutionOptions@28 @ 0x4B2E9700 (_RtlQueryImageFileExecutionOptions@28.c)
 * Callees:
 *     @RtlpOpenBaseImageFileOptionsKeyEx@12 @ 0x4B2E5F7F (@RtlpOpenBaseImageFileOptionsKeyEx@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 */

int __thiscall RtlpOpenBaseImageFileOptionsKey(_DWORD *this)
{
  HANDLE v1; // edx
  int result; // eax
  HANDLE Handle; // [esp+Ch] [ebp-4h] BYREF

  v1 = (HANDLE)dword_4B3A67EC;
  Handle = (HANDLE)dword_4B3A67EC;
  if ( dword_4B3A67EC )
    goto LABEL_2;
  result = RtlpOpenBaseImageFileOptionsKeyEx(&Handle, 9, 0);
  if ( result >= 0 )
  {
    v1 = Handle;
    if ( _InterlockedCompareExchange(&dword_4B3A67EC, (signed __int32)Handle, 0) )
    {
      NtClose(v1);
      v1 = (HANDLE)dword_4B3A67EC;
    }
LABEL_2:
    *this = v1;
    return 0;
  }
  return result;
}
