/*
 * XREFs of HalpKdEnumerateDebuggingDevices @ 0x1409B7230
 * Callers:
 *     HalpKdSetupDebuggingDevice @ 0x1409B7480 (HalpKdSetupDebuggingDevice.c)
 * Callees:
 *     HalpMmAllocateMemory @ 0x1403BB360 (HalpMmAllocateMemory.c)
 *     wcsncpy_s @ 0x1403D8590 (wcsncpy_s.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     HalpDeviceEquals @ 0x1409B6F68 (HalpDeviceEquals.c)
 */

__int64 __fastcall HalpKdEnumerateDebuggingDevices(__int64 a1, __int64 a2)
{
  _OWORD *v4; // rax
  __int128 v5; // xmm0
  SIZE_T v6; // rax
  void *Memory; // rax
  int v8; // ecx
  __int64 v9; // rcx
  size_t v10; // rdi
  void *PoolWithTag; // rax

  if ( !a2 )
    return 3221225485LL;
  if ( *(_BYTE *)(a2 + 19) )
    return 0LL;
  if ( KdDebugDevice && *(_BYTE *)(KdDebugDevice + 19) && HalpDeviceEquals(a1, a2) )
  {
    v4 = (_OWORD *)KdDebugDevice;
    *(_OWORD *)a2 = *(_OWORD *)KdDebugDevice;
    *(_OWORD *)(a2 + 16) = v4[1];
    *(_OWORD *)(a2 + 32) = v4[2];
    *(_OWORD *)(a2 + 48) = v4[3];
    *(_OWORD *)(a2 + 64) = v4[4];
    *(_OWORD *)(a2 + 80) = v4[5];
    *(_OWORD *)(a2 + 96) = v4[6];
    v5 = v4[7];
    v4 += 8;
    *(_OWORD *)(a2 + 112) = v5;
    *(_OWORD *)(a2 + 128) = *v4;
    *(_OWORD *)(a2 + 144) = v4[1];
    *(_OWORD *)(a2 + 160) = v4[2];
    *(_OWORD *)(a2 + 176) = v4[3];
    *(_OWORD *)(a2 + 192) = v4[4];
    *(_OWORD *)(a2 + 208) = v4[5];
    *(_OWORD *)(a2 + 224) = v4[6];
    *(_QWORD *)(a2 + 240) = *((_QWORD *)v4 + 14);
    v6 = *(unsigned int *)(KdDebugDevice + 216);
    if ( (_DWORD)v6 && *(_QWORD *)(KdDebugDevice + 208) )
    {
      if ( HalpMmLoaderBlock )
        Memory = (void *)HalpMmAllocateMemory((unsigned int)v6);
      else
        Memory = ExAllocatePoolWithTag(PagedPool, v6, 0x206C6148u);
      *(_QWORD *)(a2 + 208) = Memory;
      if ( !Memory )
        return 3221225473LL;
      memmove(Memory, *(const void **)(KdDebugDevice + 208), *(unsigned int *)(KdDebugDevice + 216));
    }
    v8 = *(_DWORD *)(KdDebugDevice + 232);
    if ( !v8 || !*(_QWORD *)(KdDebugDevice + 224) )
      goto LABEL_22;
    v9 = (unsigned int)(v8 + 2);
    v10 = (unsigned int)v9;
    if ( HalpMmLoaderBlock )
      PoolWithTag = (void *)HalpMmAllocateMemory(v9);
    else
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v9, 0x206C6148u);
    *(_QWORD *)(a2 + 224) = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v10);
      wcsncpy_s(
        *(wchar_t **)(a2 + 224),
        v10 >> 1,
        *(const wchar_t **)(KdDebugDevice + 224),
        (unsigned __int64)*(unsigned int *)(KdDebugDevice + 232) >> 1);
LABEL_22:
      *(_WORD *)(a2 + 18) = 256;
      return 0LL;
    }
  }
  return 3221225473LL;
}
