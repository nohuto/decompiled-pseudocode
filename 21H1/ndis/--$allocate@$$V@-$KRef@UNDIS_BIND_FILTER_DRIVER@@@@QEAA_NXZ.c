/*
 * XREFs of ??$allocate@$$V@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAA_NXZ @ 0x1C010A9D4
 * Callers:
 *     ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x1C0102AA8 (-ndisBindGetFilterDriver@@YA-AV-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z.c)
 * Callees:
 *     ?reset@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x1C0102A68 (-reset@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z @ 0x1C0116614 (--_GKRefHolder@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z.c)
 */

char __fastcall KRef<NDIS_BIND_FILTER_DRIVER>::allocate<>(volatile signed __int32 **a1)
{
  _WORD *PoolWithTag; // rax
  char v3; // bl
  _WORD *v4; // rdi
  _QWORD *v5; // rax
  volatile signed __int32 *v6; // rcx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x446C4642u);
  v3 = 0;
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0;
    v5 = PoolWithTag + 4;
    *((_DWORD *)v4 + 10) = 0;
    *((_QWORD *)v4 + 6) = 0LL;
    *((_QWORD *)v4 + 7) = 0LL;
    v5[1] = v5;
    *v5 = v5;
    *((_DWORD *)v4 + 16) = 1;
  }
  else
  {
    v4 = 0LL;
  }
  KRef<NDIS_BIND_FILTER_DRIVER>::reset(a1, 0LL);
  if ( v4 )
  {
    v6 = *a1;
    if ( *a1 && _InterlockedExchangeAdd(v6 + 16, 0xFFFFFFFF) == 1 )
      KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v6);
    *a1 = (volatile signed __int32 *)v4;
    return 1;
  }
  return v3;
}
