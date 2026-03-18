/*
 * XREFs of ?SetCompositionMode@CCompositionSurfaceBitmap@@UEAAX_NU_LUID@@W4BufferCompositionMode@@@Z @ 0x1800B73E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::SetCompositionMode(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 184LL))(v1);
  return result;
}
