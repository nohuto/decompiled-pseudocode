/*
 * XREFs of HalpRegisterDeviceInUse @ 0x1409B756C
 * Callers:
 *     HalpKdSetupDebuggingDevice @ 0x1409B7480 (HalpKdSetupDebuggingDevice.c)
 * Callees:
 *     HalpMmAllocateMemory @ 0x1403BB360 (HalpMmAllocateMemory.c)
 *     wcscpy_s @ 0x1403D83E0 (wcscpy_s.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     HalpFindDevice @ 0x1409B7158 (HalpFindDevice.c)
 */

__int64 __fastcall HalpRegisterDeviceInUse(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v4; // esi
  SIZE_T v5; // rbp
  void *Memory; // rax
  __int64 v7; // rbx
  __int64 *v8; // rax

  v1 = *(_DWORD *)(a1 + 220);
  if ( v1 != 3 )
  {
    if ( v1 > 1 )
      return 3221225485LL;
    if ( !HalpFindDevice(a1) )
    {
      v4 = *(_DWORD *)(a1 + 232) + 2;
      v5 = (unsigned int)(*(_DWORD *)(a1 + 232) + 274);
      if ( HalpMmLoaderBlock )
        Memory = (void *)HalpMmAllocateMemory((unsigned int)(*(_DWORD *)(a1 + 232) + 274));
      else
        Memory = ExAllocatePoolWithTag(PagedPool, v5, 0x206C6148u);
      v7 = (__int64)Memory;
      if ( !Memory )
        return 3221225626LL;
      memset(Memory, 0, v5);
      *(_QWORD *)(v7 + 16) = v7 + 24;
      *(_OWORD *)(v7 + 24) = *(_OWORD *)a1;
      *(_OWORD *)(v7 + 40) = *(_OWORD *)(a1 + 16);
      *(_OWORD *)(v7 + 56) = *(_OWORD *)(a1 + 32);
      *(_OWORD *)(v7 + 72) = *(_OWORD *)(a1 + 48);
      *(_OWORD *)(v7 + 88) = *(_OWORD *)(a1 + 64);
      *(_OWORD *)(v7 + 104) = *(_OWORD *)(a1 + 80);
      *(_OWORD *)(v7 + 120) = *(_OWORD *)(a1 + 96);
      *(_OWORD *)(v7 + 136) = *(_OWORD *)(a1 + 112);
      *(_OWORD *)(v7 + 152) = *(_OWORD *)(a1 + 128);
      *(_OWORD *)(v7 + 168) = *(_OWORD *)(a1 + 144);
      *(_OWORD *)(v7 + 184) = *(_OWORD *)(a1 + 160);
      *(_OWORD *)(v7 + 200) = *(_OWORD *)(a1 + 176);
      *(_OWORD *)(v7 + 216) = *(_OWORD *)(a1 + 192);
      *(_OWORD *)(v7 + 232) = *(_OWORD *)(a1 + 208);
      *(_OWORD *)(v7 + 248) = *(_OWORD *)(a1 + 224);
      *(_QWORD *)(v7 + 264) = *(_QWORD *)(a1 + 240);
      if ( *(_DWORD *)(a1 + 220) == 1 && *(_QWORD *)(a1 + 224) )
      {
        *(_QWORD *)(*(_QWORD *)(v7 + 16) + 224LL) = *(_QWORD *)(v7 + 16) + 248LL;
        wcscpy_s(*(wchar_t **)(*(_QWORD *)(v7 + 16) + 224LL), (unsigned __int64)v4 >> 1, *(const wchar_t **)(a1 + 224));
      }
      v8 = (__int64 *)qword_140C48DB0;
      if ( *(__int64 **)qword_140C48DB0 != &qword_140C48DA8 )
        __fastfail(3u);
      *(_QWORD *)v7 = &qword_140C48DA8;
      *(_QWORD *)(v7 + 8) = v8;
      *v8 = v7;
      ++DevicesList;
      qword_140C48DB0 = v7;
    }
  }
  return 0LL;
}
