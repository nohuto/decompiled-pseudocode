/*
 * XREFs of _NtGdiSelectClipPath@8 @ 0x211B56
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?iSelect@DC@@QAEHPAVREGION@@H@Z @ 0x5A6CE (-iSelect@DC@@QAEHPAVREGION@@H@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ??1XEPATHOBJ@@QAE@XZ @ 0xF6DBB (--1XEPATHOBJ@@QAE@XZ.c)
 *     ??0XEPATHOBJ@@QAE@AAVXDCOBJ@@@Z @ 0x1E448D (--0XEPATHOBJ@@QAE@AAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QBEHXZ @ 0x2113DA (-bInactive@DC@@QBEHXZ.c)
 */

BOOL __stdcall NtGdiSelectClipPath(HDC a1, int a2)
{
  BOOL v2; // esi
  DC *v3; // ecx
  BOOL v4; // edi
  DC *v5; // ecx
  unsigned int v7; // [esp-4h] [ebp-70h]
  struct REGION *v8; // [esp+10h] [ebp-5Ch] BYREF
  int v9; // [esp+14h] [ebp-58h]
  DC *v10[3]; // [esp+18h] [ebp-54h] BYREF
  _BYTE v11[8]; // [esp+24h] [ebp-48h] BYREF
  int v12; // [esp+2Ch] [ebp-40h]

  v2 = 0;
  memset(v10, 0, sizeof(v10));
  XDCOBJ::vLock((XDCOBJ *)v10, a1);
  if ( v10[0] && (unsigned int)(a2 - 1) <= 4 )
  {
    if ( DC::bInactive(v10[0]) )
    {
      XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v11, v10);
      if ( v12 )
      {
        v7 = *(unsigned __int8 *)(*((_DWORD *)v10[0] + 255) + 234);
        v9 = 0;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v8, (struct EPATHOBJ *)v11, v7, 0);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v8);
        v4 = v8 && DC::iSelect(v10[0], v8, a2);
        v5 = v10[0];
        *((_DWORD *)v10[0] + 43) &= ~1u;
        DC::hpath(v5, 0);
        v2 = v4;
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v8);
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
        if ( v9 == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
      }
      else
      {
        EngSetLastError(8u);
        v3 = v10[0];
        *((_DWORD *)v10[0] + 43) &= ~1u;
        DC::hpath(v3, 0);
      }
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v11);
    }
    else
    {
      EngSetLastError(0x3EBu);
    }
  }
  else
  {
    EngSetLastError(0x57u);
  }
  if ( v10[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v10);
  return v2;
}
