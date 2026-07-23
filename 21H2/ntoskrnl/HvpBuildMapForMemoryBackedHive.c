/*
 * XREFs of HvpBuildMapForMemoryBackedHive @ 0x1407B209C
 * Callers:
 *     HvHiveStartMemoryBacked @ 0x14076FFD4 (HvHiveStartMemoryBacked.c)
 * Callees:
 *     SetFailureLocation @ 0x140242D88 (SetFailureLocation.c)
 *     CmpClaimGlobalQuota @ 0x1406F82B4 (CmpClaimGlobalQuota.c)
 *     HvpPointMapEntriesToBuffer @ 0x1406FB088 (HvpPointMapEntriesToBuffer.c)
 *     HvpInitMap @ 0x1406FBFC8 (HvpInitMap.c)
 *     HvpEnlistFreeCells @ 0x140720EE0 (HvpEnlistFreeCells.c)
 *     HvpValidateLoadedBin @ 0x140720FC4 (HvpValidateLoadedBin.c)
 */

__int64 __fastcall HvpBuildMapForMemoryBackedHive(ULONG_PTR BugCheckParameter2, __int64 a2, int a3)
{
  __int64 v3; // rbx
  char v6; // r12
  unsigned int inited; // esi
  unsigned int v8; // ebp
  unsigned int v9; // r15d
  _DWORD *v10; // rdi
  __int64 v11; // rdx
  int v12; // eax

  v3 = *(_QWORD *)(BugCheckParameter2 + 56);
  v6 = 0;
  inited = HvpInitMap(BugCheckParameter2, a2);
  if ( (inited & 0x80000000) != 0 )
    return inited;
  v8 = 0;
  v9 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL);
  if ( !v9 )
    return 0;
  inited = 1073741833;
  do
  {
    v10 = (_DWORD *)(a2 + v8);
    if ( !HvpValidateLoadedBin(v10, v8, v9) )
    {
      if ( (a3 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
      {
        inited = -1073741492;
        SetFailureLocation(v3, 0, 4, 0xC000014C, 0);
        goto LABEL_20;
      }
      *v10 = 1852400232;
      v10[1] = v8;
      v10[2] = 4096;
      v6 = 1;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
      SetFailureLocation(v3, 1, 4, 0x40000009u, 0);
    }
    if ( !CmpClaimGlobalQuota((unsigned int)v10[2], v11) )
    {
      inited = -1073741670;
      SetFailureLocation(v3, 0, 4, 0xC000009A, 0x10u);
LABEL_20:
      *(_DWORD *)(v3 + 296) = v9;
      *(_DWORD *)(v3 + 300) = v8;
      goto LABEL_22;
    }
    HvpPointMapEntriesToBuffer(BugCheckParameter2, (__int64)v10, v10[2], v8, 0, 0LL);
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 2) != 0 )
      goto LABEL_9;
    v12 = HvpEnlistFreeCells(BugCheckParameter2, (__int64)v10, v8, a3);
    if ( v12 != 1073741833 )
    {
      if ( v12 >= 0 )
        goto LABEL_9;
      inited = -1073741492;
      SetFailureLocation(v3, 0, 4, 0xC000014C, 0x20u);
      *(_DWORD *)(v3 + 296) = v10[2];
      *(_DWORD *)(v3 + 300) = v10[1];
LABEL_22:
      *(_QWORD *)(v3 + 304) = v10;
      return inited;
    }
    v6 = 1;
LABEL_9:
    v8 += v10[2];
  }
  while ( v8 < v9 );
  if ( v6 )
    return inited;
  return 0;
}
