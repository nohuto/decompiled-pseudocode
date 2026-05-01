/*
 * XREFs of sub_18006DD8C @ 0x18006DD8C
 * Callers:
 *     sub_18006E504 @ 0x18006E504 (sub_18006E504.c)
 * Callees:
 *     sub_180009F08 @ 0x180009F08 (sub_180009F08.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180063424 @ 0x180063424 (sub_180063424.c)
 */

__int64 __fastcall sub_18006DD8C(__int64 a1, void *a2)
{
  NTSTATUS v4; // ebx
  DWORD ProcessId; // esi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  NTSTATUS v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v4 = TpAllocWait(a1 + 48, &sub_18006ECD0, a1, 0LL);
  if ( v4 >= 0 )
  {
    ProcessId = GetProcessId(a2);
    if ( sub_180009F08((void **)(a1 + 40), 0x101200u, ProcessId) >= 0
      || (v4 = sub_180009F08((void **)(a1 + 40), 0x103000u, ProcessId), v4 >= 0) )
    {
      *(_DWORD *)(a1 + 108) = ProcessId;
      return 0;
    }
    else if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 0x400000000001LL) )
    {
      v11 = 0x1000000LL;
      v10 = v4;
      sub_180063424(v6, byte_18009CC76, v7, v8, (__int64)&v10, (__int64)&v11);
    }
  }
  return (unsigned int)v4;
}
