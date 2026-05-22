/*
 * XREFs of ??0NodePoseValidityCollection@Details@Holographic@Internal@Windows@@QEAA@XZ @ 0x180036B14
 * Callers:
 *     _dynamic_initializer_for__Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::s_mostRecentDynamicNodePoseValidity__ @ 0x180001A30 (_dynamic_initializer_for__Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--s_mos.c)
 * Callees:
 *     ??0Entry@NodePoseValidityCollection@Details@Holographic@Internal@Windows@@QEAA@XZ @ 0x18001E180 (--0Entry@NodePoseValidityCollection@Details@Holographic@Internal@Windows@@QEAA@XZ.c)
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 */

void *__fastcall Windows::Internal::Holographic::Details::NodePoseValidityCollection::NodePoseValidityCollection(
        Windows::Internal::Holographic::Details::NodePoseValidityCollection *this)
{
  __int64 v1; // rsi
  Windows::Internal::Holographic::Details::NodePoseValidityCollection::Entry *v2; // rdi
  unsigned __int64 v3; // rbx

  v1 = 32LL;
  v2 = (Windows::Internal::Holographic::Details::NodePoseValidityCollection::Entry *)&Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::s_mostRecentDynamicNodePoseValidity;
  v3 = 0LL;
  do
  {
    Windows::Internal::Holographic::Details::NodePoseValidityCollection::Entry::Entry(v2);
    v2 = (Windows::Internal::Holographic::Details::NodePoseValidityCollection::Entry *)((char *)v2 + 32);
    --v1;
  }
  while ( v1 );
  memset_0(
    &Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::s_mostRecentDynamicNodePoseValidity,
    0,
    0x400uLL);
  qword_180209060 = (__int64)&Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::s_mostRecentDynamicNodePoseValidity;
  do
  {
    *(_QWORD *)((char *)&Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::s_mostRecentDynamicNodePoseValidity
              + v3
              + 24) = (char *)&Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::s_mostRecentDynamicNodePoseValidity
                    + v3
                    + 32;
    v3 += 32LL;
  }
  while ( v3 < 0x3E0 );
  return &Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::s_mostRecentDynamicNodePoseValidity;
}
