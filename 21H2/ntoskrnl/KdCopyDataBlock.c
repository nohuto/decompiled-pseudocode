/*
 * XREFs of KdCopyDataBlock @ 0x140510748
 * Callers:
 *     IoFillTriageDumpBuffer @ 0x140501DC0 (IoFillTriageDumpBuffer.c)
 *     IopInitializeInMemoryDumpData @ 0x1405042D0 (IopInitializeInMemoryDumpData.c)
 *     KeCapturePersistentThreadState @ 0x140505040 (KeCapturePersistentThreadState.c)
 *     KdDecodeDataBlock @ 0x140510804 (KdDecodeDataBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KdCopyDataBlock(_OWORD *a1)
{
  _OWORD *v1; // r8
  _OWORD *v2; // r9
  int v3; // r10d
  __int64 result; // rax
  __int128 v5; // xmm1

  v1 = &KdDebuggerDataBlock;
  v2 = a1;
  if ( KdpDataBlockEncoded )
  {
    v3 = 112;
    do
    {
      result = (__int64)&KdpDataBlockEncoded;
      *(_QWORD *)((char *)v1 + (char *)a1 - (char *)&KdDebuggerDataBlock) = KiWaitAlways ^ _byteswap_uint64((unsigned __int64)&KdpDataBlockEncoded ^ __ROL8__(KiWaitNever ^ *(_QWORD *)v1, KiWaitNever));
      v1 = (_OWORD *)((char *)v1 + 8);
      --v3;
    }
    while ( v3 );
  }
  else
  {
    result = 7LL;
    do
    {
      *v2 = *v1;
      v2[1] = v1[1];
      v2[2] = v1[2];
      v2[3] = v1[3];
      v2[4] = v1[4];
      v2[5] = v1[5];
      v2[6] = v1[6];
      v2 += 8;
      v5 = v1[7];
      v1 += 8;
      *(v2 - 1) = v5;
      --result;
    }
    while ( result );
  }
  return result;
}
