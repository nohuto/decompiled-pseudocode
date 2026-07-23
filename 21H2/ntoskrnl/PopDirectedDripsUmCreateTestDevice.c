/*
 * XREFs of PopDirectedDripsUmCreateTestDevice @ 0x1408F8640
 * Callers:
 *     PopDirectedDripsUmDirectedFxAddTestDevice @ 0x1408F8714 (PopDirectedDripsUmDirectedFxAddTestDevice.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopDirectedDripsUmCreateTestDevice(int a1, _WORD *a2, _QWORD *a3, unsigned int *a4)
{
  unsigned int v4; // r13d
  unsigned int v6; // edi
  int v8; // esi
  unsigned int v9; // ebx
  __int64 v10; // rcx
  _DWORD *PoolWithTag; // rax
  _DWORD *v12; // r14

  v4 = 2 * a1;
  v6 = 2 * a1 + 8;
  v8 = a1;
  if ( (unsigned int)(2 * a1) >= 0xFFFFFFF8 )
    return (unsigned int)-1073741675;
  v9 = 0;
  if ( a1 )
  {
    v10 = (unsigned int)(a1 - 1);
    if ( !a2[v10] )
    {
      v8 = v10;
      goto LABEL_7;
    }
  }
  if ( v6 + 2 < v6 )
    return (unsigned int)-1073741675;
  v6 += 2;
LABEL_7:
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x4D554444u);
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v6);
    memmove(v12 + 2, a2, v4);
    *v12 = 0;
    v12[1] = v8;
    *a3 = v12;
    if ( a4 )
      *a4 = v6;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v9;
}
