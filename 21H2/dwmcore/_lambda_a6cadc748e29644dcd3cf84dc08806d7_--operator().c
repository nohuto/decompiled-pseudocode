/*
 * XREFs of _lambda_a6cadc748e29644dcd3cf84dc08806d7_::operator() @ 0x1801E8CA4
 * Callers:
 *     ?OnSceneFrameTick@CSceneMesh@@EEAAJPEAUISpectreRenderer@@_K@Z @ 0x1801E8D80 (-OnSceneFrameTick@CSceneMesh@@EEAAJPEAUISpectreRenderer@@_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_a6cadc748e29644dcd3cf84dc08806d7_::operator()(_QWORD *a1)
{
  __int64 *v2; // rcx
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = (__int64 *)a1[1];
  result = *a1;
  v4 = *v2;
  if ( *(_QWORD *)(*a1 + 152LL) != *v2 )
  {
    *v2 = 0LL;
    v5 = *(_QWORD *)(result + 152);
    *(_QWORD *)(result + 152) = v4;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*a1 + 72LL))(*a1, 0LL, 0LL);
    result = *a1;
  }
  *(_BYTE *)(result + 160) = 0;
  return result;
}
