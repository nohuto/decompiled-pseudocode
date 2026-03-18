/*
 * XREFs of _DwmAsyncNotifySpriteDPIChange@12 @ 0x24982
 * Callers:
 *     _GreDwmNotifySpriteDPIChange@16 @ 0x23C66 (_GreDwmNotifySpriteDPIChange@16.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall DwmAsyncNotifySpriteDPIChange(void *a1, int a2, const void *a3)
{
  __int64 v3; // kr00_8
  int v4; // edi
  _WORD v7[3]; // [esp+20h] [ebp-54h] BYREF
  int v8; // [esp+26h] [ebp-4Eh]
  int v9; // [esp+2Ah] [ebp-4Ah]
  int v10; // [esp+2Eh] [ebp-46h]
  int v11; // [esp+32h] [ebp-42h]
  __int16 v12; // [esp+36h] [ebp-3Eh]
  int v13; // [esp+38h] [ebp-3Ch]
  int v14; // [esp+3Ch] [ebp-38h]
  _BYTE v15[40]; // [esp+40h] [ebp-34h] BYREF

  do
    v3 = g_cDWMWindowUniqueness;
  while ( _InterlockedCompareExchange64(&g_cDWMWindowUniqueness, g_cDWMWindowUniqueness + 1, g_cDWMWindowUniqueness) != v3 );
  v4 = -1073741823;
  if ( a1 )
  {
    v13 = 1073741906;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v7[0] = 48;
    v7[1] = 72;
    v7[2] = 0x8000;
    v14 = a2;
    qmemcpy(v15, a3, sizeof(v15));
    v4 = LpcRequestPort(a1, v7);
    ObfDereferenceObject(a1);
  }
  return v4;
}
