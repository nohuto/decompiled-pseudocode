/*
 * XREFs of ??1CSerialWorkQueue@@QEAA@XZ @ 0x1800B7D64
 * Callers:
 *     ??1AudioJournal@@QEAA@XZ @ 0x180069668 (--1AudioJournal@@QEAA@XZ.c)
 *     _AudioJournal::AudioJournal_::_1_::dtor$1 @ 0x180079DE2 (_AudioJournal--AudioJournal_--_1_--dtor$1.c)
 *     ??1CAudioSrv@@UEAA@XZ @ 0x1800B7AAC (--1CAudioSrv@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CSerialWorkQueue::~CSerialWorkQueue(struct _TP_POOL **this)
{
  struct _TP_POOL *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    CloseThreadpool(v2);
    *this = 0LL;
  }
  _Mtx_destroy_in_situ((_Mtx_t)(this + 11));
}
