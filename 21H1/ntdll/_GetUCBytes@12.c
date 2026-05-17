/*
 * XREFs of _GetUCBytes@12 @ 0x4B36D406
 * Callers:
 *     _RtlpLogHeapContractEvent@28 @ 0x4B36EEA8 (_RtlpLogHeapContractEvent@28.c)
 *     _RtlpLogHeapExtendEvent@20 @ 0x4B36F013 (_RtlpLogHeapExtendEvent@20.c)
 * Callees:
 *     _RtlpGetLowFragHeapMetadataSize@12 @ 0x4B370F75 (_RtlpGetLowFragHeapMetadataSize@12.c)
 */

int __fastcall GetUCBytes(int a1, int *a2, _DWORD *a3)
{
  int v3; // eax
  int v5; // ebx
  _DWORD *v6; // ecx
  _DWORD *v7; // esi
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v12; // [esp+Ch] [ebp-Ch] BYREF
  int v13; // [esp+10h] [ebp-8h]
  int v14; // [esp+14h] [ebp-4h]

  v3 = a1;
  v5 = 0;
  v14 = a1;
  v6 = (_DWORD *)(a1 + 164);
  *a3 = 0;
  v7 = (_DWORD *)*v6;
  if ( (_DWORD *)*v6 != v6 )
  {
    do
    {
      *a2 += v7[4] << 12;
      *a3 += v7[8];
      v8 = v7[7];
      v7 = (_DWORD *)*v7;
      v5 += v8 << 12;
    }
    while ( v7 != v6 );
    v3 = v14;
  }
  *a2 += *(_DWORD *)(v3 + 512);
  v9 = *a2;
  RtlpGetLowFragHeapMetadataSize(&v12);
  v10 = v13 - v12;
  *a2 = v9 + v13;
  return v5 + v10;
}
