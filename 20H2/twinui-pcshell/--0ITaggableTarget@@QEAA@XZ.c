/*
 * XREFs of ??0ITaggableTarget@@QEAA@XZ @ 0x1803C7584
 * Callers:
 *     ??0CAppTransitionTargetBase@@QEAA@XZ @ 0x1803C7384 (--0CAppTransitionTargetBase@@QEAA@XZ.c)
 * Callees:
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x1800CEF78 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 */

ITaggableTarget *__fastcall ITaggableTarget::ITaggableTarget(ITaggableTarget *this)
{
  IApplicationViewChangeListener::IApplicationViewChangeListener(this);
  *(_QWORD *)this = &Windows::Foundation::Collections::IIterable<unsigned int>::`vftable';
  return this;
}
