/*
 * XREFs of ?ReleasePrimitiveProperties@CPrimitiveColor@@QEAAXXZ @ 0x1801E2370
 * Callers:
 *     ??1CPrimitiveColor@@MEAA@XZ @ 0x1801E21EC (--1CPrimitiveColor@@MEAA@XZ.c)
 *     ?NotifyInvalidResource@CPrimitiveColor@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801E2230 (-NotifyInvalidResource@CPrimitiveColor@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPrimitiveColor::ReleasePrimitiveProperties(CPrimitiveColor *this)
{
  __int64 i; // rsi
  _QWORD *v3; // rbx
  char *v4; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 22); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD **)(*((_QWORD *)this + 8) + 8 * i);
    v4 = (char *)v3 + *(int *)(v3[2] + 8LL) + 16;
    (*(void (__fastcall **)(char *, char *))(*(_QWORD *)v4 + 48LL))(v4, (char *)this + 56);
    (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
  }
  *((_DWORD *)this + 22) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 64, 8u);
}
