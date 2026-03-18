/*
 * XREFs of ??1VIDMM_SCH_LOG@@AEAA@XZ @ 0x1C0047164
 * Callers:
 *     ??_GVIDMM_SCH_LOG@@AEAAPEAXI@Z @ 0x1C004729C (--_GVIDMM_SCH_LOG@@AEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?RemoveSchLog@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SCH_LOG@@@Z @ 0x1C0047948 (-RemoveSchLog@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SCH_LOG@@@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00859C8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C0085A38 (-AdapterId@VIDMM_GLOBAL@@QEAAKXZ.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C0098DD4 (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C009BAE4 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

void __fastcall VIDMM_SCH_LOG::~VIDMM_SCH_LOG(VIDMM_SCH_LOG *this)
{
  __int64 v2; // rdi
  unsigned int v3; // eax
  unsigned int v4; // r8d
  bool v5; // r8
  VIDMM_GLOBAL *v6; // r10
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  _QWORD v10[13]; // [rsp+20h] [rbp-68h] BYREF

  if ( *((_QWORD *)this + 1) )
    VIDMM_GLOBAL::RemoveSchLog(*(VIDMM_GLOBAL **)this, this);
  v2 = *((_QWORD *)this + 7);
  if ( v2 )
  {
    memset(v10, 0, 0x58uLL);
    v3 = VIDMM_GLOBAL::AdapterId(*(VIDMM_GLOBAL **)this);
    v4 = *((_DWORD *)this + 6);
    v10[7] = *((_QWORD *)this + 4) >> 12;
    HIDWORD(v10[0]) = v4;
    LODWORD(v10[0]) = 120;
    v10[6] = v2;
    v10[5] = VIDMM_PROCESS::GetVirtualAddressAllocator(g_pVidMmSystemProcess, v3, v4);
    LOBYTE(v10[8]) = 1;
    VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(v6, (struct _VIDMM_SYSTEM_COMMAND *)v10, v5);
    VIDMM_PROCESS::CloseAdapter(g_pVidMmSystemProcess, *(struct VIDMM_GLOBAL **)this);
  }
  if ( *((_BYTE *)this + 80) )
    MmUnlockPages(*((PMDL *)this + 8));
  v7 = (void *)*((_QWORD *)this + 8);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  v8 = (void *)*((_QWORD *)this + 6);
  if ( v8 )
    MmUnmapViewInSystemSpace(v8);
  v9 = (void *)*((_QWORD *)this + 5);
  if ( v9 )
    ObfDereferenceObject(v9);
  if ( *((_QWORD *)this + 9) )
    ((void (__fastcall *)(_QWORD))DxgCoreInterface[89])(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 224LL));
}
