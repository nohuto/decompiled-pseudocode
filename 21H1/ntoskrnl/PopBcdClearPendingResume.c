/*
 * XREFs of PopBcdClearPendingResume @ 0x14076D570
 * Callers:
 *     PopFreeHiberContext @ 0x14075F980 (PopFreeHiberContext.c)
 *     PoInitHiberServices @ 0x14077B118 (PoInitHiberServices.c)
 * Callees:
 *     BcdFlushStore @ 0x1407658F0 (BcdFlushStore.c)
 *     BiDeleteElement @ 0x14076E9AC (BiDeleteElement.c)
 *     BcdOpenObject @ 0x14076F250 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14076F3DC (BcdCloseObject.c)
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
