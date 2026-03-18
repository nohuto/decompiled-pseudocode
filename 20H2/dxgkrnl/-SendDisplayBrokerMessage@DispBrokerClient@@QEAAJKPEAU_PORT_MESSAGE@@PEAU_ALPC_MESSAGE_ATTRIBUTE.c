/*
 * XREFs of ?SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C0160598
 * Callers:
 *     ?SendCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAJXZ @ 0x1C0160070 (-SendCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C0168540 (-DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_.c)
 * Callees:
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0019498 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     DXGKCALLONEXIT__lambda_d7c4861ef0734605370a98f05df27570___ @ 0x1C0019588 (DXGKCALLONEXIT__lambda_d7c4861ef0734605370a98f05df27570___.c)
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x1C001A41C (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 *     ?ReferencePort@DispBrokerClient@@AEAA?AVDispBrokerClientReference@@XZ @ 0x1C016075C (-ReferencePort@DispBrokerClient@@AEAA-AVDispBrokerClientReference@@XZ.c)
 */

__int64 __fastcall DispBrokerClient::SendDisplayBrokerMessage(
        DispBrokerClient *this,
        unsigned int a2,
        struct _PORT_MESSAGE *a3,
        struct _ALPC_MESSAGE_ATTRIBUTES *a4,
        struct _PORT_MESSAGE *a5,
        unsigned __int64 *a6,
        struct _ALPC_MESSAGE_ATTRIBUTES *a7,
        union _LARGE_INTEGER *a8)
{
  __int64 v11; // rdx
  char v12; // r8
  __int64 v13; // rcx
  struct _PORT_MESSAGE *v14; // r14
  struct _ALPC_MESSAGE_ATTRIBUTES *v15; // r12
  unsigned __int64 *v16; // rdi
  union _LARGE_INTEGER *v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // edi
  unsigned int *v25; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rcx
  unsigned int *v31; // rbx
  unsigned int **v32; // r14
  unsigned int **v33; // rcx
  unsigned int v34; // r8d
  __int64 v35; // rax
  unsigned int v36; // r8d
  int v37; // r9d
  HANDLE *v38; // [rsp+40h] [rbp-61h] BYREF
  HANDLE *v39; // [rsp+48h] [rbp-59h] BYREF
  __int128 v40; // [rsp+50h] [rbp-51h] BYREF
  DispBrokerClient *v41; // [rsp+60h] [rbp-41h]
  struct _PORT_MESSAGE **v42; // [rsp+68h] [rbp-39h]
  unsigned int *v43; // [rsp+70h] [rbp-31h] BYREF
  unsigned int *v44; // [rsp+78h] [rbp-29h]
  unsigned int **v45; // [rsp+80h] [rbp-21h]
  __int64 v46; // [rsp+88h] [rbp-19h]
  char v47; // [rsp+90h] [rbp-11h]
  int v48; // [rsp+F0h] [rbp+4Fh] BYREF
  int v49; // [rsp+F8h] [rbp+57h] BYREF
  struct _PORT_MESSAGE *v50; // [rsp+100h] [rbp+5Fh] BYREF
  struct _ALPC_MESSAGE_ATTRIBUTES *v51; // [rsp+108h] [rbp+67h]

  v51 = a4;
  v41 = this;
  *(_QWORD *)&v40 = &v49;
  v49 = -1073741811;
  *((_QWORD *)&v40 + 1) = &v48;
  v48 = 0;
  v42 = &v50;
  v50 = 0LL;
  DXGKCALLONEXIT__lambda_d7c4861ef0734605370a98f05df27570_((__int64)&v43, &v40);
  v13 = a2 & 0x20000;
  if ( !a3 )
  {
    v28 = WdLogNewEntry5_WdError(v13, v11);
    *(_QWORD *)(v28 + 24) = 419LL;
    goto LABEL_26;
  }
  if ( a3->u1.s1.TotalLength < 0x40u )
  {
    v28 = WdLogNewEntry5_WdError(v13, v11);
    *(_QWORD *)(v28 + 24) = a3->u1.s1.TotalLength;
    goto LABEL_26;
  }
  v14 = a5;
  v15 = a7;
  v16 = a6;
  v50 = a3;
  if ( a5 )
  {
    if ( a6 )
      goto LABEL_6;
LABEL_25:
    v28 = WdLogNewEntry5_WdError(v13, v11);
    *(_QWORD *)(v28 + 24) = 438LL;
    goto LABEL_26;
  }
  if ( a6 || a7 )
    goto LABEL_25;
LABEL_6:
  if ( *((_BYTE *)this + 8) == v12 && a3[1].u1.Length != 1 )
  {
    v24 = -1073741637;
    goto LABEL_15;
  }
  v17 = a8;
  if ( !(_DWORD)v13 )
  {
    if ( a5 )
    {
      v28 = WdLogNewEntry5_WdError(v13, v11);
      *(_QWORD *)(v28 + 24) = 460LL;
    }
    else
    {
      if ( !a8 )
        goto LABEL_11;
      v28 = WdLogNewEntry5_WdError(v13, v11);
      *(_QWORD *)(v28 + 24) = 469LL;
    }
LABEL_26:
    WdLogEvent5_WdError(v28);
    v24 = v49;
    goto LABEL_15;
  }
LABEL_11:
  DispBrokerClient::ReferencePort(this, &v38);
  if ( !v38 )
  {
    v49 = -1073741772;
    v27 = WdLogNewEntry5_WdWarning(v19, v18, v20);
    *(_QWORD *)(v27 + 24) = **(unsigned int **)this;
    *(_QWORD *)(v27 + 32) = v49;
    WdLogEvent5_WdWarning(v27);
LABEL_19:
    v24 = v49;
    goto LABEL_14;
  }
  v48 |= 2u;
  v21 = ZwAlpcSendWaitReceivePort(v38[1], a2, a3, v51, v14, v16, v15, v17);
  v49 = v21;
  v24 = v21;
  if ( v21 == 258 )
  {
    v48 |= 4u;
    v49 = -1073741505;
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
    v29[3] = **(unsigned int **)this;
    v30 = v49;
    v29[5] = 0LL;
LABEL_32:
    v29[4] = v30;
    WdLogEvent5_WdError(v29);
    goto LABEL_19;
  }
  if ( v21 < 0 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
    v29[3] = **(unsigned int **)this;
    v30 = v49;
    v29[5] = 1LL;
    goto LABEL_32;
  }
LABEL_14:
  DispBrokerClientReference::Assign(&v38, 0LL);
LABEL_15:
  if ( v47 )
  {
    v25 = v43;
    if ( (int)(*v43 + 0x80000000) >= 0 && *v43 != -1073741772 )
    {
      v31 = v44;
      v32 = v45;
      v33 = v45;
      *v44 |= 1u;
      DispBrokerClient::ReferencePort(v33, &v39);
      v34 = *v31;
      v38 = 0LL;
      v35 = v46;
      v36 = (v39 != 0LL ? 8 : 0) | v34 & 0xFFFFFFF7;
      *v31 = v36;
      if ( *(_QWORD *)v35 )
        v37 = *(_DWORD *)(*(_QWORD *)v35 + 40LL);
      else
        v37 = -1;
      DxgkLogCodePointPacketForSession(0x69u, **v32, *v25, v37, v36, (__int64)v38);
      DispBrokerClientReference::Assign(&v39, 0LL);
    }
  }
  return v24;
}
