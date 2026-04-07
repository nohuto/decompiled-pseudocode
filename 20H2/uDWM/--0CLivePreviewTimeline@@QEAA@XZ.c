/*
 * XREFs of ??0CLivePreviewTimeline@@QEAA@XZ @ 0x180051398
 * Callers:
 *     ?Initialize@CLivePreview@@MEAAJXZ @ 0x180051260 (-Initialize@CLivePreview@@MEAAJXZ.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x180094E60 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 * Callees:
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180025084 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 */

CLivePreviewTimeline *__fastcall CLivePreviewTimeline::CLivePreviewTimeline(CLivePreviewTimeline *this)
{
  CLivePreviewTimeline *v1; // r8
  CLivePreviewTimeline *result; // rax

  CTimelineBase::CTimelineBase((__int64)this, -1.0, 0.0, 1.0, 0);
  result = v1;
  *(_QWORD *)v1 = &CLivePreviewTimeline::`vftable';
  return result;
}
