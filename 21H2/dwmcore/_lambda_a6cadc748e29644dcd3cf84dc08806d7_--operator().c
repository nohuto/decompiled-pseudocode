/*
 * XREFs of _lambda_a6cadc748e29644dcd3cf84dc08806d7_::operator() @ 0x18023BB94
 * Callers:
 *     ?OnSceneFrameTick@CSceneMesh@@EEAAJPEAUISpectreRenderer@@_K@Z @ 0x18023BC90 (-OnSceneFrameTick@CSceneMesh@@EEAAJPEAUISpectreRenderer@@_K@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall lambda_a6cadc748e29644dcd3cf84dc08806d7_::operator()(__int64 *a1)
{
  __int64 *result; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx

  result = (__int64 *)a1[1];
  v3 = *a1;
  v4 = *result;
  if ( *(_QWORD *)(v3 + 160) != *result )
  {
    *result = 0LL;
    v5 = *(_QWORD *)(v3 + 160);
    *(_QWORD *)(v3 + 160) = v4;
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      v3 = *a1;
    }
    result = (__int64 *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, 0LL, 0LL);
    v3 = *a1;
  }
  *(_BYTE *)(v3 + 168) = 0;
  return result;
}
