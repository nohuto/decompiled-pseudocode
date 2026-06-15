/*
 * XREFs of ?GetConstraintsFromXML@CConstraintModelXMLParser@@QEAAJPEBGPEAW4RmResourceType@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@4@PEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@4@PEAV?$CAtlArray@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@@2@@4@@Z @ 0x18013B974
 * Callers:
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x180066E30 (-Initialize@CConstraintModel@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?ParseXML@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@5@PEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@5@PEAV?$CAtlArray@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@@2@@5@@Z @ 0x18013CCE8 (-ParseXML@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV-$CAtlMap@V-$.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CConstraintModelXMLParser::GetConstraintsFromXML(
        CConstraintModelXMLParser *this,
        LPCWSTR pszFile,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7)
{
  HRESULT v8; // ebx
  void *ppvObject; // [rsp+40h] [rbp-10h] BYREF
  IStream *ppstm; // [rsp+48h] [rbp-8h] BYREF

  ppvObject = 0LL;
  ppstm = 0LL;
  v8 = SHCreateStreamOnFileW(pszFile, 0, &ppstm);
  if ( v8 >= 0 )
  {
    v8 = CreateXmlReader(&GUID_7279fc81_709d_4095_b63d_69fe4b0d9030, &ppvObject, 0LL);
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)ppvObject + 40LL))(ppvObject, 4LL);
      if ( v8 >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)ppvObject + 40LL))(ppvObject, 6LL, 60LL);
        if ( v8 >= 0 )
        {
          v8 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)ppvObject + 40LL))(ppvObject, 1LL, 2LL);
          if ( v8 >= 0 )
          {
            v8 = (*(__int64 (__fastcall **)(void *, IStream *))(*(_QWORD *)ppvObject + 24LL))(ppvObject, ppstm);
            if ( v8 >= 0 )
              v8 = CConstraintModelXMLParser::ParseXML(this, (struct IXmlReader *)ppvObject, a5, a6, a7);
          }
        }
      }
    }
  }
  if ( ppstm )
    (*(void (__fastcall **)(IStream *))(*(_QWORD *)ppstm + 16LL))(ppstm);
  if ( ppvObject )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppvObject + 16LL))(ppvObject);
  return (unsigned int)v8;
}
