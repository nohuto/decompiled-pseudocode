/*
 * XREFs of ?DestroyVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAUDXGK_VIRTUAL_GPU@@@Z @ 0x1C0236FC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_GPUP::DestroyVirtualGpu(
        DXGVIRTUALGPUMANAGER_GPUP *this,
        struct DXGK_VIRTUAL_GPU *a2)
{
  __int64 v2; // rsi
  char *v3; // r8
  __int64 v5; // rax
  char **v7; // rcx

  v2 = *((unsigned int *)a2 + 6);
  v3 = (char *)a2 + 120;
  --*((_DWORD *)this + 4);
  v5 = *((_QWORD *)a2 + 15);
  if ( v5 )
  {
    if ( *(char **)(v5 + 8) != v3 || (v7 = (char **)*((_QWORD *)a2 + 16), *v7 != v3) )
      __fastfail(3u);
    *v7 = (char *)v5;
    *(_QWORD *)(v5 + 8) = v7;
  }
  (*(void (__fastcall **)(struct DXGK_VIRTUAL_GPU *))(*(_QWORD *)a2 + 144LL))(a2);
  (*(void (__fastcall **)(struct DXGK_VIRTUAL_GPU *))(*(_QWORD *)a2 + 8LL))(a2);
  (**(void (__fastcall ***)(struct DXGK_VIRTUAL_GPU *, __int64))a2)(a2, 1LL);
  *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v2) = 0LL;
  return 0LL;
}
