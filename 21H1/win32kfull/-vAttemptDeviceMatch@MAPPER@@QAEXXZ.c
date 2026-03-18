/*
 * XREFs of ?vAttemptDeviceMatch@MAPPER@@QAEXXZ @ 0x1F4FA1
 * Callers:
 *     ?ppfeGetAMatch@@YGPAVPFE@@AAVXDCOBJ@@PAUtagENUMLOGFONTEXDVW@@PBGKKPAKPAU_POINTL@@3H@Z @ 0x49FBA (-ppfeGetAMatch@@YGPAVPFE@@AAVXDCOBJ@@PAUtagENUMLOGFONTEXDVW@@PBGKKPAKPAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z @ 0x4A670 (-bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QAEPAVPFF@@PAUHDEV__@@PAPAPAV2@@Z @ 0x88C66 (-pPFFGet@DEVICE_PFTOBJ@@QAEPAVPFF@@PAUHDEV__@@PAPAPAV2@@Z.c)
 *     ?ppfeFirst@ENUMFHOBJ@@QAEPAVPFE@@XZ @ 0x1F4F50 (-ppfeFirst@ENUMFHOBJ@@QAEPAVPFE@@XZ.c)
 *     ?ppfeNext@ENUMFHOBJ@@QAEPAVPFE@@XZ @ 0x1F4F74 (-ppfeNext@ENUMFHOBJ@@QAEPAVPFE@@XZ.c)
 *     ?vSetBest@MAPPER@@QAEXPAVPFE@@HE@Z @ 0x1F51F3 (-vSetBest@MAPPER@@QAEXPAVPFE@@HE@Z.c)
 *     _ulCharsetToCodePage@4 @ 0x24964C (_ulCharsetToCodePage@4.c)
 */

void __thiscall MAPPER::vAttemptDeviceMatch(MAPPER *this)
{
  struct PFF *v2; // eax
  _DWORD *v3; // ecx
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  struct PFE *i; // eax
  unsigned int v7; // eax
  struct PFE *v8; // edi
  int *v9; // esi
  __int64 v10; // rax
  _DWORD v11[4]; // [esp+10h] [ebp-18h] BYREF
  struct PFT *v12; // [esp+20h] [ebp-8h] BYREF
  unsigned __int8 v13[4]; // [esp+24h] [ebp-4h] BYREF

  v13[0] = 1;
  if ( *((_BYTE *)this + 244) != 2 )
  {
    v12 = gpPFTDevice;
    v2 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)&v12, *(HDEV *)(**(_DWORD **)this + 36), 0);
    if ( v2 )
    {
      v3 = (_DWORD *)((char *)v2 + 72);
      if ( v2 != (struct PFF *)-72 )
      {
        v4 = (_DWORD *)*((_DWORD *)this + 51);
        v11[0] = v3;
        v11[2] = 0;
        v11[3] = 0;
        *v4 = 0;
        v5 = (_DWORD *)*((_DWORD *)this + 49);
        *((_DWORD *)this + 48) = -1;
        *((_DWORD *)this + 47) = 0;
        *v5 = 0;
        **((_DWORD **)this + 50) = 1;
        *(_DWORD *)(*((_DWORD *)this + 50) + 4) = 1;
        *((_DWORD *)this + 55) |= 0x80u;
        *((_DWORD *)this + 42) = 3;
        v11[1] = *v3;
        for ( i = ENUMFHOBJ::ppfeFirst((ENUMFHOBJ *)v11); ; i = ENUMFHOBJ::ppfeNext((ENUMFHOBJ *)v11) )
        {
          v8 = i;
          if ( !i )
            break;
          v12 = i;
          if ( MAPPER::bNearMatch(this, (unsigned __int8)i, (struct PFEOBJ *)&v12, (int)v13, 0) )
          {
            v7 = *((_DWORD *)this + 43);
            if ( !v7 )
            {
              if ( !__wcsicmp((const wchar_t *)(*((_DWORD *)v12 + 5) + *(_DWORD *)(*((_DWORD *)v12 + 5) + 8)), L"Arial") )
              {
                MAPPER::vSetBest(this, v8, 1, v13[0]);
                return;
              }
              v7 = ++*((_DWORD *)this + 43);
            }
            if ( v7 < *((_DWORD *)this + 42) )
            {
              MAPPER::vSetBest(this, v8, 1, v13[0]);
              *((_DWORD *)this + 42) = *((_DWORD *)this + 43);
            }
          }
        }
        if ( *((_DWORD *)this + 47) )
        {
          v9 = (int *)*((_DWORD *)this + 51);
          v10 = ulCharsetToCodePage(HIBYTE(*v9));
          *v9 = HIDWORD(v10) | ((_DWORD)v10 << 8);
        }
      }
    }
  }
}
