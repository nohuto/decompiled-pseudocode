/*
 * XREFs of ?lGetDefaultWorldHeight@@YGJPAVDCOBJ@@@Z @ 0xC330A
 * Callers:
 *     ?bGetNtoW_Win31@@YGHPAVMATRIX@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@KH@Z @ 0x6769C (-bGetNtoW_Win31@@YGHPAVMATRIX@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@KH@Z.c)
 *     ?vGetNtoW@@YGXPAVMATRIX@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@@Z @ 0x247A2E (-vGetNtoW@@YGXPAVMATRIX@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@@Z.c)
 * Callees:
 *     ??0LFONTOBJ@@QAE@PAUHLFONT__@@PAVPDEVOBJ@@@Z @ 0x4B328 (--0LFONTOBJ@@QAE@PAUHLFONT__@@PAVPDEVOBJ@@@Z.c)
 *     ?bWorldToDeviceIdentity@DC@@QBEHXZ @ 0x88582 (-bWorldToDeviceIdentity@DC@@QBEHXZ.c)
 *     _lCvt@12 @ 0xEE304 (_lCvt@12.c)
 *     _addff3_c@12 @ 0xEF0B5 (_addff3_c@12.c)
 *     _mulff3_c@12 @ 0xEF172 (_mulff3_c@12.c)
 *     _divff3_c@12 @ 0xEF19C (_divff3_c@12.c)
 *     _sqrtf2_c@8 @ 0xEF21B (_sqrtf2_c@8.c)
 */

int __thiscall lGetDefaultWorldHeight(DC **this)
{
  int v2; // eax
  int v3; // esi
  int v4; // edx
  DC *v6; // ecx
  int v7; // [esp+Ch] [ebp-20h] BYREF
  int v8; // [esp+10h] [ebp-1Ch]
  int v9; // [esp+14h] [ebp-18h] BYREF
  int v10; // [esp+18h] [ebp-14h]
  int v11; // [esp+1Ch] [ebp-10h] BYREF
  int v12; // [esp+20h] [ebp-Ch]
  int v13; // [esp+24h] [ebp-8h] BYREF
  struct LFONT *v14; // [esp+28h] [ebp-4h] BYREF

  v2 = *((_DWORD *)*this + 9);
  if ( !v2 )
    return 24;
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v14, *(struct HLFONT__ **)(v2 + 896), 0);
  if ( !v14 )
    return 24;
  v3 = *((_DWORD *)v14 + 70);
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v14);
  if ( !DC::bWorldToDeviceIdentity(*this) )
  {
    v11 = 0;
    v12 = 0;
    v9 = *(_DWORD *)(v4 + 256);
    v10 = *(_DWORD *)(v4 + 260);
    v7 = *(_DWORD *)(v4 + 256);
    v8 = *(_DWORD *)(v4 + 260);
    mulff3_c(&v11, &v7, &v9);
    v6 = *this;
    v13 = 0;
    v14 = 0;
    v7 = *((_DWORD *)v6 + 66);
    v8 = *((_DWORD *)v6 + 67);
    v9 = *((_DWORD *)v6 + 66);
    v10 = *((_DWORD *)v6 + 67);
    mulff3_c(&v13, &v9, &v7);
    addff3_c(&v13, &v13, &v11);
    sqrtf2_c(&v13, &v13);
    v11 = 0x40000000;
    v12 = 2;
    divff3_c(&v13, &v11, &v13);
    v3 = lCvt(v13, v14, 16 * v3);
  }
  if ( v3 )
    return -v3;
  else
    return 24;
}
