/*
 * XREFs of GreCreateDIBitmapComp @ 0x1C01173D8
 * Callers:
 *     NtGdiCreateDIBitmapInternal @ 0x1C0066570 (NtGdiCreateDIBitmapInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C0074590 (GreStretchDIBitsInternal.c)
 * Callees:
 *     GreCreateCompatibleBitmapInternal @ 0x1C0018AAC (GreCreateCompatibleBitmapInternal.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E9B8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002ECE4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreSetDIBitsInternal @ 0x1C01174DC (GreSetDIBitsInternal.c)
 */

__int64 __fastcall GreCreateDIBitmapComp(
        HDC a1,
        unsigned int a2,
        int a3,
        char a4,
        __int64 a5,
        _DWORD *a6,
        unsigned int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11)
{
  int v11; // ebp
  unsigned int v14; // esi
  __int64 CompatibleBitmapInternal; // rdi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  DYNAMICMODECHANGESHARELOCK *v20; // rcx

  v11 = a7;
  if ( a7 > 2 || a6 && *a6 >= 0x28u && (unsigned int)(a6[4] - 4) <= 1 )
  {
    EngSetLastError(0x57u);
  }
  else
  {
    v14 = -a3;
    if ( a3 >= 0 )
      v14 = a3;
    CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a1, a2, v14, 0, 0LL, 0LL);
    if ( CompatibleBitmapInternal )
    {
      if ( (a4 & 4) == 0 || !a5 || !a6 || (unsigned int)GreSetDIBitsInternal(a1, a5, (__int64)a6, v11, a9, a8, a11) )
        return CompatibleBitmapInternal;
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&a7, v16, v17, v18);
      GreDeleteObject(CompatibleBitmapInternal);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v20);
    }
  }
  return 0LL;
}
