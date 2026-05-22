/*
 * XREFs of ?find@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@Uhstring_insensitive_less@wil@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@@2@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x18016790C
 * Callers:
 *     ?CreateDynamicNodeReferenceWithState@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@AEBUDynamicNodeInfo@234@W4SPATIAL_TRACKING_STATE@@PEAPEAUISpatialGraphNodeReference@234@@Z @ 0x18015A4E0 (-CreateDynamicNodeReferenceWithState@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windo.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>,wil::hstring_insensitive_less,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>>,0>>::find(
        __int64 *a1,
        _QWORD *a2,
        HSTRING *a3)
{
  __int64 *v3; // rsi
  __int64 *v7; // r9
  __int64 *v8; // rax
  __int64 *v9; // rdi
  const WCHAR *StringRawBuffer; // rbx
  const WCHAR *v11; // rax
  const WCHAR *v12; // rbx
  const WCHAR *v13; // rax
  _QWORD *result; // rax
  UINT32 v15[14]; // [rsp+30h] [rbp-38h] BYREF
  UINT32 v16; // [rsp+70h] [rbp+8h] BYREF
  UINT32 length; // [rsp+78h] [rbp+10h] BYREF
  UINT32 v18; // [rsp+88h] [rbp+20h] BYREF

  v3 = (__int64 *)*a1;
  v7 = (__int64 *)*a1;
  v8 = (__int64 *)*a1;
  v9 = *(__int64 **)(*a1 + 8);
  if ( !*((_BYTE *)v9 + 25) )
  {
    do
    {
      StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)v9[4], &length);
      v11 = WindowsGetStringRawBuffer(*a3, &v16);
      if ( CompareStringOrdinal(StringRawBuffer, length, v11, v16, 1) == 1 )
      {
        v9 = (__int64 *)v9[2];
      }
      else
      {
        v3 = v9;
        v9 = (__int64 *)*v9;
      }
    }
    while ( !*((_BYTE *)v9 + 25) );
    v7 = (__int64 *)*a1;
    v8 = (__int64 *)*a1;
  }
  if ( v3 == v7 )
    goto LABEL_10;
  v12 = WindowsGetStringRawBuffer(*a3, v15);
  v13 = WindowsGetStringRawBuffer((HSTRING)v3[4], &v18);
  if ( CompareStringOrdinal(v12, v15[0], v13, v18, 1) == 1 )
  {
    v8 = (__int64 *)*a1;
LABEL_10:
    v3 = v8;
  }
  result = a2;
  *a2 = v3;
  return result;
}
