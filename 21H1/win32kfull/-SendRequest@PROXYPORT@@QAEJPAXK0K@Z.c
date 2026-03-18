/*
 * XREFs of ?SendRequest@PROXYPORT@@QAEJPAXK0K@Z @ 0x2108AB
 * Callers:
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __thiscall PROXYPORT::SendRequest(PROXYPORT *this, void *a2, unsigned int a3, void *a4, unsigned int a5)
{
  int result; // eax
  int v7; // [esp+Ch] [ebp-194h] BYREF
  _WORD v8[2]; // [esp+10h] [ebp-190h] BYREF
  int v9; // [esp+14h] [ebp-18Ch]
  int v10; // [esp+18h] [ebp-188h]
  int v11; // [esp+1Ch] [ebp-184h]
  int v12; // [esp+20h] [ebp-180h]
  int v13; // [esp+24h] [ebp-17Ch]
  unsigned int v14; // [esp+28h] [ebp-178h]
  void *v15; // [esp+2Ch] [ebp-174h]
  unsigned int v16; // [esp+30h] [ebp-170h]
  void *v17; // [esp+34h] [ebp-16Ch]
  _DWORD v18[89]; // [esp+38h] [ebp-168h] BYREF

  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  memset(v18, 0, 0x160u);
  v17 = a4;
  v8[0] = 16;
  v8[1] = 40;
  v9 = 0x8000;
  v14 = a3;
  v15 = a2;
  v7 = 352;
  v16 = a4 != 0 ? a5 : 0;
  result = LpcSendWaitReceivePort(**(_DWORD **)this, &loc_20000, v8, v18, &v7, 0);
  if ( result == -1073741769 )
    *(_DWORD *)(*(_DWORD *)this + 32) = 0;
  if ( result >= 0 && ((v18[2] & 0x7FFF) != 2 || LOWORD(v18[1]) != 16 || a4 != (void *)v18[10] || a5 != v18[9]) )
    return -1073741823;
  return result;
}
