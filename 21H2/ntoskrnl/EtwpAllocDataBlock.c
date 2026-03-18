/*
 * XREFs of EtwpAllocDataBlock @ 0x1406F21DC
 * Callers:
 *     EtwpNotifyGuid @ 0x1406EF64C (EtwpNotifyGuid.c)
 *     EtwpQueueReply @ 0x1406F20E8 (EtwpQueueReply.c)
 *     EtwpBuildNotificationPacket @ 0x1406F2158 (EtwpBuildNotificationPacket.c)
 *     EtwpEnableGuid @ 0x14079028C (EtwpEnableGuid.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140797054 (EtwpClearSessionAndUnreferenceEntry.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpAllocDataBlock(size_t Size, void *Src, _QWORD *a3)
{
  unsigned int v3; // ebx
  unsigned int v6; // ebp
  _DWORD *Pool2; // rax
  _DWORD *v8; // rsi

  v3 = 0;
  *a3 = 0LL;
  if ( Src && *((_DWORD *)Src + 1) != (_DWORD)Size )
  {
    return (unsigned int)-1073741820;
  }
  else
  {
    v6 = Size;
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, (unsigned int)Size, 1148679237LL);
    v8 = Pool2;
    if ( Pool2 )
    {
      if ( Src )
        memmove(Pool2, Src, v6);
      v8[2] = 1;
      *a3 = v8;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v3;
}
