/*
 * XREFs of OutputDuplPresent @ 0x1C029CB18
 * Callers:
 *     DxgkOutputDuplPresent @ 0x1C0281A20 (DxgkOutputDuplPresent.c)
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0001E14 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004050 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00041C0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000713C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00071B4 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C0009C94 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0018834 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0019BA0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0019EC4 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C029A700 (-OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C029A800 (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 */

__int64 __fastcall OutputDuplPresent(struct _D3DKMT_OUTPUTDUPLPRESENT *a1, struct DXGPROCESS *a2)
{
  struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS::$A409EE896D278F5C017A650FBAD844EC::$1BE8774737E2D873D5DADE2689676029 Value; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // edi
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DXGDEVICE *v12; // rbx
  struct DXGADAPTER **v13; // rax
  int v14; // eax
  DXGCONTEXTBYHANDLE *v15; // rcx
  D3DKMT_HANDLE hContext; // edx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct DXGDEVICE **v20; // rbx
  _QWORD *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  ULONG BroadcastContextCount; // r14d
  __int64 v28; // rax
  unsigned int v29; // r14d
  _BYTE *PoolWithTag; // rax
  __int64 v31; // rcx
  unsigned int v32; // edi
  __int64 v33; // rax
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  struct DXGADAPTER *v48; // [rsp+30h] [rbp-79h] BYREF
  unsigned __int64 v49; // [rsp+38h] [rbp-71h] BYREF
  _QWORD v50[2]; // [rsp+40h] [rbp-69h] BYREF
  PVOID P; // [rsp+50h] [rbp-59h]
  _BYTE v52[32]; // [rsp+58h] [rbp-51h] BYREF
  unsigned int v53; // [rsp+78h] [rbp-31h]
  _BYTE v54[16]; // [rsp+80h] [rbp-29h] BYREF
  _BYTE v55[24]; // [rsp+90h] [rbp-19h] BYREF
  _QWORD v56[6]; // [rsp+A8h] [rbp-1h] BYREF
  char v57; // [rsp+D8h] [rbp+2Fh]
  struct DXGCONTEXT *v58; // [rsp+110h] [rbp+67h] BYREF

  Value = (struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS::$A409EE896D278F5C017A650FBAD844EC::$1BE8774737E2D873D5DADE2689676029)a1->Flags.Value;
  v48 = 0LL;
  if ( (*(_BYTE *)&Value & 8) == 0 )
    goto LABEL_8;
  v58 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v50, a1->hIndirectContext, a2, &v58, 0);
  if ( v58 )
  {
    v12 = (struct DXGDEVICE *)*((_QWORD *)v58 + 2);
    v13 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v48, v5);
    v14 = OutputDuplPreIndirectPresent(v12, a1->VidPnSourceId, v13, &v49);
    if ( v14 < 0 )
    {
      v8 = v14;
      goto LABEL_6;
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v50);
LABEL_8:
    hContext = a1->hContext;
    v58 = 0LL;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v54, hContext, a2, &v58, 0);
    v20 = (struct DXGDEVICE **)v58;
    if ( !v58 )
    {
      v8 = -1073741811;
      v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
      v21[3] = -1073741811LL;
      v21[4] = PsGetCurrentProcess(v23, v22);
      v21[5] = a1->hContext;
      WdLogEvent5_WdWarning(v21);
LABEL_46:
      v15 = (DXGCONTEXTBYHANDLE *)v54;
      goto LABEL_47;
    }
    if ( !v48 )
      DXGADAPTER_REFERENCE::Assign(&v48, *(struct DXGADAPTER **)(*((_QWORD *)v58 + 2) + 1848LL));
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v50, v20[2]);
    BroadcastContextCount = a1->BroadcastContextCount;
    if ( BroadcastContextCount > 0x40 )
    {
      v28 = WdLogNewEntry5_WdWarning(v25, v24, v26);
      v8 = -1073741811;
      *(_QWORD *)(v28 + 24) = v20;
      *(_QWORD *)(v28 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v28);
LABEL_44:
      if ( v50[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v50);
      goto LABEL_46;
    }
    v29 = BroadcastContextCount + 1;
    P = 0LL;
    v53 = 0;
    if ( v29 <= 4 )
    {
      PoolWithTag = v52;
    }
    else
    {
      v24 = 0xFFFFFFFFFFFFFFFFuLL % v29;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v29 < 8 )
        goto LABEL_39;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v29, 0x4B677844u);
    }
    P = PoolWithTag;
    v53 = v29;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * v29);
      if ( P )
      {
        *(_QWORD *)P = v20;
        DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v55, (struct _KTHREAD **)a2);
        v32 = 0;
        if ( !a1->BroadcastContextCount )
        {
LABEL_31:
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v55);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
            (__int64)v56,
            P,
            v53);
          if ( v57 )
          {
            if ( v56[0] )
            {
              v45 = WdLogNewEntry5_WdWarning(v40, v39, v41);
              *(_QWORD *)(v45 + 24) = 2797LL;
              WdLogEvent5_WdWarning(v45);
              v8 = -1073741811;
            }
            else
            {
              v42 = WdLogNewEntry5_WdWarning(v40, v39, v41);
              *(_QWORD *)(v42 + 24) = 2792LL;
              WdLogEvent5_WdWarning(v42);
              v8 = -1073741801;
            }
          }
          else
          {
            v8 = OutputDuplPresentInternal(v48, (struct DXGCONTEXT *)v20, a1, (struct DXGCONTEXT **)P);
          }
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v56);
LABEL_40:
          if ( P != v52 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v53 = 0;
          goto LABEL_44;
        }
        while ( 1 )
        {
          v33 = (a1->BroadcastContext[v32] >> 6) & 0xFFFFFF;
          if ( (unsigned int)v33 < *((_DWORD *)a2 + 64) )
          {
            v34 = *((_QWORD *)a2 + 30);
            v31 = *(unsigned int *)(v34 + 16 * v33 + 8);
            if ( ((a1->BroadcastContext[v32] >> 25) & 0x60) == (*(_BYTE *)(v34 + 16 * v33 + 8) & 0x60)
              && (v31 & 0x2000) == 0
              && (v31 & 0x1F) != 0 )
            {
              v31 &= 0x1Fu;
              if ( (_BYTE)v31 == 7 )
              {
                v36 = *(_QWORD *)(v34 + 16LL * (unsigned int)v33);
                goto LABEL_28;
              }
              v35 = WdLogNewEntry5_WdError(v31, (a1->BroadcastContext[v32] >> 25) & 0x60);
              *(_QWORD *)(v35 + 24) = 267LL;
              WdLogEvent5_WdError(v35);
            }
          }
          v36 = 0LL;
LABEL_28:
          v37 = v32 + 1;
          *((_QWORD *)P + v37) = v36;
          v38 = *((_QWORD *)P + v37);
          if ( !v38 || *(struct DXGDEVICE **)(v38 + 16) != v20[2] )
          {
            v43 = (_QWORD *)WdLogNewEntry5_WdError(v31, v38);
            v43[3] = v20;
            v43[4] = a1->BroadcastContext[v32];
            v44 = v32;
            v8 = -1073741811;
            v43[5] = v44;
            v43[6] = -1073741811LL;
            WdLogEvent5_WdError(v43);
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v55);
            goto LABEL_40;
          }
          ++v32;
          if ( (unsigned int)v37 >= a1->BroadcastContextCount )
            goto LABEL_31;
        }
      }
    }
LABEL_39:
    v46 = WdLogNewEntry5_WdWarning(v25, v24, v26);
    *(_QWORD *)(v46 + 24) = 2743LL;
    WdLogEvent5_WdWarning(v46);
    v8 = -1073741801;
    goto LABEL_40;
  }
  v8 = -1073741811;
  v9 = (_QWORD *)WdLogNewEntry5_WdWarning(v6, v5, v7);
  v9[3] = -1073741811LL;
  v9[4] = PsGetCurrentProcess(v11, v10);
  v9[5] = a1->hIndirectContext;
  WdLogEvent5_WdWarning(v9);
LABEL_6:
  v15 = (DXGCONTEXTBYHANDLE *)v50;
LABEL_47:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE(v15);
  DXGADAPTER_REFERENCE::Assign(&v48, 0LL);
  return v8;
}
