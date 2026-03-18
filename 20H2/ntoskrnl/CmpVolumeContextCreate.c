/*
 * XREFs of CmpVolumeContextCreate @ 0x1407CBE40
 * Callers:
 *     CmpVolumeManagerGetContextForFile @ 0x1405DD2FC (CmpVolumeManagerGetContextForFile.c)
 * Callees:
 *     CmSiAllocateMemory @ 0x1402043B0 (CmSiAllocateMemory.c)
 *     CmSiFreeMemory @ 0x140267C30 (CmSiFreeMemory.c)
 *     memset @ 0x140411300 (memset.c)
 *     CmpVolumeContextStart @ 0x1407CBEC4 (CmpVolumeContextStart.c)
 *     CmpVolumeContextCleanup @ 0x14087553C (CmpVolumeContextCleanup.c)
 */

__int64 __fastcall CmpVolumeContextCreate(__int64 a1, __int64 a2, struct _PRIVILEGE_SET **a3)
{
  struct _PRIVILEGE_SET *Memory; // rax
  struct _PRIVILEGE_SET *v6; // rbx
  __int64 v7; // rdx
  int v8; // edi

  Memory = (struct _PRIVILEGE_SET *)CmSiAllocateMemory(0x48uLL, 0x39384D43u);
  v6 = Memory;
  if ( Memory )
  {
    memset(Memory, 0, 0x48uLL);
    *(_QWORD *)&v6[1].Control = 1LL;
    v8 = CmpVolumeContextStart(v6, v7, a2);
    if ( v8 >= 0 )
    {
      *a3 = v6;
      v6 = 0LL;
      v8 = 0;
    }
    if ( v6 )
    {
      CmpVolumeContextCleanup(v6);
      CmSiFreeMemory(v6);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}
