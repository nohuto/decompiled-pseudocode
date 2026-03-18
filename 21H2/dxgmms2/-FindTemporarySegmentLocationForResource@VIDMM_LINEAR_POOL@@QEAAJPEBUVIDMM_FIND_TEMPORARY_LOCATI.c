/*
 * XREFs of ?FindTemporarySegmentLocationForResource@VIDMM_LINEAR_POOL@@QEAAJPEBUVIDMM_FIND_TEMPORARY_LOCATION_ARGS@@_NPEA_K2@Z @ 0x1C00EF3D8
 * Callers:
 *     ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1C00E8E3C (-MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::FindTemporarySegmentLocationForResource(
        VIDMM_LINEAR_POOL *this,
        const struct VIDMM_FIND_TEMPORARY_LOCATION_ARGS *a2,
        __int64 a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5)
{
  __int64 v5; // rbp
  unsigned int v6; // ebx
  __int64 v7; // rbp
  char v8; // r13
  char *v10; // r15
  unsigned __int64 v11; // r12
  unsigned __int64 i; // rdi
  char *v13; // r14
  unsigned __int64 v14; // rcx
  char v15; // cl
  __int64 v16; // rcx
  _QWORD v18[5]; // [rsp+20h] [rbp-78h] BYREF
  char *v19; // [rsp+48h] [rbp-50h] BYREF
  char v20; // [rsp+58h] [rbp-40h]
  char *v21; // [rsp+A0h] [rbp+8h]

  v5 = *((_QWORD *)a2 + 3);
  v6 = 0;
  v18[2] = 0LL;
  v7 = v5 - 1;
  v20 = 2;
  v8 = a3;
  v10 = (char *)*((_QWORD *)this + 9);
  v11 = 0LL;
  v21 = (char *)this + 72;
  for ( i = 0LL; v10 != v21; v10 = *(char **)v10 )
  {
    v13 = v10 - 40;
    v14 = *((_QWORD *)v10 - 5);
    if ( v14 != i )
    {
      v19 = v10;
      v18[1] = v14 - i;
      v13 = (char *)v18;
      v14 = i;
      v18[0] = i;
      v10 = (char *)&v19;
    }
    i = v14 + *((_QWORD *)v13 + 1);
    if ( i > *((_QWORD *)a2 + 1) )
      break;
    if ( v14 < *(_QWORD *)a2
      || (v15 = v13[56], (unsigned __int8)(v15 - 2) > 1u)
      || v8 && v15 != 2
      || (v16 = *((_QWORD *)v13 + 2)) != 0
      && !(*((unsigned __int8 (__fastcall **)(__int64, const struct VIDMM_FIND_TEMPORARY_LOCATION_ARGS *, __int64))a2 + 4))(
            v16,
            a2,
            a3)
      || *(_QWORD *)v13 < *((_QWORD *)a2 + 6) && i > *((_QWORD *)a2 + 5) )
    {
      v11 = ~v7 & (i + v7);
    }
    else if ( v11 + *((_QWORD *)a2 + 2) <= i )
    {
      *a4 = v11;
      *a5 = i;
      return v6;
    }
  }
  if ( !v8 )
    WdLogSingleEntry1(3LL, *((_QWORD *)a2 + 2));
  return (unsigned int)-1073741823;
}
