/*
 * XREFs of ?VidMmiQuerySegmentInfo4@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_QUERYSEGMENTOUT4@@@Z @ 0x1C00957E4
 * Callers:
 *     ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z @ 0x1C0093BD4 (-VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00103F4 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0011A64 (--3@YAXPEAX@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00175DC (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     memset @ 0x1C00185C0 (memset.c)
 */

__int64 __fastcall VidMmiQuerySegmentInfo4(struct DXGADAPTER *this, int a2, struct _DXGK_QUERYSEGMENTOUT4 *a3)
{
  __int64 v4; // rcx
  char v6; // r13
  unsigned int v7; // r12d
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  unsigned int v13; // r14d
  SIZE_T v14; // rax
  _DWORD *v15; // rax
  __int64 v16; // rcx
  _DWORD *v17; // rsi
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // edi
  _DWORD *v23; // rax
  __int64 v24; // rcx
  __int128 v25; // xmm1
  SIZE_T v26; // xmm0_8
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int128 v33; // [rsp+20h] [rbp-60h] BYREF
  __int128 v34; // [rsp+30h] [rbp-50h]
  __int64 v35; // [rsp+40h] [rbp-40h]
  _DXGKARG_QUERYADAPTERINFO v36; // [rsp+48h] [rbp-38h] BYREF
  unsigned int DriverVersion; // [rsp+C0h] [rbp+40h]
  int v38; // [rsp+C8h] [rbp+48h] BYREF

  v38 = a2;
  *((_DWORD *)&v36.Type + 1) = 0;
  v4 = *((_QWORD *)this + 27);
  *(&v36.InputDataSize + 1) = 0;
  *(_QWORD *)&v36.Flags.0 = 0LL;
  HIDWORD(v36.hKmdProcessHandle) = 0;
  v34 = 0LL;
  v35 = 0LL;
  v36.InputDataSize = 4;
  DriverVersion = DpiGetDriverVersion(v4);
  v33 = 0uLL;
  v36.pInputData = &v38;
  v6 = 0;
  v36.pOutputData = &v33;
  v7 = 0;
  v36.Type = DXGKQAITYPE_QUERYSEGMENT4;
  v36.OutputDataSize = 40;
  v8 = DXGADAPTER::DdiQueryAdapterInfo(this, &v36);
  v12 = v8;
  if ( v8 < 0 )
  {
    v28 = WdLogNewEntry5_WdWarning(v10, v9);
    *(_QWORD *)(v28 + 24) = v12;
    WdLogEvent5_WdWarning(v28);
    return (unsigned int)v12;
  }
  v13 = v33;
  if ( (unsigned int)v33 > 0x20 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v10, v9, v11);
    *(_QWORD *)(v29 + 24) = 76LL;
    WdLogEvent5_WdAssertion(v29);
    LODWORD(v12) = -1073741823;
    return (unsigned int)v12;
  }
  v14 = 104LL * (unsigned int)v33;
  if ( !is_mul_ok((unsigned int)v33, 0x68uLL) )
    v14 = -1LL;
  v15 = operator new[](v14, 0x31326956u, PagedPool);
  v17 = v15;
  if ( !v15 )
  {
    _InterlockedIncrement(&dword_1C0051698);
    v30 = WdLogNewEntry5_WdLowResource(v16);
    *(_QWORD *)(v30 + 24) = v13;
    WdLogEvent5_WdLowResource(v30);
    return 3221225495LL;
  }
  memset(v15, 0, 104LL * v13);
  *((_QWORD *)&v33 + 1) = v17;
  v35 = 104LL;
  v18 = DXGADAPTER::DdiQueryAdapterInfo(this, &v36);
  v12 = v18;
  if ( v18 < 0 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v20, v19, v21);
    *(_QWORD *)(v31 + 24) = v12;
    WdLogEvent5_WdAssertion(v31);
    goto LABEL_25;
  }
  v22 = 0;
  if ( !v13 )
  {
LABEL_13:
    v25 = v34;
    *(_OWORD *)&a3->NbSegment = v33;
    v26 = v35;
    *(_OWORD *)&a3->PagingBufferSegmentId = v25;
    a3->SegmentDescriptorStride = v26;
    return (unsigned int)v12;
  }
  v23 = v17 + 23;
  while ( 1 )
  {
    if ( DriverVersion < 0x7005 )
    {
      *v23 = 0;
      goto LABEL_12;
    }
    v24 = (unsigned int)*v23;
    if ( (unsigned int)v24 > 1 )
      break;
    if ( (_DWORD)v24 )
    {
      if ( v6 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v24, DriverVersion, v21);
        *(_QWORD *)(v32 + 24) = v7;
        *(_QWORD *)(v32 + 32) = v22;
        goto LABEL_24;
      }
      v6 = 1;
      v7 = v22;
    }
LABEL_12:
    ++v22;
    v23 += 26;
    if ( v22 >= v13 )
      goto LABEL_13;
  }
  v32 = WdLogNewEntry5_WdAssertion(v24, DriverVersion, v21);
  *(_QWORD *)(v32 + 24) = (unsigned int)v17[26 * v22 + 23];
LABEL_24:
  WdLogEvent5_WdAssertion(v32);
  LODWORD(v12) = -1073741823;
LABEL_25:
  operator delete(v17);
  return (unsigned int)v12;
}
