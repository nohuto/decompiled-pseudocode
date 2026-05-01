/*
 * XREFs of ?__clone@?$__func@V_lambda_8fb2622e9c399703a82f01481760af57_@@$$A6AJI_K_J@Z@__function@wistd@@UEBAXPEAV?$__base@$$A6AJI_K_J@Z@23@@Z @ 0x1801F7100
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::__function::__func<_lambda_8fb2622e9c399703a82f01481760af57_,long (unsigned int,unsigned __int64,__int64)>::__clone(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  *(_QWORD *)a2 = &wistd::__function::__func<_lambda_8fb2622e9c399703a82f01481760af57_,long (unsigned int,unsigned __int64,__int64)>::`vftable';
  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  result = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a2 + 16) = result;
  *(_OWORD *)(a2 + 24) = *(_OWORD *)(a1 + 24);
  return result;
}
