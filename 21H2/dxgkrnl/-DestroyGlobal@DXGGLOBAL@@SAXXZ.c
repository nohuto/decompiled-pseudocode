/*
 * XREFs of ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C0309A24
 * Callers:
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C020F2D0 (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 *     DxgkUnload @ 0x1C0301B10 (DxgkUnload.c)
 *     DriverEntry @ 0x1C03C7238 (DriverEntry.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void DXGGLOBAL::DestroyGlobal(void)
{
  unsigned int v0; // ebx
  __int64 v1; // rdi
  struct DXGGLOBAL *Global; // rax

  v0 = 0;
  v1 = 256LL;
  do
  {
    Global = DXGGLOBAL_GetGlobal();
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)((char *)Global + v1) + 8LL) + 16LL))();
    ++v0;
    v1 += 8LL;
  }
  while ( v0 < 2 );
  if ( DXGGLOBAL::m_pGlobal )
  {
    (**(void (__fastcall ***)(PVOID, __int64))DXGGLOBAL::m_pGlobal)(DXGGLOBAL::m_pGlobal, 1LL);
    DXGGLOBAL::m_pGlobal = 0LL;
  }
}
