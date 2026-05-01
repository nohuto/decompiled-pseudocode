/*
 * XREFs of ?OpenPropertyStoreInternal@CImmersiveApp@@UEAAJW4IMMAPPPROPERTYSTOREFLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x180043F90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

HRESULT __fastcall CImmersiveApp::OpenPropertyStoreInternal(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // rbx
  HRESULT result; // eax

  *a4 = 0LL;
  v4 = (_QWORD *)(a1 + 616);
  if ( *(_QWORD *)(a1 + 616) )
    return (**(__int64 (__fastcall ***)(_QWORD, __int64, _QWORD *))*v4)(*v4, a3, a4);
  result = PSCreateMemoryPropertyStore(&GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99, (void **)(a1 + 616));
  if ( result >= 0 )
    return (**(__int64 (__fastcall ***)(_QWORD, __int64, _QWORD *))*v4)(*v4, a3, a4);
  return result;
}
