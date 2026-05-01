/*
 * XREFs of ?IsEqualByHostId@ViewWrapperBase@@UEAA_N_K@Z @ 0x1802CF3E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall ViewWrapperBase::IsEqualByHostId(ViewWrapperBase *this, __int64 a2)
{
  return *((_QWORD *)this + 21) == a2;
}
