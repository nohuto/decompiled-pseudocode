/*
 * XREFs of ?Update@NodePoseValidityCollection@Details@Holographic@Internal@Windows@@QEAA?AW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEBUSPATIAL_NODE_ID@@W46@@Z @ 0x1801667C4
 * Callers:
 *     ?UpdateMostRecentNodePoseValidity@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_VALIDITY_FLAGS@@@Z @ 0x180166864 (-UpdateMostRecentNodePoseValidity@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Holographic::Details::NodePoseValidityCollection::Update(
        __int64 a1,
        _QWORD *a2,
        int a3)
{
  __int64 v3; // rcx
  __int64 *v4; // r10
  unsigned int v6; // r9d
  __int64 v7; // rax
  __int64 *v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  __int128 v11; // xmm0
  __int64 result; // rax

  v3 = qword_180209060;
  v4 = &qword_180209060;
  v6 = 0;
  while ( 1 )
  {
    v7 = *(_QWORD *)v3 - *a2;
    if ( *(_QWORD *)v3 == *a2 )
      v7 = *(_QWORD *)(v3 + 8) - a2[1];
    if ( !v7 )
      break;
    v8 = (__int64 *)(v3 + 24);
    if ( !*(_QWORD *)(v3 + 24) )
      break;
    v9 = *(_QWORD *)v3 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)v3 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v9 = *(_QWORD *)(v3 + 8) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( !v9 )
      break;
    v3 = *v8;
    v4 = v8;
  }
  *v4 = *(_QWORD *)(v3 + 24);
  *(_QWORD *)(v3 + 24) = qword_180209060;
  qword_180209060 = v3;
  v10 = *(_QWORD *)v3 - *a2;
  if ( *(_QWORD *)v3 == *a2 )
    v10 = *(_QWORD *)(v3 + 8) - a2[1];
  if ( !v10 )
    v6 = *(_DWORD *)(v3 + 16);
  v11 = *(_OWORD *)a2;
  *(_DWORD *)(v3 + 16) = a3;
  result = v6;
  *(_OWORD *)v3 = v11;
  return result;
}
