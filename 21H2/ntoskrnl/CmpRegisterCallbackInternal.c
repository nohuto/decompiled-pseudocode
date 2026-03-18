/*
 * XREFs of CmpRegisterCallbackInternal @ 0x140690198
 * Callers:
 *     CmRegisterInternalCallback @ 0x140690150 (CmRegisterInternalCallback.c)
 *     CmRegisterCallback @ 0x1408651C0 (CmRegisterCallback.c)
 *     CmRegisterCallbackEx @ 0x14090FD10 (CmRegisterCallbackEx.c)
 * Callees:
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpInsertCallbackInListByAltitude @ 0x1406902B4 (CmpInsertCallbackInListByAltitude.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpRegisterCallbackInternal(
        __int64 a1,
        __int64 a2,
        const void **a3,
        char a4,
        unsigned __int8 a5,
        _QWORD *a6)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rbx
  int v12; // eax
  PVOID v13; // rax
  __int64 v14; // rdx
  int inserted; // edi
  void *v17; // rcx
  __int128 v18; // [rsp+20h] [rbp-18h] BYREF

  v18 = 0LL;
  CmpInitializeThreadInfo((__int64)&v18);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x62634D43u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    inserted = -1073741670;
    goto LABEL_4;
  }
  memset(PoolWithTag, 0, 0x50uLL);
  v11[1] = v11;
  v11[9] = v11 + 8;
  v11[8] = v11 + 8;
  v12 = *((_DWORD *)v11 + 5) ^ a5;
  *v11 = v11;
  *((_DWORD *)v11 + 5) ^= v12 & 1;
  *((_DWORD *)v11 + 4) = 0;
  v11[4] = a2;
  v11[5] = a1;
  LOWORD(v12) = *(_WORD *)a3;
  *((_WORD *)v11 + 25) = *(_WORD *)a3;
  *((_WORD *)v11 + 24) = v12;
  v13 = ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)a3, 0x61634D43u);
  v11[7] = v13;
  if ( v13 )
  {
    memmove(v13, a3[1], *(unsigned __int16 *)a3);
    LOBYTE(v14) = a4;
    inserted = CmpInsertCallbackInListByAltitude(v11, v14);
    *a6 = v11[3];
    if ( inserted >= 0 )
      goto LABEL_4;
  }
  else
  {
    inserted = -1073741670;
  }
  v17 = (void *)v11[7];
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  ExFreePoolWithTag(v11, 0);
LABEL_4:
  CmCleanupThreadInfo((__int64 *)&v18);
  return (unsigned int)inserted;
}
