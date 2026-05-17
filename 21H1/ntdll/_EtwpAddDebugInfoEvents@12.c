/*
 * XREFs of _EtwpAddDebugInfoEvents@12 @ 0x4B2EDFF4
 * Callers:
 *     _EtwpAddProviderTrackingInfo@12 @ 0x4B2F0E96 (_EtwpAddProviderTrackingInfo@12.c)
 * Callees:
 *     _RtlUnicodeToMultiByteN@20 @ 0x4B2E0D70 (_RtlUnicodeToMultiByteN@20.c)
 *     _EtwpAddEventToBuffer@28 @ 0x4B2EE106 (_EtwpAddEventToBuffer@28.c)
 *     _EtwpQueryRegString@16 @ 0x4B2F1160 (_EtwpQueryRegString@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __fastcall EtwpAddDebugInfoEvents(int a1, int a2, int a3)
{
  int v5; // edi
  int result; // eax
  _DWORD *v7; // ebx
  _DWORD *v8; // esi
  int v9; // edx
  int v11; // [esp+14h] [ebp-320h] BYREF
  unsigned __int16 v12[260]; // [esp+18h] [ebp-31Ch] BYREF
  char Src[268]; // [esp+220h] [ebp-114h] BYREF

  v5 = a3 - *(_DWORD *)(a2 + 48);
  result = EtwpQueryRegString(
             L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion",
             L"BuildLabEx",
             v12,
             260);
  if ( result >= 0 )
  {
    result = RtlUnicodeToMultiByteN(Src, 0x104u, 0, v12, 0x208u);
    if ( result >= 0 )
    {
      result = EtwpAddEventToBuffer(a2 + 88, Src, strlen(Src) + 1, v5, (int)&v11);
      if ( result < 0 )
        return result;
      result = (v11 + 7) & 0xFFFFFFF8;
      v5 -= result;
    }
  }
  v7 = (_DWORD *)(a1 + 332);
  v8 = *(_DWORD **)(a1 + 332);
  if ( v8 != v7 )
  {
    v9 = a2 + 88;
    do
    {
      result = EtwpAddEventToBuffer(v9, v8 + 5, v8[3] - 4, v5, (int)&v11);
      if ( result < 0 )
        break;
      v8 = (_DWORD *)*v8;
      result = (v11 + 7) & 0xFFFFFFF8;
      v5 -= result;
      v9 = a2 + 88;
    }
    while ( v8 != v7 );
  }
  return result;
}
