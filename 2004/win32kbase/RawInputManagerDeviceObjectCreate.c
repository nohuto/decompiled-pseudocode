/*
 * XREFs of RawInputManagerDeviceObjectCreate @ 0x1C00AB114
 * Callers:
 *     rimCreateDev @ 0x1C00AB24C (rimCreateDev.c)
 * Callees:
 *     isChildPartition @ 0x1C0070954 (isChildPartition.c)
 *     rimAddToObTrackList @ 0x1C00A9C44 (rimAddToObTrackList.c)
 *     memset @ 0x1C00D3880 (memset.c)
 */

__int64 __fastcall RawInputManagerDeviceObjectCreate(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PHANDLE Handle)
{
  NTSTATUS Object; // ebx
  __int64 v6; // rdx
  __int64 v7; // rdx

  LOBYTE(a1) = 1;
  Object = ObCreateObject(a1, ExRawInputManagerObjectType, 0LL);
  if ( Object >= 0 )
  {
    memset(0LL, 0, 0x960uLL);
    MEMORY[0] = gSessionId;
    MEMORY[4] = 2;
    MEMORY[0x18] = 16LL;
    MEMORY[0x10] = 16LL;
    MEMORY[0xE8] = 224LL;
    MEMORY[0xE0] = 224LL;
    MEMORY[0xD8] = 208LL;
    MEMORY[0xD0] = 208LL;
    MEMORY[0x20] = PsGetCurrentProcess(0LL, v6);
    MEMORY[0x28] = KeGetCurrentThread();
    MEMORY[0x40] = isChildPartition(MEMORY[0x28], v7);
    Object = ObInsertObject(0LL, 0LL, 3u, 0, 0LL, Handle);
    if ( Object >= 0 )
      rimAddToObTrackList(0LL);
  }
  return (unsigned int)Object;
}
