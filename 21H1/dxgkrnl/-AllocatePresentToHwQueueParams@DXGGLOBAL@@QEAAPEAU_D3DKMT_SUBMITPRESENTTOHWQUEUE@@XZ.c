/*
 * XREFs of ?AllocatePresentToHwQueueParams@DXGGLOBAL@@QEAAPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@XZ @ 0x1C00017DC
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00D5EF0 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 */

struct _D3DKMT_SUBMITPRESENTTOHWQUEUE *__fastcall DXGGLOBAL::AllocatePresentToHwQueueParams(DXGGLOBAL *this)
{
  char *v1; // rbx
  PSLIST_ENTRY v2; // rdi
  __int64 v4; // rdx
  __int64 (__fastcall *v5)(__int64, __int64, __int64, char *); // rax
  __int64 v6; // r8
  __int64 v7; // rcx

  v1 = (char *)this + 1008;
  ++*((_DWORD *)this + 257);
  v2 = ExpInterlockedPopEntrySList((PSLIST_HEADER)this + 63);
  if ( v2
    || (v4 = *((unsigned int *)v1 + 11),
        v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, char *))*((_QWORD *)v1 + 6),
        v6 = *((unsigned int *)v1 + 10),
        v7 = *((unsigned int *)v1 + 9),
        ++*((_DWORD *)v1 + 6),
        (v2 = (PSLIST_ENTRY)v5(v7, v4, v6, v1)) != 0LL) )
  {
    memset(v2, 0, 0x5E0uLL);
  }
  return (struct _D3DKMT_SUBMITPRESENTTOHWQUEUE *)v2;
}
