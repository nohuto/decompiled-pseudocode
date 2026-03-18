/*
 * XREFs of ?MsgLookupTableAlloc@@YAPEAXI@Z @ 0x1C0037D2C
 * Callers:
 *     ?AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C0037C04 (-AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall MsgLookupTableAlloc(int a1)
{
  int v1; // ecx
  __int64 v2; // rcx
  __int64 v3; // rbx

  if ( a1 )
  {
    v1 = a1 - 1;
    if ( !v1 )
    {
      v2 = 128LL;
      goto LABEL_5;
    }
    if ( v1 != 1 )
      return 0LL;
  }
  v2 = 64LL;
LABEL_5:
  v3 = Win32AllocPoolZInit(v2, 1819112277LL);
  if ( !v3 )
    UserSetLastError(14LL);
  return v3;
}
