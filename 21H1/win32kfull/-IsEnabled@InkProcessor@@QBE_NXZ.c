/*
 * XREFs of ?IsEnabled@InkProcessor@@QBE_NXZ @ 0x1ABE03
 * Callers:
 *     _InkProcessorIsInkDevice@16 @ 0x183963 (_InkProcessorIsInkDevice@16.c)
 * Callees:
 *     <none>
 */

bool __thiscall InkProcessor::IsEnabled(InkProcessor *this)
{
  char v2; // bl

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(this, 0);
  v2 = *((_BYTE *)this + 4);
  ExReleasePushLockSharedEx(this, 0);
  KeLeaveCriticalRegion();
  return v2;
}
