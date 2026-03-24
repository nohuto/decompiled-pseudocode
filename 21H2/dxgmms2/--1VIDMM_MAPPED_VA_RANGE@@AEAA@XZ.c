/*
 * XREFs of ??1VIDMM_MAPPED_VA_RANGE@@AEAA@XZ @ 0x1C000136C
 * Callers:
 *     ??_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z @ 0x1C000149C (--_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0015054 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     Feature_3895685435__private_IsEnabledDeviceUsage @ 0x1C00179EC (Feature_3895685435__private_IsEnabledDeviceUsage.c)
 *     Feature_Servicing_VARangeHoldReference__private_IsEnabledDeviceUsage @ 0x1C0017A40 (Feature_Servicing_VARangeHoldReference__private_IsEnabledDeviceUsage.c)
 */

void __fastcall VIDMM_MAPPED_VA_RANGE::~VIDMM_MAPPED_VA_RANGE(VIDMM_MAPPED_VA_RANGE *this)
{
  _QWORD *v1; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  int v8; // ecx
  _QWORD *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rcx
  _QWORD *v12; // rax

  v1 = (_QWORD *)((char *)this + 24);
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    if ( *(_QWORD **)(v3 + 8) != v1 )
      goto LABEL_17;
    v4 = (_QWORD *)v1[1];
    if ( (_QWORD *)*v4 != v1 )
      goto LABEL_17;
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    *v1 = 0LL;
  }
  v5 = (_QWORD *)((char *)this + 8);
  v6 = *((_QWORD *)this + 1);
  if ( v6 )
  {
    if ( *(_QWORD **)(v6 + 8) != v5 )
      goto LABEL_17;
    v7 = (_QWORD *)*((_QWORD *)this + 2);
    if ( (_QWORD *)*v7 != v5 )
      goto LABEL_17;
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    *v5 = 0LL;
    if ( (unsigned int)Feature_3895685435__private_IsEnabledDeviceUsage()
      && (unsigned int)Feature_Servicing_VARangeHoldReference__private_IsEnabledDeviceUsage() )
    {
      --*(_DWORD *)(*(_QWORD *)this + 76LL);
    }
  }
  v8 = *((_DWORD *)this + 16);
  if ( (v8 & 0x1000) == 0 )
  {
    v9 = (_QWORD *)((char *)this + 40);
    if ( *((_QWORD *)this + 5) )
    {
      v10 = GetVidMmGlobalAllocFromOwner((unsigned int)(v8 << 28 >> 28), *((_QWORD *)this + 7)) + 344;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v10, 0LL);
      *(_QWORD *)(v10 + 8) = KeGetCurrentThread();
      v11 = *v9;
      if ( *(_QWORD **)(*v9 + 8LL) == v9 )
      {
        v12 = (_QWORD *)v9[1];
        if ( (_QWORD *)*v12 == v9 )
        {
          *v12 = v11;
          *(_QWORD *)(v11 + 8) = v12;
          *v9 = 0LL;
          *(_QWORD *)(v10 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v10, 0LL);
          KeLeaveCriticalRegion();
          return;
        }
      }
LABEL_17:
      __fastfail(3u);
    }
  }
}
