/*
 * XREFs of ?Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0213A38
 * Callers:
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C021386C (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C00DE4AC (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 */

__int64 __fastcall DISPLAY_SOURCE::Reset(DISPLAY_SOURCE *this, struct _TDR_RECOVERY_CONTEXT *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx

  v3 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  *((_QWORD *)this + 10) = 0LL;
  memset((char *)this + 88, 0, 0x200uLL);
  *((_DWORD *)this + 267) = -1;
  *((_DWORD *)this + 276) = -1;
  *((_DWORD *)this + 277) = -1;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 86) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  *((_QWORD *)this + 87) = 0LL;
  *((_WORD *)this + 360) = 0;
  *((_BYTE *)this + 725) = 0;
  *((_DWORD *)this + 269) = 0;
  *((_BYTE *)this + 1092) = 0;
  *((_BYTE *)this + 668) = 0;
  *((_QWORD *)this + 84) = 0LL;
  *((_BYTE *)this + 723) = 1;
  *((_QWORD *)this + 91) = 0LL;
  *((_QWORD *)this + 85) = 0LL;
  *((_QWORD *)this + 137) = 0LL;
  v5 = (void *)*((_QWORD *)this + 95);
  if ( v5 )
    memset(v5, 0, *((unsigned int *)this + 194));
  v6 = (void *)*((_QWORD *)this + 101);
  if ( v6 )
    memset(v6, 0, 4 * *(unsigned int *)(v3 + 2016) * (unsigned __int64)*(unsigned int *)(v3 + 2020));
  v7 = (void *)*((_QWORD *)this + 106);
  if ( v7 )
    memset(v7, 0, 4 * *(unsigned int *)(v3 + 2020) * (unsigned __int64)*(unsigned int *)(v3 + 2016));
  v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 2704LL);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v8 + 616) + 8LL) + 520LL))(
      *(_QWORD *)(v8 + 624),
      *((unsigned int *)this + 4),
      0LL,
      (char *)this + 1012,
      0LL);
  DISPLAY_SOURCE::ClearAllDisplayState(this, v4);
  return 0LL;
}
