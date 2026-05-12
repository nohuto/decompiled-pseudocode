/*
 * XREFs of RaidBuildScsiIrp @ 0x1C00156A4
 * Callers:
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C0015280 (RaidBusEnumeratorIssueSynchronousRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidBuildScsiIrp(__int64 a1, struct _MDL *a2, __int64 a3)
{
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // rax

  if ( *(_BYTE *)(a3 + 2) == 40 )
  {
    v6 = *(_QWORD *)(a3 + 64);
    v7 = *(unsigned int *)(a3 + 60);
  }
  else
  {
    v6 = *(_QWORD *)(a3 + 24);
    v7 = *(unsigned int *)(a3 + 16);
  }
  a2->ByteCount = v7;
  a2->Next = 0LL;
  a2->MdlFlags = 0;
  a2->StartVa = (void *)(v6 & 0xFFFFFFFFFFFFF000uLL);
  a2->ByteOffset = v6 & 0xFFF;
  a2->Size = 8 * (((v7 + (unsigned __int64)(v6 & 0xFFF) + 4095) >> 12) + 6);
  MmBuildMdlForNonPagedPool(a2);
  v8 = *(_QWORD *)(a1 + 184);
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(v8 - 64) = a3;
  *(_WORD *)(v8 - 72) = -4081;
  return 0LL;
}
