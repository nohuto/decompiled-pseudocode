/*
 * XREFs of ?ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z @ 0x18013C828
 * Callers:
 *     ?ParseExclusiveEndpoint@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAVExclusiveEndpointInfo@@@Z @ 0x18013BF4C (-ParseExclusiveEndpoint@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAVExclusiveEndpointInf.c)
 *     ?ParsePhoneCallInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x18013C3E8 (-ParsePhoneCallInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z.c)
 *     ?ParseSingleResource@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGKPEAK@Z @ 0x18013C894 (-ParseSingleResource@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGKPEAK@Z.c)
 *     ?ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x18013C988 (-ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z.c)
 * Callees:
 *     ?FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z @ 0x18013B710 (-FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z.c)
 *     ?FindStartElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z @ 0x18013B78C (-FindStartElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z.c)
 *     ?ParseText@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGI@Z @ 0x18013CC34 (-ParseText@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGI@Z.c)
 */

int __fastcall CConstraintModelXMLParser::ParseSimpleElement(
        CConstraintModelXMLParser *this,
        struct IXmlReader *a2,
        const unsigned __int16 *a3,
        unsigned __int16 *a4,
        unsigned int a5)
{
  int result; // eax

  result = CConstraintModelXMLParser::FindStartElement(this, a2, a3);
  if ( result >= 0 )
  {
    result = CConstraintModelXMLParser::ParseText(this, a2, a4, a5);
    if ( result >= 0 )
      return CConstraintModelXMLParser::FindEndElement(this, a2, a3);
  }
  return result;
}
