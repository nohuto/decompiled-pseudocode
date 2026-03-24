/*
 * XREFs of ?AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z @ 0x1C006E930
 * Callers:
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C006E3DC (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C00850BC (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0001AD0 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     Feature_3895685435__private_IsEnabledDeviceUsage @ 0x1C00179EC (Feature_3895685435__private_IsEnabledDeviceUsage.c)
 */

struct VIDMM_VAD *__fastcall CVirtualAddressAllocator::AllocateVad(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  int v8; // ecx
  _QWORD *v9; // rbx

  v3 = (unsigned int)a3;
  v6 = operator new((unsigned int)(40 * (a3 - 1) + 136), 0x39346956u, a3, PagedPool);
  v7 = v6;
  if ( v6 )
  {
    v6[3] = a1;
    v8 = (*((_DWORD *)v6 + 18) ^ (16 * v3)) & 0x7F0;
    v6[4] = a2;
    *((_DWORD *)v6 + 18) ^= v8;
    if ( (_DWORD)v3 )
    {
      v9 = v6 + 12;
      do
      {
        v9[1] = v9;
        *v9 = v9;
        v9[2] = 0LL;
        if ( (unsigned int)Feature_3895685435__private_IsEnabledDeviceUsage() )
        {
          v9[4] = v9 + 3;
          v9[3] = v9 + 3;
        }
        v9 += 5;
        --v3;
      }
      while ( v3 );
    }
    v7[11] = v7 + 10;
    v7[10] = v7 + 10;
  }
  return (struct VIDMM_VAD *)v7;
}
