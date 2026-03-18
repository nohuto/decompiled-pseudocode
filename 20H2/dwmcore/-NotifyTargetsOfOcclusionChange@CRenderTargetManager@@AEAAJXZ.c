/*
 * XREFs of ?NotifyTargetsOfOcclusionChange@CRenderTargetManager@@AEAAJXZ @ 0x1800E14A4
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18007CE20 (-PreRender@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x1800775D0 (-EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ.c)
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180079DD0 (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::NotifyTargetsOfOcclusionChange(CRenderTargetManager *this)
{
  CMILCOMBase **v1; // r14
  int v3; // ebx
  __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  CMILCOMBase *v6; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // edi
  void *v11; // [rsp+60h] [rbp+8h] BYREF

  *((_BYTE *)this + 128) = 1;
  v1 = (CMILCOMBase **)*((_QWORD *)this + 1);
  v3 = 0;
  v4 = 0LL;
  v5 = (unsigned __int64)(*((_QWORD *)this + 2) - (_QWORD)v1 + 7LL) >> 3;
  if ( (unsigned __int64)v1 > *((_QWORD *)this + 2) )
    v5 = 0LL;
  if ( v5 )
  {
    do
    {
      v6 = *v1;
      v11 = 0LL;
      if ( (int)CMILCOMBase::InternalQueryInterface(v6, &GUID_12cee53f_ea34_40cf_8dd9_24a64ad480fe, &v11) >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v11 + 24LL))(v11);
        v10 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x274u, 0LL);
        if ( !v3 || v3 >= 0 && v10 < 0 )
          v3 = v10;
      }
      if ( v11 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
      ++v1;
      ++v4;
    }
    while ( v4 != v5 );
  }
  CRenderTargetManager::EndTargetEnumeration(this);
  return (unsigned int)v3;
}
