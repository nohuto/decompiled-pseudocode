/*
 * XREFs of ?IsVSlick@@YGHPAUtagWND@@@Z @ 0x19C50E
 * Callers:
 *     _Is31TrayWindow@4 @ 0x19C56C (_Is31TrayWindow@4.c)
 * Callees:
 *     _GetScreenRectForWindow@4 @ 0x1B725D (_GetScreenRectForWindow@4.c)
 */

BOOL __thiscall IsVSlick(_DWORD *this)
{
  int *ScreenRectForWindow; // eax
  unsigned int *v3; // esi
  _DWORD *v4; // eax
  bool v5; // zf
  int v6; // eax
  unsigned int v7; // edx
  unsigned int v8; // edi
  BOOL result; // eax
  _BYTE v10[16]; // [esp+10h] [ebp-20h] BYREF
  int v11; // [esp+20h] [ebp-10h]
  int v12; // [esp+24h] [ebp-Ch]
  unsigned int v13; // [esp+28h] [ebp-8h]
  unsigned int v14; // [esp+2Ch] [ebp-4h]

  ScreenRectForWindow = (int *)GetScreenRectForWindow(this, v10);
  v11 = *ScreenRectForWindow;
  v12 = ScreenRectForWindow[1];
  v3 = (unsigned int *)(ScreenRectForWindow + 2);
  v4 = (_DWORD *)*_gpDispInfo;
  v13 = *v3;
  v5 = *v4 == 1;
  v14 = v3[1];
  result = 0;
  if ( v5 )
  {
    v6 = this[5];
    v7 = *(_DWORD *)(v6 + 52);
    if ( v7 > v13 )
    {
      v8 = *(_DWORD *)(v6 + 56);
      if ( v8 > v14 && v8 == v14 + 100 && v7 == v13 + 100 )
        return 1;
    }
  }
  return result;
}
