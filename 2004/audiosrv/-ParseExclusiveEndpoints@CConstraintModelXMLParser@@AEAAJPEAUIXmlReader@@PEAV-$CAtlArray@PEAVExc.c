/*
 * XREFs of ?ParseExclusiveEndpoints@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@@Z @ 0x18013BD00
 * Callers:
 *     ?ParseConstraintModel@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@5@PEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@5@PEAV?$CAtlArray@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@@2@@5@@Z @ 0x18013B8A8 (-ParseConstraintModel@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV-.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180056810 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18006B69C (memset_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B9080 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GrowBuffer@?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@AEAA_N_K@Z @ 0x1800C41B0 (-GrowBuffer@-$CAtlArray@PEAVExclusiveEndpointInfo@@V-$CElementTraits@PEAVExclusiveEndpointInfo@@.c)
 *     ?LogError@@YAXPEBGZZ @ 0x1800F4654 (-LogError@@YAXPEBGZZ.c)
 *     ?FindStartOrEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG1HPEAH@Z @ 0x18013B4D4 (-FindStartOrEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG1HPEAH@Z.c)
 *     ?ParseExclusiveEndpoint@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAVExclusiveEndpointInfo@@@Z @ 0x18013BBFC (-ParseExclusiveEndpoint@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAVExclusiveEndpointInf.c)
 */

__int64 __fastcall CConstraintModelXMLParser::ParseExclusiveEndpoints(
        CConstraintModelXMLParser *this,
        struct IXmlReader *a2,
        _QWORD *a3)
{
  unsigned int v3; // esi
  int StartOrEndElement; // ebx
  int v8; // ebp
  struct ExclusiveEndpointInfo *v9; // rax
  struct ExclusiveEndpointInfo *v10; // rdi
  unsigned __int64 v11; // r15
  int v13; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  StartOrEndElement = 0;
  v8 = 1;
  v13 = 1;
  while ( v8 )
  {
    StartOrEndElement = CConstraintModelXMLParser::FindStartOrEndElement(
                          this,
                          a2,
                          L"Endpoint",
                          L"ExclusiveEndpoints",
                          0,
                          &v13);
    if ( StartOrEndElement < 0 )
      return (unsigned int)StartOrEndElement;
    v8 = v13;
    if ( !v13 )
      break;
    v9 = (struct ExclusiveEndpointInfo *)operator new(0x3A8uLL);
    v10 = v9;
    if ( v9 )
    {
      *((_DWORD *)v9 + 231) = 0;
      *((_DWORD *)v9 + 232) = 0;
      *((_DWORD *)v9 + 233) = -1;
      memset_0(v9, 0, 0x39CuLL);
    }
    else
    {
      v10 = 0LL;
    }
    if ( !v10 )
      StartOrEndElement = -2147024882;
    if ( StartOrEndElement < 0 )
      return (unsigned int)StartOrEndElement;
    StartOrEndElement = CConstraintModelXMLParser::ParseExclusiveEndpoint(this, a2, v10);
    if ( StartOrEndElement < 0 )
      return (unsigned int)StartOrEndElement;
    v11 = a3[1];
    if ( v11 >= a3[2]
      && !ATL::CAtlArray<ExclusiveEndpointInfo *,ATL::CElementTraits<ExclusiveEndpointInfo *>>::GrowBuffer(
            (__int64)a3,
            v11 + 1) )
    {
      ATL::AtlThrowImpl(-2147024882);
    }
    *(_QWORD *)(*a3 + 8 * v11) = v10;
    ++a3[1];
    ++v3;
  }
  if ( v3 < 2 )
    LogError((size_t *)L"ExclusiveEndpoints list must have more than one endpoint (only found %d)", v3);
  return (unsigned int)StartOrEndElement;
}
