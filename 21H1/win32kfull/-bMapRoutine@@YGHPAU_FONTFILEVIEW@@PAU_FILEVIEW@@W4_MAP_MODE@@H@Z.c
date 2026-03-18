/*
 * XREFs of ?bMapRoutine@@YGHPAU_FONTFILEVIEW@@PAU_FILEVIEW@@W4_MAP_MODE@@H@Z @ 0x8CBA4
 * Callers:
 *     _EngMapFontFileFDInternal@16 @ 0x8BDE8 (_EngMapFontFileFDInternal@16.c)
 *     ?EngMapFontFileInternal@@YGHKPAPAKPAK@Z @ 0x1E869E (-EngMapFontFileInternal@@YGHKPAPAKPAK@Z.c)
 * Callees:
 *     ?bShouldMap@@YGHPAU_FILEVIEW@@0H@Z @ 0x8CC46 (-bShouldMap@@YGHPAU_FILEVIEW@@0H@Z.c)
 */

int __fastcall bMapRoutine(int a1, _DWORD *a2, int a3, struct _FILEVIEW *a4)
{
  _DWORD *v5; // edx
  int ShouldMap; // edi
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  struct _FILEVIEW *v12; // [esp+0h] [ebp-8h]
  int v13; // [esp+4h] [ebp-4h]

  ShouldMap = bShouldMap(a4, v12, v13);
  if ( ShouldMap )
  {
    if ( a3 == 1 )
      v5[3] = a2[3];
    else
      v5[2] = a2[2];
    v7 = v5[6];
    v5[4] = a2[4];
    *v5 = *a2;
    v5[1] = a2[1];
    v5[5] = a2[5];
    v5[7] = a2[7];
    v8 = v5[6] ^ (a2[6] ^ v7) & 4 | 1;
    v5[6] = v8;
    v9 = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)a2[6]) & 8;
    v5[6] = v9;
    v10 = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)a2[6]) & 0x10;
    v5[6] = v10;
    v5[10] = a2[10];
    v5[11] = a2[11];
  }
  else
  {
    if ( a3 == 1 )
    {
      --v5[15];
      v5[3] = 0;
    }
    else
    {
      --v5[14];
      v5[2] = 0;
    }
    v5[6] &= ~1u;
    v10 = v5[6];
  }
  v5[6] = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)a2[6]) & 2;
  v5[8] = a2[8];
  return ShouldMap;
}
