/*
 * XREFs of EtwpCoverageFlushPending @ 0x1406E1FC0
 * Callers:
 *     EtwpCoverageRecord @ 0x1406D72E4 (EtwpCoverageRecord.c)
 *     EtwpCoverageFlushWorkItemCallback @ 0x1406E1EF0 (EtwpCoverageFlushWorkItemCallback.c)
 *     EtwpFlushCoverage @ 0x140770200 (EtwpFlushCoverage.c)
 *     EtwpCoverageReset @ 0x140937AA4 (EtwpCoverageReset.c)
 *     EtwpCoverageResetCP @ 0x140937C84 (EtwpCoverageResetCP.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140244AF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140244C78 (_tlgKeywordOn.c)
 *     KeCancelTimer2 @ 0x14033C240 (KeCancelTimer2.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

int *__fastcall EtwpCoverageFlushPending(int **a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int *result; // rax
  int *v6; // rsi
  unsigned __int64 v7; // rdi
  int *v8; // rcx
  int *v9; // rcx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  unsigned __int16 v15; // dx
  __int16 v16; // [rsp+38h] [rbp-59h] BYREF
  int v17; // [rsp+3Ch] [rbp-55h] BYREF
  int v18; // [rsp+40h] [rbp-51h] BYREF
  int v19; // [rsp+44h] [rbp-4Dh] BYREF
  int v20; // [rsp+48h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+58h] [rbp-39h] BYREF
  int *v22; // [rsp+78h] [rbp-19h]
  int v23; // [rsp+80h] [rbp-11h]
  int v24; // [rsp+84h] [rbp-Dh]
  int *v25; // [rsp+88h] [rbp-9h]
  int v26; // [rsp+90h] [rbp-1h]
  int v27; // [rsp+94h] [rbp+3h]
  int *v28; // [rsp+98h] [rbp+7h]
  int v29; // [rsp+A0h] [rbp+Fh]
  int v30; // [rsp+A4h] [rbp+13h]
  int *v31; // [rsp+A8h] [rbp+17h]
  int v32; // [rsp+B0h] [rbp+1Fh]
  int v33; // [rsp+B4h] [rbp+23h]
  __int16 *v34; // [rsp+B8h] [rbp+27h]
  int v35; // [rsp+C0h] [rbp+2Fh]
  int v36; // [rsp+C4h] [rbp+33h]
  __int64 v37; // [rsp+C8h] [rbp+37h]
  int v38; // [rsp+D0h] [rbp+3Fh]
  int v39; // [rsp+D4h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+5Fh] BYREF

  result = (int *)&retaddr;
  if ( *((_DWORD *)a1 + 16) )
  {
    v6 = a1[5];
    v7 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v16 = *((_WORD *)a1 + 32);
    if ( (unsigned int)dword_140C02BE8 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140C02BE8, 0x400000000000LL) )
      {
        v9 = *a1;
        v10 = **a1;
        v24 = 0;
        v17 = v10;
        v22 = &v17;
        v23 = 4;
        v11 = v9[1];
        v27 = 0;
        v18 = v11;
        v25 = &v18;
        v26 = 4;
        v12 = v7 - v9[4];
        v30 = 0;
        v19 = v12;
        v28 = &v19;
        v29 = 4;
        v13 = v7 - v9[5];
        v33 = 0;
        v36 = 0;
        v39 = 0;
        v20 = v13;
        v31 = &v20;
        v34 = &v16;
        v14 = *((_QWORD *)v6 + 4);
        v32 = 4;
        v15 = *((_WORD *)v6 + 12) - v14;
        v37 = v14;
        v38 = v15;
        v35 = 2;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C02BE8,
          (unsigned __int8 *)word_14002B7D2,
          0LL,
          0LL,
          8u,
          &v21);
      }
    }
    *((_QWORD *)v6 + 4) = *((_QWORD *)v6 + 3);
    v8 = *a1;
    *((_DWORD *)a1 + 16) = 0;
    KeCancelTimer2((__int64)(v8 + 60), 0LL, a3, a4);
    result = *a1;
    (*a1)[4] = v7;
  }
  return result;
}
