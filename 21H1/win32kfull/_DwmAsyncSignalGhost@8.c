/*
 * XREFs of _DwmAsyncSignalGhost@8 @ 0xC207C
 * Callers:
 *     ?SendAsyncSGHOSTINFO@@YGHQAU_GHOSTINFO@@@Z @ 0xC205C (-SendAsyncSGHOSTINFO@@YGHQAU_GHOSTINFO@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall DwmAsyncSignalGhost(PVOID Object, const void *a2)
{
  int v3; // esi
  _WORD v5[3]; // [esp+8h] [ebp-34h] BYREF
  int v6; // [esp+Eh] [ebp-2Eh]
  int v7; // [esp+12h] [ebp-2Ah]
  int v8; // [esp+16h] [ebp-26h]
  int v9; // [esp+1Ah] [ebp-22h]
  __int16 v10; // [esp+1Eh] [ebp-1Eh]
  int v11; // [esp+20h] [ebp-1Ch]
  _BYTE v12[24]; // [esp+24h] [ebp-18h] BYREF

  v3 = -1073741823;
  if ( Object )
  {
    v11 = 1073741876;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v5[0] = 28;
    v5[1] = 52;
    v5[2] = 0x8000;
    qmemcpy(v12, a2, sizeof(v12));
    v3 = LpcRequestPort(Object, v5);
    ObfDereferenceObject(Object);
  }
  return v3;
}
