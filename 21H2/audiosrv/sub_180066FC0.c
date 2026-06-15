/*
 * XREFs of sub_180066FC0 @ 0x180066FC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

HRESULT __fastcall sub_180066FC0(PVOID Parameter)
{
  HRESULT result; // eax
  unsigned __int64 v2; // rbx
  DWORD NumberOfBytesTransferred; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 CompletionKey; // [rsp+50h] [rbp+18h] BYREF
  LPOVERLAPPED Overlapped; // [rsp+58h] [rbp+20h] BYREF

  result = CoInitializeEx(0LL, 0);
  if ( !result )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&dwCreationFlags + 8LL))(*(_QWORD *)&dwCreationFlags);
    while ( 1 )
    {
      while ( !GetQueuedCompletionStatus(
                 CompletionPort,
                 &NumberOfBytesTransferred,
                 &CompletionKey,
                 &Overlapped,
                 0xFFFFFFFF) )
        ;
      if ( NumberOfBytesTransferred == -1 )
        break;
      v2 = CompletionKey;
      (**(void (__fastcall ***)(unsigned __int64))CompletionKey)(CompletionKey);
      (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)v2 + 8LL))(v2, 1LL);
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&dwCreationFlags + 16LL))(*(_QWORD *)&dwCreationFlags);
    CoUninitialize();
    return 0;
  }
  return result;
}
