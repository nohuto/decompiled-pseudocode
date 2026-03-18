/*
 * XREFs of ?vEmergency@MAPPER@@QAEXXZ @ 0x1F50F6
 * Callers:
 *     ?ppfeGetAMatch@@YGPAVPFE@@AAVXDCOBJ@@PAUtagENUMLOGFONTEXDVW@@PBGKKPAKPAU_POINTL@@3H@Z @ 0x49FBA (-ppfeGetAMatch@@YGPAVPFE@@AAVXDCOBJ@@PAUtagENUMLOGFONTEXDVW@@PBGKKPAKPAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z @ 0x4A670 (-bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z.c)
 *     ?ppfeFirst@ENUMFHOBJ@@QAEPAVPFE@@XZ @ 0x1F4F50 (-ppfeFirst@ENUMFHOBJ@@QAEPAVPFE@@XZ.c)
 *     ?ppfeNext@ENUMFHOBJ@@QAEPAVPFE@@XZ @ 0x1F4F74 (-ppfeNext@ENUMFHOBJ@@QAEPAVPFE@@XZ.c)
 *     ?vSetBest@MAPPER@@QAEXPAVPFE@@HE@Z @ 0x1F51F3 (-vSetBest@MAPPER@@QAEXPAVPFE@@HE@Z.c)
 *     _ulCharsetToCodePage@4 @ 0x24964C (_ulCharsetToCodePage@4.c)
 */

void __thiscall MAPPER::vEmergency(MAPPER *this)
{
  struct _FONTHASH **v1; // eax
  _DWORD *v3; // edx
  int v4; // edi
  _DWORD *v5; // ecx
  struct PFE *i; // eax
  int v7; // ecx
  struct PFE *v8; // ebx
  struct PFE *v9; // eax
  int v10; // ecx
  __int64 v11; // rax
  _DWORD v12[4]; // [esp+Ch] [ebp-1Ch] BYREF
  struct PFE *v13; // [esp+1Ch] [ebp-Ch] BYREF
  unsigned __int8 v14[4]; // [esp+23h] [ebp-5h] BYREF
  unsigned __int8 v15; // [esp+27h] [ebp-1h]

  v1 = gpPFTPublic;
  v12[0] = gpPFTPublic;
  v14[0] = 1;
  v3 = (_DWORD *)*((_DWORD *)this + 51);
  v4 = 0;
  v15 = 1;
  v12[2] = 0;
  *v3 = 0;
  v5 = (_DWORD *)*((_DWORD *)this + 49);
  *((_DWORD *)this + 48) = -1;
  *((_DWORD *)this + 47) = 0;
  v12[3] = 0;
  *v5 = 0;
  **((_DWORD **)this + 50) = 1;
  *(_DWORD *)(*((_DWORD *)this + 50) + 4) = 1;
  *((_DWORD *)this + 55) &= ~0x80u;
  *((_DWORD *)this + 42) = -2;
  v12[1] = *v1;
  for ( i = ENUMFHOBJ::ppfeFirst((ENUMFHOBJ *)v12); ; i = ENUMFHOBJ::ppfeNext((ENUMFHOBJ *)v12) )
  {
    v8 = i;
    if ( !i )
      break;
    v13 = i;
    if ( MAPPER::bNearMatch(this, 0, (struct PFEOBJ *)&v13, (int)v14, 1) )
    {
      MAPPER::vSetBest(this, v8, 0, v14[0]);
      v7 = *((_DWORD *)this + 43);
      v15 = v14[0];
      if ( !v7 )
      {
        v10 = v14[0];
        goto LABEL_12;
      }
      *((_DWORD *)this + 42) = v7;
    }
  }
  if ( !*((_DWORD *)this + 47) )
  {
    v9 = gppfeMapperDefault;
    *((_DWORD *)this + 47) = gppfeMapperDefault;
    if ( v9 )
      v4 = *((_DWORD *)v9 + 12);
    *((_DWORD *)this + 48) = v4;
  }
  v10 = v15;
LABEL_12:
  v11 = ulCharsetToCodePage(v10);
  *(_DWORD *)HIDWORD(v11) |= (_DWORD)v11 << 8;
}
