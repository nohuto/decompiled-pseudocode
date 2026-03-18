/*
 * XREFs of ?CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1C00C6F60
 * Callers:
 *     ?OPMCreateProtectedOutput@@YAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1C00C6F28 (-OPMCreateProtectedOutput@@YAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C002A970 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?AddHandleToTable@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAVCOPMProtectedOutput@@PEAPEAX@Z @ 0x1C00C706C (-AddHandleToTable@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAVCOPMProtectedOu.c)
 *     ??0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z @ 0x1C00C70E8 (--0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COPM::CreateProtectedOutput(
        COPM *this,
        enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS a2,
        struct _LUID *a3,
        unsigned int a4,
        void **a5,
        int *a6)
{
  OPM *v6; // rbp
  int *v10; // r14
  int v11; // edi
  COPMProtectedOutput *PoolWithTag; // rax
  COPMProtectedOutput *v13; // rax
  COPMProtectedOutput *v14; // rsi
  struct _KMUTANT *v15; // rcx
  void *v17; // [rsp+30h] [rbp-38h] BYREF
  COPM *v18; // [rsp+70h] [rbp+8h] BYREF

  v18 = this;
  v6 = qword_1C0252BF0;
  OPM::CMutex::Lock((void **)qword_1C0252BF0 + 6);
  v10 = a6;
  v11 = 0;
  v17 = 0LL;
  LODWORD(v18) = 0;
  *a6 = 0;
  PoolWithTag = (COPMProtectedOutput *)ExAllocatePoolWithTag(PagedPool, 0x58uLL, 0x4D504F47u);
  if ( PoolWithTag )
  {
    v13 = COPMProtectedOutput::COPMProtectedOutput(PoolWithTag, a2, a3, a4, (int *)&v18);
    v11 = (int)v18;
    v14 = v13;
  }
  else
  {
    v14 = 0LL;
  }
  if ( v14 )
  {
    if ( v11 >= 0 )
    {
      v11 = OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::AddHandleToTable((char *)v6 + 24, v14, &v17);
      if ( v11 >= 0 )
      {
        *a5 = v17;
LABEL_7:
        v11 = 0;
        goto LABEL_8;
      }
    }
    (**(void (__fastcall ***)(COPMProtectedOutput *, __int64))v14)(v14, 1LL);
    if ( v11 == -1073741198 )
    {
      *v10 = 1;
      goto LABEL_7;
    }
  }
  else
  {
    v11 = -1073741801;
  }
LABEL_8:
  v15 = (struct _KMUTANT *)*((_QWORD *)v6 + 6);
  if ( v15 )
    KeReleaseMutex(v15, 0);
  return (unsigned int)v11;
}
