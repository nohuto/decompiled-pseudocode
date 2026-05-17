/*
 * XREFs of _EtwpGetRegDwordValue@12 @ 0x4B2F0EE6
 * Callers:
 *     _EtwpQueryPartitionRegistryInformationUm@16 @ 0x4B2F0FDE (_EtwpQueryPartitionRegistryInformationUm@16.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     StringCopyWorkerW @ 0x4B2F1261 (StringCopyWorkerW.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

int __stdcall EtwpGetRegDwordValue(_DWORD *a1)
{
  const WCHAR *Heap; // ebx
  int v2; // esi
  int v3; // edi
  wchar_t *v5; // [esp-Ch] [ebp-50h]
  size_t v6; // [esp-8h] [ebp-4Ch]
  size_t *v7; // [esp-4h] [ebp-48h]
  const wchar_t *v8; // [esp+0h] [ebp-44h]
  size_t v9; // [esp+4h] [ebp-40h]
  _DWORD v10[6]; // [esp+10h] [ebp-34h] BYREF
  UNICODE_STRING v11; // [esp+28h] [ebp-1Ch] BYREF
  UNICODE_STRING DestinationString; // [esp+30h] [ebp-14h] BYREF
  _BYTE v13[4]; // [esp+38h] [ebp-Ch] BYREF
  HANDLE Handle[2]; // [esp+3Ch] [ebp-8h] BYREF

  Handle[0] = (HANDLE)-1;
  Heap = (const WCHAR *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, 4096);
  if ( !Heap )
    return -1073741801;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
  v10[0] = 24;
  v10[2] = &DestinationString;
  v10[1] = 0;
  v10[3] = 64;
  v10[4] = 0;
  v10[5] = 0;
  v2 = ZwOpenKey(Handle, 131097, v10);
  if ( v2 >= 0 )
  {
    v3 = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, 16);
    if ( v3 )
    {
      StringCopyWorkerW(v5, v6, v7, v8, v9);
      RtlInitUnicodeString(&v11, Heap);
      v2 = ZwQueryValueKey(Handle[0], &v11, 2, v3, 16, v13);
      if ( v2 >= 0 )
        *a1 = *(_DWORD *)(v3 + 12);
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v3);
    }
    else
    {
      v2 = -1073741801;
    }
    NtClose(Handle[0]);
  }
  RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)Heap);
  return v2;
}
