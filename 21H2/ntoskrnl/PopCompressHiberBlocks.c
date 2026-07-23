/*
 * XREFs of PopCompressHiberBlocks @ 0x14099532C
 * Callers:
 *     PopSaveHiberContext @ 0x1409947A0 (PopSaveHiberContext.c)
 * Callees:
 *     PopGetNextTable @ 0x140383810 (PopGetNextTable.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopAddPagesToCompressedPageSet @ 0x1409953F4 (PopAddPagesToCompressedPageSet.c)
 *     PopCountDataAsProduced @ 0x14099551C (PopCountDataAsProduced.c)
 */

__int64 __fastcall PopCompressHiberBlocks(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  int v7; // edi
  __int64 v8; // r9
  __int64 v9; // rax
  int v10; // [rsp+20h] [rbp-188h]
  _DWORD v11[4]; // [rsp+40h] [rbp-168h] BYREF
  _QWORD v12[22]; // [rsp+50h] [rbp-158h] BYREF
  _BYTE v13[128]; // [rsp+100h] [rbp-A8h] BYREF

  memset(v12, 0, sizeof(v12));
  v11[0] = 0;
  while ( 1 )
  {
    result = PopGetNextTable(a1, (unsigned __int64)v11, (__int64)v13, (__int64)v12, a3, *(_QWORD *)(a2 + 8));
    v7 = result;
    if ( !result )
      break;
    v8 = v12[3];
    *(_QWORD *)(a2 + 56) += result;
    LOBYTE(v10) = a3;
    v9 = PopAddPagesToCompressedPageSet(a1, a2, v11, v8, v10, result, 0LL);
    PopCountDataAsProduced(a2, v9, v11, v13, v7, 0);
  }
  return result;
}
