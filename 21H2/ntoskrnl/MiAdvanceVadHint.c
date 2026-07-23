/*
 * XREFs of MiAdvanceVadHint @ 0x140704340
 * Callers:
 *     MiAllocateNewSubAllocatedRegion @ 0x1405FE4DC (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapViewOfImageSection @ 0x140686B20 (MiMapViewOfImageSection.c)
 *     MiReserveUserMemory @ 0x1407018B0 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1407034E0 (MiMapViewOfDataSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x14076B860 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407C3128 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x1408D1FB8 (MiAllocateEnclaveVad.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiAdvanceVadHint(unsigned __int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r10
  int v9; // r11d
  int v10; // ebx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rdx

  result = 0xFFFFFFFFFFFFLL;
  v5 = (a1 >> 4) & 0xFFFFFFFFFFFFLL;
  v6 = 8 * (a3[1] - qword_140C4E3A0);
  v7 = (a2 >> 4) & 0xFFFFFFFFFFFFLL;
  if ( v7 < v6 )
    return result;
  v8 = v6 + *a3;
  if ( v5 >= v8 )
    return result;
  v9 = 0;
  v10 = 0;
  if ( v5 < v6 )
  {
    v5 = v6;
    v10 = 1;
  }
  if ( v7 >= v8 )
  {
    v7 = v8 - 1;
    v10 = 1;
  }
  v11 = v7 - v6;
  v12 = v5 - v6;
  v13 = v11 - v12 + 1;
  if ( v11 == v12 && !v10 || v12 == a3[2] )
  {
    v14 = v11 + 1;
    a3[2] = v11 + 1;
  }
  else
  {
    v14 = v11 + 1;
  }
  v15 = a3[4];
  if ( v15 >= v14 || a3[3] + v15 <= v12 )
  {
    if ( v13 <= 1 )
      return result;
    if ( v10 )
      goto LABEL_14;
  }
  else
  {
    v9 = 1;
  }
  a3[4] = v14;
LABEL_14:
  if ( v13 > 1 && !v10 )
  {
    if ( v9 )
    {
      result = a3[3];
      if ( v13 >= result )
        v13 = a3[3];
    }
    a3[3] = v13;
  }
  return result;
}
