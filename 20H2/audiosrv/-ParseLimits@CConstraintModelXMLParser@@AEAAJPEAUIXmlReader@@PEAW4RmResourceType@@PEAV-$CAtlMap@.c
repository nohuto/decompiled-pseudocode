/*
 * XREFs of ?ParseLimits@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@5@@Z @ 0x18013B1C8
 * Callers:
 *     ?ParseConstraintModel@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@5@PEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@5@PEAV?$CAtlArray@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@@2@@5@@Z @ 0x18013AC18 (-ParseConstraintModel@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV-.c)
 * Callees:
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     ?LogError@@YAXPEBGZZ @ 0x1800F39C4 (-LogError@@YAXPEBGZZ.c)
 *     ?LogOutput@@YAXPEBGZZ @ 0x1800F3A7C (-LogOutput@@YAXPEBGZZ.c)
 *     ?AddTail@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAPEAU__POSITION@@AEBU_ResourceInfo@@@Z @ 0x180138E94 (-AddTail@-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAPEAU__POSITION@@AEBU_Resource.c)
 *     ?Lookup@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@QEBA_NPEBGAEAW4RmResourceType@@@Z @ 0x180139B34 (-Lookup@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceTyp.c)
 *     ?SetAt@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@QEAAPEAU__POSITION@@PEBGAEBW4RmResourceType@@@Z @ 0x18013A330 (-SetAt@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType.c)
 *     ?FindStartOrEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG1HPEAH@Z @ 0x18013A844 (-FindStartOrEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG1HPEAH@Z.c)
 *     ?ParseSingleResource@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGKPEAK@Z @ 0x18013B8B4 (-ParseSingleResource@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGKPEAK@Z.c)
 */

__int64 __fastcall CConstraintModelXMLParser::ParseLimits(
        CConstraintModelXMLParser *a1,
        struct IXmlReader *a2,
        int *a3,
        __int64 a4,
        __int64 *a5)
{
  int *v5; // rdi
  int StartOrEndElement; // ebx
  unsigned int v7; // r9d
  ATL::CAtlException *v9; // rbx
  ATL::CAtlException *v10; // rbx
  int v11; // [rsp+30h] [rbp-298h] BYREF
  int v12; // [rsp+34h] [rbp-294h] BYREF
  int v13; // [rsp+38h] [rbp-290h]
  int *v14; // [rsp+40h] [rbp-288h]
  struct IXmlReader *v15; // [rsp+48h] [rbp-280h]
  CConstraintModelXMLParser *v16; // [rsp+50h] [rbp-278h]
  __int64 v17; // [rsp+60h] [rbp-268h]
  __int64 *v18; // [rsp+70h] [rbp-258h]
  ATL::CAtlException *v19; // [rsp+78h] [rbp-250h] BYREF
  ATL::CAtlException *v20; // [rsp+80h] [rbp-248h] BYREF
  int v21; // [rsp+90h] [rbp-238h] BYREF
  unsigned int v22; // [rsp+94h] [rbp-234h] BYREF
  unsigned __int16 v23[260]; // [rsp+98h] [rbp-230h] BYREF

  v5 = a3;
  v16 = a1;
  v15 = a2;
  v14 = a3;
  v17 = a4;
  v18 = a5;
  StartOrEndElement = 0;
  LogOutput((size_t *)L"Parsing resource IDs and limits");
  v13 = 0;
  v12 = 1;
  while ( 2 )
  {
    if ( StartOrEndElement >= 0 )
    {
      if ( !v12 )
      {
        if ( (unsigned int)(v13 - 1) > 0xE )
          return (unsigned int)-2147024809;
        return (unsigned int)StartOrEndElement;
      }
      StartOrEndElement = CConstraintModelXMLParser::FindStartOrEndElement(v16, v15, L"Resource", L"Limits", 0, &v12);
      if ( StartOrEndElement < 0 )
        continue;
      if ( !v12 )
        continue;
      StartOrEndElement = CConstraintModelXMLParser::ParseSingleResource(v16, v15, v23, v7, &v22);
      if ( StartOrEndElement < 0 )
        continue;
      if ( ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,enum RmResourceType,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<enum RmResourceType>>::Lookup(
             v17,
             v23,
             &v11) )
      {
        StartOrEndElement = -2147024713;
        LogError((size_t *)L"Repeated resource type limit declaration for resource ID %s in XML not allowed", v23);
        continue;
      }
      try
      {
        ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,enum RmResourceType,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<enum RmResourceType>>::SetAt(
          v17,
          v23,
          v5);
      }
      catch ( ATL::CAtlException *v19 )
      {
        v9 = v19;
        if ( *(_DWORD *)v19 == -1073741571 )
          _o__resetstkoflw();
        v11 = *(_DWORD *)v9;
        StartOrEndElement = v11;
        if ( v11 >= 0 )
        {
          v5 = v14;
          goto LABEL_29;
        }
LABEL_12:
        v5 = v14;
        continue;
      }
LABEL_29:
      try
      {
        v21 = *v5;
        StartOrEndElement = 0;
        ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::AddTail(v18, (__int64)&v21);
      }
      catch ( ATL::CAtlException *v20 )
      {
        v10 = v20;
        if ( *(_DWORD *)v20 == -1073741571 )
          _o__resetstkoflw();
        v11 = *(_DWORD *)v10;
        StartOrEndElement = v11;
        if ( v11 < 0 )
          goto LABEL_12;
        v5 = v14;
      }
      ++*v5;
      ++v13;
      LogOutput((size_t *)L"Resource ID %s found with limit %d", v23, v22);
      continue;
    }
    return (unsigned int)StartOrEndElement;
  }
}
