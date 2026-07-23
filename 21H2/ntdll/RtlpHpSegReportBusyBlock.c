/*
 * XREFs of RtlpHpSegReportBusyBlock @ 0x180002ACC
 * Callers:
 *     RtlpHpSegWalk @ 0x1800026A8 (RtlpHpSegWalk.c)
 *     RtlpHpSegReportPageRange @ 0x18010F664 (RtlpHpSegReportPageRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegReportBusyBlock(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r10
  char v8; // cl
  __int64 v9; // rax
  __int64 v10; // r10
  unsigned __int64 v11; // r11
  __int64 result; // rax
  __int64 v13; // rdx
  bool v14; // zf
  __int64 v15; // rdx
  unsigned __int16 *v16; // rdx
  __int64 v17; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v5 = *a1;
  v8 = *((_BYTE *)a1 + 8);
  v9 = *a2;
  v10 = *a2 & v5;
  a2[1] = a3;
  v11 = v10 + 32 * ((unsigned __int64)(unsigned int)(v9 - v10) >> v8);
  *((_WORD *)a2 + 9) = 1;
  result = (unsigned int)v11 & *(_DWORD *)a1;
  *((_BYTE *)a2 + 16) = a4;
  *(__int64 *)((char *)a2 + 36) = a4;
  *((_BYTE *)a2 + 17) = (__int64)(v11 - result) >> 5;
  if ( a5 )
  {
    v13 = a1[7];
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    v14 = (*(_DWORD *)(v13 + 20) & 0x10000000) == 0;
    v15 = a2[1] + *a2 + 16;
    if ( v14 )
      v15 = a2[1] + *a2;
    v16 = (unsigned __int16 *)((v15 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    v17 = *((_QWORD *)v16 + 1);
    *((_WORD *)a2 + 9) |= 0x10u;
    a2[3] = v17;
    *((_WORD *)a2 + 9) |= *((_BYTE *)v16 + 2) >> 4 << 8;
    result = *v16;
    *((_WORD *)a2 + 16) = result;
  }
  return result;
}
