/*
 * XREFs of ?ParseSingleResource@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGKPEAK@Z @ 0x18013C894
 * Callers:
 *     ?ParseLimits@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@5@@Z @ 0x18013C1A8 (-ParseLimits@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV-$CAtlMap@.c)
 *     ?ParseResourceConsumer@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@PEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@4@@Z @ 0x18013C50C (-ParseResourceConsumer@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV-$CAtlMap@V-$CStringT.c)
 * Callees:
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     ?FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z @ 0x18013B710 (-FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z.c)
 *     ?ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z @ 0x18013C828 (-ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z.c)
 */

__int64 __fastcall CConstraintModelXMLParser::ParseSingleResource(
        CConstraintModelXMLParser *this,
        struct IXmlReader *a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned int *a5)
{
  int v7; // ebx
  wchar_t *EndPtr; // [rsp+30h] [rbp-58h] BYREF
  wchar_t String[8]; // [rsp+38h] [rbp-50h] BYREF
  int v11; // [rsp+48h] [rbp-40h]
  __int16 v12; // [rsp+4Ch] [rbp-3Ch]

  v7 = CConstraintModelXMLParser::ParseSimpleElement(this, a2, L"ID", a3, 0x101u);
  if ( v7 >= 0 )
  {
    v11 = 0;
    v12 = 0;
    *(_OWORD *)String = 0LL;
    v7 = CConstraintModelXMLParser::ParseSimpleElement(this, a2, L"Consumption", String, 0xBu);
    if ( v7 >= 0 )
    {
      *a5 = wcstoul(String, &EndPtr, 10);
      if ( *EndPtr || EndPtr == String )
        v7 = -2147024809;
      if ( v7 >= 0 )
        return (unsigned int)CConstraintModelXMLParser::FindEndElement(this, a2, L"Resource");
    }
  }
  return (unsigned int)v7;
}
