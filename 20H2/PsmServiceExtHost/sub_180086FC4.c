/*
 * XREFs of sub_180086FC4 @ 0x180086FC4
 * Callers:
 *     sub_180087048 @ 0x180087048 (sub_180087048.c)
 * Callees:
 *     GetCurrentThreadId @ 0x180045416 (GetCurrentThreadId.c)
 *     sub_18004631C @ 0x18004631C (sub_18004631C.c)
 */

__int64 __fastcall sub_180086FC4(_WORD *pvInfo, DWORD a2)
{
  unsigned int v2; // ebx
  DWORD CurrentThreadId; // eax
  HDESK ThreadDesktop; // rax
  DWORD nLengthNeeded; // [rsp+48h] [rbp+10h] BYREF

  nLengthNeeded = a2;
  v2 = 0;
  if ( pvInfo )
  {
    *pvInfo = 0;
    if ( sub_18004631C() )
    {
      if ( sub_18004631C() )
      {
        CurrentThreadId = GetCurrentThreadId();
        ThreadDesktop = GetThreadDesktop(CurrentThreadId);
        if ( ThreadDesktop )
          LOBYTE(v2) = GetUserObjectInformationW(ThreadDesktop, 2, pvInfo, 0x208u, &nLengthNeeded);
      }
    }
  }
  return v2;
}
