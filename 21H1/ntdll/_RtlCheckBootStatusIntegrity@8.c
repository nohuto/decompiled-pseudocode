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

int __stdcall RtlCheckBootStatusIntegrity(int a1, bool *a2)
{
  char v2; // bl
  int File; // esi
  int Heap; // edi
  unsigned int i; // eax
  unsigned int v7; // [esp+Ch] [ebp-1Ch] BYREF
  int v8; // [esp+10h] [ebp-18h] BYREF
  int v9; // [esp+14h] [ebp-14h] BYREF
  _DWORD v10[2]; // [esp+18h] [ebp-10h] BYREF
  _BYTE v11[4]; // [esp+20h] [ebp-8h] BYREF
  int v12; // [esp+24h] [ebp-4h]

  v10[0] = 0;
  v10[1] = 0;
  v2 = 0;
  File = NtReadFile(a1, 0, 0, 0, (int)v11, (int)&v7, 4, (int)v10, 0);
  if ( File >= 0 )
  {
    File = RtlBootStatusItemInfo(0xFu, &v9, &v8);
    if ( File >= 0 )
    {
      if ( v7 < v8 + v9 || v7 > 0x800 )
      {
        *a2 = 0;
      }
      else
      {
        Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, v7);
        if ( Heap )
        {
          File = NtReadFile(a1, 0, 0, 0, (int)v11, Heap, v7, (int)v10, 0);
          if ( File >= 0 )
          {
            if ( v12 == v7 )
            {
              for ( i = 0; i < v7; ++i )
                v2 += *(_BYTE *)(i + Heap);
              *a2 = v2 == 0;
            }
            else
            {
              *a2 = 0;
            }
          }
          RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, Heap);
        }
        else
        {
          return -1073741801;
        }
      }
    }
  }
  return File;
}
