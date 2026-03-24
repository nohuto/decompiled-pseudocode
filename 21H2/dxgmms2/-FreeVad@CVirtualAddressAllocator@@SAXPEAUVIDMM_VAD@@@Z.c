/*
 * XREFs of ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1C0089784
 * Callers:
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C006E028 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C006E3DC (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x1C008976C (-FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0001338 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001618 (--3@YAXPEAX@Z.c)
 *     Feature_3895685435__private_IsEnabledDeviceUsage @ 0x1C00179EC (Feature_3895685435__private_IsEnabledDeviceUsage.c)
 *     ReleaseVaRangeForDelete @ 0x1C00602D8 (ReleaseVaRangeForDelete.c)
 */

void __fastcall CVirtualAddressAllocator::FreeVad(struct VIDMM_VAD *a1)
{
  unsigned int v2; // edx
  __int64 v3; // rsi
  _QWORD **v4; // rdi
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  _QWORD **v7; // rdi
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  VIDMM_MAPPED_VA_RANGE *v10; // rcx
  _QWORD **v11; // rdi
  _QWORD *v12; // rcx
  _QWORD *v13; // rax

  v3 = 0LL;
  if ( (unsigned int)Feature_3895685435__private_IsEnabledDeviceUsage() )
  {
    if ( (*((_DWORD *)a1 + 18) & 0x7F0) != 0 )
    {
      do
      {
        v4 = (_QWORD **)((char *)a1 + 32 * v3 + 8 * v3 + 96);
        while ( 1 )
        {
          v5 = *v4;
          if ( *v4 == v4 )
            break;
          if ( (_QWORD **)v5[1] != v4 )
            goto LABEL_23;
          v6 = (_QWORD *)*v5;
          if ( *(_QWORD **)(*v5 + 8LL) != v5 )
            goto LABEL_23;
          *v4 = v6;
          v6[1] = v4;
          *v5 = 0LL;
          v5[1] = 0LL;
          ReleaseVaRangeForDelete((VIDMM_MAPPED_VA_RANGE *)(v5 - 1), v2);
        }
        v7 = v4 + 3;
        while ( 1 )
        {
          v8 = *v7;
          if ( *v7 == v7 )
            break;
          if ( (_QWORD **)v8[1] != v7 )
            goto LABEL_23;
          v9 = (_QWORD *)*v8;
          if ( *(_QWORD **)(*v8 + 8LL) != v8 )
            goto LABEL_23;
          *v7 = v9;
          v10 = (VIDMM_MAPPED_VA_RANGE *)(v8 - 1);
          v9[1] = v7;
          *((_DWORD *)v10 + 16) &= ~0x2000u;
          ReleaseVaRangeForDelete(v10, v2);
        }
        v3 = (unsigned int)(v3 + 1);
      }
      while ( (unsigned int)v3 < ((*((_DWORD *)a1 + 18) >> 4) & 0x7Fu) );
    }
  }
  else if ( (*((_DWORD *)a1 + 18) & 0x7F0) != 0 )
  {
    do
    {
      v11 = (_QWORD **)((char *)a1 + 32 * v3 + 8 * v3 + 96);
      while ( 1 )
      {
        v12 = *v11;
        if ( *v11 == v11 )
          break;
        if ( (_QWORD **)v12[1] != v11 || (v13 = (_QWORD *)*v12, *(_QWORD **)(*v12 + 8LL) != v12) )
LABEL_23:
          __fastfail(3u);
        *v11 = v13;
        v13[1] = v11;
        *v12 = 0LL;
        v12[1] = 0LL;
        VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)(v12 - 1), v2);
      }
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < ((*((_DWORD *)a1 + 18) >> 4) & 0x7Fu) );
  }
  operator delete(a1);
}
