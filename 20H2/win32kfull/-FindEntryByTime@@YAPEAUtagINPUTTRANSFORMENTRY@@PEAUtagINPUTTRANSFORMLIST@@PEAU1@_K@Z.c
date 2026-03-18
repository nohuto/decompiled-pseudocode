/*
 * XREFs of ?FindEntryByTime@@YAPEAUtagINPUTTRANSFORMENTRY@@PEAUtagINPUTTRANSFORMLIST@@PEAU1@_K@Z @ 0x1C01F51F0
 * Callers:
 *     ?GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPEAUtagINPUT_TRANSFORM@@D@Z @ 0x1C01F52BC (-GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPEAUtagINPUT_TRANSFORM@@D@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ii @ 0x1C01DC2A4 (WPP_RECORDER_SF_ii.c)
 */

struct tagINPUTTRANSFORMLIST **__fastcall FindEntryByTime(
        struct tagINPUTTRANSFORMLIST *a1,
        struct tagINPUTTRANSFORMLIST **a2,
        __int64 a3)
{
  struct tagINPUTTRANSFORMLIST **v3; // r9
  struct tagINPUTTRANSFORMLIST *v4; // r10
  struct tagINPUTTRANSFORMLIST *v5; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  unsigned __int64 v9; // r8
  __int64 v10; // rbx
  struct tagINPUTTRANSFORMLIST **v12; // r8

  v3 = a2;
  v4 = (struct tagINPUTTRANSFORMLIST *)((char *)a1 + 8);
  v5 = *a2;
  if ( v5 == (struct tagINPUTTRANSFORMLIST *)((char *)a1 + 8) )
    return v3;
  if ( v3[1] != v4 )
  {
LABEL_9:
    v12 = (struct tagINPUTTRANSFORMLIST **)v3[1];
    if ( v5 != v4 )
    {
      do
      {
        if ( a3 - (__int64)v3[2] < (unsigned __int64)(v12[2] - v3[2]) )
          break;
        v12 = v3;
        v3 = (struct tagINPUTTRANSFORMLIST **)*v3;
      }
      while ( *v3 != v4 );
    }
    return v3;
  }
  v7 = (__int64)v3[2];
  v8 = *((_QWORD *)v4 + 1);
  v9 = a3 - v7;
  v10 = *(_QWORD *)(v8 + 16);
  if ( v9 >= v10 - v7 )
  {
    v3 = (struct tagINPUTTRANSFORMLIST **)v5;
    v5 = *(struct tagINPUTTRANSFORMLIST **)v5;
    goto LABEL_9;
  }
  if ( v9 <= v10 - a3 )
    return v3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ii(v7, 4u, 0xAu, 0xAu, (__int64)&WPP_28bedf5f3f5f37f9cc6016b85e7e96ea_Traceguids, v10, a3);
  return (struct tagINPUTTRANSFORMLIST **)v8;
}
