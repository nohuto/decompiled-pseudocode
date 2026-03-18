/*
 * XREFs of ?ulSimpleOrientation@RFONTOBJ@@QAEKPAVXDCOBJ@@@Z @ 0x2099B6
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@@QAU_POINTL@@KKHHK@Z @ 0x84984 (-bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@.c)
 * Callees:
 *     ?bWorldToDeviceIdentity@DC@@QBEHXZ @ 0x88582 (-bWorldToDeviceIdentity@DC@@QBEHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     ?lSignum@EFLOAT@@QAEJXZ @ 0xCC96A (-lSignum@EFLOAT@@QAEJXZ.c)
 */

unsigned int __thiscall RFONTOBJ::ulSimpleOrientation(RFONTOBJ *this, DC **a2)
{
  int v2; // edx
  __int16 v3; // si
  int v4; // eax
  int v5; // edi
  struct XDCOBJ *v6; // edx
  int v8; // edx
  int v9; // ebx
  int v10; // edx
  int v11; // esi
  int v12; // edx
  int v13; // eax
  unsigned int v14; // esi
  EFLOAT *v15; // [esp+Ch] [ebp-14h] BYREF
  int v16; // [esp+18h] [ebp-8h]
  int v17; // [esp+1Ch] [ebp-4h]
  struct XDCOBJ *v18; // [esp+28h] [ebp+8h]

  v3 = EFLOAT::lSignum((EFLOAT *)(*(_DWORD *)this + 400));
  v4 = EFLOAT::lSignum((EFLOAT *)(v2 + 408));
  if ( (((unsigned __int8)v3 ^ (unsigned __int8)v4) & 1) == 0 )
    return 3601;
  v5 = v3 & 0x708 | v4 & 0xA8C | -v4 & 0x384;
  if ( DC::bWorldToDeviceIdentity(*a2) )
    return v5;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v15, v6, 516);
  v9 = EFLOAT::lSignum(v15);
  v11 = EFLOAT::lSignum((EFLOAT *)(v8 + 8));
  v18 = (struct XDCOBJ *)EFLOAT::lSignum((EFLOAT *)(v10 + 16));
  v13 = EFLOAT::lSignum((EFLOAT *)(v12 + 24));
  v16 = v13;
  v17 = ((unsigned __int8)v9 ^ (unsigned __int8)~(_BYTE)v11) & 1;
  if ( v17 | ((unsigned int)v18 + v11) | (v9 - v13) )
  {
    if ( !(v17 | (v9 + v13) | (v11 - (_DWORD)v18)) )
    {
      v14 = (v16 & 0xE10) + (v9 & 0x1518) + (-v11 & 0x1194) + (v11 & 0x189C) - v5;
      goto LABEL_8;
    }
    return 3601;
  }
  v14 = ((unsigned __int16)v18 & 0xA8C) + v5 + (v9 & 0x708) + (v11 & 0x384);
LABEL_8:
  if ( v14 >= 0xE10 )
    v14 -= 3600;
  return v14;
}
