/*
 * XREFs of ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180041BCC
 * Callers:
 *     ?DebugSaveTexture@@YAJPEAUID3D11Texture2D@@IAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18020D844 (-DebugSaveTexture@@YAJPEAUID3D11Texture2D@@IAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ?SaveBitmap@CBitmapSaver@@QEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180263F1C (-SaveBitmap@CBitmapSaver@@QEAAJAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::wstring::c_str(_QWORD *a1)
{
  if ( a1[3] >= 8uLL )
    return (_QWORD *)*a1;
  return a1;
}
