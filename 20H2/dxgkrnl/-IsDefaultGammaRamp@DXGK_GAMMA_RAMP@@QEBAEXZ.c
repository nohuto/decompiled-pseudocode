/*
 * XREFs of ?IsDefaultGammaRamp@DXGK_GAMMA_RAMP@@QEBAEXZ @ 0x1C013E0AC
 * Callers:
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C013AA88 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall DXGK_GAMMA_RAMP::IsDefaultGammaRamp(DXGK_GAMMA_RAMP *this)
{
  int v1; // eax
  char v2; // dl
  __int64 v3; // rbx
  int v4; // r9d
  _DWORD *i; // r8
  int v6; // edi
  int v7; // r11d
  int v8; // r10d
  int v9; // eax
  __int64 v11; // rax
  float v12; // xmm0_4
  int v13; // r9d
  _DWORD *j; // rax
  float v15; // r8d
  float v16; // [rsp+8h] [rbp+8h]

  if ( !*((_BYTE *)this + 40) )
  {
    v1 = *((_DWORD *)this + 4);
    v2 = 1;
    *((_BYTE *)this + 40) = 1;
    switch ( v1 )
    {
      case 1:
        *((_BYTE *)this + 41) = 1;
        break;
      case 2:
        v3 = *((_QWORD *)this + 4);
        v4 = 0;
        *((_BYTE *)this + 41) = 1;
        for ( i = (_DWORD *)(v3 + 512); ; ++i )
        {
          v6 = *(i - 128);
          v7 = (v4 | (v4 << 16) | 0x8000) << 9;
          v8 = (2 * (v4 | (v4 << 16) | 0x8000)) | v7;
          if ( v6 != v7 && v6 != v8 )
            break;
          if ( *i != v7 && *i != v8 )
            break;
          v9 = i[128];
          if ( v9 != v7 && v9 != v8 )
            break;
          if ( (unsigned int)++v4 >= 0x80 )
            return *((_BYTE *)this + 41);
        }
LABEL_11:
        *((_BYTE *)this + 41) = 0;
        return *((_BYTE *)this + 41);
      case 3:
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
        goto LABEL_11;
      default:
        *((_WORD *)this + 20) = 0;
        return 0;
    }
    return v2;
  }
  return *((_BYTE *)this + 41);
}
