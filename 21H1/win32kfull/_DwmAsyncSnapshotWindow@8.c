/*
 * XREFs of _DwmAsyncSnapshotWindow@8 @ 0x1D2A24
 * Callers:
 *     _xxxSnapWindow@8 @ 0x1A20A2 (_xxxSnapWindow@8.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall DwmAsyncSnapshotWindow(PVOID Object, int a2)
{
  int v3; // esi
  _WORD v5[3]; // [esp+8h] [ebp-28h] BYREF
  int v6; // [esp+Eh] [ebp-22h]
  int v7; // [esp+12h] [ebp-1Eh]
  int v8; // [esp+16h] [ebp-1Ah]
  int v9; // [esp+1Ah] [ebp-16h]
  __int16 v10; // [esp+1Eh] [ebp-12h]
  int v11; // [esp+20h] [ebp-10h]
  __int64 v12; // [esp+24h] [ebp-Ch]

  v3 = -1073741823;
  if ( Object )
  {
    v10 = 0;
    v5[0] = 12;
    v5[1] = 36;
    v5[2] = 0x8000;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v11 = -2147483640;
    v12 = a2;
    EtwUpdateEvent(0, -2147483640);
    v3 = LpcRequestPort(Object, v5);
    ObfDereferenceObject(Object);
  }
  return v3;
}
