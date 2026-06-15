/*
 * XREFs of ?create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z @ 0x14003C7A8
 * Callers:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x14003C128 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?what@ResultException@wil@@UEBAPEBDXZ @ 0x14003C900 (-what@ResultException@wil@@UEBAPEBDXZ.c)
 * Callees:
 *     memcpy_s @ 0x140029158 (memcpy_s.c)
 *     ?assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z @ 0x14003C764 (-assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x14003C8A8 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 */

bool __fastcall wil::details::shared_buffer::create(wil::details::shared_buffer *this, const void *Source, rsize_t a3)
{
  HANDLE ProcessHeap; // rax
  int *v7; // rax
  int *v8; // rbx

  if ( !a3 )
  {
    wil::details::shared_buffer::reset(this);
LABEL_7:
    LOBYTE(v7) = 1;
    return (char)v7;
  }
  ProcessHeap = GetProcessHeap();
  v7 = (int *)HeapAlloc(ProcessHeap, 0, a3 + 4);
  v8 = v7;
  if ( v7 )
  {
    *v7 = 0;
    if ( Source )
      memcpy_s(v7 + 1, a3, Source, a3);
    wil::details::shared_buffer::assign(this, v8, a3);
    goto LABEL_7;
  }
  return (char)v7;
}
