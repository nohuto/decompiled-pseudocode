/*
 * XREFs of MmNotifyProcessInSwapTrigger @ 0x1402136B4
 * Callers:
 *     KiRequestProcessInSwap @ 0x140213540 (KiRequestProcessInSwap.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1402514DC (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgCreate1Sz_char @ 0x140270A0C (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

char __fastcall MmNotifyProcessInSwapTrigger(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al
  __int64 v4; // r9
  __int64 v5; // r9
  int v6; // ecx
  int v7; // r8d
  int v8; // r10d
  int v9; // [rsp+20h] [rbp-98h]
  int v10; // [rsp+28h] [rbp-90h]
  int v11; // [rsp+40h] [rbp-78h] BYREF
  __int64 v12; // [rsp+48h] [rbp-70h] BYREF
  __int64 v13[4]; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v14[16]; // [rsp+70h] [rbp-48h] BYREF
  int *v15; // [rsp+80h] [rbp-38h]
  int v16; // [rsp+88h] [rbp-30h]
  int v17; // [rsp+8Ch] [rbp-2Ch]
  __int64 *v18; // [rsp+90h] [rbp-28h]
  int v19; // [rsp+98h] [rbp-20h]
  int v20; // [rsp+9Ch] [rbp-1Ch]

  result = *(_BYTE *)(a1 + 1851) & 0x60;
  if ( result == 64 && *(_QWORD *)&qword_140C4EF20 && **(_DWORD **)&qword_140C4EF20 > 5u )
  {
    result = tlgKeywordOn(*(_QWORD *)&qword_140C4EF20, 0x400000000008LL, a3, a1);
    if ( result )
    {
      tlgCreate1Sz_char(v14, v4 + 1448);
      v6 = *(_DWORD *)(v5 + 1088);
      v17 = 0;
      v20 = 0;
      v15 = &v11;
      v18 = &v12;
      v11 = v6;
      v16 = 4;
      v12 = 0x1000000LL;
      v19 = 8;
      return tlgWriteEx_EtwWriteEx(v8, (int)&byte_140025A33, v7, 1, v9, v10, 5u, (__int64)v13);
    }
  }
  return result;
}
