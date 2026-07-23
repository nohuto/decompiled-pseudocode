/*
 * XREFs of IopLiveDumpAllocateIptBuffers @ 0x140897DC4
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x140896D1C (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x140508C80 (IopLiveDumpIsUnderMemoryPressure.c)
 *     MmAllocateIndependentPagesEx @ 0x140762BCC (MmAllocateIndependentPagesEx.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x1408980EC (IopLiveDumpDiscardVirtualAddressRange.c)
 */

__int64 __fastcall IopLiveDumpAllocateIptBuffers(__int64 a1)
{
  unsigned int v1; // edi
  void **v2; // r14
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int64 IndependentPages; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r10
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // r10d
  __int64 v17; // r11
  __int128 v19; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  *(_DWORD *)(a1 + 956) = 0x10000000;
  v2 = (void **)(a1 + 944);
  *(_QWORD *)(a1 + 976) = 0LL;
  v19 = 0LL;
  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(IptInterface + 40))(2LL, 0LL, a1 + 944, 48LL);
  v4 = *(_DWORD *)(a1 + 984);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 976);
    if ( v5 )
    {
      IopLiveDumpDiscardVirtualAddressRange(a1, v5, v4);
      v4 = *(_DWORD *)(a1 + 984);
    }
    *(_QWORD *)(a1 + 976) = 0LL;
    *(_DWORD *)(a1 + 984) = 0;
    *(_DWORD *)(a1 + 952) = 0;
    IndependentPages = MmAllocateIndependentPagesEx(v4, -1, 0LL, 0LL);
    *v2 = (void *)IndependentPages;
    if ( IndependentPages )
    {
      v7 = *(_QWORD *)(a1 + 840);
      v8 = *(_QWORD *)(a1 + 832);
      v9 = *(_QWORD *)(a1 + 824);
      *(_DWORD *)(a1 + 952) = v4;
      if ( IopLiveDumpIsUnderMemoryPressure(v9, v8, v7) )
        return (unsigned int)-1073741248;
      IopLiveDumpDiscardVirtualAddressRange(a1, v10, (v4 + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
      memset(*v2, 0, *(unsigned int *)(a1 + 952));
      if ( (*(int (__fastcall **)(__int128 *))(IptInterface + 24))(&v19) >= 0 )
      {
        if ( (_QWORD)v19 )
        {
          if ( *((_QWORD *)&v19 + 1) )
          {
            IopLiveDumpDiscardVirtualAddressRange(a1, v19, *((_QWORD *)&v19 + 1));
            v11 = *((_QWORD *)&v19 + 1);
            *(_QWORD *)(a1 + 928) = 0LL;
            *(_DWORD *)(a1 + 936) = 0;
            *(_DWORD *)(a1 + 904) = 0;
            v12 = MmAllocateIndependentPagesEx(v11, -1, 0LL, 0LL);
            *(_QWORD *)(a1 + 896) = v12;
            if ( v12 )
            {
              v13 = *(_QWORD *)(a1 + 840);
              v14 = *(_QWORD *)(a1 + 832);
              v15 = *(_QWORD *)(a1 + 824);
              *(_DWORD *)(a1 + 904) = DWORD2(v19);
              if ( !IopLiveDumpIsUnderMemoryPressure(v15, v14, v13) )
              {
                IopLiveDumpDiscardVirtualAddressRange(a1, v17, (v16 + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
                memset(*(void **)(a1 + 896), 0, *(unsigned int *)(a1 + 904));
                return v1;
              }
              return (unsigned int)-1073741248;
            }
          }
        }
      }
    }
  }
  return v1;
}
