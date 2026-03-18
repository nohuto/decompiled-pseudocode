/*
 * XREFs of _DwmAsyncMagnSetWindowColorTransform@16 @ 0x1D206A
 * Callers:
 *     _MagpComposeDesktop@8 @ 0xE1152 (_MagpComposeDesktop@8.c)
 *     _MagSetLensContextInformation@28 @ 0x13D036 (_MagSetLensContextInformation@28.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall DwmAsyncMagnSetWindowColorTransform(PVOID Object, int a2, int a3, const void *a4)
{
  int v5; // esi
  __int16 v7; // [esp+10h] [ebp-90h] BYREF
  int v8; // [esp+12h] [ebp-8Eh]
  int v9; // [esp+16h] [ebp-8Ah]
  int v10; // [esp+1Ah] [ebp-86h]
  int v11; // [esp+1Eh] [ebp-82h]
  int v12; // [esp+22h] [ebp-7Eh]
  __int16 v13; // [esp+26h] [ebp-7Ah]
  int v14; // [esp+28h] [ebp-78h]
  __int64 v15; // [esp+2Ch] [ebp-74h]
  int v16; // [esp+34h] [ebp-6Ch]
  _BYTE v17[100]; // [esp+38h] [ebp-68h] BYREF

  v5 = -1073741823;
  if ( Object )
  {
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v7 = 116;
    v8 = -2147483508;
    v15 = a2;
    v14 = 1073741921;
    v16 = a3;
    qmemcpy(v17, a4, sizeof(v17));
    EtwUpdateEvent(a2, 1073741921);
    v5 = LpcRequestPort(Object, &v7);
    ObfDereferenceObject(Object);
  }
  return v5;
}
