/*
 * XREFs of ?MapPagesIntoAperture@VIDMM_APERTURE_SEGMENT@@UEAAJKPEAU_MDL@@HPEAPEAXPEA_K@Z @ 0x1C00C4950
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C0062560 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::MapPagesIntoAperture(
        VIDMM_LINEAR_POOL **this,
        unsigned int a2,
        struct _MDL *a3,
        __int64 a4,
        void **a5,
        union _LARGE_INTEGER *a6)
{
  unsigned __int64 v7; // rax
  int v9; // ebx
  union _LARGE_INTEGER v11[2]; // [rsp+60h] [rbp-18h] BYREF

  v11[0].QuadPart = 0LL;
  v7 = (unsigned __int64)a2 << 12;
  if ( v7 > 0xFFFFFFFF )
    return 3221225621LL;
  LOBYTE(a4) = 1;
  v9 = VIDMM_LINEAR_POOL::Allocate(this[19], (unsigned int)v7, 0LL, a4, 0LL, 0LL, 0, 0, 0LL, v11, a5);
  if ( v9 >= 0 )
  {
    *a6 = v11[0];
    (*((void (__fastcall **)(VIDMM_LINEAR_POOL **, _QWORD, _QWORD))*this + 28))(this, 0LL, a2);
  }
  return (unsigned int)v9;
}
