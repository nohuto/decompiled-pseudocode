/*
 * XREFs of GreEqualRgn @ 0x1C003DCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreEqualRgn@@YAHAEAVRGNOBJAPI@@0@Z @ 0x1C003DD24 (-GreEqualRgn@@YAHAEAVRGNOBJAPI@@0@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0082264 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0086240 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 */

__int64 __fastcall GreEqualRgn(HRGN a1, HRGN a2)
{
  _BYTE v4[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v5[32]; // [rsp+38h] [rbp-20h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v5, a1, 1);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v4, a2, 1);
  LODWORD(a2) = GreEqualRgn((struct RGNOBJAPI *)v5, (struct RGNOBJAPI *)v4);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v4);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v5);
  return (unsigned int)a2;
}
