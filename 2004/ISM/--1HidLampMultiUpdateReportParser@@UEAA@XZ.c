/*
 * XREFs of ??1HidLampMultiUpdateReportParser@@UEAA@XZ @ 0x1800AB02C
 * Callers:
 *     ??_GHidLampMultiUpdateReportParser@@UEAAPEAXI@Z @ 0x1800AB200 (--_GHidLampMultiUpdateReportParser@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall HidLampMultiUpdateReportParser::~HidLampMultiUpdateReportParser(HidLampMultiUpdateReportParser *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  *(_QWORD *)this = &HidLampMultiUpdateReportParser::`vftable';
  v2 = (void *)*((_QWORD *)this + 37);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)(72 * ((*((_QWORD *)this + 39) - (_QWORD)v2) / 72LL)));
    *((_QWORD *)this + 37) = 0LL;
    *((_QWORD *)this + 38) = 0LL;
    *((_QWORD *)this + 39) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 33);
  if ( v3 )
  {
    std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)(72 * ((*((_QWORD *)this + 35) - (_QWORD)v3) / 72LL)));
    *((_QWORD *)this + 33) = 0LL;
    *((_QWORD *)this + 34) = 0LL;
    *((_QWORD *)this + 35) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 29);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)(72 * ((*((_QWORD *)this + 31) - (_QWORD)v4) / 72LL)));
    *((_QWORD *)this + 29) = 0LL;
    *((_QWORD *)this + 30) = 0LL;
    *((_QWORD *)this + 31) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 25);
  if ( v5 )
  {
    std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)(72 * ((*((_QWORD *)this + 27) - (_QWORD)v5) / 72LL)));
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
    *((_QWORD *)this + 27) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 21);
  if ( v6 )
  {
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)(72 * ((*((_QWORD *)this + 23) - (_QWORD)v6) / 72LL)));
    *((_QWORD *)this + 21) = 0LL;
    *((_QWORD *)this + 22) = 0LL;
    *((_QWORD *)this + 23) = 0LL;
  }
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
