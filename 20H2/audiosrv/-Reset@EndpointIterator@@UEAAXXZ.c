/*
 * XREFs of ?Reset@EndpointIterator@@UEAAXXZ @ 0x18004DB80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EndpointIterator::Reset(EndpointIterator *this)
{
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
}
