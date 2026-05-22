/*
 * XREFs of ??0Entry@NodePoseValidityCollection@Details@Holographic@Internal@Windows@@QEAA@XZ @ 0x18001E1B0
 * Callers:
 *     ??0NodePoseValidityCollection@Details@Holographic@Internal@Windows@@QEAA@XZ @ 0x180036B84 (--0NodePoseValidityCollection@Details@Holographic@Internal@Windows@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

Windows::Internal::Holographic::Details::NodePoseValidityCollection::Entry *__fastcall Windows::Internal::Holographic::Details::NodePoseValidityCollection::Entry::Entry(
        Windows::Internal::Holographic::Details::NodePoseValidityCollection::Entry *this)
{
  Windows::Internal::Holographic::Details::NodePoseValidityCollection::Entry *result; // rax

  result = this;
  *(_OWORD *)this = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 3) = 0LL;
  return result;
}
