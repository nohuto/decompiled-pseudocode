/*
 * XREFs of ?SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C01C8394
 * Callers:
 *     ?SendCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAJXZ @ 0x1C01C8920 (-SendCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C01E9130 (-DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0014340 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     DXGKCALLONEXIT__lambda_da24f1cfb4b7f8e158997fb0a51b3ded___ @ 0x1C00146E8 (DXGKCALLONEXIT__lambda_da24f1cfb4b7f8e158997fb0a51b3ded___.c)
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x1C001EE84 (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 *     ?ReferencePort@DispBrokerClient@@AEAA?AVDispBrokerClientReference@@XZ @ 0x1C01C855C (-ReferencePort@DispBrokerClient@@AEAA-AVDispBrokerClientReference@@XZ.c)
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
  int v10; // r8d
  int v11; // esi
  unsigned __int64 TotalLength; // rdx
  struct _PORT_MESSAGE *v13; // r15
  struct _ALPC_MESSAGE_ATTRIBUTES *v14; // r13
  unsigned __int64 *v15; // rdi
  union _LARGE_INTEGER *v16; // r12
  int v17; // eax
  unsigned int v18; // edi
  unsigned int *v19; // r14
  __int64 v21; // rbx
  const wchar_t *v22; // r9
  unsigned int *v23; // rbx
  unsigned int **v24; // r15
  unsigned int **v25; // rcx
  unsigned int v26; // r8d
  __int64 v27; // rax
  unsigned int v28; // r8d
  struct _PORT_MESSAGE *v29; // [rsp+50h] [rbp-71h] BYREF
  DispBrokerClientHandle *v30; // [rsp+58h] [rbp-69h] BYREF
  DispBrokerClientHandle *v31[2]; // [rsp+60h] [rbp-61h] BYREF
  __int128 v32; // [rsp+70h] [rbp-51h] BYREF
  DispBrokerClient *v33; // [rsp+80h] [rbp-41h]
  struct _PORT_MESSAGE **v34; // [rsp+88h] [rbp-39h]
  unsigned int *v35; // [rsp+90h] [rbp-31h] BYREF
  unsigned int *v36; // [rsp+98h] [rbp-29h]
  unsigned int **v37; // [rsp+A0h] [rbp-21h]
  __int64 v38; // [rsp+A8h] [rbp-19h]
  char v39; // [rsp+B0h] [rbp-11h]
  int v40; // [rsp+110h] [rbp+4Fh] BYREF
  unsigned int v41; // [rsp+118h] [rbp+57h]
  int v42; // [rsp+120h] [rbp+5Fh] BYREF
  struct _ALPC_MESSAGE_ATTRIBUTES *v43; // [rsp+128h] [rbp+67h]

  v43 = a4;
  v41 = a2;
  v33 = this;
  *(_QWORD *)&v32 = &v40;
  v40 = -1073741811;
  *((_QWORD *)&v32 + 1) = &v42;
  v42 = 0;
  v34 = &v29;
  v29 = 0LL;
  DXGKCALLONEXIT__lambda_da24f1cfb4b7f8e158997fb0a51b3ded_((__int64)&v35, &v32);
  v11 = -1;
  if ( !a3 )
  {
    v21 = 425LL;
    WdLogSingleEntry1(2LL, 425LL);
    v22 = L"Caller did not specified the message to be sent to display broker.";
    goto LABEL_26;
  }
  TotalLength = a3->u1.s1.TotalLength;
  if ( TotalLength < 0x40 )
  {
    WdLogSingleEntry1(2LL, TotalLength);
    v21 = a3->u1.s1.TotalLength;
    v22 = L"The message is smaller than AlpcMessage (size = 0x%I64x).";
    goto LABEL_26;
  }
  v13 = a5;
  v14 = a7;
  v15 = a6;
  v29 = a3;
  if ( a5 )
  {
    if ( a6 )
      goto LABEL_6;
LABEL_25:
    v21 = 444LL;
    WdLogSingleEntry1(2LL, 444LL);
    v22 = L"The parameters of the receiving message are not consistent.";
    goto LABEL_26;
  }
  if ( a6 || a7 )
    goto LABEL_25;
LABEL_6:
  if ( !*((_BYTE *)this + 8) && a3[1].u1.Length != 1 )
  {
    v18 = -1073741637;
    goto LABEL_15;
  }
  v16 = a8;
  if ( (v10 & 0x20000) == 0 )
  {
    if ( a5 )
    {
      v21 = 466LL;
      WdLogSingleEntry1(2LL, 466LL);
      v22 = L"Receiving message does not mean anything when senting async message.";
    }
    else
    {
      if ( !a8 )
        goto LABEL_11;
      v21 = 475LL;
      WdLogSingleEntry1(2LL, 475LL);
      v22 = L"Timeout does not mean anything when senting async message.";
    }
    v11 = -1;
LABEL_26:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v22, v21, 0LL, 0LL, 0LL, 0LL);
    v18 = v40;
    goto LABEL_15;
  }
LABEL_11:
  DispBrokerClient::ReferencePort(this, &v30);
  v11 = -1;
  if ( !v30 )
  {
    v40 = -1073741772;
    WdLogSingleEntry2(3LL, **(unsigned int **)this, -1073741772LL);
LABEL_19:
    v18 = v40;
    goto LABEL_14;
  }
  v42 |= 2u;
  v17 = ZwAlpcSendWaitReceivePort(*((_QWORD *)v30 + 1), v41, a3, v43, v13, v15, v14, v16);
  v18 = v17;
  v40 = v17;
  if ( v17 == 258 )
  {
    v42 |= 4u;
    v40 = -1073741505;
    WdLogSingleEntry3(2LL, **(unsigned int **)this, -1073741505LL, 0LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Timeout to send ALPC message to display broker in session 0x%I64x, returning 0x%I64x.",
      **(unsigned int **)this,
      v40,
      0LL,
      0LL,
      0LL);
    goto LABEL_19;
  }
  if ( v17 < 0 )
  {
    WdLogSingleEntry3(2LL, **(unsigned int **)this, v17, 1LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to send ALPC message to display broker in session 0x%I64x (Status = 0x%I64x).",
      **(unsigned int **)this,
      v40,
      1LL,
      0LL,
      0LL);
    goto LABEL_19;
  }
LABEL_14:
  DispBrokerClientReference::Assign(&v30, 0LL);
LABEL_15:
  if ( v39 )
  {
    v19 = v35;
    if ( (int)(*v35 + 0x80000000) >= 0 && *v35 != -1073741772 )
    {
      v23 = v36;
      v24 = v37;
      v25 = v37;
      *v36 |= 1u;
      DispBrokerClient::ReferencePort(v25, v31);
      v26 = *v23;
      v27 = v38;
      v30 = 0LL;
      v28 = (v31[0] != 0LL ? 8 : 0) | v26 & 0xFFFFFFF7;
      *v23 = v28;
      if ( *(_QWORD *)v27 )
        v11 = *(_DWORD *)(*(_QWORD *)v27 + 40LL);
      DxgkLogCodePointPacketForSession(0x69u, **v24, *v19, v11, v28, (__int64)v30);
      DispBrokerClientReference::Assign(v31, 0LL);
    }
  }
  return v18;
}
