/*
 * XREFs of ?Release@CDuiRefThread@@UEAAKXZ @ 0x1801F29F0
 * Callers:
 *     ?Release@CDuiRefThread@@WCA@EAAKXZ @ 0x1800CEEF0 (-Release@CDuiRefThread@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CDuiRefThread::Release(CDuiRefThread *this)
{
  return CRefThread::Release(this);
}
