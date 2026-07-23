/*
 * XREFs of IopPopulateCopyWriteWorkerData @ 0x1403F1AB4
 * Callers:
 *     NtCopyFileChunk @ 0x1405CDD80 (NtCopyFileChunk.c)
 * Callees:
 *     IopAllocateAndPopulateWriteIrp @ 0x1403F1D8C (IopAllocateAndPopulateWriteIrp.c)
 *     IopValidateAndGetWriteParameters @ 0x1403F2068 (IopValidateAndGetWriteParameters.c)
 */

__int64 __fastcall IopPopulateCopyWriteWorkerData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        __int64 a11)
{
  __int64 result; // rax
  __int64 v12; // [rsp+30h] [rbp-51h] BYREF
  __int16 v13; // [rsp+38h] [rbp-49h]
  char v14; // [rsp+3Ah] [rbp-47h]
  int v15; // [rsp+3Bh] [rbp-46h]
  char v16; // [rsp+3Fh] [rbp-42h]
  __int64 v17; // [rsp+40h] [rbp-41h]
  __int64 v18; // [rsp+48h] [rbp-39h]
  __int64 v19; // [rsp+50h] [rbp-31h]
  __int64 v20; // [rsp+58h] [rbp-29h]
  __int64 v21; // [rsp+60h] [rbp-21h]
  __int64 v22; // [rsp+68h] [rbp-19h]
  __int64 v23; // [rsp+70h] [rbp-11h]
  int v24; // [rsp+78h] [rbp-9h]
  int v25; // [rsp+7Ch] [rbp-5h]
  __int64 v26; // [rsp+80h] [rbp-1h]
  int v27; // [rsp+88h] [rbp+7h]
  int v28; // [rsp+8Ch] [rbp+Bh]
  __int64 v29; // [rsp+90h] [rbp+Fh]

  v17 = a1;
  v12 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v26 = 0LL;
  v27 = 0;
  v15 = 0;
  v16 = 0;
  v25 = 0;
  v13 = 0;
  v29 = a6;
  v22 = a2;
  v23 = a3;
  v24 = a4;
  v14 = 1;
  v28 = -1073741824;
  result = IopValidateAndGetWriteParameters(&v12, a7, a8, a9, a10);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(a11 + 8) = v18;
    return IopAllocateAndPopulateWriteIrp(&v12);
  }
  return result;
}
