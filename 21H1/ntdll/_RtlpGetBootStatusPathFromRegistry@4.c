/*
 * XREFs of _RtlpGetBootStatusPathFromRegistry@4 @ 0x4B350DA9
 * Callers:
 *     _RtlpGetBootStatusPath@8 @ 0x4B350D73 (_RtlpGetBootStatusPath@8.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __thiscall RtlpGetBootStatusPathFromRegistry(_DWORD *this)
{
  int v1; // esi
  int ValueKey; // eax
  int Heap; // edi
  void *v4; // ebx
  _DWORD v6[6]; // [esp+10h] [ebp-30h] BYREF
  UNICODE_STRING DestinationString; // [esp+28h] [ebp-18h] BYREF
  _BYTE v8[4]; // [esp+30h] [ebp-10h] BYREF
  _DWORD *v9; // [esp+34h] [ebp-Ch]
  int v10; // [esp+38h] [ebp-8h] BYREF
  int v11; // [esp+3Ch] [ebp-4h] BYREF

  v9 = this;
  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
  v6[0] = 24;
  v6[2] = &DestinationString;
  v6[1] = 0;
  v6[3] = 64;
  v6[4] = 0;
  v6[5] = 0;
  v1 = ZwOpenKey((int)&v10, 131097, (int)v6);
  if ( v1 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"OsBootstatPath");
    ValueKey = ZwQueryValueKey(v10, (int)&DestinationString, 2, 0, 0, (int)&v11);
    v1 = ValueKey;
    if ( ValueKey == -1073741789 )
    {
      Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, v11);
      if ( Heap )
      {
        v1 = ZwQueryValueKey(v10, (int)&DestinationString, 2, Heap, v11, (int)v8);
        if ( v1 >= 0 )
        {
          v4 = (void *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, *(_DWORD *)(Heap + 8));
          if ( v4 )
          {
            memcpy(v4, (const void *)(Heap + 12), *(_DWORD *)(Heap + 8));
            *v9 = v4;
          }
          else
          {
            v1 = -1073741801;
          }
        }
        RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, Heap);
      }
      else
      {
        return -1073741801;
      }
    }
    else if ( ValueKey >= 0 )
    {
      return -1073741823;
    }
  }
  return v1;
}
