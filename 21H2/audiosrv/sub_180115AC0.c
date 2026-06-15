/*
 * XREFs of sub_180115AC0 @ 0x180115AC0
 * Callers:
 *     sub_180115A5C @ 0x180115A5C (sub_180115A5C.c)
 *     sub_180115BB8 @ 0x180115BB8 (sub_180115BB8.c)
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180115698 @ 0x180115698 (sub_180115698.c)
 */

__int64 __fastcall sub_180115AC0(int a1, unsigned int *a2)
{
  _QWORD *v4; // rdi
  int v5; // ebx
  signed int LastError; // eax

  v4 = sub_180055F40(0x18uLL);
  if ( v4 )
  {
    *v4 = off_180155BF8;
    v4[2] = 0LL;
    *((_DWORD *)v4 + 2) = 0;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    v5 = sub_180115698((__int64)v4, a1, a2);
    if ( v5 >= 0 )
    {
      if ( PostQueuedCompletionStatus(CompletionPort, 0, (ULONG_PTR)v4, 0LL) )
        return (unsigned int)v5;
      LastError = GetLastError();
      v5 = LastError;
      if ( LastError > 0 )
        v5 = (unsigned __int16)LastError | 0x80070000;
    }
    (*(void (__fastcall **)(_QWORD *, __int64))(*v4 + 8LL))(v4, 1LL);
    return (unsigned int)v5;
  }
  return (unsigned int)-2147024882;
}
