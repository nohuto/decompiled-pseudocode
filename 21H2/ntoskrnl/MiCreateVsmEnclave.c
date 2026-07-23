/*
 * XREFs of MiCreateVsmEnclave @ 0x1408D2D0C
 * Callers:
 *     MiCreateEnclave @ 0x1408D293C (MiCreateEnclave.c)
 * Callees:
 *     MiGetProcessPartition @ 0x1402BF640 (MiGetProcessPartition.c)
 *     PsCreateVsmEnclave @ 0x14090DA48 (PsCreateVsmEnclave.c)
 */

__int64 __fastcall MiCreateVsmEnclave(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, unsigned int a5)
{
  ULONG_PTR *ProcessPartition; // rax
  int v8; // r8d
  _BYTE *v9; // r9
  __int64 v10; // r10
  ULONG_PTR v11; // rdx
  BOOL v12; // ebx
  __int64 result; // rax

  ProcessPartition = (ULONG_PTR *)MiGetProcessPartition(a1);
  if ( ProcessPartition == &MiSystemPartition )
    LODWORD(v11) = 0;
  else
    v11 = ProcessPartition[22];
  v12 = 0;
  if ( a5 >= 4 )
    v12 = (*v9 & 1) != 0;
  result = PsCreateVsmEnclave(
             a1,
             v11,
             a2[6] << 12,
             ((a2[7] << 12) | 0xFFFu) - (a2[6] << 12) + 1,
             v8 == 17,
             v10,
             a5,
             (__int64)(a2 + 18));
  if ( (int)result >= 0 )
  {
    if ( v12 )
    {
      a2[16] |= 4u;
      _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(a1 + 1680) + 296LL), 1u);
    }
    return 0LL;
  }
  return result;
}
