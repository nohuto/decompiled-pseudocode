/*
 * XREFs of ?RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x1C00E3ADC
 * Callers:
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00DACE0 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C00DC7D4 (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVa(
        VIDMM_GLOBAL *this,
        char a2,
        struct VIDMM_PROCESS *a3,
        struct _VIDSCH_CONTEXT *a4,
        unsigned int a5,
        struct _VIDSCH_SYNC_OBJECT *a6,
        unsigned __int64 a7)
{
  __int64 v11; // rdi
  unsigned int v12; // ecx
  void *v13; // rcx

  if ( *((_QWORD *)this + 5123) )
  {
    v11 = operator new(48LL, 0x32356956u, 256LL);
    if ( v11 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 41000, 0LL);
      *((_QWORD *)this + 5126) = KeGetCurrentThread();
      v12 = *((_DWORD *)this + 10248);
      if ( v12 == dword_1C006E41C )
      {
        *((_DWORD *)this + 10248) = 0;
        v12 = 0;
      }
      v13 = *(void **)(*((_QWORD *)this + 5123) + 24LL * v12 + 16);
      if ( v13 )
        operator delete(v13);
      *(_QWORD *)v11 = *(_QWORD *)a3;
      *(_QWORD *)(v11 + 8) = *((_QWORD *)a3 + 4);
      *(_DWORD *)(v11 + 24) = a5;
      *(_QWORD *)(v11 + 32) = a6;
      *(_QWORD *)(v11 + 40) = a7;
      *(_QWORD *)(v11 + 16) = a4;
      *(_QWORD *)(*((_QWORD *)this + 5123) + 24LL * *((unsigned int *)this + 10248)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5123) + 24LL * *((unsigned int *)this + 10248) + 16) = v11;
      *(_DWORD *)(*((_QWORD *)this + 5123) + 24LL * (unsigned int)(*((_DWORD *)this + 10248))++ + 8) = a2 != 0 ? 19 : 17;
      *((_QWORD *)this + 5126) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 41000, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
