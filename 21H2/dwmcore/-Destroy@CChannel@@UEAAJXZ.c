/*
 * XREFs of ?Destroy@CChannel@@UEAAJXZ @ 0x1801AA740
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CChannel@@UEAAKXZ @ 0x18002CF20 (-Release@CChannel@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DestroyChannel@CInternalMilCmdConnection@@QEAAJI@Z @ 0x180193A64 (-DestroyChannel@CInternalMilCmdConnection@@QEAAJI@Z.c)
 */

__int64 __fastcall CChannel::Destroy(CChannel *this)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  v2 = CInternalMilCmdConnection::DestroyChannel(*((RTL_SRWLOCK **)this + 6), *((_DWORD *)this + 14));
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0LL, v2, 0x227u);
  CChannel::Release(this);
  return v4;
}
