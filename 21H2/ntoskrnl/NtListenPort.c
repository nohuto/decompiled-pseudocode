/*
 * XREFs of NtListenPort @ 0x140864060
 * Callers:
 *     <none>
 * Callees:
 *     NtReplyWaitReceivePortEx @ 0x1407A76C0 (NtReplyWaitReceivePortEx.c)
 */

__int64 __fastcall NtListenPort(HANDLE Handle, unsigned __int64 a2)
{
  __int64 result; // rax

  do
    result = NtReplyWaitReceivePortEx(Handle, 0LL, 0LL, a2, 0LL);
  while ( !(_DWORD)result && (*(_WORD *)(a2 + 4) & 0x7FFF) != 0xA );
  return result;
}
