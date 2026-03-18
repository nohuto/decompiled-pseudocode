/*
 * XREFs of ?NotifyInvalidResource@CPrimitiveGroup@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801E7410
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x1800382C8 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 */

void __fastcall CPrimitiveGroup::NotifyInvalidResource(CPrimitiveGroup *this, const struct IDeviceResource *a2)
{
  char *v2; // rbx

  v2 = (char *)this - 64;
  CPrimitiveGroup::ReleasePrimitiveCaches((CPrimitiveGroup *)((char *)this - 64), 1);
  (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*(_QWORD *)v2 + 72LL))(v2, 0LL, 0LL);
}
