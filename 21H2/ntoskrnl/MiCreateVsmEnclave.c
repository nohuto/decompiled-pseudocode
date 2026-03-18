/*
 * XREFs of MiCreateVsmEnclave @ 0x140979D48
 * Callers:
 *     MiCreateEnclave @ 0x140979918 (MiCreateEnclave.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14032A72C (MiGetProcessPartition.c)
 *     PsCreateVsmEnclave @ 0x1409B3D44 (PsCreateVsmEnclave.c)
 */

__int64 __fastcall MiCreateVsmEnclave(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, unsigned int a5)
{
  ULONG_PTR *ProcessPartition; // rax
  int v7; // r8d
  _BYTE *v8; // r9
  int v9; // r10d
  __int64 v10; // r11
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
    v12 = (*v8 & 1) != 0;
  result = PsCreateVsmEnclave(
             v9,
             v11,
             a2[6] << 12,
             ((a2[7] << 12) | 0xFFFu) - (a2[6] << 12) + 1,
             v7 == 17,
             v10,
             a5,
             (__int64)(a2 + 18));
  if ( (int)result >= 0 )
  {
    if ( v12 )
      a2[16] |= 4u;
    return 0LL;
  }
  return result;
}
