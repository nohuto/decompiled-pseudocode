/*
 * XREFs of ?NeedsPresent@CFrameInfo@@QEBA_NXZ @ 0x18007BD30
 * Callers:
 *     ?PresentFrame@CPartitionVerticalBlankScheduler@@AEAA_NPEAVCFrameInfo@@I@Z @ 0x18007BB3C (-PresentFrame@CPartitionVerticalBlankScheduler@@AEAA_NPEAVCFrameInfo@@I@Z.c)
 *     ?Render@CPartitionVerticalBlankScheduler@@AEAAXPEAUFRAME_TIME_INFO@@@Z @ 0x18007BC40 (-Render@CPartitionVerticalBlankScheduler@@AEAAXPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CFrameInfo::NeedsPresent(CFrameInfo *this)
{
  bool result; // al

  result = 0;
  if ( *((_BYTE *)this + 152) )
    return *((_BYTE *)this + 153) == 0;
  return result;
}
