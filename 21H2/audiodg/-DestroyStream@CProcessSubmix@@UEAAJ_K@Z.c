/*
 * XREFs of ?DestroyStream@CProcessSubmix@@UEAAJ_K@Z @ 0x140001610
 * Callers:
 *     ?DestroyStream@CProcessSubmix@@WBA@EAAJ_K@Z @ 0x14002A850 (-DestroyStream@CProcessSubmix@@WBA@EAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcessSubmix::DestroyStream(CProcessSubmix *this, unsigned __int64 a2)
{
  return CSubmixImpl::DestroyStream((CProcessSubmix *)((char *)this + 16), a2);
}
