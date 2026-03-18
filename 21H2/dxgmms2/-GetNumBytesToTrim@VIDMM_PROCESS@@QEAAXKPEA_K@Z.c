/*
 * XREFs of ?GetNumBytesToTrim@VIDMM_PROCESS@@QEAAXKPEA_K@Z @ 0x1C00DFBFC
 * Callers:
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C00D672C (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000209C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00024A4 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0014F50 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1C00A4780 (-GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z.c)
 */

void __fastcall VIDMM_PROCESS::GetNumBytesToTrim(VIDMM_PROCESS *this, unsigned int a2, unsigned __int64 *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  _BYTE v8[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+30h] [rbp-18h]

  v4 = a2;
  v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * a2);
  if ( v6 )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v8, (struct _KTHREAD **)(v6 + 360), 0);
    DXGPUSHLOCK::AcquireShared(v9);
    v7 = *((_QWORD *)this + 2);
    v10 = 1;
    VIDMM_PROCESS_ADAPTER_INFO::GetNumBytesToTrim(*(struct VIDMM_GLOBAL ***)(v7 + 8 * v4), a3, 0, 1u);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v8);
  }
  else
  {
    *a3 = 0LL;
  }
}
