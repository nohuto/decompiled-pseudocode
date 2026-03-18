/*
 * XREFs of MI_MAKE_PROTECT_WRITE_COPY @ 0x14026ED6C
 * Callers:
 *     MiConvertStandbyToProto @ 0x140227490 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140272A10 (MiConvertPrivateToProto.c)
 *     MiBuildForkPte @ 0x1405B88D8 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1405BB090 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 */

char __fastcall MI_MAKE_PROTECT_WRITE_COPY(__int64 *a1)
{
  __int64 CurrentThread; // rax
  __int64 v3; // rbx
  int v4; // esi
  bool v5; // zf

  CurrentThread = MI_READ_PTE_LOCK_FREE(a1);
  if ( (CurrentThread & 0x80u) == 0LL )
    return CurrentThread;
  v3 = CurrentThread | 0x20;
  v4 = 0;
  LODWORD(CurrentThread) = MiPteInShadowRange(a1);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v4 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_4;
      v5 = (v3 & 1) == 0;
    }
    else
    {
      CurrentThread = (__int64)KeGetCurrentThread();
      if ( (*(_DWORD *)(*(_QWORD *)(CurrentThread + 184) + 2172LL) & 0x1000) == 0 )
        goto LABEL_4;
      v5 = (v3 & 1) == 0;
    }
    if ( !v5 )
    {
      LOBYTE(CurrentThread) = 0;
      v3 |= 0x8000000000000000uLL;
    }
  }
LABEL_4:
  *a1 = v3;
  if ( v4 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)a1, v3);
  return CurrentThread;
}
