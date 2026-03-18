/*
 * XREFs of RawInputManagerInputObserverObjectCreate @ 0x1C016E8E8
 * Callers:
 *     rimObsAddInputObserver @ 0x1C01843F4 (rimObsAddInputObserver.c)
 * Callees:
 *     rimAddToObTrackList @ 0x1C00A4080 (rimAddToObTrackList.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     rimObsReadMaxQueueSize @ 0x1C0185904 (rimObsReadMaxQueueSize.c)
 */

__int64 __fastcall RawInputManagerInputObserverObjectCreate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        PHANDLE Handle)
{
  NTSTATUS Object; // ebx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  Object = ObCreateObject(a1, ExRawInputManagerObjectType, 0LL);
  if ( Object >= 0 )
  {
    memset(0LL, 0, 0xC0uLL);
    MEMORY[0] = gSessionId;
    MEMORY[4] = 3;
    MEMORY[0x18] = 16LL;
    MEMORY[0x10] = 16LL;
    MEMORY[0x20] = PsGetCurrentProcess(0LL, v6);
    MEMORY[0x28] = KeGetCurrentThread();
    MEMORY[0x88] = 128LL;
    MEMORY[0x80] = 128LL;
    MEMORY[0x98] = 144LL;
    MEMORY[0x90] = 144LL;
    MEMORY[0xA0] = 0;
    MEMORY[0xA4] = 0;
    MEMORY[0xA8] = rimObsReadMaxQueueSize(MEMORY[0x28], v7, v8, v9, 0LL);
    MEMORY[0xB0] = 0LL;
    MEMORY[0xB8] = 0LL;
    Object = ObInsertObject(0LL, 0LL, 3u, 0, 0LL, Handle);
    if ( Object >= 0 )
      rimAddToObTrackList(0LL);
  }
  return (unsigned int)Object;
}
