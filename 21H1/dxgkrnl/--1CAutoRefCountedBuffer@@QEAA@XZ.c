/*
 * XREFs of ??1CAutoRefCountedBuffer@@QEAA@XZ @ 0x1C003ED80
 * Callers:
 *     <none>
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001D9A4 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 */

void __fastcall CAutoRefCountedBuffer::~CAutoRefCountedBuffer(struct _SLIST_ENTRY **this)
{
  struct _SLIST_ENTRY *v1; // rcx

  v1 = *this;
  if ( v1 )
    CRefCountedBuffer::RefCountedBufferRelease(v1);
}
