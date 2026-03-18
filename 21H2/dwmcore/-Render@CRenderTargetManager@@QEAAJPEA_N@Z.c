/*
 * XREFs of ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x18007CF20
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAXPEA_N@Z @ 0x18007CB4C (-ProcessComposition@CComposition@@IEAAXPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ @ 0x180079A00 (-ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ.c)
 *     ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x180081138 (-EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::Render(CRenderTargetManager *this, bool *a2)
{
  int v2; // edi
  char *v3; // rsi
  bool *v4; // r15
  char v6; // r14
  __int64 v7; // rbp
  _QWORD *i; // rdi
  int v9; // eax
  __int64 v10; // rcx
  __int64 *v11; // r12
  __int64 *j; // r14
  __int64 v13; // rbp
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rcx
  int v20; // ebp
  __int64 v22; // rcx
  char v23; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (char *)this + 582;
  v4 = a2;
  *a2 = 0;
  if ( *((_BYTE *)this + 581) && !*v3 )
    goto LABEL_20;
  v6 = *v3;
  v7 = qword_1803D37F8;
  for ( i = (_QWORD *)CSyncLockGroup::g_syncLockGroups; i != (_QWORD *)v7; ++i )
  {
    LOBYTE(a2) = v6;
    (**(void (__fastcall ***)(_QWORD, bool *))*i)(*i, a2);
  }
  *((_BYTE *)this + 576) = 1;
  v9 = CRenderTargetManager::ComputeOverlayConfiguration(this);
  v2 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_180345830, 3LL, v9, 0x68u);
  v11 = (__int64 *)*((_QWORD *)this + 2);
  for ( j = (__int64 *)*((_QWORD *)this + 1); j != v11; ++j )
  {
    v13 = *j;
    v14 = *(_QWORD *)this;
    v23 = 0;
    if ( v13 )
      v15 = *(int *)(*(_QWORD *)(v13 + 80) + 12LL) + v13 + 80;
    else
      v15 = 0LL;
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v14 + 656) + 40LL))(*(_QWORD *)(v14 + 656), v15);
    v16 = v13 + *(int *)(*(_QWORD *)(v13 + 80) + 12LL) + 80LL;
    LOBYTE(v17) = *v3;
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, char *))(*(_QWORD *)v16 + 16LL))(
            v16,
            *((_QWORD *)this + 65),
            v17,
            &v23);
    v20 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, &dword_180345830, 3LL, v18, 0x73u);
      MilInstrumentationCheckHR_MaybeFailFast(v22, &dword_180345830, 3LL, v20, 0x7Au);
    }
    else if ( v23 )
    {
      *v4 = 1;
    }
    if ( !v2 || v2 >= 0 && v20 < 0 )
      v2 = v20;
  }
  CRenderTargetManager::EndTargetEnumeration(this);
  if ( v2 >= 0 && !*v4 )
LABEL_20:
    *v3 = 0;
  return (unsigned int)v2;
}
