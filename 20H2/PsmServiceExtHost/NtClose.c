/*
 * XREFs of NtClose @ 0x18004547C
 * Callers:
 *     sub_180042F50 @ 0x180042F50 (sub_180042F50.c)
 *     sub_180043910 @ 0x180043910 (sub_180043910.c)
 *     sub_180086478 @ 0x180086478 (sub_180086478.c)
 *     sub_1800866A8 @ 0x1800866A8 (sub_1800866A8.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtClose(HANDLE Handle)
{
  return __imp_NtClose(Handle);
}
