/*
 * XREFs of ?StartStream@CStreamGroup@@UEAAJ_K@Z @ 0x14003E8C0
 * Callers:
 *     ?StartStream@CStreamGroup@@WBI@EAAJ_K@Z @ 0x14002A0E0 (-StartStream@CStreamGroup@@WBI@EAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamGroup::StartStream(CStreamGroup *this, __int64 a2)
{
  return CSubmixImpl::StartStream((CStreamGroup *)((char *)this + 24), a2);
}
