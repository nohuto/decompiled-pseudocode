/*
 * XREFs of sub_180061E00 @ 0x180061E00
 * Callers:
 *     sub_180061CC0 @ 0x180061CC0 (sub_180061CC0.c)
 * Callees:
 *     sub_180061FC8 @ 0x180061FC8 (sub_180061FC8.c)
 *     sub_1800620D0 @ 0x1800620D0 (sub_1800620D0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
unsigned int __fastcall sub_180061E00(__int64 a1, DWORD a2, __int64 a3)
{
  unsigned int result; // eax
  __int64 v5; // rax
  DWORD Instance; // ebx
  unsigned int v7; // eax
  __int64 v8; // rdx
  int v9; // ebx
  DWORD ThreadId; // [rsp+48h] [rbp+10h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  ThreadId = a2;
  result = CoInitializeEx(0LL, 0);
  if ( result <= 1 )
  {
    v5 = qword_18019E678;
    *(_QWORD *)(qword_18019E678 + 8) = 0LL;
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)(v5 + 24) = 0LL;
    *(_QWORD *)(v5 + 40) = 0LL;
    *(_QWORD *)(v5 + 32) = 0LL;
    *(_QWORD *)(v5 + 48) = 0LL;
    *(_DWORD *)(v5 + 56) = 0;
    *(_DWORD *)(v5 + 60) = 0;
    *(_DWORD *)(v5 + 64) = 0;
    sub_1800620D0();
    Instance = CoCreateInstance(&rclsid, 0LL, 3u, &stru_18015B0C0, (LPVOID *)&dwCreationFlags);
    if ( !Instance )
    {
      v11 = 0LL;
      if ( (***(int (__fastcall ****)(_QWORD, const IID *, __int64 *))&dwCreationFlags)(
             *(_QWORD *)&dwCreationFlags,
             &stru_18015C908,
             &v11) >= 0 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 88LL))(v11, Instance + 1);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      CompletionPort = CreateIoCompletionPort((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0LL, 0);
      if ( CompletionPort || (Instance = GetLastError()) == 0 )
      {
        Instance = sub_180061FC8();
        if ( !Instance )
        {
          qword_18019E798 = CreateThread(0LL, 0LL, sub_180066FC0, 0LL, 0, &ThreadId);
          if ( !qword_18019E798 )
            Instance = GetLastError();
        }
      }
    }
    v7 = (**(__int64 (__fastcall ***)(__int64, _QWORD))qword_18019E678)(qword_18019E678, Instance);
    v8 = v7;
    if ( !v7 )
      v8 = (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_18019E678 + 8LL))(qword_18019E678, a1);
    v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_18019E678 + 16LL))(qword_18019E678, v8);
    CoUninitialize();
    return v9;
  }
  return result;
}
