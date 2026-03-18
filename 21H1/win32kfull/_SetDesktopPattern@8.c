/*
 * XREFs of _SetDesktopPattern@8 @ 0xE9318
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YGJPAUtagWND@@IIJ@Z @ 0x16172 (-xxxDesktopWndProcWorker@@YGJPAUtagWND@@IIJ@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     _RecolorDeskPattern@0 @ 0xAEE98 (_RecolorDeskPattern@0.c)
 *     _GreMarkDeletableBrush@4 @ 0xE9408 (_GreMarkDeletableBrush@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?SetGlobalDesktopPattern@@YGHPAUHBITMAP__@@@Z @ 0x1852F8 (-SetGlobalDesktopPattern@@YGHPAUHBITMAP__@@@Z.c)
 */

int __fastcall SetDesktopPattern(int a1, const wchar_t *a2)
{
  int v2; // esi
  int SolidBrush; // edi
  HBRUSH v6; // ecx
  wchar_t v8; // ax
  unsigned int v9; // edi
  wchar_t v10; // cx
  wchar_t v11; // dx
  int v12; // esi
  wchar_t v13; // dx
  int v14; // ecx
  int v15; // esi
  HBITMAP v16; // [esp+0h] [ebp-260h]
  unsigned int v17; // [esp+10h] [ebp-250h]
  __int16 v18; // [esp+14h] [ebp-24Ch]
  _WORD v19[262]; // [esp+18h] [ebp-248h] BYREF
  wchar_t Str2[20]; // [esp+224h] [ebp-3Ch] BYREF
  _WORD v21[8]; // [esp+24Ch] [ebp-14h] BYREF

  v2 = 0;
  memset(v19, 0, 0x208u);
  if ( !a2 )
  {
    if ( !FastGetProfileStringFromIDW(a1, 4, 2, byte_FC318, v19, 260, 0) )
      return v2;
    a2 = v19;
  }
  RtlLoadStringOrError(82, Str2, 20, 0);
  if ( v19[0] && __wcsicmp(a2, Str2) )
  {
    memset(v21, 0, sizeof(v21));
    v8 = *a2;
    v9 = 0;
    v17 = 0;
    do
    {
      v18 = 0;
      v10 = v8;
      if ( v8 )
      {
        v11 = v8;
        do
        {
          if ( v11 >= 0x30u )
          {
            v10 = v11;
            if ( v11 <= 0x39u )
              break;
          }
          v8 = *++a2;
          v11 = *a2;
          v10 = *a2;
        }
        while ( *a2 );
        v2 = 0;
      }
      if ( v10 >= 0x30u )
      {
        v12 = 0;
        v13 = v10;
        do
        {
          if ( v13 > 0x39u )
            break;
          v14 = 10 * v12;
          ++a2;
          v15 = v13;
          v8 = *a2;
          v13 = *a2;
          v12 = v14 - 48 + v15;
        }
        while ( *a2 >= 0x30u );
        v9 = v17;
        v18 = v12;
        v2 = 0;
      }
      v21[v9++] = v18;
      v17 = v9;
    }
    while ( v9 < 8 );
    if ( GreCreateBitmap(8, 8, 1, 1, v21) )
    {
      SetGlobalDesktopPattern(v16);
      return RecolorDeskPattern();
    }
  }
  else
  {
    SolidBrush = GreCreateSolidBrush(*(_DWORD *)(_gpsi + 4172));
    if ( SolidBrush )
    {
      v6 = *(HBRUSH *)(_gpsi + 4296);
      if ( v6 )
      {
        GreMarkDeletableBrush(v6);
        GreDeleteObject(*(_DWORD *)(_gpsi + 4296));
      }
      GreMarkUndeletableBrush(SolidBrush);
      GreSetBrushOwner(SolidBrush, 0);
      *(_DWORD *)(_gpsi + 4296) = SolidBrush;
    }
  }
  return v2;
}
