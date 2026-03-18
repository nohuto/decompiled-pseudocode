/*
 * XREFs of ??_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z @ 0x1C0022B30
 * Callers:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0023648 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0071CF8 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 * Callees:
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0015030 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 */

_QWORD *__fastcall VIDMM_MAPPED_VA_RANGE::`scalar deleting destructor'(_QWORD *P)
{
  _QWORD *v1; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  int v8; // ecx
  char *v9; // rsi
  __int64 VidMmGlobalAllocFromOwner; // rbx
  __int64 v11; // rdx
  char **v12; // rax

  v1 = P + 3;
  v3 = P[3];
  if ( v3 )
  {
    if ( *(_QWORD **)(v3 + 8) != v1 )
      goto LABEL_15;
    v4 = (_QWORD *)v1[1];
    if ( (_QWORD *)*v4 != v1 )
      goto LABEL_15;
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    *v1 = 0LL;
  }
  v5 = P + 1;
  v6 = P[1];
  if ( v6 )
  {
    if ( *(_QWORD **)(v6 + 8) != v5 )
      goto LABEL_15;
    v7 = (_QWORD *)P[2];
    if ( (_QWORD *)*v7 != v5 )
      goto LABEL_15;
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    *v5 = 0LL;
  }
  v8 = *((_DWORD *)P + 16);
  if ( (v8 & 0x1000) == 0 )
  {
    v9 = (char *)(P + 5);
    if ( P[5] )
    {
      VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(v8 << 28 >> 28, P[7]);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 344, 0LL);
      v11 = *(_QWORD *)v9;
      if ( *(char **)(*(_QWORD *)v9 + 8LL) == v9 )
      {
        v12 = (char **)P[6];
        if ( *v12 == v9 )
        {
          *v12 = (char *)v11;
          *(_QWORD *)(v11 + 8) = v12;
          *(_QWORD *)v9 = 0LL;
          ExReleasePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 344, 0LL);
          KeLeaveCriticalRegion();
          goto LABEL_14;
        }
      }
LABEL_15:
      __fastfail(3u);
    }
  }
LABEL_14:
  ExFreePoolWithTag(P, 0);
  return P;
}
