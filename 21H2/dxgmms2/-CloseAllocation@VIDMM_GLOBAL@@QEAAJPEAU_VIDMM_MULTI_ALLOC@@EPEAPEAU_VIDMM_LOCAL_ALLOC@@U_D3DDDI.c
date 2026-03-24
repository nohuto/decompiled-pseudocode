/*
 * XREFs of ?CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@EPEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0069ED0
 * Callers:
 *     VidMmCloseAllocation @ 0x1C00015F0 (VidMmCloseAllocation.c)
 *     VidMmTryCloseAllocation @ 0x1C0015990 (VidMmTryCloseAllocation.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0001690 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C006A030 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CloseAllocation(
        VIDMM_GLOBAL *this,
        struct _EX_RUNDOWN_REF *a2,
        unsigned __int8 a3,
        struct _VIDMM_LOCAL_ALLOC **a4,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a5,
        struct _KEVENT **a6)
{
  struct DXGPROCESS *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  unsigned int v14; // edi
  int v16; // r9d
  struct DXGPROCESS *Current; // [rsp+58h] [rbp+10h]

  ExWaitForRundownProtectionRelease(a2 + 31);
  Current = DXGPROCESS::GetCurrent();
  v10 = Current;
  if ( Current )
  {
    if ( *((struct _KTHREAD **)Current + 19) == KeGetCurrentThread() )
    {
      v10 = 0LL;
    }
    else
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)Current + 144, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v16 = *((_DWORD *)Current + 42);
          if ( v16 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v11, (const EVENT_DESCRIPTOR *)"g", v12, v16);
        }
        ExAcquirePushLockExclusiveEx((char *)Current + 144, 0LL);
      }
      *((_QWORD *)Current + 19) = KeGetCurrentThread();
      v10 = Current;
    }
  }
  if ( a4 )
    *a4 = 0LL;
  v13 = VIDMM_GLOBAL::CloseOneAllocation(this, (struct VIDMM_ALLOC *)a2, a4, a3, a5, a6);
  v14 = 0;
  if ( v13 < 0 )
    v14 = -1071775486;
  if ( v10 )
  {
    *((_QWORD *)v10 + 19) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v10 + 144, 0LL);
    KeLeaveCriticalRegion();
  }
  return v14;
}
