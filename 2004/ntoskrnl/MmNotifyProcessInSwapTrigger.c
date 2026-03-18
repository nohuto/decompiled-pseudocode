/*
 * XREFs of MmNotifyProcessInSwapTrigger @ 0x140328784
 * Callers:
 *     KiRequestProcessInSwap @ 0x140328610 (KiRequestProcessInSwap.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14026C5B4 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x140276C08 (_tlgCreate1Sz_char.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14036005C (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

char __fastcall MmNotifyProcessInSwapTrigger(__int64 a1)
{
  char result; // al
  __int64 v2; // r9
  __int64 v3; // r9
  int v4; // ecx
  int v5; // r8d
  int v6; // r10d
  int v7; // [rsp+20h] [rbp-98h]
  int v8; // [rsp+28h] [rbp-90h]
  int v9; // [rsp+40h] [rbp-78h] BYREF
  __int64 v10; // [rsp+48h] [rbp-70h] BYREF
  __int64 v11[4]; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v12[16]; // [rsp+70h] [rbp-48h] BYREF
  int *v13; // [rsp+80h] [rbp-38h]
  int v14; // [rsp+88h] [rbp-30h]
  int v15; // [rsp+8Ch] [rbp-2Ch]
  __int64 *v16; // [rsp+90h] [rbp-28h]
  int v17; // [rsp+98h] [rbp-20h]
  int v18; // [rsp+9Ch] [rbp-1Ch]

  result = *(_BYTE *)(a1 + 1851) & 0x60;
  if ( result == 64 && *(_QWORD *)&qword_140C4ECE0 && **(_DWORD **)&qword_140C4ECE0 > 5u )
  {
    result = tlgKeywordOn(*(__int64 *)&qword_140C4ECE0, 0x400000000008LL);
    if ( result )
    {
      tlgCreate1Sz_char((__int64)v12, (const CHAR *)(v2 + 1448));
      v4 = *(_DWORD *)(v3 + 1088);
      v15 = 0;
      v18 = 0;
      v13 = &v9;
      v16 = &v10;
      v9 = v4;
      v14 = 4;
      v10 = 0x1000000LL;
      v17 = 8;
      return tlgWriteEx_EtwWriteEx(v6, (int)&byte_1400248BF, v5, 1, v7, v8, 5u, (__int64)v11);
    }
  }
  return result;
}
