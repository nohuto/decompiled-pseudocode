/*
 * XREFs of MiSetImageHotPatchAllowed @ 0x1408D0D44
 * Callers:
 *     NtSetInformationVirtualMemory @ 0x14062AB80 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     MiUnlockAndDereferenceVadShared @ 0x14022C070 (MiUnlockAndDereferenceVadShared.c)
 *     MiVadDeleted @ 0x14022C150 (MiVadDeleted.c)
 *     MiLockVadShared @ 0x14022C164 (MiLockVadShared.c)
 *     MiSetVadFlags @ 0x14022D480 (MiSetVadFlags.c)
 *     MiUnlockVad @ 0x1402306B0 (MiUnlockVad.c)
 *     MiUnlockAndDereferenceVad @ 0x14027C760 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x14027CA80 (MiObtainReferencedVadEx.c)
 *     MiImageVadHotPatchEligible @ 0x140681898 (MiImageVadHotPatchEligible.c)
 *     MiHotPatchImage @ 0x1408CCB74 (MiHotPatchImage.c)
 */

__int64 __fastcall MiSetImageHotPatchAllowed(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // r15
  volatile signed __int32 *v3; // rax
  __int64 v4; // r14
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // ebp
  int v11; // esi
  signed __int64 v12; // rax
  char v13; // bl
  __int64 v14; // rdi
  __int64 v15; // rcx
  unsigned int v17; // [rsp+68h] [rbp+10h] BYREF

  v17 = 0;
  CurrentThread = KeGetCurrentThread();
  v3 = MiObtainReferencedVadEx(a1, 0, (int *)&v17);
  v4 = (__int64)v3;
  if ( !v3 )
    return v17;
  if ( (v3[12] & 0x70) != 0x20 || (unsigned int)MiVadDeleted((__int64)v3) )
    goto LABEL_12;
  if ( !MiImageVadHotPatchEligible(v5) )
  {
    v6 = -1073741637;
LABEL_13:
    MiUnlockAndDereferenceVad((PVOID)v4);
    return v6;
  }
  if ( a1 != (*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32)) << 12 )
  {
LABEL_12:
    v6 = -1073741800;
    goto LABEL_13;
  }
  v7 = *(_DWORD *)(v4 + 48);
  if ( (v7 & 0x100000) == 0 && (v7 & 0x70) == 0x20 && (v7 & 0x400000) != 0 )
  {
    v6 = 255;
    goto LABEL_13;
  }
  MiSetVadFlags(v4, 4, 1);
  v8 = ***(_QWORD ***)(v4 + 72);
  v9 = *(_QWORD *)(v8 + 56);
  v10 = *(_DWORD *)(v9 + 60);
  v11 = *(_DWORD *)(v9 + 72);
  v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 24), -1LL, -1LL);
  v13 = *(_BYTE *)(v8 + 15) >> 4;
  v14 = v12;
  MiUnlockVad((__int64)CurrentThread, v4);
  v6 = MiHotPatchImage(v15, v14, (_RTL_BALANCED_NODE *)v4, v10, v11, v13, 1);
  MiLockVadShared((__int64)CurrentThread, v4);
  MiUnlockAndDereferenceVadShared((char *)v4);
  return v6;
}
