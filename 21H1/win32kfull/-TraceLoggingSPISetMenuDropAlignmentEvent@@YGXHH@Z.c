/*
 * XREFs of ?TraceLoggingSPISetMenuDropAlignmentEvent@@YGXHH@Z @ 0xEC1BE
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __fastcall TraceLoggingSPISetMenuDropAlignmentEvent(int a1, char a2)
{
  char v3; // [esp+12h] [ebp-66h] BYREF
  char v4; // [esp+13h] [ebp-65h] BYREF
  int v5; // [esp+14h] [ebp-64h]
  _DWORD v6[2]; // [esp+18h] [ebp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+20h] [ebp-58h] BYREF
  _DWORD *v8; // [esp+40h] [ebp-38h]
  int v9; // [esp+44h] [ebp-34h]
  int v10; // [esp+48h] [ebp-30h]
  int v11; // [esp+4Ch] [ebp-2Ch]
  char *v12; // [esp+50h] [ebp-28h]
  int v13; // [esp+54h] [ebp-24h]
  int v14; // [esp+58h] [ebp-20h]
  int v15; // [esp+5Ch] [ebp-1Ch]
  char *v16; // [esp+60h] [ebp-18h]
  int v17; // [esp+64h] [ebp-14h]
  int v18; // [esp+68h] [ebp-10h]
  int v19; // [esp+6Ch] [ebp-Ch]

  v5 = a1;
  if ( (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 0x200000000000LL) )
  {
    v4 = v5;
    v6[0] = 0x1000000;
    v16 = &v3;
    v12 = &v4;
    v8 = v6;
    v6[1] = 0;
    v3 = a2;
    v17 = 0;
    v18 = 1;
    v19 = 0;
    v13 = 0;
    v14 = 1;
    v15 = 0;
    v9 = 0;
    v10 = 8;
    v11 = 0;
    _tlgWriteTransfer_EtwWriteTransfer((int)&dword_266280, byte_2560E7, 0, 0, 5u, &UserData);
  }
}
