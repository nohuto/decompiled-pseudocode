/*
 * XREFs of _NtGdiPathToRegion@4 @ 0x211A5D
 * Callers:
 *     <none>
 * Callees:
 *     ?hrgnAssociate@RGNOBJ@@QAEPAUHRGN__@@XZ @ 0x22A08 (-hrgnAssociate@RGNOBJ@@QAEPAUHRGN__@@XZ.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ??1XEPATHOBJ@@QAE@XZ @ 0xF6DBB (--1XEPATHOBJ@@QAE@XZ.c)
 *     ??0XEPATHOBJ@@QAE@AAVXDCOBJ@@@Z @ 0x1E448D (--0XEPATHOBJ@@QAE@AAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QBEHXZ @ 0x2113DA (-bInactive@DC@@QBEHXZ.c)
 */

struct HOBJ__ *__stdcall NtGdiPathToRegion(HDC a1)
{
  struct HOBJ__ *v1; // esi
  DC *v2; // ecx
  struct HOBJ__ *v3; // edi
  DC *v4; // ecx
  unsigned int v6; // [esp-Ch] [ebp-68h]
  _BYTE v7[8]; // [esp+4h] [ebp-58h] BYREF
  int v8; // [esp+Ch] [ebp-50h]
  DC *v9[3]; // [esp+48h] [ebp-14h] BYREF
  struct OBJECT *v10; // [esp+54h] [ebp-8h] BYREF
  int v11; // [esp+58h] [ebp-4h]

  v1 = 0;
  memset(v9, 0, sizeof(v9));
  XDCOBJ::vLock((XDCOBJ *)v9, a1);
  if ( v9[0] )
  {
    if ( DC::bInactive(v9[0]) )
    {
      XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v7, v9);
      if ( v8 )
      {
        v6 = *(unsigned __int8 *)(*((_DWORD *)v9[0] + 255) + 234);
        v11 = 0;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v10, (struct EPATHOBJ *)v7, v6, 0);
        if ( v10 )
        {
          v3 = RGNOBJ::hrgnAssociate(&v10);
          if ( !v3 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v10);
        }
        else
        {
          v3 = 0;
        }
        v4 = v9[0];
        *((_DWORD *)v9[0] + 43) &= ~1u;
        DC::hpath(v4, 0);
        v1 = v3;
        if ( v11 == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v10);
      }
      else
      {
        EngSetLastError(8u);
        v2 = v9[0];
        *((_DWORD *)v9[0] + 43) &= ~1u;
        DC::hpath(v2, 0);
      }
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v7);
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
  if ( v9[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v9);
  return v1;
}
