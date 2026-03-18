/*
 * XREFs of ??$make_unique@VCBitmapSaver@@AEAIAEAIAEAEAEAIAEAPEAX$0A@@std@@YA?AV?$unique_ptr@VCBitmapSaver@@U?$default_delete@VCBitmapSaver@@@std@@@0@AEAI0AEAE0AEAPEAX@Z @ 0x18020EE28
 * Callers:
 *     ?DebugSaveTexture@@YAJPEAUID3D11Texture2D@@IAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18020F684 (-DebugSaveTexture@@YAJPEAUID3D11Texture2D@@IAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800466E8 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<CBitmapSaver,unsigned int &,unsigned int &,unsigned char &,unsigned int &,void * &,0>(
        _QWORD *a1,
        _DWORD *a2,
        int *a3,
        unsigned __int8 *a4,
        int *a5,
        __int64 *a6)
{
  _DWORD *v10; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // r11
  int v14; // r9d

  v10 = operator new(0x18uLL);
  if ( v10 )
  {
    v11 = *a4;
    v12 = *a3;
    v13 = *a6;
    v14 = *a5;
    *v10 = *a2;
    v10[1] = v12;
    v10[2] = v11;
    v10[3] = v14;
    *((_QWORD *)v10 + 2) = v13;
  }
  *a1 = v10;
  return a1;
}
