/*
 * XREFs of RawInputManagerObjectCreate @ 0x1C00A3C50
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C0037400 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     isChildPartition @ 0x1C0064F84 (isChildPartition.c)
 *     rimAddToObTrackList @ 0x1C00A4080 (rimAddToObTrackList.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 */

__int64 __fastcall RawInputManagerObjectCreate(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PHANDLE Handle)
{
  NTSTATUS Object; // ebx
  __int64 v6; // rdx
  __int64 v7; // rdx

  Object = ObCreateObject(a1, ExRawInputManagerObjectType, 0LL);
  if ( Object >= 0 )
  {
    memset(0LL, 0, 0x388uLL);
    MEMORY[0] = gSessionId;
    MEMORY[4] = 1;
    MEMORY[0x18] = 16LL;
    MEMORY[0x10] = 16LL;
    MEMORY[0x20] = PsGetCurrentProcess(0LL, v6);
    MEMORY[0x28] = KeGetCurrentThread();
    MEMORY[0x40] = isChildPartition(MEMORY[0x28], v7);
    Object = ObInsertObject(0LL, 0LL, 3u, 0, 0LL, Handle);
    if ( Object >= 0 )
      rimAddToObTrackList(0LL);
  }
  return (unsigned int)Object;
}
