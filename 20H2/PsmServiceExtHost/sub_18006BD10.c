/*
 * XREFs of sub_18006BD10 @ 0x18006BD10
 * Callers:
 *     sub_18006D300 @ 0x18006D300 (sub_18006D300.c)
 * Callees:
 *     sub_180004C18 @ 0x180004C18 (sub_180004C18.c)
 */

NTSTATUS __fastcall sub_18006BD10(void *a1, __int64 a2)
{
  NTSTATUS result; // eax
  DWORD ProcessId; // eax

  result = sub_180004C18(a1, 0, (PHANDLE)(a2 + 16));
  if ( result >= 0 )
  {
    ProcessId = GetProcessId(*(HANDLE *)(a2 + 16));
    *(_DWORD *)(a2 + 56) = ProcessId;
    *(_QWORD *)(a2 + 8) = HIBYTE(ProcessId)
                        + 37
                        * (BYTE2(ProcessId) + 37 * (BYTE1(ProcessId) + 37 * ((unsigned __int8)ProcessId + 11623883LL)));
    return 0;
  }
  return result;
}
