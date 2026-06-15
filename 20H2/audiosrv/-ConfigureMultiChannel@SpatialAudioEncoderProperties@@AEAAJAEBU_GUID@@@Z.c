/*
 * XREFs of ?ConfigureMultiChannel@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012AB9C
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z @ 0x18012B630 (-RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialAudioEncoderProperties::ConfigureMultiChannel(
        SpatialAudioEncoderProperties *this,
        const struct _GUID *a2)
{
  __int128 v3; // xmm0
  char *v4; // rcx
  __int16 v5; // ax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1

  *((_DWORD *)this + 29) = 262142;
  v3 = (__int128)*a2;
  *((_WORD *)this + 62) = 0;
  *(_OWORD *)((char *)this + 100) = v3;
  *((_DWORD *)this + 30) = 1;
  *(_OWORD *)((char *)this + 126) = xmmword_180174B00;
  *(_OWORD *)((char *)this + 142) = xmmword_180174B10;
  *(_OWORD *)((char *)this + 158) = xmmword_180174B20;
  *(_OWORD *)((char *)this + 174) = xmmword_180174B30;
  *(_OWORD *)((char *)this + 190) = xmmword_180174B40;
  *(_OWORD *)((char *)this + 206) = xmmword_180174B50;
  *(_OWORD *)((char *)this + 222) = xmmword_180174B60;
  *(_DWORD *)((char *)this + 238) = 0;
  v4 = (char *)this + 242;
  v5 = *((_WORD *)this + 120);
  v6 = *((_OWORD *)this + 7);
  *(_OWORD *)v4 = *((_OWORD *)this + 6);
  v7 = *((_OWORD *)this + 8);
  *((_OWORD *)v4 + 1) = v6;
  v8 = *((_OWORD *)this + 9);
  *((_OWORD *)v4 + 2) = v7;
  v9 = *((_OWORD *)this + 10);
  *((_OWORD *)v4 + 3) = v8;
  v10 = *((_OWORD *)this + 11);
  *((_OWORD *)v4 + 4) = v9;
  v11 = *((_OWORD *)this + 12);
  *((_OWORD *)v4 + 5) = v10;
  v12 = *((_OWORD *)this + 14);
  *((_OWORD *)v4 + 6) = v11;
  *((_OWORD *)v4 + 7) = *((_OWORD *)this + 13);
  *((_OWORD *)v4 + 8) = v12;
  *((_WORD *)v4 + 72) = v5;
  return 0LL;
}
