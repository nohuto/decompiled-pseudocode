/*
 * XREFs of BiSpacesUpdatePhysicalDevicePath @ 0x1405C420C
 * Callers:
 *     BiUpdateEfiEntry @ 0x14097334C (BiUpdateEfiEntry.c)
 * Callees:
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 *     swprintf_s @ 0x1403D6A60 (swprintf_s.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     BiLogMessage @ 0x140784F5C (BiLogMessage.c)
 *     SyspartGetPhysicalPartitions @ 0x14097367C (SyspartGetPhysicalPartitions.c)
 *     SyspartIsSpace @ 0x1409737EC (SyspartIsSpace.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiSpacesUpdatePhysicalDevicePath(ULONG_PTR *a1)
{
  _DWORD *v2; // rcx
  int IsSpace; // ebx
  unsigned int v4; // ebp
  wchar_t *PoolWithTag; // r12
  wchar_t *v6; // rax
  wchar_t *v7; // rsi
  __int64 v8; // rdx
  _DWORD *v9; // rax
  _DWORD *v10; // rdi
  unsigned int PhysicalPartitions; // eax
  __int64 v12; // rax
  unsigned int v13; // r13d
  _OWORD *v14; // rax
  _OWORD *v15; // rbp
  ULONG_PTR v16; // r15
  __int64 v18; // [rsp+20h] [rbp-38h]
  char v19; // [rsp+60h] [rbp+8h] BYREF

  v2 = (_DWORD *)*a1;
  IsSpace = 0;
  v19 = 0;
  v4 = 108;
  if ( *v2 == 2 )
  {
    IsSpace = SyspartIsSpace(v2 + 5, &v19);
    if ( IsSpace >= 0 )
    {
      if ( v19 )
      {
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x208uLL, 0x4B444342u);
        v6 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x208uLL, 0x4B444342u);
        v7 = v6;
        if ( PoolWithTag && v6 )
        {
          v8 = 22LL;
          if ( *(_WORD *)(*a1 + 20) != 92 )
            v8 = 20LL;
          swprintf_s(PoolWithTag, 0x104uLL, L"%s\\%s", L"\\??\\GLOBALROOT", *a1 + v8);
          while ( 1 )
          {
            v9 = ExAllocatePoolWithTag(PagedPool, v4, 0x4B444342u);
            v10 = v9;
            if ( !v9 )
              goto LABEL_26;
            PhysicalPartitions = SyspartGetPhysicalPartitions(PoolWithTag, v9, v4);
            IsSpace = PhysicalPartitions;
            if ( ((PhysicalPartitions + 0x80000000) & 0x80000000) == 0 && PhysicalPartitions != -2147483643 )
              break;
            if ( v10[1] <= v4 )
            {
              if ( v10[2] )
              {
                LODWORD(v18) = v10[5];
                swprintf_s(v7, 0x104uLL, L"\\Device\\Harddisk%u\\Partition%u", (unsigned int)v10[4], v18);
                v12 = -1LL;
                do
                  ++v12;
                while ( v7[v12] );
                v13 = 2 * v12 + 2;
                v14 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(2 * v12 + 62), 0x4B444342u);
                v15 = v14;
                if ( v14 )
                {
                  v16 = *a1;
                  *v14 = *(_OWORD *)*a1;
                  v14[1] = *(_OWORD *)(v16 + 16);
                  v14[2] = *(_OWORD *)(v16 + 32);
                  *((_QWORD *)v14 + 6) = *(_QWORD *)(v16 + 48);
                  *((_DWORD *)v14 + 14) = *(_DWORD *)(v16 + 56);
                  memmove((char *)v14 + 20, v7, v13);
                  if ( v16 )
                    ExFreeHeapPool(v16);
                  *a1 = (ULONG_PTR)v15;
                }
                else
                {
                  IsSpace = -1073741801;
                }
              }
              else
              {
                IsSpace = -1073741823;
              }
              goto LABEL_25;
            }
            v4 = v10[1];
            ExFreeHeapPool((ULONG_PTR)v10);
          }
          BiLogMessage(4LL, L"SyspartGetPhysicalPartitions failed with error code: %x", PhysicalPartitions);
LABEL_25:
          ExFreeHeapPool((ULONG_PTR)v10);
          goto LABEL_27;
        }
LABEL_26:
        IsSpace = -1073741801;
LABEL_27:
        if ( PoolWithTag )
          ExFreeHeapPool((ULONG_PTR)PoolWithTag);
        if ( v7 )
          ExFreeHeapPool((ULONG_PTR)v7);
      }
    }
    else
    {
      BiLogMessage(4LL, L"SyspartIsSpace failed for %s", *a1 + 20);
    }
  }
  return (unsigned int)IsSpace;
}
