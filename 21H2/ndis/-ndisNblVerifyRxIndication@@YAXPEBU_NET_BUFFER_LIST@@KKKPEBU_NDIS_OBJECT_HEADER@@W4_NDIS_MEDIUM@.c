/*
 * XREFs of ?ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@@@Z @ 0x1C0074AA4
 * Callers:
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0004A80 (NdisMIndicateReceiveNetBufferLists.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x1C00080D0 (NdisFIndicateReceiveNetBufferLists.c)
 * Callees:
 *     ?ndisParseReceivedNBL@@YAEW4_NDIS_MEDIUM@@PEBU_NET_BUFFER_LIST@@PEAGPEAE@Z @ 0x1C0013E9C (-ndisParseReceivedNBL@@YAEW4_NDIS_MEDIUM@@PEBU_NET_BUFFER_LIST@@PEAGPEAE@Z.c)
 *     datapathVerifierReportProblem @ 0x1C0074900 (datapathVerifierReportProblem.c)
 *     verifySingleRxNbl @ 0x1C0075098 (verifySingleRxNbl.c)
 */

void __fastcall ndisNblVerifyRxIndication(
        ULONG_PTR BugCheckParameter4,
        unsigned int a2,
        int a3,
        unsigned int a4,
        const struct _NDIS_OBJECT_HEADER *BugCheckParameter3,
        enum _NDIS_MEDIUM a6)
{
  const struct _NDIS_OBJECT_HEADER *v6; // rbx
  ULONG_PTR v7; // rsi
  ULONG_PTR v8; // rdi
  ULONG_PTR v9; // r12
  int v10; // eax
  __int16 v11; // r13
  __int16 v12; // r14
  __int16 v13; // r15
  __int16 v14; // bp
  __int16 v15; // si
  __int16 v16; // ax
  __int16 v17; // ax
  char v18; // [rsp+20h] [rbp-58h]
  __int16 v19; // [rsp+22h] [rbp-56h]
  unsigned __int16 v20[42]; // [rsp+24h] [rbp-54h] BYREF
  __int16 v22; // [rsp+88h] [rbp+10h] BYREF
  int v23; // [rsp+90h] [rbp+18h]
  unsigned int v24; // [rsp+98h] [rbp+20h]

  v24 = a4;
  v23 = a3;
  v6 = BugCheckParameter3;
  v7 = BugCheckParameter4;
  v8 = a4;
  if ( a2 > 0x1000000 )
    datapathVerifierReportProblem(0x10uLL, (ULONG_PTR)BugCheckParameter3, a2);
  if ( (v8 & 1) != 0 && KeGetCurrentIrql() != 2 )
    datapathVerifierReportProblem(0x20uLL, (ULONG_PTR)v6, KeGetCurrentIrql());
  if ( (v8 & 0xFFFF00FC) != 0 )
    datapathVerifierReportProblem(1uLL, (ULONG_PTR)v6, v8);
  v9 = v7;
  *(_DWORD *)v20 = 0;
  v10 = 0;
  v18 = 0;
  v11 = 0;
  v19 = 0;
  v12 = 0;
  v22 = 0;
  v13 = 0;
  v14 = 0;
  if ( v7 )
  {
    LODWORD(v8) = 0;
    v15 = 0;
    do
    {
      LODWORD(v8) = v8 + 1;
      verifySingleRxNbl(v9, (ULONG_PTR)v6);
      v20[0] = 0;
      LOBYTE(v22) = 0;
      if ( ndisParseReceivedNBL(a6, (const struct _NET_BUFFER_LIST *)v9, v20, (unsigned __int8 *)&v22) && (_BYTE)v22 )
      {
        v11 |= v20[0];
        v12 |= ~v20[0];
      }
      else
      {
        v18 = 1;
      }
      v16 = (*(_DWORD *)(v9 + 176) >> 4) & 0xFFF;
      v19 |= v16;
      v13 |= ~v16;
      v17 = *(_WORD *)(v9 + 258);
      v9 = *(_QWORD *)v9;
      v15 |= v17;
      v14 |= ~v17;
    }
    while ( v9 );
    *(_DWORD *)v20 = v8;
    LOWORD(v8) = v24;
    v10 = *(_DWORD *)v20;
    v22 = v15;
    v7 = BugCheckParameter4;
  }
  if ( v10 != v23 )
    datapathVerifierReportProblem(4uLL, (ULONG_PTR)v6, v7);
  if ( (v8 & 0x100) != 0 && (v11 != ~v12 || v18) )
    datapathVerifierReportProblem(0x21uLL, (ULONG_PTR)v6, v7);
  if ( (v8 & 0x200) != 0 && v19 != ~v13 )
    datapathVerifierReportProblem(0x22uLL, (ULONG_PTR)v6, v7);
  if ( (v8 & 0x800) != 0 && v22 != ~v14 )
    datapathVerifierReportProblem(0x23uLL, (ULONG_PTR)v6, v7);
}
