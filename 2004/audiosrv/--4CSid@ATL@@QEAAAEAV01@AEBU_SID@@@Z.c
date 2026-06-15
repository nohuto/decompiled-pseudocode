/*
 * XREFs of ??4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z @ 0x1800D5C68
 * Callers:
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x180007410 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 * Callees:
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x18002C8BC (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?Copy@CSid@ATL@@AEAAXAEBU_SID@@@Z @ 0x1800D6914 (-Copy@CSid@ATL@@AEAAXAEBU_SID@@@Z.c)
 */

ATL::CSid *__fastcall ATL::CSid::operator=(ATL::CSid *this, struct _SID *a2)
{
  if ( !*((_BYTE *)this + 76) || (struct _SID *)((char *)this + 8) != a2 )
  {
    *((_DWORD *)this + 20) = 7;
    ATL::CSimpleStringT<unsigned short,0>::Empty((_QWORD *)this + 11);
    ATL::CSimpleStringT<unsigned short,0>::Empty((_QWORD *)this + 12);
    ATL::CSimpleStringT<unsigned short,0>::Empty((_QWORD *)this + 13);
    ATL::CSimpleStringT<unsigned short,0>::Empty((_QWORD *)this + 14);
    *((_BYTE *)this + 76) = 0;
    ATL::CSid::Copy(this, a2);
    *((_DWORD *)this + 20) = 8;
  }
  return this;
}
