/*
 * XREFs of ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C0264974
 * Callers:
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C017F3C4 (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 *     DxgkUnload @ 0x1C025D1A0 (DxgkUnload.c)
 *     DriverEntry @ 0x1C0302C24 (DriverEntry.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000BEAC (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C0263C50 (--1DXGGLOBAL@@AEAA@XZ.c)
 */

void __fastcall DXGGLOBAL::DestroyGlobal(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // rax
  PVOID v5; // rbx

  v2 = 0;
  v3 = 104LL;
  do
  {
    v4 = *(_QWORD *)((char *)DXGGLOBAL::GetGlobal(a1, a2) + v3);
    (*(void (**)(void))(*(_QWORD *)(v4 + 8) + 16LL))();
    ++v2;
    v3 += 8LL;
  }
  while ( v2 < 2 );
  v5 = DXGGLOBAL::m_pGlobal;
  if ( DXGGLOBAL::m_pGlobal )
  {
    DXGGLOBAL::~DXGGLOBAL((DXGGLOBAL *)DXGGLOBAL::m_pGlobal, a2);
    operator delete(v5);
    DXGGLOBAL::m_pGlobal = 0LL;
  }
}
