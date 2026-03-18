/*
 * XREFs of ?VidMmTrimOfferCommitment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x1C00B77E4
 * Callers:
 *     ?VidMmTrimOfferCommitment@@YAXPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x1C00221E0 (-VidMmTrimOfferCommitment@@YAXPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKM.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0017740 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00185C0 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00878C0 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00B3B44 (-QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::VidMmTrimOfferCommitment(
        VIDMM_GLOBAL *this,
        struct _KPROCESS **a2,
        struct _LIST_ENTRY *a3,
        union _D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS a4,
        struct _LIST_ENTRY *a5,
        unsigned __int64 *a6)
{
  struct _LIST_ENTRY *v10; // rdi
  struct _KPROCESS *v11; // rcx
  struct _LIST_ENTRY *v12; // [rsp+20h] [rbp-69h] BYREF
  __int64 v13; // [rsp+28h] [rbp-61h] BYREF
  struct _KAPC_STATE ApcState[2]; // [rsp+30h] [rbp-59h] BYREF

  if ( (*((_DWORD *)this + 1762) & 0x10) == 0 )
  {
    v10 = 0LL;
    v12 = 0LL;
    memset(ApcState, 0, 0x58uLL);
    LODWORD(ApcState[0].ApcListHead[0].Flink) = 124;
    *(_QWORD *)&ApcState[0].InProgressFlags = a2;
    ApcState[1].ApcListHead[0].Flink = a3;
    LODWORD(ApcState[1].ApcListHead[0].Blink) = a4;
    if ( (*(_BYTE *)&a4.0 & 1) != 0 )
    {
      v13 = 0LL;
      do
      {
        ApcState[1].ApcListHead[1].Flink = (struct _LIST_ENTRY *)((char *)a5 - (char *)v10);
        ApcState[1].ApcListHead[1].Blink = (struct _LIST_ENTRY *)&v13;
        VIDMM_GLOBAL::QueueLazySystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)ApcState);
        v10 = (struct _LIST_ENTRY *)((char *)v12 + v13);
        v12 = (struct _LIST_ENTRY *)((char *)v12 + v13);
      }
      while ( v13 && v10 < a5 );
    }
    else
    {
      ApcState[1].ApcListHead[1].Flink = a5;
      ApcState[1].ApcListHead[1].Blink = (struct _LIST_ENTRY *)&v12;
      VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)ApcState, 1);
      v10 = v12;
    }
    *a6 = (unsigned __int64)v10;
    if ( v10 )
    {
      v11 = *a2;
      memset(ApcState, 0, 48);
      KeStackAttachProcess(v11, ApcState);
      (*(void (__fastcall **)(struct _KPROCESS *))(*(_QWORD *)a2[3] + 136LL))(a2[3]);
      KeUnstackDetachProcess(ApcState);
    }
  }
}
