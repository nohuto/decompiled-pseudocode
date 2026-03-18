/*
 * XREFs of ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C00C3D90
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C003DE00 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C004BE7C (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C0043DF0 (HmgDecrementShareReferenceCountEx.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00471A0 (HmgIncrementShareReferenceCount.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00C3E44 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C00C3EA0 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 */

struct HPATH__ *__fastcall DC::hpath(DC *this, struct HPATH__ *a2)
{
  struct HPATH__ *result; // rax
  _BYTE v5[8]; // [rsp+20h] [rbp-88h] BYREF
  int *v6; // [rsp+28h] [rbp-80h]

  result = (struct HPATH__ *)*((_QWORD *)this + 25);
  if ( a2 != result )
  {
    if ( result )
    {
      XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v5, *((struct HPATH__ **)this + 25));
      if ( v6 && (v6[21] & 1) == 0 )
        HmgDecrementShareReferenceCountEx((__int64)v6, 0LL);
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v5);
    }
    *((_QWORD *)this + 25) = a2;
    result = a2;
    if ( a2 )
    {
      XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v5, a2);
      if ( v6 )
      {
        if ( (v6[21] & 1) == 0 )
          HmgIncrementShareReferenceCount(v6);
      }
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v5);
      return (struct HPATH__ *)*((_QWORD *)this + 25);
    }
  }
  return result;
}
