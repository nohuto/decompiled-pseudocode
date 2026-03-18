/*
 * XREFs of GreGetRgnBox @ 0x1C001C210
 * Callers:
 *     NtGdiGetRgnBox @ 0x1C001C1C0 (NtGdiGetRgnBox.c)
 *     EngGetRgnBox @ 0x1C0155540 (EngGetRgnBox.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C007B944 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C007F290 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C007FF20 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 */

__int64 __fastcall GreGetRgnBox(HRGN a1, __int64 a2)
{
  unsigned int v3; // edi
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v5, a1, 1);
  if ( a2 )
  {
    if ( v5[0] )
    {
      *(_OWORD *)a2 = *(_OWORD *)(v5[0] + 96LL);
      v3 = RGNOBJ::iComplexity((RGNOBJ *)v5);
      if ( v3 == 1 )
      {
        *(_DWORD *)a2 = 0;
        *(_DWORD *)(a2 + 4) = 0;
        *(_DWORD *)(a2 + 8) = 0;
        *(_DWORD *)(a2 + 12) = 0;
      }
    }
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v5);
  return v3;
}
