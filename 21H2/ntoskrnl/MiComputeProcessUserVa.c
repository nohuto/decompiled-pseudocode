/*
 * XREFs of MiComputeProcessUserVa @ 0x1406C0310
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1406BFB24 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiCreateSystemWsles @ 0x14023F040 (MiCreateSystemWsles.c)
 *     MiSectionControlArea @ 0x14031FFB0 (MiSectionControlArea.c)
 *     MiUpdateChargedWsles @ 0x14055C69C (MiUpdateChargedWsles.c)
 *     MiChargeFullProcessCommitment @ 0x1406E8830 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiComputeProcessUserVa(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rax
  _QWORD *v7; // rax
  unsigned __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 result; // rax
  __int16 v14; // cx

  v4 = *(_QWORD *)(a1 + 1680);
  *a4 = 0LL;
  v7 = (_QWORD *)(v4 + 320);
  v10 = 0x7FFFFFFF0000LL;
  v11 = 2LL;
  do
  {
    v7[1] = v7;
    *v7 = v7;
    v7 += 2;
    --v11;
  }
  while ( v11 );
  if ( !(unsigned int)MiCreateSystemWsles() && (*(_DWORD *)(a1 + 2172) & 1) == 0 )
  {
    result = MiChargeFullProcessCommitment(a1, 4LL);
    if ( (int)result < 0 )
      return result;
    MiUpdateChargedWsles(a1 + 1664);
  }
  if ( !a2 && a3 && (*(_DWORD *)(a3 + 56) & 0x20) != 0 && (*(_DWORD *)(a1 + 1124) & 0x20000) == 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)MiSectionControlArea(a3) + 56LL) + 44LL) & 0x20) != 0 )
    {
      v12 = *(_QWORD *)(a1 + 1408);
      if ( v12 )
      {
        v14 = *(_WORD *)(v12 + 8);
        if ( v14 == 332 || v14 == 452 )
        {
          v10 = 4294901760LL;
          *a4 = 0x100000000LL;
          _InterlockedOr((volatile signed __int32 *)(a1 + 1124), 0x200u);
        }
      }
    }
    else
    {
      v10 = 2147418112LL;
      *a4 = 0x100000000LL;
    }
  }
  if ( dword_140CFB190 )
  {
    if ( v10 > 0x80000000 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1124), 0x200000u);
  }
  *(_QWORD *)(a1 + 1496) = v10;
  return 0LL;
}
