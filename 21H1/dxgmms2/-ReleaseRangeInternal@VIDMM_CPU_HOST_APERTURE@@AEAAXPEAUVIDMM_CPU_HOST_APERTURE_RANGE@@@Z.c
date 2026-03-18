/*
 * XREFs of ?ReleaseRangeInternal@VIDMM_CPU_HOST_APERTURE@@AEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1C002963C
 * Callers:
 *     ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0028CE4 (-AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0029620 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnblockRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1C00296A8 (-UnblockRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_CPU_HOST_APERTURE::ReleaseRangeInternal(
        VIDMM_CPU_HOST_APERTURE *this,
        struct VIDMM_CPU_HOST_APERTURE_RANGE *a2,
        __int64 a3)
{
  int v3; // r10d
  __int64 v4; // rax
  __int64 v6; // r8
  int v7; // ecx
  __int64 v8; // rax

  v3 = *(_DWORD *)a2;
  v4 = *((unsigned int *)a2 + 1);
  if ( *(_DWORD *)a2 == -1 || (_DWORD)v4 == -1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, a3);
    *(_QWORD *)(v8 + 24) = this;
    WdLogEvent5_WdAssertion(v8);
  }
  else
  {
    v6 = *((_QWORD *)this + 5);
    v7 = *(_DWORD *)(v6 + 4 * v4);
    *(_DWORD *)(v6 + 4LL * (unsigned int)v4) = *((_DWORD *)this + 16);
    *((_DWORD *)this + 15) += v7;
    *((_DWORD *)this + 16) = v3;
    *(_DWORD *)a2 = -1;
    *((_DWORD *)a2 + 1) = -1;
  }
}
