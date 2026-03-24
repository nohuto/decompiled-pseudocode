/*
 * XREFs of BiSpacesUpdatePhysicalDevicePath @ 0x1405C3FDC
 * Callers:
 *     BiUpdateEfiEntry @ 0x14097316C (BiUpdateEfiEntry.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 *     swprintf_s @ 0x1403D68F0 (swprintf_s.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     BiLogMessage @ 0x140784D9C (BiLogMessage.c)
 *     SyspartGetPhysicalPartitions @ 0x14097349C (SyspartGetPhysicalPartitions.c)
 *     SyspartIsSpace @ 0x14097360C (SyspartIsSpace.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiSpacesUpdatePhysicalDevicePath(ULONG_PTR *a1)
{
  _DWORD *v2; // rcx
  int IsSpace; // ebx
  unsigned int v4; // ebp
  wchar_t *PoolWithTag; // r12
  wchar_t *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  _DWORD *v9; // r9
  wchar_t *v10; // rsi
  __int64 v11; // rdx
  _DWORD *v12; // rax
  _DWORD *v13; // rdi
  unsigned int PhysicalPartitions; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  _DWORD *v17; // r9
  __int64 v18; // rax
  unsigned int v19; // r13d
  _OWORD *v20; // rax
  _OWORD *v21; // rbp
  ULONG_PTR v22; // r15
  __int64 v24; // [rsp+20h] [rbp-38h]
  char v25; // [rsp+60h] [rbp+8h] BYREF

  v2 = (_DWORD *)*a1;
  IsSpace = 0;
  v25 = 0;
  v4 = 108;
  if ( *v2 == 2 )
  {
    IsSpace = SyspartIsSpace(v2 + 5, &v25);
    if ( IsSpace >= 0 )
    {
      if ( v25 )
      {
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x208uLL, 0x4B444342u);
        v6 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x208uLL, 0x4B444342u);
        v10 = v6;
        if ( PoolWithTag && v6 )
        {
          v11 = 22LL;
          if ( *(_WORD *)(*a1 + 20) != 92 )
            v11 = 20LL;
          swprintf_s(PoolWithTag, 0x104uLL, L"%s\\%s", L"\\??\\GLOBALROOT", *a1 + v11);
          while ( 1 )
          {
            v12 = ExAllocatePoolWithTag(PagedPool, v4, 0x4B444342u);
            v13 = v12;
            if ( !v12 )
              goto LABEL_26;
            PhysicalPartitions = SyspartGetPhysicalPartitions(PoolWithTag, v12, v4);
            IsSpace = PhysicalPartitions;
            if ( ((PhysicalPartitions + 0x80000000) & 0x80000000) == 0 && PhysicalPartitions != -2147483643 )
              break;
            if ( v13[1] <= v4 )
            {
              if ( v13[2] )
              {
                LODWORD(v24) = v13[5];
                swprintf_s(v10, 0x104uLL, L"\\Device\\Harddisk%u\\Partition%u", (unsigned int)v13[4], v24);
                v18 = -1LL;
                do
                  ++v18;
                while ( v10[v18] );
                v19 = 2 * v18 + 2;
                v20 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(2 * v18 + 62), 0x4B444342u);
                v21 = v20;
                if ( v20 )
                {
                  v22 = *a1;
                  *v20 = *(_OWORD *)*a1;
                  v20[1] = *(_OWORD *)(v22 + 16);
                  v20[2] = *(_OWORD *)(v22 + 32);
                  *((_QWORD *)v20 + 6) = *(_QWORD *)(v22 + 48);
                  *((_DWORD *)v20 + 14) = *(_DWORD *)(v22 + 56);
                  memmove((char *)v20 + 20, v10, v19);
                  if ( v22 )
                    ExFreeHeapPool(v22, v15, v16, v17);
                  *a1 = (ULONG_PTR)v21;
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
            v4 = v13[1];
            ExFreeHeapPool((ULONG_PTR)v13, v15, v16, v17);
          }
          BiLogMessage(4LL, L"SyspartGetPhysicalPartitions failed with error code: %x", PhysicalPartitions);
LABEL_25:
          ExFreeHeapPool((ULONG_PTR)v13, v15, v16, v17);
          goto LABEL_27;
        }
LABEL_26:
        IsSpace = -1073741801;
LABEL_27:
        if ( PoolWithTag )
          ExFreeHeapPool((ULONG_PTR)PoolWithTag, v7, v8, v9);
        if ( v10 )
          ExFreeHeapPool((ULONG_PTR)v10, v7, v8, v9);
      }
    }
    else
    {
      BiLogMessage(4LL, L"SyspartIsSpace failed for %s", *a1 + 20);
    }
  }
  return (unsigned int)IsSpace;
}
