/*
 * XREFs of ?FinishStockFontInitInternal@@YGXPBGH@Z @ 0xDBCEC
 * Callers:
 *     _FinishStockFontInit@4 @ 0xDBAB4 (_FinishStockFontInit@4.c)
 * Callees:
 *     ?StringCchCopyW@@YGJPAGIPBG@Z @ 0x8A554 (-StringCchCopyW@@YGJPAGIPBG@Z.c)
 *     _bDeleteFont@8 @ 0x9827E (_bDeleteFont@8.c)
 *     ?bGetRegString@@YG_NPAXPBGPAGK@Z @ 0xDBEA6 (-bGetRegString@@YG_NPAXPBGPAGK@Z.c)
 *     ?StringCchCatW@@YGJPAGIPBG@Z @ 0xDD112 (-StringCchCatW@@YGJPAGIPBG@Z.c)
 *     ?bOpenKey@@YGHPBGPAPAX@Z @ 0xDF378 (-bOpenKey@@YGHPBGPAPAX@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _bInitOneStockFontInternal@16 @ 0x2925F6 (_bInitOneStockFontInternal@16.c)
 */

void __fastcall FinishStockFontInitInternal(int a1, void *a2)
{
  unsigned int v2; // edi
  unsigned int i; // esi
  unsigned __int16 *v4; // ebx
  void **v5; // eax
  unsigned int v6; // esi
  unsigned int v7; // eax
  int v8; // esi
  int v9; // eax
  unsigned __int16 *v10; // [esp+0h] [ebp-40h]
  void **v11; // [esp+4h] [ebp-3Ch]
  unsigned int v12; // [esp+Ch] [ebp-34h]
  unsigned int v13; // [esp+10h] [ebp-30h]
  PVOID KeyValueInformation; // [esp+18h] [ebp-28h]
  _DWORD *v16; // [esp+1Ch] [ebp-24h]
  int v17; // [esp+20h] [ebp-20h]
  HANDLE Handle[3]; // [esp+30h] [ebp-10h] BYREF

  memset(Handle, 0, sizeof(Handle));
  v2 = 0;
  for ( i = 0; i < 3; ++i )
  {
    if ( !bOpenKey(v10, v11) )
      Handle[i] = 0;
  }
  KeyValueInformation = (PVOID)AllocFreeTmpBuffer(260);
  v4 = (unsigned __int16 *)AllocFreeTmpBuffer(260);
  v5 = gahStockObjects;
  if ( a2 )
    v5 = gahStockObjects96;
  v6 = 0;
  v16 = *v5;
  v12 = 0;
  do
  {
    v7 = 0;
    v13 = 0;
    while ( !Handle[v7] )
    {
LABEL_29:
      v13 = ++v7;
      if ( v7 >= 3 )
        goto LABEL_18;
    }
    if ( !KeyValueInformation || !v4 )
    {
      v6 = v12;
      goto LABEL_29;
    }
    if ( !bGetRegString(KeyValueInformation, (const unsigned __int16 *)Handle[v7], v10, (unsigned int)v11)
      || StringCchCopyW((size_t)L"\\SystemRoot\\Fonts\\", (unsigned int)v10, (const unsigned __int16 *)v11) < 0
      || StringCchCatW((size_t)KeyValueInformation, (unsigned int)v10, (const unsigned __int16 *)v11) < 0 )
    {
      v6 = v12;
LABEL_28:
      v7 = v13;
      goto LABEL_29;
    }
    v8 = v16[*(int *)((char *)&dword_24D470 + v12)];
    v9 = HmgValidHandle(v8, 10) != 0 ? v8 : 0;
    v6 = v12;
    v17 = v9;
    if ( !bInitOneStockFontInternal(v4, *(int *)((char *)&dword_24D470 + v12), a2) )
      goto LABEL_28;
    if ( v17 )
      bDeleteFont(v17, 1);
LABEL_18:
    v6 += 12;
    v12 = v6;
  }
  while ( v6 < 0x24 );
  if ( KeyValueInformation )
    FreeTmpBuffer(KeyValueInformation);
  if ( v4 )
    FreeTmpBuffer(v4);
  do
  {
    if ( Handle[v2] )
      ZwClose(Handle[v2]);
    ++v2;
  }
  while ( v2 < 3 );
}
