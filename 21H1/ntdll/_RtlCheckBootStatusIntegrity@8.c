/*
 * XREFs of _RtlCheckBootStatusIntegrity@8 @ 0x4B3507E0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtReadFile@36 @ 0x4B2F29C0 (_NtReadFile@36.c)
 *     _RtlBootStatusItemInfo@12 @ 0x4B3507A8 (_RtlBootStatusItemInfo@12.c)
 */

NTSTATUS __cdecl RtlCheckBootStatusIntegrity(HANDLE FileHandle, PBOOLEAN Verified)
{
  char v2; // bl
  int v3; // esi
  PVOID Heap; // edi
  ULONG i; // eax
  SIZE_T v7; // [esp-4h] [ebp-2Ch]
  ULONG Buffer; // [esp+Ch] [ebp-1Ch] BYREF
  int v9; // [esp+10h] [ebp-18h] BYREF
  int v10; // [esp+14h] [ebp-14h] BYREF
  LARGE_INTEGER ByteOffset; // [esp+18h] [ebp-10h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+20h] [ebp-8h] BYREF

  ByteOffset.QuadPart = 0LL;
  v2 = 0;
  v3 = NtReadFile(FileHandle, 0, 0, 0, &IoStatusBlock, &Buffer, 4u, &ByteOffset, 0);
  if ( v3 >= 0 )
  {
    v3 = RtlBootStatusItemInfo(0xFu, &v10, &v9);
    if ( v3 >= 0 )
    {
      if ( Buffer < v9 + v10 || Buffer > 0x800 )
      {
        *Verified = 0;
      }
      else
      {
        LODWORD(v7) = Buffer;
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
        if ( Heap )
        {
          v3 = NtReadFile(FileHandle, 0, 0, 0, &IoStatusBlock, Heap, Buffer, &ByteOffset, 0);
          if ( v3 >= 0 )
          {
            if ( IoStatusBlock.Information == Buffer )
            {
              for ( i = 0; i < Buffer; ++i )
                v2 += *((_BYTE *)Heap + i);
              *Verified = v2 == 0;
            }
            else
            {
              *Verified = 0;
            }
          }
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        }
        else
        {
          return -1073741801;
        }
      }
    }
  }
  return v3;
}
