/*
 * XREFs of RtlpOpenBaseImageFileOptionsKey @ 0x1406D3A14
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1406D38E4 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlQueryImageFileExecutionOptions @ 0x14078FE40 (RtlQueryImageFileExecutionOptions.c)
 * Callees:
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x1407BAA78 (RtlpOpenBaseImageFileOptionsKeyEx.c)
 */

__int64 __fastcall RtlpOpenBaseImageFileOptionsKey(_QWORD *a1)
{
  HANDLE v1; // rax
  __int64 result; // rax
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  v1 = (HANDLE)qword_140CDB400;
  Handle = (HANDLE)qword_140CDB400;
  if ( qword_140CDB400 )
  {
LABEL_2:
    *a1 = v1;
    return 0LL;
  }
  result = RtlpOpenBaseImageFileOptionsKeyEx(&Handle);
  if ( (int)result >= 0 )
  {
    if ( !RtlpDisableIFEOCaching && _InterlockedCompareExchange64(&qword_140CDB400, (signed __int64)Handle, 0LL) )
    {
      ZwClose(Handle);
      v1 = (HANDLE)qword_140CDB400;
    }
    else
    {
      v1 = Handle;
    }
    goto LABEL_2;
  }
  return result;
}
