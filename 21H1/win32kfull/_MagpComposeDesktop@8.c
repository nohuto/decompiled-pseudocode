/*
 * XREFs of _MagpComposeDesktop@8 @ 0xE1152
 * Callers:
 *     _zzzComposeDesktop@4 @ 0xE0A14 (_zzzComposeDesktop@4.c)
 * Callees:
 *     ?Save@CSmartFloatingSave@@QAEJXZ @ 0x99D5C (-Save@CSmartFloatingSave@@QAEJXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _DwmAsyncMagnCreate@16 @ 0x1D1B28 (_DwmAsyncMagnCreate@16.c)
 *     _DwmAsyncMagnSetDesktopColorTransform@12 @ 0x1D1C57 (_DwmAsyncMagnSetDesktopColorTransform@12.c)
 *     _DwmAsyncMagnSetWindowColorTransform@16 @ 0x1D206A (_DwmAsyncMagnSetWindowColorTransform@16.c)
 *     _DwmAsyncMagnSetWindowFilterList@16 @ 0x1D211E (_DwmAsyncMagnSetWindowFilterList@16.c)
 *     _DwmAsyncMagnSetWindowSharedTextures@16 @ 0x1D2220 (_DwmAsyncMagnSetWindowSharedTextures@16.c)
 */

int __fastcall MagpComposeDesktop(_DWORD *a1, int a2)
{
  char v2; // bl
  _DWORD *v3; // esi
  int v4; // edi
  int result; // eax
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  void *v8; // eax
  _DWORD *v9; // esi
  _DWORD *v10; // eax
  int v11; // ecx
  void *v12; // eax
  int v13; // eax
  void *v14; // eax
  void *v15; // eax
  void *v16; // eax
  int v17; // [esp-8h] [ebp-50h]
  int v18; // [esp-8h] [ebp-50h]
  int v19; // [esp-8h] [ebp-50h]
  int v20; // [esp-8h] [ebp-50h]
  BOOL v21; // [esp-4h] [ebp-4Ch]
  _DWORD *v23; // [esp+10h] [ebp-38h]
  struct _KFLOATING_SAVE FloatSave; // [esp+20h] [ebp-28h] BYREF
  char v26; // [esp+40h] [ebp-8h]

  v2 = 0;
  v3 = a1;
  v4 = *(_DWORD *)(a2 + 136);
  v26 = 0;
  if ( v4 )
  {
    v8 = (void *)ReferenceDwmApiPort();
    DwmAsyncMagnSetDesktopColorTransform(v8, v4 + 104);
    v3 = a1;
  }
  result = CSmartFloatingSave::Save(&FloatSave);
  if ( result < 0 )
  {
    v2 = v26;
  }
  else
  {
    v6 = (_DWORD *)*v3;
    v23 = (_DWORD *)*v3;
    if ( (_DWORD *)*v3 != v3 )
    {
      v7 = a1;
      do
      {
        v9 = (_DWORD *)v6[5];
        if ( v9 != v6 + 5 )
        {
          v10 = v6 + 5;
          do
          {
            v11 = v9[3];
            if ( v11 != -1 )
            {
              v21 = (*(_BYTE *)(*(_DWORD *)(v11 + 20) + 184) & 0xF) != 0;
              v17 = ***(_DWORD ***)(a2 + 4);
              v12 = (void *)ReferenceDwmApiPort();
              DwmAsyncMagnCreate(v12, v17, v21);
              v13 = v9[2];
              if ( (v13 & 4) != 0 )
              {
                v18 = ***(_DWORD ***)(a2 + 4);
                v14 = (void *)ReferenceDwmApiPort();
                DwmAsyncMagnSetWindowColorTransform(v14, v18, (int)(v9 + 26));
                v13 = v9[2];
              }
              if ( (v13 & 8) != 0 )
              {
                v19 = ***(_DWORD ***)(a2 + 4);
                v15 = (void *)ReferenceDwmApiPort();
                DwmAsyncMagnSetWindowFilterList(v15, v19, (int)(v9 + 51));
                v13 = v9[2];
              }
              if ( (v13 & 0x10) != 0 )
              {
                v20 = ***(_DWORD ***)(a2 + 4);
                v16 = (void *)ReferenceDwmApiPort();
                DwmAsyncMagnSetWindowSharedTextures(v16, v20, (int)(v9 + 54));
              }
              v10 = v6 + 5;
            }
            v9[2] &= ~0x20u;
            v9 = (_DWORD *)*v9;
          }
          while ( v9 != v10 );
          v6 = v23;
          v7 = a1;
        }
        v6 = (_DWORD *)*v6;
        v23 = v6;
      }
      while ( v6 != v7 );
    }
    result = KeRestoreFloatingPointState(&FloatSave);
    v26 = 0;
  }
  if ( v2 )
    return KeRestoreFloatingPointState(&FloatSave);
  return result;
}
