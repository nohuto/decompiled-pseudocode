/*
 * XREFs of ?GetAdapterLuidAndGpuSync@CFlipExBuffer@@UEBAJPEAU_LUID@@PEAPEAX@Z @ 0x1C0065FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipExBuffer::GetAdapterLuidAndGpuSync(CFlipExBuffer *this, struct _LUID *a2, void **a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( *((_QWORD *)this + 39) )
  {
    *a2 = *(struct _LUID *)((char *)this + 328);
    *a3 = (void *)*((_QWORD *)this + 39);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v3;
}
