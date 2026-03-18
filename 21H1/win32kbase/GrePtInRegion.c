/*
 * XREFs of GrePtInRegion @ 0x1C001E180
 * Callers:
 *     NtGdiPtInRegion @ 0x1C0149290 (NtGdiPtInRegion.c)
 * Callees:
 *     ?bInside@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C001E200 (-bInside@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     EngSetLastError @ 0x1C003C4D0 (EngSetLastError.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C007B944 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C007F290 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 */

__int64 __fastcall GrePtInRegion(HRGN a1, LONG a2, LONG a3)
{
  unsigned int v5; // ebx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF
  _POINTL v8; // [rsp+68h] [rbp+20h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v7, a1, 1);
  v5 = 0;
  if ( v7[0] )
  {
    v8.x = a2;
    v8.y = a3;
    LOBYTE(v5) = (unsigned int)RGNOBJ::bInside((RGNOBJ *)v7, &v8) == 2;
  }
  else
  {
    EngSetLastError(6u);
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v7);
  return v5;
}
