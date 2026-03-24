/*
 * XREFs of ?FindTemporarySegmentLocationForResource@VIDMM_LINEAR_POOL@@QEAAJPEBUVIDMM_FIND_TEMPORARY_LOCATION_ARGS@@_NPEA_K2@Z @ 0x1C00CEA78
 * Callers:
 *     ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1C00C5078 (-MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
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
  VIDMM_LINEAR_POOL *i; // rdi
  char *v13; // r14
  __int64 v14; // rax
  _QWORD v16[5]; // [rsp+20h] [rbp-78h] BYREF
  char *v17; // [rsp+48h] [rbp-50h] BYREF
  char v18; // [rsp+58h] [rbp-40h]
  char *v19; // [rsp+A0h] [rbp+8h]

  v5 = *((_QWORD *)a2 + 3);
  v6 = 0;
  v16[2] = 0LL;
  v7 = v5 - 1;
  v18 = 2;
  v8 = a3;
  v10 = (char *)*((_QWORD *)this + 9);
  v11 = 0LL;
  v19 = (char *)this + 72;
  for ( i = 0LL; v10 != v19; v10 = *(char **)v10 )
  {
    v13 = v10 - 40;
    this = (VIDMM_LINEAR_POOL *)*((_QWORD *)v10 - 5);
    if ( this != i )
    {
      v17 = v10;
      v16[1] = this - i;
      v13 = (char *)v16;
      this = i;
      v16[0] = i;
      v10 = (char *)&v17;
    }
    i = (VIDMM_LINEAR_POOL *)((char *)this + *((_QWORD *)v13 + 1));
    if ( (unsigned __int64)i > *((_QWORD *)a2 + 1) )
      break;
    if ( (unsigned __int64)this < *(_QWORD *)a2
      || (LOBYTE(this) = v13[56], (unsigned __int8)((_BYTE)this - 2) > 1u)
      || v8 && (_BYTE)this != 2
      || (this = (VIDMM_LINEAR_POOL *)*((_QWORD *)v13 + 2)) != 0LL
      && !(*((unsigned __int8 (__fastcall **)(VIDMM_LINEAR_POOL *, const struct VIDMM_FIND_TEMPORARY_LOCATION_ARGS *, __int64))a2
           + 4))(
            this,
            a2,
            a3)
      || *(_QWORD *)v13 < *((_QWORD *)a2 + 6) && (unsigned __int64)i > *((_QWORD *)a2 + 5) )
    {
      v11 = ~v7 & ((unsigned __int64)i + v7);
    }
    else
    {
      this = (VIDMM_LINEAR_POOL *)(v11 + *((_QWORD *)a2 + 2));
      if ( this <= i )
      {
        *a4 = v11;
        *a5 = (unsigned __int64)i;
        return v6;
      }
    }
  }
  if ( !v8 )
  {
    v14 = WdLogNewEntry5_WdWarning(this, a2);
    *(_QWORD *)(v14 + 24) = *((_QWORD *)a2 + 2);
    WdLogEvent5_WdWarning(v14);
  }
  return (unsigned int)-1073741823;
}
