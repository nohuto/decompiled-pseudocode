/*
 * XREFs of sub_180024364 @ 0x180024364
 * Callers:
 *     PbmPlayToStreamStateChanged @ 0x180023C40 (PbmPlayToStreamStateChanged.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180024364(__int64 a1, __int64 a2)
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
    *v4 = off_18003F388;
    _InterlockedIncrement((volatile signed __int32 *)(qword_18004FE78 + 8));
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v7 = CompletionPort;
    v5[1] = sub_18001F600;
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
