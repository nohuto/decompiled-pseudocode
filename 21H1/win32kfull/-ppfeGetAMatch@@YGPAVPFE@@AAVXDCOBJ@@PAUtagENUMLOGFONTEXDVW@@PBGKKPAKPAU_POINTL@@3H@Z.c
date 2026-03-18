/*
 * XREFs of ?ppfeGetAMatch@@YGPAVPFE@@AAVXDCOBJ@@PAUtagENUMLOGFONTEXDVW@@PBGKKPAKPAU_POINTL@@3H@Z @ 0x49FBA
 * Callers:
 *     ?ppfeMapFont@LFONTOBJ@@QAEPAVPFE@@AAVXDCOBJ@@PAKPAU_POINTL@@1H@Z @ 0x49B40 (-ppfeMapFont@LFONTOBJ@@QAEPAVPFE@@AAVXDCOBJ@@PAKPAU_POINTL@@1H@Z.c)
 * Callees:
 *     ?bFoundExactMatch@MAPPER@@QAEHPAPAU_FONTHASH@@H@Z @ 0x4A170 (-bFoundExactMatch@MAPPER@@QAEHPAPAU_FONTHASH@@H@Z.c)
 *     ??0MAPPER@@QAE@PAVXDCOBJ@@PAKPAU_POINTL@@1PBUtagENUMLOGFONTEXDVW@@PBGKHK@Z @ 0x680A0 (--0MAPPER@@QAE@PAVXDCOBJ@@PAKPAU_POINTL@@1PBUtagENUMLOGFONTEXDVW@@PBGKHK@Z.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QAEPAVPFF@@PAUHDEV__@@PAPAPAV2@@Z @ 0x88C66 (-pPFFGet@DEVICE_PFTOBJ@@QAEPAVPFF@@PAUHDEV__@@PAPAPAV2@@Z.c)
 *     ?bGetFaceName@MAPPER@@AAEHXZ @ 0x8ACA6 (-bGetFaceName@MAPPER@@AAEHXZ.c)
 *     ?ppfeSynthesizeAMatch@MAPPER@@QAEPAVPFE@@PAK0PAU_POINTL@@@Z @ 0xA5444 (-ppfeSynthesizeAMatch@MAPPER@@QAEPAVPFE@@PAK0PAU_POINTL@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bFoundForcedMatch@MAPPER@@QAEHPAU_UNIVERSAL_FONT_ID@@@Z @ 0x1F4BAA (-bFoundForcedMatch@MAPPER@@QAEHPAU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?ppfeFirst@ENUMFHOBJ@@QAEPAVPFE@@XZ @ 0x1F4F50 (-ppfeFirst@ENUMFHOBJ@@QAEPAVPFE@@XZ.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QAEXXZ @ 0x1F4FA1 (-vAttemptDeviceMatch@MAPPER@@QAEXXZ.c)
 *     ?vEmergency@MAPPER@@QAEXXZ @ 0x1F50F6 (-vEmergency@MAPPER@@QAEXXZ.c)
 */

