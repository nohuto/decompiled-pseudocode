/*
 * XREFs of ?Destroy@CChannel@@UEAAJXZ @ 0x180153100
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CChannel@@UEAAKXZ @ 0x1800D8C40 (-Release@CChannel@@UEAAKXZ.c)
 *     ?DestroyChannel@CInternalMilCmdConnection@@QEAAJI@Z @ 0x18015242C (-DestroyChannel@CInternalMilCmdConnection@@QEAAJI@Z.c)
 */

__int64 __fastcall CChannel::Destroy(CChannel *this)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  v2 = CInternalMilCmdConnection::DestroyChannel(*((CInternalMilCmdConnection **)this + 6), *((_DWORD *)this + 14));
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x20Fu, 0LL);
  CChannel::Release(this);
  return v4;
}
