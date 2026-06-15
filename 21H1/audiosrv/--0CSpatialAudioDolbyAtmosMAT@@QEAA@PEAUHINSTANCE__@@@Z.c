/*
 * XREFs of ??0CSpatialAudioDolbyAtmosMAT@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180061990
 * Callers:
 *     ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x18006171C (-CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     ??0CSpatialAudioTech@@QEAA@XZ @ 0x180039204 (--0CSpatialAudioTech@@QEAA@XZ.c)
 */

CSpatialAudioDolbyAtmosMAT *__fastcall CSpatialAudioDolbyAtmosMAT::CSpatialAudioDolbyAtmosMAT(
        CSpatialAudioDolbyAtmosMAT *this,
        HINSTANCE a2)
{
  __int64 v4; // rdi
  char *v5; // rbx
  signed __int64 v6; // rcx
  __int16 v7; // ax
  char *v8; // rax
  char *v9; // rbx
  __int64 v10; // rdi
  signed __int64 v11; // rcx
  __int16 v12; // ax
  char *v13; // rax

  CSpatialAudioTech::CSpatialAudioTech(this);
  v4 = 128LL;
  *(_QWORD *)this = &CSpatialAudioDolbyAtmosMAT::`vftable';
  v5 = (char *)this + 32;
  *((IID *)this + 1) = DOLBY_ATMOS_MAT_SPATIAL_ENCODER;
  if ( LoadStringW(a2, 0x193u, (LPWSTR)this + 16, 128) <= 0 )
  {
    v6 = (char *)L"MAT 2.x" - v5;
    do
    {
      if ( v4 == -2147483518 )
        break;
      v7 = *(_WORD *)&v5[v6];
      if ( !v7 )
        break;
      *(_WORD *)v5 = v7;
      v5 += 2;
      --v4;
    }
    while ( v4 );
    v8 = v5 - 2;
    if ( v4 )
      v8 = v5;
    *(_WORD *)v8 = 0;
  }
  v9 = (char *)this + 288;
  v10 = 256LL;
  if ( LoadStringW(a2, 0x1B1u, (LPWSTR)this + 144, 256) <= 0 )
  {
    v11 = (char *)L"ms-windows-store://pdp/?productid=9n0866fs04w8" - v9;
    do
    {
      if ( v10 == -2147483390 )
        break;
      v12 = *(_WORD *)&v9[v11];
      if ( !v12 )
        break;
      *(_WORD *)v9 = v12;
      v9 += 2;
      --v10;
    }
    while ( v10 );
    v13 = v9 - 2;
    if ( v10 )
      v13 = v9;
    *(_WORD *)v13 = 0;
  }
  return this;
}
