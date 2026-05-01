/*
 * XREFs of ?Release@CDuiRefThread@@UEAAKXZ @ 0x180215B10
 * Callers:
 *     ?Release@CDuiRefThread@@WCA@EAAKXZ @ 0x1800F3B60 (-Release@CDuiRefThread@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CDuiRefThread::Release(CDuiRefThread *this)
{
  return CRefThread::Release(this);
}
