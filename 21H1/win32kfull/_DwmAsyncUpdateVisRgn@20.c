/*
 * XREFs of _DwmAsyncUpdateVisRgn@20 @ 0xF60D2
 * Callers:
 *     ?UpdateTrackerRegion@CVisRgnTrackerProp@@AAEXKI@Z @ 0xF49FC (-UpdateTrackerRegion@CVisRgnTrackerProp@@AAEXKI@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall DwmAsyncUpdateVisRgn(PVOID Object, int a2, int a3, int a4, int a5)
{
  int result; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // esi
  int v10; // [esp+Ch] [ebp-178h]
  _DWORD v12[89]; // [esp+18h] [ebp-16Ch] BYREF

  result = -1073741823;
  if ( Object )
  {
    v7 = 0;
    memset(v12, 0, 0x160u);
    v8 = a5;
    do
    {
      v9 = v8 - v7;
      if ( (unsigned int)(v8 - v7) >= 0xD )
        v9 = 13;
      v12[6] = 1073741953;
      v12[8] = v7;
      LOWORD(v12[0]) = 16 * v9 + 24;
      HIWORD(v12[0]) = 16 * v9 + 48;
      LOWORD(v12[1]) = 0x8000;
      v12[7] = a2;
      v12[10] = a3;
      v12[9] = v8;
      v12[11] = v9;
      memcpy(&v12[12], (const void *)(a4 + 16 * v7), 16 * v9);
      v10 = LpcRequestPort(Object, v12);
      if ( v10 < 0 )
        break;
      v8 = a5;
      v7 += v9;
    }
    while ( v7 != a5 );
    ObfDereferenceObject(Object);
    return v10;
  }
  return result;
}
