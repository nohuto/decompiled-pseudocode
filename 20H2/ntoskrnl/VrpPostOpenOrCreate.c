/*
 * XREFs of VrpPostOpenOrCreate @ 0x1405D1A20
 * Callers:
 *     VrpRegistryCallback @ 0x1405D15D0 (VrpRegistryCallback.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140244AF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwActivityIdControl @ 0x1403640E0 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     CmAllocateExtraParameter @ 0x1405D0D40 (CmAllocateExtraParameter.c)
 *     VrpFreeCallbackContext @ 0x1405D1CC4 (VrpFreeCallbackContext.c)
 *     VrpCountPathComponents @ 0x1405D2010 (VrpCountPathComponents.c)
 *     VrpBuildKeyPath @ 0x1405D2664 (VrpBuildKeyPath.c)
 *     CmRetrieveExtraParameter @ 0x1405D2998 (CmRetrieveExtraParameter.c)
 *     CmpFindExtraParameterInBlock @ 0x1405D29DC (CmpFindExtraParameterInBlock.c)
 *     CmSetCallbackObjectContext @ 0x1405D2A50 (CmSetCallbackObjectContext.c)
 *     VrpAllocateKeyContext @ 0x1405D2C44 (VrpAllocateKeyContext.c)
 *     VrpFreeKeyContext @ 0x1405D2CA0 (VrpFreeKeyContext.c)
 *     CmpFreeExtraParameter @ 0x1405D54E8 (CmpFreeExtraParameter.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpPostOpenOrCreate(__int64 *a1, void *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  UNICODE_STRING *v6; // rsi
  __int64 v7; // r14
  UNICODE_STRING *v8; // r13
  int v9; // ebx
  UNICODE_STRING *v10; // rdi
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct _LOOKASIDE_LIST_EX *v15; // r9
  const UNICODE_STRING *v16; // r14
  UNICODE_STRING *v17; // rax
  UNICODE_STRING *v18; // r12
  NTSTATUS v19; // ebx
  int Buffer; // eax
  UNICODE_STRING *ExtraParameter; // rax
  int ExtraParameterInBlock; // eax
  __int64 v23; // rcx
  _QWORD *v24; // r11
  _QWORD *v25; // rax
  struct _DMA_ADAPTER *v26; // rcx
  int v27; // eax
  __int64 *v28; // rax
  void *v29; // rcx
  UNICODE_STRING *KeyContext; // rax
  _QWORD *v32; // rcx
  __int64 v33; // rdx
  _QWORD *v34; // rax
  __int64 *v35; // rcx
  __int64 v36; // rax
  int v37; // edx
  __int64 *v38; // rcx
  __int64 v39; // rax
  int v40; // edx
  PVOID OldContext; // [rsp+30h] [rbp-59h] BYREF
  __int64 v42; // [rsp+38h] [rbp-51h]
  GUID ActivityId; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44[2]; // [rsp+50h] [rbp-39h] BYREF
  int *v45; // [rsp+70h] [rbp-19h]
  int v46; // [rsp+78h] [rbp-11h]
  int v47; // [rsp+7Ch] [rbp-Dh]
  __int64 v48; // [rsp+80h] [rbp-9h]
  int v49; // [rsp+88h] [rbp-1h] BYREF
  int v50; // [rsp+8Ch] [rbp+3h]
  PVOID *p_OldContext; // [rsp+90h] [rbp+7h]
  int v52; // [rsp+98h] [rbp+Fh]
  int v53; // [rsp+9Ch] [rbp+13h]

  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v5 = *a1;
  v6 = 0LL;
  v7 = a1[1];
  v8 = 0LL;
  OldContext = 0LL;
  v42 = v5;
  v9 = *(_DWORD *)(v5 + 8);
  v10 = *(UNICODE_STRING **)(v5 + 32);
  v11 = *(_QWORD *)(v5 + 16);
  if ( v9 < 0 )
    goto LABEL_19;
  CmRetrieveExtraParameter(*(_QWORD *)(v7 + 16), v4, &OldContext);
  if ( v9 == 260 )
  {
    if ( !OldContext )
      goto LABEL_19;
    v32 = (char *)OldContext - 48;
    v33 = *((_QWORD *)OldContext - 6);
    if ( *(_QWORD **)(*v32 + 8LL) == v32 )
    {
      v34 = (_QWORD *)v32[1];
      if ( (_QWORD *)*v34 == v32 )
      {
        *v34 = v33;
        *(_QWORD *)(v33 + 8) = v34;
        *v32 = 0LL;
        v32[1] = 0LL;
        ((void (*)(void))CmpFreeExtraParameter)();
        goto LABEL_19;
      }
    }
    goto LABEL_50;
  }
  if ( v9 == 872 )
  {
    if ( OldContext )
      goto LABEL_19;
    if ( !v10 )
      return 0;
    ExtraParameter = (UNICODE_STRING *)CmAllocateExtraParameter(v13, v12, v14, v15);
    v8 = ExtraParameter;
    if ( !ExtraParameter )
      goto LABEL_40;
    v19 = VrpBuildKeyPath(0LL, v10 + 3, ExtraParameter + 1);
    if ( v19 < 0 )
      goto LABEL_41;
    ObfReferenceObjectWithTag(v10->Buffer, 0x67655256u);
    *(_QWORD *)&v8->Length = v10->Buffer;
    LODWORD(v8->Buffer) = *(_DWORD *)&v10[4].Length;
    ExtraParameterInBlock = CmpFindExtraParameterInBlock(*(_QWORD *)(v7 + 16), &v8[-2], &OldContext);
    v19 = ExtraParameterInBlock;
    if ( ExtraParameterInBlock >= 0 )
    {
      v19 = -1073741771;
      goto LABEL_41;
    }
    if ( ExtraParameterInBlock != -1073741772 )
    {
LABEL_18:
      if ( v19 < 0 )
        goto LABEL_41;
LABEL_19:
      v19 = 0;
      goto LABEL_20;
    }
    v25 = *(_QWORD **)(v23 + 8);
    if ( *v25 == v23 )
    {
      *v24 = v23;
      v19 = 0;
      v24[1] = v25;
      *v25 = v24;
      *(_QWORD *)(v23 + 8) = v24;
      goto LABEL_18;
    }
LABEL_50:
    __fastfail(3u);
  }
  v16 = (const UNICODE_STRING *)OldContext;
  if ( OldContext )
  {
    KeyContext = (UNICODE_STRING *)VrpAllocateKeyContext(*(PVOID *)OldContext);
    v6 = KeyContext;
    if ( KeyContext )
    {
      v18 = KeyContext + 1;
      v19 = VrpBuildKeyPath(0LL, v16 + 1, KeyContext + 1);
      if ( v19 < 0 )
        goto LABEL_41;
      Buffer = (int)v16->Buffer;
      goto LABEL_8;
    }
LABEL_40:
    v19 = -1073741670;
    goto LABEL_41;
  }
  v17 = (UNICODE_STRING *)VrpAllocateKeyContext(a2);
  v6 = v17;
  if ( !v17 )
    goto LABEL_40;
  v18 = v17 + 1;
  v19 = VrpBuildKeyPath(0LL, v10 + 3, v17 + 1);
  if ( v19 < 0 )
  {
LABEL_41:
    if ( (unsigned int)dword_140C02168 > 2 )
    {
      v35 = &EmptyUnicodeString;
      if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) )
        v35 = *(__int64 **)v11;
      v36 = v35[1];
      v37 = *(unsigned __int16 *)v35;
      v47 = 0;
      v50 = 0;
      v53 = 0;
      v48 = v36;
      p_OldContext = &OldContext;
      v45 = &v49;
      v49 = v37;
      v46 = 2;
      LODWORD(OldContext) = v19;
      v52 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02168,
        (unsigned __int8 *)&unk_140023650,
        &ActivityId,
        0LL,
        5u,
        v44);
    }
    if ( v6 )
      VrpFreeKeyContext(v6);
    if ( v8 )
      CmpFreeExtraParameter(&v8[-3]);
    goto LABEL_20;
  }
  Buffer = *(_DWORD *)&v10[4].Length;
LABEL_8:
  *(_DWORD *)(&v6[2].MaximumLength + 1) = Buffer;
  v6[2].Length = VrpCountPathComponents(v18);
  v19 = CmSetCallbackObjectContext(**(PVOID **)(v11 + 72), &VrpCallbackCookie, v6, &OldContext);
  if ( v19 < 0 )
    goto LABEL_41;
LABEL_20:
  if ( v10 )
  {
    v26 = *(struct _DMA_ADAPTER **)(v11 + 8);
    if ( v26 )
      HalPutDmaAdapter(v26);
    *(_QWORD *)(v11 + 8) = *(_QWORD *)&v10->Length;
    *(_QWORD *)&v10->Length = 0LL;
    v27 = *(_DWORD *)(v42 + 8);
    if ( v27 == 872 || v27 == 260 )
    {
      if ( (unsigned int)dword_140C02168 > 5 )
      {
        v38 = &EmptyUnicodeString;
        if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) )
          v38 = *(__int64 **)v11;
        v39 = v38[1];
        v40 = *(unsigned __int16 *)v38;
        v47 = 0;
        v50 = 0;
        v53 = 0;
        v48 = v39;
        p_OldContext = &OldContext;
        v45 = &v49;
        v49 = v40;
        v46 = 2;
        LODWORD(OldContext) = v19;
        v52 = 4;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C02168,
          (unsigned __int8 *)word_140023412,
          &ActivityId,
          0LL,
          5u,
          v44);
      }
    }
    else
    {
      v28 = *(__int64 **)v11;
      v29 = *(void **)(*(_QWORD *)v11 + 8LL);
      if ( v29 )
      {
        ExFreePoolWithTag(v29, 0);
        v28 = *(__int64 **)v11;
      }
      *(UNICODE_STRING *)v28 = v10[1];
      *(UNICODE_STRING *)*(_QWORD *)(v11 + 112) = v10[2];
      v10[1].Buffer = 0LL;
      v10[2].Buffer = 0LL;
    }
    VrpFreeCallbackContext(v10);
  }
  return (unsigned int)v19;
}