struct PFE *__userpurge ppfeGetAMatch@<eax>(
        const struct tagENUMLOGFONTEXDVW *a1@<edx>,
        struct XDCOBJ *a2@<ecx>,
        struct XDCOBJ *Src,
        struct tagENUMLOGFONTEXDVW *a4,
        const unsigned __int16 *a5,
        unsigned int *a6,
        struct _POINTL *a7,
        unsigned int *a8,
        struct _POINTL *a9,
        unsigned int *a10,
        int a11)
{
  struct XDCOBJ *v11; // ebx
  int v12; // ecx
  unsigned int v13; // eax
  struct _FONTHASH **v14; // esi
  struct PFE *result; // eax
  unsigned int v16; // eax
  struct PFF *v17; // eax
  struct PFF *v18; // esi
  int *v19; // ebx
  struct PFT *v20; // [esp+18h] [ebp-120h] BYREF
  int v21; // [esp+1Ch] [ebp-11Ch]
  int v22; // [esp+20h] [ebp-118h]
  int v23; // [esp+24h] [ebp-114h]
  struct XDCOBJ *v24; // [esp+28h] [ebp-110h]
  unsigned int *v25; // [esp+2Ch] [ebp-10Ch]
  _BYTE v26[168]; // [esp+30h] [ebp-108h] BYREF
  int v27; // [esp+D8h] [ebp-60h]
  struct PFE *v28; // [esp+ECh] [ebp-4Ch]
  int v29; // [esp+F0h] [ebp-48h]
  _DWORD *v30; // [esp+F4h] [ebp-44h]
  _DWORD *v31; // [esp+F8h] [ebp-40h]
  _DWORD *v32; // [esp+FCh] [ebp-3Ch]
  unsigned int v33; // [esp+10Ch] [ebp-2Ch]

  v11 = a2;
  v24 = a2;
  v25 = a6;
  MAPPER::MAPPER(
    (MAPPER *)v26,
    a2,
    a6,
    a7,
    a8,
    a1,
    (const unsigned __int16 *)Src,
    (unsigned int)a7,
    (int)a9,
    (unsigned int)a5);
  v12 = *(_DWORD *)v11;
  if ( (*(_BYTE *)(*(_DWORD *)v11 + 176) & 4) != 0 )
  {
    v20 = *(struct PFT **)(v12 + 180);
    v21 = *(_DWORD *)(v12 + 184);
    if ( MAPPER::bFoundForcedMatch((MAPPER *)v26, (struct _UNIVERSAL_FONT_ID *)&v20) )
      return v28;
  }
  if ( gpPFTPrivate )
  {
    if ( *((_DWORD *)gpPFTPrivate + 4) )
    {
      v33 &= ~0x80u;
      if ( MAPPER::bFoundExactMatch((MAPPER *)v26, (struct _FONTHASH **)gpPFTPrivate, 0)
        || MAPPER::bFoundExactMatch((MAPPER *)v26, (struct _FONTHASH **)gpPFTPrivate + 1, 0) )
      {
        return v28;
      }
    }
  }
  v20 = gpPFTDevice;
  v13 = v33;
  if ( (v33 & 0x200) != 0 )
  {
    v33 |= 0x80u;
    v17 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)&v20, *(HDEV *)(*(_DWORD *)v11 + 36), 0);
    v18 = v17;
    if ( v17 )
    {
      v19 = (int *)((char *)v17 + 72);
      if ( MAPPER::bFoundExactMatch((MAPPER *)v26, (struct _FONTHASH **)v17 + 18, 0)
        || MAPPER::bFoundExactMatch((MAPPER *)v26, (struct _FONTHASH **)v18 + 17, 0) )
      {
        return v28;
      }
      v13 = v33;
      if ( (v33 & 0x20000000) != 0 )
      {
        result = v28;
        if ( !v28 || *(struct PFF **)v28 != v18 )
        {
          *a6 = 0;
          v22 = 0;
          v23 = 0;
          *a8 = 0;
          v20 = (struct PFF *)((char *)v18 + 72);
          a7->y = 1;
          a7->x = 1;
          v21 = *v19;
          return ENUMFHOBJ::ppfeFirst((ENUMFHOBJ *)&v20);
        }
        return result;
      }
      v11 = v24;
    }
    else
    {
      v13 = v33;
    }
  }
  v14 = gpPFTPublic;
  v33 = v13 & 0xFFFFFF7F;
  if ( MAPPER::bFoundExactMatch((MAPPER *)v26, gpPFTPublic, 1) || MAPPER::bFoundExactMatch((MAPPER *)v26, v14 + 1, 1) )
    return v28;
  result = v28;
  if ( !v28 )
  {
    result = MAPPER::ppfeSynthesizeAMatch((MAPPER *)v26, v25, a8, a7);
    if ( !result )
    {
      if ( (*(_DWORD *)(*(_DWORD *)v11 + 48) & 0x20000000) == 0 )
      {
        v16 = v33;
        if ( (v33 & 0x200) == 0 )
        {
LABEL_11:
          if ( ((unsigned int)&loc_20000 & v16) != 0 )
          {
LABEL_34:
            v33 = v16 | 0x4000000;
            MAPPER::vEmergency((MAPPER *)v26);
            return v28;
          }
          MAPPER::bGetFaceName((MAPPER *)v26);
          *v32 = 0;
          v29 = -1;
          v28 = 0;
          *v30 = 0;
          *v31 = 1;
          v31[1] = 1;
          v33 &= ~0x80u;
          v27 = -2;
          if ( MAPPER::bFoundExactMatch((MAPPER *)v26, v14, 0) || MAPPER::bFoundExactMatch((MAPPER *)v26, v14 + 1, 0) )
            return v28;
          result = v28;
          if ( !v28 )
          {
            v16 = v33;
            goto LABEL_34;
          }
          return result;
        }
        MAPPER::vAttemptDeviceMatch((MAPPER *)v26);
        result = v28;
        if ( v28 )
          return result;
      }
      v16 = v33;
      goto LABEL_11;
    }
  }
  return result;
}
