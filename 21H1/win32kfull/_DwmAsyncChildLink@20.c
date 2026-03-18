/*
 * XREFs of _DwmAsyncChildLink@20 @ 0x994CC
 * Callers:
 *     _LinkWindow@12 @ 0x34D24 (_LinkWindow@12.c)
 *     ?DwmNotifyChildrenLinkUnlink@@YGHPBUtagDESKTOP@@H@Z @ 0xE1784 (-DwmNotifyChildrenLinkUnlink@@YGHPBUtagDESKTOP@@H@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall DwmAsyncChildLink(void *a1, int a2, int a3, int a4, int a5)
{
  unsigned int v5; // esi
  PVOID v6; // edi
  _WORD v8[3]; // [esp+Ch] [ebp-3Ch] BYREF
  int v9; // [esp+12h] [ebp-36h]
  int v10; // [esp+16h] [ebp-32h]
  int v11; // [esp+1Ah] [ebp-2Eh]
  int v12; // [esp+1Eh] [ebp-2Ah]
  __int16 v13; // [esp+22h] [ebp-26h]
  int v14; // [esp+24h] [ebp-24h]
  int v15; // [esp+28h] [ebp-20h]
  int v16; // [esp+2Ch] [ebp-1Ch]
  int v17; // [esp+30h] [ebp-18h]
  int v18; // [esp+34h] [ebp-14h]
  int v19; // [esp+38h] [ebp-10h]
  PVOID Object; // [esp+3Ch] [ebp-Ch]
  unsigned int v21; // [esp+40h] [ebp-8h]
  int v22; // [esp+44h] [ebp-4h]

  v19 = a2;
  Object = a1;
  v22 = -1073741823;
  do
  {
    v21 = HIDWORD(g_cDWMWindowUniqueness);
    v5 = g_cDWMWindowUniqueness;
  }
  while ( _InterlockedCompareExchange64(&g_cDWMWindowUniqueness, g_cDWMWindowUniqueness + 1, g_cDWMWindowUniqueness) != __PAIR64__(v21, v5) );
  v6 = Object;
  if ( Object )
  {
    v14 = 1073741842;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v8[0] = 20;
    v8[1] = 44;
    v8[2] = 0x8000;
    v15 = v19;
    v16 = a3;
    v17 = a4;
    v18 = a5;
    v22 = LpcRequestPort(Object, v8);
    ObfDereferenceObject(v6);
  }
  return v22;
}
