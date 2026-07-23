/*
 * XREFs of LdrpTouchThreadStack @ 0x18008335C
 * Callers:
 *     _LdrpInitialize @ 0x180074B8C (_LdrpInitialize.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x18009D270 (ZwQueryVirtualMemory.c)
 *     LdrpGenericExceptionFilter @ 0x1800D543C (LdrpGenericExceptionFilter.c)
 */

NTSTATUS __fastcall LdrpTouchThreadStack(unsigned __int64 a1)
{
  struct _TEB *v2; // rdi
  NTSTATUS result; // eax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // [rsp+30h] [rbp-48h]
  __int64 v7; // [rsp+38h] [rbp-40h] BYREF
  __int64 v8; // [rsp+40h] [rbp-38h]
  ULONG_PTR v9; // [rsp+88h] [rbp+10h] BYREF

  v2 = NtCurrentTeb();
  result = ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             v2->NtTib.StackLimit,
             MemoryBasicInformation,
             &v7,
             0x30uLL,
             &v9);
  if ( result >= 0 )
  {
    v4 = (unsigned __int64)v2->NtTib.StackBase - 4096;
    v6 = v4;
    if ( v4 <= a1 )
    {
      v5 = v8 + 12288;
    }
    else
    {
      v5 = v4 - a1;
      if ( v4 - a1 <= v8 + 12288 )
        v5 = v8 + 12288;
    }
    while ( v4 >= v5 )
    {
      v4 = v6 - 4096;
      v6 -= 4096LL;
    }
    return 0;
  }
  return result;
}
