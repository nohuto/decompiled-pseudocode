/*
 * XREFs of ?ParseExclusiveEndpoint@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAVExclusiveEndpointInfo@@@Z @ 0x18013BF4C
 * Callers:
 *     ?ParseExclusiveEndpoints@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@@Z @ 0x18013C050 (-ParseExclusiveEndpoints@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV-$CAtlArray@PEAVExc.c)
 * Callees:
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     ?FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z @ 0x18013B710 (-FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z.c)
 *     ?ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z @ 0x18013C828 (-ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z.c)
 */

__int64 __fastcall CConstraintModelXMLParser::ParseExclusiveEndpoint(
        CConstraintModelXMLParser *this,
        struct IXmlReader *a2,
        struct ExclusiveEndpointInfo *a3)
{
  int v6; // ebx
  wchar_t *EndPtr; // [rsp+30h] [rbp-58h] BYREF
  wchar_t String[12]; // [rsp+38h] [rbp-50h] BYREF

  v6 = CConstraintModelXMLParser::ParseSimpleElement(this, a2, L"HWID", (unsigned __int16 *)a3, 0xC9u);
  if ( v6 >= 0 )
  {
    v6 = CConstraintModelXMLParser::ParseSimpleElement(this, a2, L"TopologyName", (unsigned __int16 *)a3 + 201, 0x105u);
    if ( v6 >= 0 )
    {
      v6 = CConstraintModelXMLParser::ParseSimpleElement(this, a2, L"PinId", String, 0xBu);
      if ( v6 >= 0 )
      {
        *((_DWORD *)a3 + 231) = wcstoul(String, &EndPtr, 10);
        if ( *EndPtr || EndPtr == String )
          v6 = -2147024809;
        if ( v6 >= 0 )
          CConstraintModelXMLParser::FindEndElement(this, a2, L"Endpoint");
      }
    }
  }
  return (unsigned int)v6;
}
