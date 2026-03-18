/*
 * XREFs of MiMakeUnusedImageExtentsCold @ 0x140552918
 * Callers:
 *     MiRelocateImage @ 0x14070B8DC (MiRelocateImage.c)
 * Callees:
 *     MiGetLeafPfnBuddy @ 0x14038020C (MiGetLeafPfnBuddy.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     MiAddPageToHeatList @ 0x1403F64EC (MiAddPageToHeatList.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiNotifyPageHeat @ 0x14055E2F4 (MiNotifyPageHeat.c)
 */

unsigned __int64 __fastcall MiMakeUnusedImageExtentsCold(__int64 a1)
{
  unsigned __int64 result; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // [rsp+20h] [rbp-A8h] BYREF
  int v8; // [rsp+24h] [rbp-A4h]
  int v9; // [rsp+28h] [rbp-A0h]
  _BYTE v10[132]; // [rsp+2Ch] [rbp-9Ch] BYREF

  memset(v10, 0, sizeof(v10));
  result = *(_QWORD *)(a1 + 96);
  v3 = *(_QWORD **)(*(_QWORD *)(result + 32) + 104LL);
  v7 = 0;
  v8 = 0;
  v9 = 16;
  if ( v3 )
  {
    do
    {
      MiAddPageToHeatList((__int64)&v7);
      result = MiGetLeafPfnBuddy(v3);
      v3 = (_QWORD *)result;
    }
    while ( result );
    if ( v8 )
      return MiNotifyPageHeat(&v7, v4, v5, v6);
  }
  return result;
}
