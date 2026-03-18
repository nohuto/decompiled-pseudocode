/*
 * XREFs of ?VidSchiCancelQueuedFlips@@YAJPEAU_VIDSCH_GLOBAL@@II_KPEA_K@Z @ 0x1C0045808
 * Callers:
 *     ?VidSchiCancelHwQueuedFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_DEVICE@@IPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C00455AC (-VidSchiCancelHwQueuedFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_DEVICE@@IPEAUVIDSCH_FLIP_QUE.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 */

__int64 __fastcall VidSchiCancelQueuedFlips(
        struct _VIDSCH_GLOBAL *a1,
        int a2,
        int a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 result; // rax
  _BYTE v8[8]; // [rsp+30h] [rbp-11h] BYREF
  __int64 *v9; // [rsp+38h] [rbp-9h] BYREF
  struct _VIDSCH_GLOBAL *v10; // [rsp+40h] [rbp-1h] BYREF
  int v11; // [rsp+48h] [rbp+7h]
  int v12; // [rsp+4Ch] [rbp+Bh]
  __int64 **v13; // [rsp+50h] [rbp+Fh]
  __int64 v14; // [rsp+58h] [rbp+17h]
  __int64 v15; // [rsp+60h] [rbp+1Fh] BYREF
  unsigned __int64 v16; // [rsp+68h] [rbp+27h]
  int v17; // [rsp+70h] [rbp+2Fh]
  int v18; // [rsp+74h] [rbp+33h]

  v16 = 0LL;
  v18 = 0;
  v14 = 0LL;
  v9 = &v15;
  v13 = &v9;
  v15 = a4;
  v5 = *((unsigned int *)a1 + 8);
  v17 = a3;
  v10 = a1;
  v6 = *((_QWORD *)a1 + 3);
  v11 = a2;
  v12 = 1;
  v8[0] = 0;
  DpSynchronizeExecution(v6, VidSchiCancelQueuedFlipsAtISR, &v10, v5, v8);
  result = (unsigned int)v14;
  if ( (int)v14 >= 0 )
    *a5 = v16;
  return result;
}
