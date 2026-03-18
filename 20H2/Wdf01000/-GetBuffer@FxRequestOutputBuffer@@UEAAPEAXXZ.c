/*
 * XREFs of ?GetBuffer@FxRequestOutputBuffer@@UEAAPEAXXZ @ 0x1C0055030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall FxRequestOutputBuffer::GetBuffer(FxRequestOutputBuffer *this)
{
  _MDL *m_Mdl; // rcx

  if ( (*(_DWORD *)(*((_QWORD *)this[-8].m_Buffer + 23) + 24LL) & 3) == 0
    || (*(_DWORD *)(*((_QWORD *)this[-8].m_Buffer + 23) + 24LL) & 3) == 3 )
  {
    return this->m_Buffer;
  }
  m_Mdl = this->m_Mdl;
  if ( (m_Mdl->MdlFlags & 5) != 0 )
    return m_Mdl->MappedSystemVa;
  else
    return MmMapLockedPagesSpecifyCache(m_Mdl, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10);
}
