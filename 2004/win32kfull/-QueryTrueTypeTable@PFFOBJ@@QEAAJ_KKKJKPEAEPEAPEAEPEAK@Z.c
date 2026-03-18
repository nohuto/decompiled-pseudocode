/*
 * XREFs of ?QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z @ 0x1C00DF94C
 * Callers:
 *     ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1C00DF72C (-ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z.c)
 *     ?pjTable@RFONTOBJ@@QEAAPEAEKPEAK@Z @ 0x1C02A8E38 (-pjTable@RFONTOBJ@@QEAAPEAEKPEAK@Z.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C00E0E70 (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ?bCheckFntFileInfo@PFFOBJ@@QEAAHXZ @ 0x1C00E13E4 (-bCheckFntFileInfo@PFFOBJ@@QEAAHXZ.c)
 *     EngUnmapFontFileFD @ 0x1C0113EA0 (EngUnmapFontFileFD.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PFFOBJ::QueryTrueTypeTable(
        PFFOBJ *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int8 *a7,
        unsigned __int8 **a8,
        unsigned int *a9)
{
  unsigned int v13; // edi
  __int64 (__fastcall *v14)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, unsigned __int8 *, unsigned __int8 **, unsigned int *); // rbx
  ULONG_PTR *v16; // rbx
  __int64 v17; // rsi
  ULONG_PTR *v18; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v19; // [rsp+58h] [rbp-20h]

  if ( !(unsigned int)PFFOBJ::bCheckFntFileInfo(this) )
    return 0xFFFFFFFFLL;
  v13 = -1;
  v14 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, unsigned __int8 *, unsigned __int8 **, unsigned int *))(*(_QWORD *)(*(_QWORD *)this + 88LL) + 3072LL);
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)&v18, this);
  if ( a7 )
    *a7 = 0;
  if ( v14 )
    v13 = v14(a2, a3, a4, a5, a6, a7, a8, a9);
  if ( v19 )
  {
    v16 = v18;
    v17 = v19;
    do
    {
      EngUnmapFontFileFD(*v16++);
      --v17;
    }
    while ( v17 );
  }
  return v13;
}
