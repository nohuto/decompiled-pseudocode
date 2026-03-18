/*
 * XREFs of ?Release@CChannel@@UEAAKXZ @ 0x1800D8C40
 * Callers:
 *     ??$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z @ 0x1800D8C10 (--$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z.c)
 *     ?Destroy@CChannel@@UEAAJXZ @ 0x180153100 (-Destroy@CChannel@@UEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??1CChannel@@AEAA@XZ @ 0x18015288C (--1CChannel@@AEAA@XZ.c)
 */

__int64 __fastcall CChannel::Release(CChannel *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
  {
    CChannel::~CChannel(this);
    operator delete(this);
  }
  return v2;
}
