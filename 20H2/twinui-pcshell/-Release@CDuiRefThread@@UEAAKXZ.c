/*
 * XREFs of ?Release@CDuiRefThread@@UEAAKXZ @ 0x180215240
 * Callers:
 *     ?Release@CDuiRefThread@@WCA@EAAKXZ @ 0x1800F5120 (-Release@CDuiRefThread@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CDuiRefThread::Release(CDuiRefThread *this)
{
  return CRefThread::Release(this);
}
