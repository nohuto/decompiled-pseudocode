/*
 * XREFs of ?VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x1C02B6C14
 * Callers:
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C0239210 (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?AddReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x1C02B3DA8 (-AddReference@DXGVAILGUESTOBJECT@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x1C02B5648 (-ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailSendCompositionObjectTestCommand(
        DXGSESSIONDATA *this,
        void *a2,
        unsigned int a3,
        void *a4,
        unsigned int *a5,
        int a6)
{
  struct DXGFASTMUTEX *v6; // r15
  unsigned int v10; // esi
  __int64 v11; // rdx
  struct _EX_RUNDOWN_REF *v12; // rdi
  DXGAUTOMUTEX *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 *v22; // rcx
  __int64 v23; // rax
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  _BYTE v30[8]; // [rsp+30h] [rbp-20h] BYREF
  char v31; // [rsp+38h] [rbp-18h]
  _BYTE v32[8]; // [rsp+40h] [rbp-10h] BYREF
  char v33; // [rsp+48h] [rbp-8h]

  v6 = (DXGSESSIONDATA *)((char *)this + 18880);
  v10 = -1073741808;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v30, (DXGSESSIONDATA *)((char *)this + 18880), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
  v12 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2366);
  if ( v12 )
  {
    DXGVAILGUESTOBJECT::AddReference((DXGVAILGUESTOBJECT *)v12);
    if ( v31 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30, v14);
    if ( ExAcquireRundownProtection(v12 + 7) )
    {
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v12[8].Count + 64)) )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v32, (struct DXGFASTMUTEX *const)&v12[2], 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v32);
        v22 = *(__int64 **)(v12[10].Count + 8);
        if ( v22 )
        {
          v23 = *v22;
          if ( a6 )
            v24 = (*(__int64 (__fastcall **)(__int64 *, void *, _QWORD, void *, unsigned int *))(v23 + 32))(
                    v22,
                    a2,
                    a3,
                    a4,
                    a5);
          else
            v24 = (*(__int64 (__fastcall **)(__int64 *, void *, _QWORD))(v23 + 40))(v22, a2, a3);
          v10 = v24;
        }
        else
        {
          v25 = WdLogNewEntry5_WdError(0LL, v21);
          *(_QWORD *)(v25 + 24) = 2702LL;
          WdLogEvent5_WdError(v25);
        }
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v12[8].Count + 64));
        if ( v33 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v32, v26);
      }
      else
      {
        v10 = -2147483611;
        v27 = WdLogNewEntry5_WdWarning(v19, v18, v20);
        *(_QWORD *)(v27 + 24) = 2LL;
        *(_QWORD *)(v27 + 32) = -2147483611LL;
        WdLogEvent5_WdWarning(v27);
      }
      ExReleaseRundownProtection(v12 + 7);
    }
    else
    {
      v10 = -2147483611;
      v28 = WdLogNewEntry5_WdWarning(v16, v15, v17);
      *(_QWORD *)(v28 + 24) = 1LL;
      *(_QWORD *)(v28 + 32) = -2147483611LL;
      WdLogEvent5_WdWarning(v28);
    }
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v32, v6, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v32);
    DXGVAILGUESTOBJECT::ReleaseReference((DXGVAILGUESTOBJECT *)v12);
    if ( v33 )
    {
      v13 = (DXGAUTOMUTEX *)v32;
      goto LABEL_21;
    }
  }
  else if ( v31 )
  {
    v13 = (DXGAUTOMUTEX *)v30;
LABEL_21:
    DXGAUTOMUTEX::Release(v13, v11);
  }
  return v10;
}
