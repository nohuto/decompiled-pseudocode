/*
 * XREFs of MiReturnSystemImageCommitment @ 0x140773240
 * Callers:
 *     MiUnloadSystemImage @ 0x1406D11C8 (MiUnloadSystemImage.c)
 * Callees:
 *     MiReturnResident @ 0x140296E9C (MiReturnResident.c)
 *     MiSectionControlArea @ 0x140315260 (MiSectionControlArea.c)
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 */

void __fastcall MiReturnSystemImageCommitment(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rbx

  v2 = a2;
  if ( *a1 )
  {
    v3 = a1[25];
    v4 = a1[26];
  }
  else
  {
    v3 = *(unsigned int *)(*(_QWORD *)MiSectionControlArea(a1[14]) + 8LL);
    v4 = v3;
  }
  _InterlockedExchangeAdd(&dword_140C4EFD0, -(int)v3);
  MiReturnCommit((__int64)&MiSystemPartition, v3 - *(_QWORD *)(v2 + 8));
  if ( v4 )
    MiReturnResident((__int64)&MiSystemPartition, v4);
}
