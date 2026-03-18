/*
 * XREFs of ??1VIDMM_MAPPED_VA_RANGE@@AEAA@XZ @ 0x1C00025D8
 * Callers:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0002588 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ??_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z @ 0x1C0002648 (--_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0002E2C (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 */

void __fastcall VIDMM_MAPPED_VA_RANGE::~VIDMM_MAPPED_VA_RANGE(VIDMM_MAPPED_VA_RANGE *this)
{
  _QWORD *v1; // rax
  __int64 v2; // rdx
  _QWORD *v3; // r8
  _QWORD *v4; // rax
  __int64 v5; // rdx
  int v6; // eax
  _QWORD *v7; // rdi
  _QWORD *v8; // r8
  __int64 VidMmGlobalAllocFromOwner; // rbx
  __int64 v10; // rdx
  _QWORD *v11; // rax

  v1 = (_QWORD *)((char *)this + 24);
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    if ( *(_QWORD **)(v2 + 8) != v1 )
      goto LABEL_3;
    v3 = (_QWORD *)*((_QWORD *)this + 4);
    if ( (_QWORD *)*v3 != v1 )
      goto LABEL_3;
    *v3 = v2;
    *(_QWORD *)(v2 + 8) = v3;
    *v1 = 0LL;
  }
  v4 = (_QWORD *)((char *)this + 8);
  v5 = *((_QWORD *)this + 1);
  if ( v5 )
  {
    if ( *(_QWORD **)(v5 + 8) != v4 )
      goto LABEL_3;
    v8 = (_QWORD *)*((_QWORD *)this + 2);
    if ( (_QWORD *)*v8 != v4 )
      goto LABEL_3;
    *v8 = v5;
    *(_QWORD *)(v5 + 8) = v8;
    *v4 = 0LL;
  }
  v6 = *((_DWORD *)this + 16);
  if ( (v6 & 0x1000) == 0 )
  {
    v7 = (_QWORD *)((char *)this + 40);
    if ( *((_QWORD *)this + 5) )
    {
      VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner((unsigned int)(v6 << 28 >> 28), *((_QWORD *)this + 7));
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 368, 0LL);
      v10 = *v7;
      if ( *(_QWORD **)(*v7 + 8LL) == v7 )
      {
        v11 = (_QWORD *)v7[1];
        if ( (_QWORD *)*v11 == v7 )
        {
          *v11 = v10;
          *(_QWORD *)(v10 + 8) = v11;
          *v7 = 0LL;
          ExReleasePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 368, 0LL);
          KeLeaveCriticalRegion();
          return;
        }
      }
LABEL_3:
      __fastfail(3u);
    }
  }
}
