/*
 * XREFs of ?IsDefaultGammaRamp@DXGK_GAMMA_RAMP@@QEBAEXZ @ 0x1C02C13F4
 * Callers:
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C01C4A20 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall DXGK_GAMMA_RAMP::IsDefaultGammaRamp(DXGK_GAMMA_RAMP *this)
{
  int v2; // eax
  char v3; // dl
  __int64 v4; // rbx
  int v5; // r9d
  _DWORD *i; // r8
  int v7; // edi
  int v8; // r11d
  int v9; // r10d
  int v10; // eax
  __int64 v11; // rax
  float v12; // xmm0_4
  int v13; // r9d
  _DWORD *j; // rax
  float v15; // r8d
  float v16; // [rsp+8h] [rbp+8h]

  if ( *((_BYTE *)this + 40) )
    return *((_BYTE *)this + 41);
  v2 = *((_DWORD *)this + 4);
  v3 = 1;
  *((_BYTE *)this + 40) = 1;
  if ( v2 != 1 )
  {
    if ( v2 == 2 )
    {
      v4 = *((_QWORD *)this + 4);
      v5 = 0;
      *((_BYTE *)this + 41) = 1;
      for ( i = (_DWORD *)(v4 + 512); ; ++i )
      {
        v7 = *(i - 128);
        v8 = (v5 | (v5 << 16) | 0x8000) << 9;
        v9 = (2 * (v5 | (v5 << 16) | 0x8000)) | v8;
        if ( v7 != v8 && v7 != v9 )
          break;
        if ( *i != v8 && *i != v9 )
          break;
        v10 = i[128];
        if ( v10 != v8 && v10 != v9 )
          break;
        if ( (unsigned int)++v5 >= 0x80 )
          return *((_BYTE *)this + 41);
      }
    }
    else
    {
      if ( v2 != 3 )
      {
        *((_WORD *)this + 20) = 0;
        return 0;
      }
      v11 = *((_QWORD *)this + 4);
      v12 = 0.0;
      v16 = 0.0;
      if ( *(_QWORD *)v11 == 0x3F8000003F800000LL
        && *(_DWORD *)(v11 + 8) == 1065353216
        && !*(_DWORD *)(v11 + 12)
        && !*(_DWORD *)(v11 + 16)
        && !*(_DWORD *)(v11 + 20) )
      {
        v13 = 0;
        *((_BYTE *)this + 41) = 1;
        for ( j = (_DWORD *)(v11 + 28); ; j += 3 )
        {
          v15 = v16;
          v12 = v12 + 0.0009765625;
          v16 = v12;
          if ( *(j - 1) != LODWORD(v15) || *j != LODWORD(v15) || j[1] != LODWORD(v15) )
            break;
          if ( (unsigned int)++v13 >= 0x401 )
            return *((_BYTE *)this + 41);
        }
      }
    }
    *((_BYTE *)this + 41) = 0;
    return *((_BYTE *)this + 41);
  }
  *((_BYTE *)this + 41) = 1;
  return v3;
}
