/*
 * XREFs of PopBcdClearPendingResume @ 0x14076F980
 * Callers:
 *     PopFreeHiberContext @ 0x140767A78 (PopFreeHiberContext.c)
 *     PoInitHiberServices @ 0x140783B18 (PoInitHiberServices.c)
 * Callees:
 *     BcdFlushStore @ 0x1407672B0 (BcdFlushStore.c)
 *     BiDeleteElement @ 0x140770DBC (BiDeleteElement.c)
 *     BcdOpenObject @ 0x140771660 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x1407717EC (BcdCloseObject.c)
 */

__int64 __fastcall PopBcdClearPendingResume(__int64 a1)
{
  __int64 result; // rax
  int v3; // ebx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  result = BcdOpenObject(a1, &GUID_WINDOWS_BOOTMGR, &v4);
  if ( (int)result >= 0 )
  {
    v3 = BiDeleteElement(v4, 637534213LL);
    if ( v3 >= 0 )
    {
      v3 = BiDeleteElement(v4, 637534245LL);
      if ( v3 >= 0 )
        BcdFlushStore(a1);
    }
    BcdCloseObject(v4);
    return (unsigned int)v3;
  }
  return result;
}
