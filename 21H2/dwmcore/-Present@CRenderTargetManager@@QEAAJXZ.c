/*
 * XREFs of ?Present@CRenderTargetManager@@QEAAJXZ @ 0x180078F98
 * Callers:
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x180078EAC (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x180081138 (-EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ.c)
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x1800B2FA8 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::Present(__int64 **this)
{
  unsigned int v2; // esi
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  struct IMonitorTarget *v4; // rbp
  __int64 *v5; // r12
  __int64 *i; // r14
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // r15d
  __int64 v14; // rax
  __int64 result; // rax

  v2 = 142213121;
  PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget((CRenderTargetManager *)this);
  *((_BYTE *)this + 581) = 1;
  v4 = PrimaryMonitorTarget;
  *((_BYTE *)this + 576) = 1;
  v5 = this[2];
  for ( i = this[1]; i != v5; ++i )
  {
    v7 = *i;
    if ( *i )
      v8 = *(int *)(*(_QWORD *)(v7 + 80) + 12LL) + v7 + 80;
    else
      v8 = 0LL;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*this)[82] + 48LL))((*this)[82], v8);
    v9 = v7 + *(int *)(*(_QWORD *)(v7 + 80) + 12LL) + 80LL;
    LOBYTE(v10) = *((_BYTE *)this + 582);
    v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 24LL))(v9, v10);
    v13 = v11;
    if ( v11 >= 0 )
    {
      if ( v11 == 142213121 )
        goto LABEL_9;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0x99u);
    }
    *((_BYTE *)this + 581) = 0;
LABEL_9:
    if ( v4 )
      v14 = (__int64)v4 + *(int *)(*((_QWORD *)v4 + 1) + 12LL) + 8;
    else
      v14 = 0LL;
    if ( *(int *)(*(_QWORD *)(v7 + 80) + 12LL) + v7 + 80 == v14 )
      v2 = v13;
  }
  CRenderTargetManager::EndTargetEnumeration((CRenderTargetManager *)this);
  result = v2;
  *((_BYTE *)this + 582) = 0;
  return result;
}
