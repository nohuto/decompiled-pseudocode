/*
 * XREFs of ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C0267CB4
 * Callers:
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C018BECC (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 *     DxgkUnload @ 0x1C02604C0 (DxgkUnload.c)
 *     DriverEntry @ 0x1C0305D00 (DriverEntry.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C0266F70 (--1DXGGLOBAL@@AEAA@XZ.c)
 */

void __fastcall DXGGLOBAL::DestroyGlobal(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // rax
  PVOID v5; // rbx

  v2 = 0;
  v3 = 216LL;
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
