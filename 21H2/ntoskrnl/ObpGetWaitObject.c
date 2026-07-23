/*
 * XREFs of ObpGetWaitObject @ 0x140350440
 * Callers:
 *     IopCancelWaitCompletionPacket @ 0x1402A7634 (IopCancelWaitCompletionPacket.c)
 *     NtAssociateWaitCompletionPacket @ 0x1402CDF20 (NtAssociateWaitCompletionPacket.c)
 *     NtSignalAndWaitForSingleObject @ 0x140564BB0 (NtSignalAndWaitForSingleObject.c)
 *     ObWaitForSingleObject @ 0x140707C90 (ObWaitForSingleObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ObpGetWaitObject(__int64 a1)
{
  __int64 v1; // r10
  __int64 v2; // r9
  __int64 result; // rax

  v1 = a1 + 48;
  v2 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)];
  result = *(_QWORD *)(v2 + 32);
  if ( (result & 1) != 0 )
  {
    if ( (result & 2) != 0 )
    {
      if ( (*(_DWORD *)(v2 + 176) & *(_DWORD *)(*(unsigned __int16 *)(v2 + 180) + v1)) == *(_DWORD *)(v2 + 176) )
        return *(_QWORD *)(*(unsigned __int16 *)(v2 + 182) + v1);
      else
        return v1 + result - 3;
    }
    else
    {
      return *(_QWORD *)(result + v1 - 1);
    }
  }
  else if ( result >= 0 )
  {
    result += v1;
  }
  return result;
}
