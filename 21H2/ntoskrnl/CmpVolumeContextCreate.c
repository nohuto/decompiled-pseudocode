/*
 * XREFs of CmpVolumeContextCreate @ 0x1408575AC
 * Callers:
 *     CmpVolumeManagerGetContextForFile @ 0x14068B750 (CmpVolumeManagerGetContextForFile.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     CmSiAllocateMemory @ 0x14020B698 (CmSiAllocateMemory.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpVolumeContextStart @ 0x140857634 (CmpVolumeContextStart.c)
 *     CmpVolumeContextCleanup @ 0x140863DA8 (CmpVolumeContextCleanup.c)
 */

__int64 __fastcall CmpVolumeContextCreate(__int64 a1, __int64 a2, struct _PRIVILEGE_SET **a3)
{
  struct _PRIVILEGE_SET *Memory; // rax
  unsigned int v6; // edi
  struct _PRIVILEGE_SET *v7; // rbx
  __int64 v8; // rdx
  int v9; // esi

  Memory = (struct _PRIVILEGE_SET *)CmSiAllocateMemory(0x48uLL, 0x39384D43u);
  v6 = 0;
  v7 = Memory;
  if ( Memory )
  {
    memset(Memory, 0, 0x48uLL);
    *(_QWORD *)&v7[1].Control = 1LL;
    v9 = CmpVolumeContextStart(v7, v8, a2);
    if ( v9 < 0 )
    {
      CmpVolumeContextCleanup(v7);
      CmSiFreeMemory(v7);
      return (unsigned int)v9;
    }
    else
    {
      *a3 = v7;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
