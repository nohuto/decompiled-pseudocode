/*
 * XREFs of ?GetIMEConversionMode@TextInputStateAdapter@@UEAAJPEAW4IMEConversionMode@@@Z @ 0x1801A2750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TextInputStateAdapter::GetIMEConversionMode(TextInputStateAdapter *this, enum IMEConversionMode *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, enum IMEConversionMode *))(**((_QWORD **)this + 4) + 64LL))(
           *((_QWORD *)this + 4),
           a2);
}
