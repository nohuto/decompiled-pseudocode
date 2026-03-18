/*
 * XREFs of _DwmAsyncChildStyleChange@16 @ 0x1BAD6
 * Callers:
 *     _DecomposeWindowIfNeeded@4 @ 0x1B7B8 (_DecomposeWindowIfNeeded@4.c)
 *     _UnsetLayeredWindow@8 @ 0x1B80C (_UnsetLayeredWindow@8.c)
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _ComposeWindow@8 @ 0x1BF3E (_ComposeWindow@8.c)
 *     _ComposeWindowIfNeeded@8 @ 0x1CD56 (_ComposeWindowIfNeeded@8.c)
 *     ?xxxRemoveDeleteMenuHelper@@YGHABV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1DF66 (-xxxRemoveDeleteMenuHelper@@YGHABV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0x1EB04 (-xxxRedrawForSetLPITEMInfo@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z.c)
 *     _xxxSetLayeredWindow@12 @ 0x1F2B8 (_xxxSetLayeredWindow@12.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxGetSystemMenu@8 @ 0x8EF56 (_xxxGetSystemMenu@8.c)
 *     _xxxEnableMenuItem@12 @ 0xBA004 (_xxxEnableMenuItem@12.c)
 *     _xxxSetClassData@16 @ 0xCBC4C (_xxxSetClassData@16.c)
 * Callees:
 *     <none>
 */

int __fastcall DwmAsyncChildStyleChange(void *a1, int a2, int a3, int a4)
{
  unsigned int v4; // esi
  PVOID v5; // edi
  _WORD v7[3]; // [esp+10h] [ebp-38h] BYREF
  int v8; // [esp+16h] [ebp-32h]
  int v9; // [esp+1Ah] [ebp-2Eh]
  int v10; // [esp+1Eh] [ebp-2Ah]
  int v11; // [esp+22h] [ebp-26h]
  __int16 v12; // [esp+26h] [ebp-22h]
  int v13; // [esp+28h] [ebp-20h]
  int v14; // [esp+2Ch] [ebp-1Ch]
  int v15; // [esp+30h] [ebp-18h]
  int v16; // [esp+34h] [ebp-14h]
  int v17; // [esp+38h] [ebp-10h]
  PVOID Object; // [esp+3Ch] [ebp-Ch]
  unsigned int v19; // [esp+40h] [ebp-8h]
  int v20; // [esp+44h] [ebp-4h]

  v17 = a2;
  Object = a1;
  v20 = -1073741823;
  do
  {
    v19 = HIDWORD(g_cDWMWindowUniqueness);
    v4 = g_cDWMWindowUniqueness;
  }
  while ( _InterlockedCompareExchange64(&g_cDWMWindowUniqueness, g_cDWMWindowUniqueness + 1, g_cDWMWindowUniqueness) != __PAIR64__(v19, v4) );
  v5 = Object;
  if ( Object )
  {
    v13 = 1073741846;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v7[0] = 16;
    v7[1] = 40;
    v7[2] = 0x8000;
    v14 = v17;
    v15 = a3;
    v16 = a4;
    v20 = LpcRequestPort(Object, v7);
    ObfDereferenceObject(v5);
  }
  return v20;
}
