/*
 * XREFs of _NtGdiOffsetClipRgn@12 @ 0x1FED41
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?prgnVisSnap@DC@@QBEPAVREGION@@XZ @ 0x53684 (-prgnVisSnap@DC@@QBEPAVREGION@@XZ.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QBEJXZ @ 0x5A892 (-iComplexity@RGNOBJ@@QBEJXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?bTightenRao@DC@@QAEHXZ @ 0x7A1A2 (-bTightenRao@DC@@QAEHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 */

int __stdcall NtGdiOffsetClipRgn(HDC a1, LONG a2, LONG a3)
{
  int v3; // ebx
  int v4; // esi
  struct REGION *v5; // eax
  DC *v6; // ecx
  int v8; // [esp+20h] [ebp-60h] BYREF
  int v9; // [esp+24h] [ebp-5Ch] BYREF
  int v10; // [esp+28h] [ebp-58h] BYREF
  int v11; // [esp+2Ch] [ebp-54h]
  struct _POINTL v12; // [esp+30h] [ebp-50h] BYREF
  DC *v13[3]; // [esp+38h] [ebp-48h] BYREF
  _DWORD v14[3]; // [esp+44h] [ebp-3Ch] BYREF
  _BYTE v15[20]; // [esp+50h] [ebp-30h] BYREF
  _DWORD v16[3]; // [esp+64h] [ebp-1Ch] BYREF
  __int16 v17; // [esp+70h] [ebp-10h]

  v3 = 0;
  memset(v13, 0, sizeof(v13));
  XDCOBJ::vLock((XDCOBJ *)v13, a1);
  if ( !v13[0] )
  {
    EngSetLastError(6u);
    goto LABEL_19;
  }
  memset(v16, 0, sizeof(v16));
  v17 = 256;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v15, (struct XDCOBJ *)v13, 1);
  if ( (v15[12] & 1) != 0 )
  {
    v4 = *((_DWORD *)v13[0] + 26);
    if ( v4 )
    {
      if ( *(_DWORD *)(v4 + 24) > 1u )
      {
        v8 = *((_DWORD *)v13[0] + 26);
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v10, *(_DWORD *)(v4 + 52));
        if ( !v10 )
        {
          EngSetLastError(8u);
          if ( v11 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v10);
          goto LABEL_17;
        }
        RGNOBJ::vCopy((RGNOBJ *)&v10, (struct RGNOBJ *)&v8);
        v4 = v10;
        ++*(_DWORD *)(v10 + 24);
        --*(_DWORD *)(v8 + 24);
        *((_DWORD *)v13[0] + 26) = v4;
        if ( v11 == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v10);
      }
      v12.x = a2;
      v12.y = a3;
      v9 = v4;
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v14, (struct XDCOBJ *)v13, -2147483132);
      if ( ((*(_BYTE *)(v14[0] + 56) & 2) != 0
         || EXFORMOBJ::bXform((EXFORMOBJ *)v14, (struct _VECTORL *)&v12, (struct _VECTORL *)&v12, 1u))
        && RGNOBJ::bOffset((RGNOBJ *)&v9, &v12) )
      {
        DC::bTightenRao(v13[0]);
        v5 = DC::prgnVisSnap(v13[0]);
        DC::vUpdate_VisRect(v6, v5);
        v3 = RGNOBJ::iComplexity((RGNOBJ *)&v9);
      }
      else
      {
        EngSetLastError(0x3EBu);
      }
    }
    else
    {
      v3 = 2;
    }
  }
LABEL_17:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v15);
  if ( v16[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v16);
LABEL_19:
  if ( v13[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v13);
  return v3;
}
