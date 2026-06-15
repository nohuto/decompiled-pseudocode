/*
 * XREFs of ?ParseText@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGI@Z @ 0x18013BC54
 * Callers:
 *     ?ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z @ 0x18013B848 (-ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180057430 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?LogError@@YAXPEBGZZ @ 0x1800F39C4 (-LogError@@YAXPEBGZZ.c)
 *     ?GetNodeType@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4XmlNodeType@@@Z @ 0x18013AB1C (-GetNodeType@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4XmlNodeType@@@Z.c)
 */

__int64 __fastcall CConstraintModelXMLParser::ParseText(
        enum XmlNodeType *this,
        struct IXmlReader *a2,
        char *a3,
        unsigned int a4)
{
  __int64 v5; // rdi
  int NodeType; // ebx
  unsigned int v9; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+24h] [rbp-14h] BYREF
  unsigned __int16 *v11; // [rsp+28h] [rbp-10h] BYREF

  v9 = 0;
  v5 = a4;
  NodeType = CConstraintModelXMLParser::GetNodeType(this, a2, (enum XmlNodeType *)&v10);
  if ( NodeType >= 0 )
  {
    if ( v10 == 3 )
    {
      NodeType = ((__int64 (__fastcall *)(struct IXmlReader *, unsigned __int16 **, unsigned int *))a2->lpVtbl->GetValue)(
                   a2,
                   &v11,
                   &v9);
      if ( NodeType >= 0 )
      {
        if ( v9 > (unsigned int)v5 )
        {
          NodeType = -2147024809;
          LogError((size_t *)L"Length of entry %d longer than expected length %d", v9, (unsigned int)v5);
        }
        if ( NodeType >= 0 )
          return (unsigned int)StringCchCopyW(a3, v5, (char *)v11);
      }
    }
    else
    {
      return (unsigned int)-2147024809;
    }
  }
  return (unsigned int)NodeType;
}
