/*
 * XREFs of ?GetMdl@FxRequestOutputBuffer@@UEAAPEAU_MDL@@XZ @ 0x1C00559B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_MDL *__fastcall FxRequestOutputBuffer::GetMdl(FxRequestOutputBuffer *this)
{
  if ( (*(_DWORD *)(*((_QWORD *)this[-8].m_Buffer + 23) + 24LL) & 3u) - 1 > 1 )
    return 0LL;
  else
    return this->m_Mdl;
}
