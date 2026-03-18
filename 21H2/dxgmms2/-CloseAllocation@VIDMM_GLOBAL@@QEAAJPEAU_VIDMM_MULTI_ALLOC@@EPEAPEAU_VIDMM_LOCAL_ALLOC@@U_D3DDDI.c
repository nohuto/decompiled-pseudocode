/*
 * XREFs of ?CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@EPEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0089988
 * Callers:
 *     VidMmCloseAllocation @ 0x1C0002670 (VidMmCloseAllocation.c)
 *     VidMmTryCloseAllocation @ 0x1C00185F0 (VidMmTryCloseAllocation.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002DE0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0089AE0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CloseAllocation(
        VIDMM_GLOBAL *this,
        struct _EX_RUNDOWN_REF *a2,
        unsigned __int8 a3,
        struct _VIDMM_LOCAL_ALLOC **a4,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a5,
        struct _KEVENT **a6)
{
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v11; // rbx
  char *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // edi
  int v17; // r9d

  ExWaitForRundownProtectionRelease(a2 + 29);
  Current = DXGPROCESS::GetCurrent();
  v11 = Current;
  if ( Current )
  {
    v12 = (char *)Current + 184;
    if ( *((struct _KTHREAD **)Current + 24) == KeGetCurrentThread() )
    {
      v11 = 0LL;
    }
    else
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v12, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v17 = *((_DWORD *)v12 + 6);
          if ( v17 != -1 && (byte_1C006E941 & 1) != 0 )
            McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventBlockThread, v14, v17);
        }
        ExAcquirePushLockExclusiveEx(v12, 0LL);
      }
      *((_QWORD *)v12 + 1) = KeGetCurrentThread();
    }
  }
  if ( a4 )
    *a4 = 0LL;
  v15 = 0;
  if ( (int)VIDMM_GLOBAL::CloseOneAllocation(this, (struct VIDMM_ALLOC *)a2, a4, a3, a5, a6) < 0 )
    v15 = -1071775486;
  if ( v11 )
  {
    *((_QWORD *)v11 + 24) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v11 + 184, 0LL);
    KeLeaveCriticalRegion();
  }
  return v15;
}
