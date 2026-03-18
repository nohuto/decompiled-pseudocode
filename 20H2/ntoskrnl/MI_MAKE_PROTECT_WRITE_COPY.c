/*
 * XREFs of MI_MAKE_PROTECT_WRITE_COPY @ 0x14036AD04
 * Callers:
 *     MiConvertStandbyToProto @ 0x140366CC8 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140369DA0 (MiConvertPrivateToProto.c)
 *     MiBuildForkPte @ 0x1405567EC (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x140558F94 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 */

char __fastcall MI_MAKE_PROTECT_WRITE_COPY(__int64 *a1)
{
  __int64 CurrentThread; // rax
  __int64 v3; // rbx
  int v4; // esi
  __int64 v5; // r8
  bool v6; // zf

  CurrentThread = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
  if ( (CurrentThread & 0x80u) == 0LL )
    return CurrentThread;
  v3 = CurrentThread | 0x20;
  v4 = 0;
  LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)a1);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v4 = 1;
      if ( HIBYTE(word_140C4DE88) )
        goto LABEL_3;
      v6 = (v3 & 1) == 0;
    }
    else
    {
      CurrentThread = (__int64)KeGetCurrentThread();
      if ( (*(_DWORD *)(*(_QWORD *)(CurrentThread + 184) + 2172LL) & 0x1000) == 0 )
        goto LABEL_3;
      v6 = (v3 & 1) == 0;
    }
    if ( !v6 )
    {
      LOBYTE(CurrentThread) = 0;
      v3 |= 0x8000000000000000uLL;
    }
  }
LABEL_3:
  *a1 = v3;
  if ( v4 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)a1, v3, v5);
  return CurrentThread;
}
