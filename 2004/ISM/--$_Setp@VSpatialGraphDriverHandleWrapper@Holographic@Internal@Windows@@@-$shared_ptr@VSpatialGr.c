/*
 * XREFs of ??$_Setp@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEAAXPEAVSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@U?$integral_constant@_N$0A@@1@@Z @ 0x1801555F8
 * Callers:
 *     ??$reset@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAXPEAVSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@Z @ 0x180156238 (--$reset@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@-$shared_ptr@VSpatialGr.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18003CA78 (--2@YAPEAX_K@Z.c)
 */

_DWORD *__fastcall std::shared_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::_Setp<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>(
        Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper **a1,
        Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper *a2)
{
  _DWORD *result; // rax

  try
  {
    result = operator new(0x18uLL);
    result[2] = 1;
    result[3] = 1;
    *(_QWORD *)result = &std::_Ref_count<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::`vftable';
    *((_QWORD *)result + 2) = a2;
    *a1 = a2;
    a1[1] = (Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper *)result;
  }
  catch ( ... )
  {
    if ( a2 )
      Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::`scalar deleting destructor'(a2, 1u);
    throw;
  }
  return result;
}
