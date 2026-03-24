/*
 * XREFs of ?CopyRangeToArray@VIDMM_CPU_HOST_APERTURE@@AEBAXPEAI_KPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1C00290E8
 * Callers:
 *     ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0029244 (-MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_CPU_HOST_APERTURE::CopyRangeToArray(
        unsigned __int64 this,
        unsigned int *a2,
        __int64 a3,
        const struct VIDMM_CPU_HOST_APERTURE_RANGE *a4)
{
  unsigned int v4; // edi
  unsigned int *v5; // rbp
  int v6; // r15d
  unsigned int *v8; // rbx
  VIDMM_CPU_HOST_APERTURE *i; // rsi
  _QWORD *v10; // rax

  v4 = *(_DWORD *)a4;
  v5 = &a2[a3];
  v6 = *((_DWORD *)a4 + 1);
  v8 = a2;
  for ( i = (VIDMM_CPU_HOST_APERTURE *)this; ; v4 = *(_DWORD *)(*((_QWORD *)i + 5) + 4LL * v4) )
  {
    if ( v8 == v5 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
      v10[7] = 0LL;
      v10[3] = 270LL;
      v10[4] = 47LL;
      v10[5] = i;
      v10[6] = a4;
      WdLogEvent5_WdCriticalError(v10);
    }
    *v8 = v4;
    if ( v4 == v6 )
      break;
    ++v8;
    this = v4;
  }
}
