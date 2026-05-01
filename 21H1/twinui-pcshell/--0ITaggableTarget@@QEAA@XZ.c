/*
 * XREFs of ??0ITaggableTarget@@QEAA@XZ @ 0x1803A6DE4
 * Callers:
 *     ??0CAppTransitionTargetBase@@QEAA@XZ @ 0x1803A6BE4 (--0CAppTransitionTargetBase@@QEAA@XZ.c)
 * Callees:
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x1800BAF18 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 */

ITaggableTarget *__fastcall ITaggableTarget::ITaggableTarget(ITaggableTarget *this)
{
  IApplicationViewChangeListener::IApplicationViewChangeListener(this);
  *(_QWORD *)this = &Windows::Foundation::Collections::IIterable<unsigned int>::`vftable';
  return this;
}
