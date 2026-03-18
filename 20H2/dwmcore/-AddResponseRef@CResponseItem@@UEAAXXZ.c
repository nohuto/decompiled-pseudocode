/*
 * XREFs of ?AddResponseRef@CResponseItem@@UEAAXXZ @ 0x1800DDAC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CResponseItem::AddResponseRef(CResponseItem *this)
{
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  ++*((_DWORD *)this + 4);
}
