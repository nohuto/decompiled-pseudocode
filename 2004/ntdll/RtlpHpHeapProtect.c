/*
 * XREFs of RtlpHpHeapProtect @ 0x18010E094
 * Callers:
 *     RtlProtectHeap @ 0x18000E0E0 (RtlProtectHeap.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x18009D270 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x18009D810 (ZwProtectVirtualMemory.c)
 *     RtlpHpLargeAllocationProtect @ 0x18010E550 (RtlpHpLargeAllocationProtect.c)
 *     RtlpHpSegProtect @ 0x18010F214 (RtlpHpSegProtect.c)
 */

__int64 __fastcall RtlpHpHeapProtect(unsigned __int64 *BaseAddress, ULONG NewProtect)
{
  __int64 v2; // rdi
  __int64 v4; // r8
  NTSTATUS v5; // eax
  int v6; // eax
  int v7; // eax
  unsigned __int64 v8; // rbx
  int v10; // eax
  unsigned __int64 v11; // rax
  bool v12; // zf
  char v13; // dl
  unsigned __int64 i; // rax
  unsigned __int64 v15; // rcx
  PVOID BaseAddressa; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v17[7]; // [rsp+38h] [rbp-40h] BYREF
  ULONG OldProtect; // [rsp+90h] [rbp+18h] BYREF
  ULONG_PTR RegionSize; // [rsp+98h] [rbp+20h] BYREF

  v2 = NewProtect;
  LODWORD(v4) = ZwQueryVirtualMemory(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  BaseAddress,
                  MemoryBasicInformation,
                  v17,
                  0x30uLL,
                  0LL);
  if ( (int)v4 >= 0 )
  {
    RegionSize = v17[3];
    BaseAddressa = BaseAddress;
    v5 = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, v2, &OldProtect);
    LODWORD(v4) = v5;
    if ( v5 >= 0 )
    {
      v6 = RtlpHpSegProtect(BaseAddress + 32, (unsigned int)v2, (unsigned int)v5);
      LODWORD(v4) = v6;
      if ( v6 >= 0 )
      {
        v7 = RtlpHpSegProtect(BaseAddress + 56, (unsigned int)v2, (unsigned int)v6);
        v4 = (unsigned int)v7;
        if ( v7 >= 0 )
        {
          v8 = BaseAddress[9];
          if ( !v8 )
          {
            LODWORD(v4) = 0;
            return (unsigned int)v4;
          }
          while ( 1 )
          {
LABEL_8:
            v10 = RtlpHpLargeAllocationProtect(v8, v2, v4);
            v4 = (unsigned int)v10;
            if ( v10 < 0 )
              return (unsigned int)v4;
            v11 = *(_QWORD *)v8;
            if ( !*(_QWORD *)v8 )
              break;
            v12 = (BaseAddress[10] & 1) == 0;
LABEL_13:
            if ( v12 )
              v8 = v11;
            else
              v8 ^= v11;
          }
          v11 = *(_QWORD *)(v8 + 8);
          v13 = BaseAddress[10] & 1;
          if ( v11 )
          {
            v12 = v13 == 0;
            goto LABEL_13;
          }
          for ( i = v8; ; v8 = i )
          {
            i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( v13 )
            {
              if ( !i )
                return (unsigned int)v4;
              i ^= v8;
            }
            if ( !i )
              return (unsigned int)v4;
            v15 = *(_QWORD *)(i + 8);
            if ( v13 )
            {
              if ( !v15 )
                continue;
              v15 ^= i;
            }
            if ( v15 && v15 != v8 )
            {
              v8 = v15;
              goto LABEL_8;
            }
          }
        }
      }
    }
  }
  return (unsigned int)v4;
}
