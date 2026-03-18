/*
 * XREFs of ?IsRealFlickId@@YGHU_GUID@@@Z @ 0x9CEDC
 * Callers:
 *     ?GetFlickMap@@YGHPAUtagFLICK_MAP@@@Z @ 0x9CC9E (-GetFlickMap@@YGHPAUtagFLICK_MAP@@@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memcmp @ 0xF9295 (_memcmp.c)
 */

BOOL __stdcall IsRealFlickId(struct _GUID a1)
{
  _BYTE Buf1[16]; // [esp+8h] [ebp-28h] BYREF
  struct _GUID Buf2; // [esp+18h] [ebp-18h] BYREF

  Buf2 = a1;
  memset(Buf1, 0, sizeof(Buf1));
  return memcmp(Buf1, &Buf2, 0x10u) != 0;
}
