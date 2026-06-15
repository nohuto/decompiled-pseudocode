/*
 * XREFs of sub_1800210EC @ 0x1800210EC
 * Callers:
 *     sub_18001E14C @ 0x18001E14C (sub_18001E14C.c)
 *     sub_180029CD0 @ 0x180029CD0 (sub_180029CD0.c)
 *     sub_180029FD4 @ 0x180029FD4 (sub_180029FD4.c)
 *     sub_18002A580 @ 0x18002A580 (sub_18002A580.c)
 *     sub_18002A698 @ 0x18002A698 (sub_18002A698.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800210EC(__int64 a1, __int64 a2)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  signed int v6; // edi
  HANDLE v7; // rcx
  signed int LastError; // eax

  ProcessHeap = GetProcessHeap();
  v4 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v5 = v4;
  if ( v4 )
  {
    *v4 = off_18003F278;
    _InterlockedIncrement((volatile signed __int32 *)(qword_18004FE78 + 8));
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v7 = CompletionPort;
    v5[1] = sub_18001FEA0;
    v5[2] = a2;
    if ( PostQueuedCompletionStatus(v7, 0, (ULONG_PTR)v5, 0LL) )
    {
      v6 = 0;
    }
    else
    {
      LastError = GetLastError();
      v6 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v6 = LastError;
    }
    if ( v6 >= 0 )
      v5 = 0LL;
  }
  else
  {
    v6 = -2147024882;
  }
  if ( v5 )
    (*(void (__fastcall **)(_QWORD *, __int64))(*v5 + 8LL))(v5, 1LL);
  return (unsigned int)v6;
}
