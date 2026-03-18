/*
 * XREFs of _EditionMouseSpeedHitTest@48 @ 0xF14D0
 * Callers:
 *     <none>
 * Callees:
 *     _IsThreadDesktopComposed@4 @ 0x303CC (_IsThreadDesktopComposed@4.c)
 *     _INPUTDEST_FROM_PWND@4 @ 0x9B69A (_INPUTDEST_FROM_PWND@4.c)
 *     _xxxSpeedHitTest@24 @ 0xF3E36 (_xxxSpeedHitTest@24.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _TransformVectorWithInputTargetPrecedence@12 @ 0x14E6DF (_TransformVectorWithInputTargetPrecedence@12.c)
 */

void *__stdcall EditionMouseSpeedHitTest(
        void *a1,
        int *a2,
        int a3,
        int a4,
        __int16 a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        BOOL *a12,
        int a13)
{
  _DWORD *v13; // esi
  int v14; // eax
  BOOL v15; // eax
  void *result; // eax
  _DWORD v17[2]; // [esp+8h] [ebp-98h] BYREF
  __int16 v18; // [esp+10h] [ebp-90h]
  __int16 v19; // [esp+12h] [ebp-8Eh]
  int v20; // [esp+14h] [ebp-8Ch]
  int v21; // [esp+18h] [ebp-88h]
  int v22; // [esp+1Ch] [ebp-84h]
  int v23; // [esp+20h] [ebp-80h]
  int v24; // [esp+24h] [ebp-7Ch]
  int v25; // [esp+28h] [ebp-78h]
  int v26; // [esp+2Ch] [ebp-74h]
  int v27; // [esp+30h] [ebp-70h]
  int v28; // [esp+34h] [ebp-6Ch]
  _DWORD v29[26]; // [esp+38h] [ebp-68h] BYREF

  if ( _gspwndInternalCapture )
  {
    if ( IsThreadDesktopComposed(_gptiCurrent) )
      TransformVectorWithInputTargetPrecedence(a3);
    if ( a12 )
      *a12 = 1;
    v13 = INPUTDEST_FROM_PWND(_gspwndInternalCapture, v29);
  }
  else
  {
    v19 = 0;
    v21 = 0;
    v22 = *a2;
    v23 = a2[1];
    v27 = a6;
    v28 = a7;
    v25 = a8;
    v26 = 0;
    v17[0] = 4;
    v20 = 0;
    v24 = a9;
    v17[1] = MouseButtonToPointerFlags(a4);
    v18 = a5;
    memset(v29, 0, sizeof(v29));
    v14 = xxxSpeedHitTest(a11, v17, a10, a3, a13, v29);
    *a2 = v22;
    a2[1] = v23;
    v15 = v14 != 0;
    if ( a12 )
      *a12 = v15;
    v13 = v29;
  }
  result = a1;
  qmemcpy(a1, v13, 0x68u);
  return result;
}
