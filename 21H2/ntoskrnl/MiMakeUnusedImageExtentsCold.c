/*
 * XREFs of MiMakeUnusedImageExtentsCold @ 0x140554628
 * Callers:
 *     MiRelocateImage @ 0x1406AC790 (MiRelocateImage.c)
 * Callees:
 *     MiGetLeafPfnBuddy @ 0x14038059C (MiGetLeafPfnBuddy.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiAddPageToHeatList @ 0x1403F7C88 (MiAddPageToHeatList.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiNotifyPageHeat @ 0x140560004 (MiNotifyPageHeat.c)
 */

unsigned __int64 __fastcall MiMakeUnusedImageExtentsCold(__int64 a1)
{
  unsigned __int64 result; // rax
  _QWORD *v3; // rbx
  int v4; // [rsp+20h] [rbp-A8h] BYREF
  int v5; // [rsp+24h] [rbp-A4h]
  int v6; // [rsp+28h] [rbp-A0h]
  _BYTE v7[132]; // [rsp+2Ch] [rbp-9Ch] BYREF

  memset(v7, 0, sizeof(v7));
  result = *(_QWORD *)(a1 + 96);
  v3 = *(_QWORD **)(*(_QWORD *)(result + 32) + 104LL);
  v4 = 0;
  v5 = 0;
  v6 = 16;
  if ( v3 )
  {
    do
    {
      MiAddPageToHeatList((__int64)&v4);
      result = MiGetLeafPfnBuddy(v3);
      v3 = (_QWORD *)result;
    }
    while ( result );
    if ( v5 )
      return MiNotifyPageHeat(&v4);
  }
  return result;
}
