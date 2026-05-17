/*
 * XREFs of RtlpOpenBaseImageFileOptionsKey @ 0x180075338
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800751DC (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlQueryImageFileExecutionOptions @ 0x18007A300 (RtlQueryImageFileExecutionOptions.c)
 * Callees:
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x180075398 (RtlpOpenBaseImageFileOptionsKeyEx.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 */

__int64 __fastcall RtlpOpenBaseImageFileOptionsKey(_QWORD *a1)
{
  HANDLE v1; // rax
  __int64 result; // rax
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  v1 = (HANDLE)qword_18016B4F8;
  Handle = (HANDLE)qword_18016B4F8;
  if ( qword_18016B4F8 )
    goto LABEL_2;
  result = RtlpOpenBaseImageFileOptionsKeyEx(&Handle, 9LL, 0LL);
  if ( (int)result >= 0 )
  {
    if ( _InterlockedCompareExchange64(&qword_18016B4F8, (signed __int64)Handle, 0LL) )
    {
      NtClose(Handle);
      v1 = (HANDLE)qword_18016B4F8;
    }
    else
    {
      v1 = Handle;
    }
LABEL_2:
    *a1 = v1;
    return 0LL;
  }
  return result;
}
