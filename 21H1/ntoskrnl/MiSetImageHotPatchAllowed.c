/*
 * XREFs of MiSetImageHotPatchAllowed @ 0x1408C9BB4
 * Callers:
 *     NtSetInformationVirtualMemory @ 0x14063BA60 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14021A7A0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x140267570 (MiObtainReferencedVadEx.c)
 *     MiSetVadFlags @ 0x1402A1110 (MiSetVadFlags.c)
 *     MiUnlockVad @ 0x1402A3FF0 (MiUnlockVad.c)
 *     MiUnlockAndDereferenceVadShared @ 0x1402A45A0 (MiUnlockAndDereferenceVadShared.c)
 *     MiVadDeleted @ 0x1402A4680 (MiVadDeleted.c)
 *     MiLockVadShared @ 0x1402A4694 (MiLockVadShared.c)
 *     MiImageVadHotPatchEligible @ 0x1406C2E50 (MiImageVadHotPatchEligible.c)
 *     MiHotPatchImage @ 0x1408C59E4 (MiHotPatchImage.c)
 */

__int64 __fastcall MiSetImageHotPatchAllowed(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // r15
  volatile signed __int32 *v3; // rax
  __int64 v4; // r14
  __int64 v5; // rcx
  _DWORD *v6; // r9
  unsigned int v7; // ebx
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // ebp
  int v12; // esi
  signed __int64 v13; // rax
  char v14; // bl
  __int64 v15; // rdi
  __int64 v16; // rcx
  unsigned int v18; // [rsp+68h] [rbp+10h] BYREF

  v18 = 0;
  CurrentThread = KeGetCurrentThread();
  v3 = MiObtainReferencedVadEx(a1, 0, (int *)&v18);
  v4 = (__int64)v3;
  if ( !v3 )
    return v18;
  if ( (v3[12] & 0x70) != 0x20 || (unsigned int)MiVadDeleted((__int64)v3) )
    goto LABEL_12;
  if ( !MiImageVadHotPatchEligible(v5) )
  {
    v7 = -1073741637;
LABEL_13:
    MiUnlockAndDereferenceVad((char *)v4);
    return v7;
  }
  if ( a1 != (*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32)) << 12 )
  {
LABEL_12:
    v7 = -1073741800;
    goto LABEL_13;
  }
  v8 = *(_DWORD *)(v4 + 48);
  if ( (v8 & 0x100000) == 0 && (v8 & 0x70) == 0x20 && (v8 & 0x400000) != 0 )
  {
    v7 = 255;
    goto LABEL_13;
  }
  MiSetVadFlags(v4, 4LL, 1LL, v6);
  v9 = ***(_QWORD ***)(v4 + 72);
  v10 = *(_QWORD *)(v9 + 56);
  v11 = *(_DWORD *)(v10 + 60);
  v12 = *(_DWORD *)(v10 + 72);
  v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 24), -1LL, -1LL);
  v14 = *(_BYTE *)(v9 + 15) >> 4;
  v15 = v13;
  MiUnlockVad((__int64)CurrentThread, v4);
  v7 = MiHotPatchImage(v16, v15, (_RTL_BALANCED_NODE *)v4, v11, v12, v14, 1);
  MiLockVadShared((__int64)CurrentThread, v4);
  MiUnlockAndDereferenceVadShared((char *)v4);
  return v7;
}
