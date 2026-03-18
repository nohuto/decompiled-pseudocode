/*
 * XREFs of OutputDuplPresent @ 0x1C0325430
 * Callers:
 *     DxgkOutputDuplPresent @ 0x1C0333140 (DxgkOutputDuplPresent.c)
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001960 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1C0001DB4 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x1C0008FF0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0009178 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C000969C (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000FB94 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C0322E18 (-OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C0322F58 (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 */

__int64 __fastcall OutputDuplPresent(struct _D3DKMT_OUTPUTDUPLPRESENT *a1, struct DXGPROCESS *a2)
{
  struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS::$A409EE896D278F5C017A650FBAD844EC::$1BE8774737E2D873D5DADE2689676029 Value; // eax
  D3DKMT_HANDLE hIndirectContext; // edx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGCONTEXT *v11; // rbx
  D3DKMT_HANDLE v12; // ebx
  __int64 v13; // rax
  unsigned int v14; // edi
  struct DXGADAPTER **v15; // rax
  int v16; // eax
  DXGCONTEXTBYHANDLE *v17; // rcx
  D3DKMT_HANDLE hContext; // edx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  struct DXGDEVICE **v23; // r14
  D3DKMT_HANDLE v24; // ebx
  __int64 CurrentProcess; // rax
  __int64 v26; // r9
  ULONG BroadcastContextCount; // ebx
  __int64 v28; // rbx
  _QWORD *Pool2; // rax
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // r9
  int v33; // ecx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // r9
  struct DXGADAPTER *v39; // [rsp+50h] [rbp-79h] BYREF
  unsigned __int64 v40; // [rsp+58h] [rbp-71h] BYREF
  _QWORD v41[2]; // [rsp+60h] [rbp-69h] BYREF
  PVOID P; // [rsp+70h] [rbp-59h]
  _BYTE v43[32]; // [rsp+78h] [rbp-51h] BYREF
  unsigned int v44; // [rsp+98h] [rbp-31h]
  _BYTE v45[16]; // [rsp+A0h] [rbp-29h] BYREF
  _BYTE v46[24]; // [rsp+B0h] [rbp-19h] BYREF
  _QWORD v47[6]; // [rsp+C8h] [rbp-1h] BYREF
  char v48; // [rsp+F8h] [rbp+2Fh]
  struct DXGCONTEXT *v49; // [rsp+130h] [rbp+67h] BYREF

  Value = (struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS::$A409EE896D278F5C017A650FBAD844EC::$1BE8774737E2D873D5DADE2689676029)a1->Flags.Value;
  v39 = 0LL;
  if ( (*(_BYTE *)&Value & 8) == 0 )
  {
LABEL_8:
    hContext = a1->hContext;
    v49 = 0LL;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v45, hContext, a2, &v49, 0, 1);
    v23 = (struct DXGDEVICE **)v49;
    if ( !v49 )
    {
      v24 = a1->hContext;
      CurrentProcess = PsGetCurrentProcess(v20, v19, v21, v22);
      v14 = -1073741811;
      WdLogSingleEntry3(3LL, -1073741811LL, CurrentProcess, v24);
LABEL_46:
      v17 = (DXGCONTEXTBYHANDLE *)v45;
      goto LABEL_47;
    }
    if ( !v39 )
      DXGADAPTER_REFERENCE::Assign(&v39, *(struct DXGADAPTER **)(*((_QWORD *)v49 + 2) + 1848LL));
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v41, v23[2]);
    BroadcastContextCount = a1->BroadcastContextCount;
    if ( BroadcastContextCount > 0x40 )
    {
      v14 = -1073741811;
      WdLogSingleEntry2(3LL, v23, -1073741811LL);
LABEL_44:
      if ( v41[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v41);
      goto LABEL_46;
    }
    v28 = BroadcastContextCount + 1;
    P = 0LL;
    v44 = 0;
    if ( (unsigned int)v28 <= 4 )
    {
      Pool2 = v43;
      P = v43;
      if ( (_DWORD)v28 )
      {
        memset(v43, 0, 8LL * (unsigned int)v28);
        Pool2 = P;
      }
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v28 < 8 )
      {
LABEL_20:
        WdLogSingleEntry1(3LL, 2709LL);
        v14 = -1073741801;
LABEL_40:
        if ( P != v43 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v44 = 0;
        goto LABEL_44;
      }
      Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8 * v28, 1265072196LL, v26);
      P = Pool2;
    }
    v44 = v28;
    if ( !Pool2 )
      goto LABEL_20;
    *Pool2 = v23;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v46, a2);
    v30 = 0LL;
    if ( !a1->BroadcastContextCount )
    {
LABEL_32:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v46);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
        (__int64)v47,
        P,
        v44,
        v37,
        1);
      if ( v48 )
      {
        if ( v47[0] )
        {
          WdLogSingleEntry1(3LL, 2763LL);
          v14 = -1073741811;
        }
        else
        {
          WdLogSingleEntry1(3LL, 2758LL);
          v14 = -1073741801;
        }
      }
      else
      {
        v14 = OutputDuplPresentInternal(v39, (struct DXGCONTEXT *)v23, a1, (struct DXGCONTEXT **)P);
      }
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v47);
      goto LABEL_40;
    }
    while ( 1 )
    {
      v31 = (a1->BroadcastContext[v30] >> 6) & 0xFFFFFF;
      if ( (unsigned int)v31 < *((_DWORD *)a2 + 74) )
      {
        v32 = *((_QWORD *)a2 + 35);
        v33 = *(_DWORD *)(v32 + 16 * v31 + 8);
        if ( ((a1->BroadcastContext[v30] >> 25) & 0x60) == (*(_BYTE *)(v32 + 16 * v31 + 8) & 0x60)
          && (v33 & 0x2000) == 0
          && (v33 & 0x1F) != 0 )
        {
          if ( (v33 & 0x1F) == 7 )
          {
            v34 = *(_QWORD *)(v32 + 16LL * (unsigned int)v31);
            goto LABEL_29;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      v34 = 0LL;
LABEL_29:
      v35 = (unsigned int)(v30 + 1);
      *((_QWORD *)P + v35) = v34;
      v36 = *((_QWORD *)P + v35);
      if ( !v36 || *(struct DXGDEVICE **)(v36 + 16) != v23[2] )
      {
        v14 = -1073741811;
        WdLogSingleEntry4(2LL, v23, a1->BroadcastContext[v30], v30, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
          (__int64)v23,
          a1->BroadcastContext[v30],
          v30,
          -1073741811LL,
          0LL);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v46);
        goto LABEL_40;
      }
      v30 = (unsigned int)v35;
      if ( (unsigned int)v35 >= a1->BroadcastContextCount )
        goto LABEL_32;
    }
  }
  hIndirectContext = a1->hIndirectContext;
  v49 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v41, hIndirectContext, a2, &v49, 0, 1);
  v11 = v49;
  if ( v49 )
  {
    v15 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v39);
    v16 = OutputDuplPreIndirectPresent(*((struct DXGDEVICE **)v11 + 2), a1->VidPnSourceId, v15, &v40);
    if ( v16 < 0 )
    {
      v14 = v16;
      goto LABEL_6;
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v41);
    goto LABEL_8;
  }
  v12 = a1->hIndirectContext;
  v13 = PsGetCurrentProcess(v8, v7, v9, v10);
  v14 = -1073741811;
  WdLogSingleEntry3(3LL, -1073741811LL, v13, v12);
LABEL_6:
  v17 = (DXGCONTEXTBYHANDLE *)v41;
LABEL_47:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE(v17);
  DXGADAPTER_REFERENCE::Assign(&v39, 0LL);
  return v14;
}
