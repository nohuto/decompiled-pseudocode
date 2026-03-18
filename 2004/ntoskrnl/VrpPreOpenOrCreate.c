/*
 * XREFs of VrpPreOpenOrCreate @ 0x1405CB6B0
 * Callers:
 *     VrpRegistryCallback @ 0x1405CAF70 (VrpRegistryCallback.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14026C434 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwActivityIdControl @ 0x140277DD0 (EtwActivityIdControl.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     CmAllocateExtraParameter @ 0x1405CAB80 (CmAllocateExtraParameter.c)
 *     VrpTranslatePath @ 0x1405CBA18 (VrpTranslatePath.c)
 *     VrpBuildKeyPath @ 0x1405CC004 (VrpBuildKeyPath.c)
 *     CmpFindExtraParameterInBlock @ 0x1405CC37C (CmpFindExtraParameterInBlock.c)
 *     CmpFreeExtraParameter @ 0x1405CF044 (CmpFreeExtraParameter.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VrpPreOpenOrCreate(__int64 a1, void *a2)
{
  PCUNICODE_STRING *v2; // rdi
  _QWORD *ExtraParameter; // rsi
  _OWORD *v6; // rax
  PCUNICODE_STRING v7; // rbx
  UNICODE_STRING *v8; // r14
  _OWORD *v9; // r15
  int v10; // ebx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct _LOOKASIDE_LIST_EX *v15; // r9
  int v16; // r15d
  UNICODE_STRING *PoolWithTag; // rax
  UNICODE_STRING v18; // xmm1
  UNICODE_STRING v19; // xmm0
  int v20; // eax
  UNICODE_STRING v21; // xmm1
  __int64 v22; // rax
  UNICODE_STRING v23; // xmm0
  UNICODE_STRING v25; // xmm0
  int ExtraParameterInBlock; // eax
  __int64 v27; // rcx
  _QWORD *v28; // r11
  PCUNICODE_STRING v29; // rdx
  int Length; // ecx
  wchar_t *v31; // rax
  char *v32; // rdx
  PCUNICODE_STRING v33; // rdx
  _QWORD *v34; // rax
  UNICODE_STRING *v35; // rax
  wchar_t *Buffer; // rcx
  int v37; // [rsp+50h] [rbp-B0h] BYREF
  int v38; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v39; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD *v40; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  PVOID P[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v43[2]; // [rsp+88h] [rbp-78h] BYREF
  GUID ActivityId; // [rsp+98h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD *v46; // [rsp+D0h] [rbp-30h]
  __int64 v47; // [rsp+D8h] [rbp-28h]
  wchar_t *v48; // [rsp+E0h] [rbp-20h]
  _DWORD v49[2]; // [rsp+E8h] [rbp-18h] BYREF
  int *v50; // [rsp+F0h] [rbp-10h]
  __int64 v51; // [rsp+F8h] [rbp-8h]

  v2 = *(PCUNICODE_STRING **)a1;
  ExtraParameter = 0LL;
  v38 = 0;
  v6 = v2[1];
  v7 = *v2;
  v8 = 0LL;
  v9 = v2[11];
  v39 = 0LL;
  DestinationString = 0LL;
  v40 = v6;
  *(_OWORD *)P = 0LL;
  *(_OWORD *)v43 = 0LL;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  if ( !v7->Length || *v7->Buffer != 92 )
  {
    if ( !v9 )
      return 0;
    v10 = VrpBuildKeyPath(
            (PCUNICODE_STRING)((unsigned __int64)(v9 + 1) & -(__int64)(v9 != 0LL)),
            *v2,
            &DestinationString);
    if ( v10 < 0 )
      goto LABEL_19;
LABEL_5:
    v37 = 0;
    v11 = VrpTranslatePath(a2, (__int64)P, (__int64)&v39, (__int64)v43, (__int64)&v38, (__int64)&v37);
    v10 = v11;
    if ( v11 == -1073741772 )
      return 0;
    if ( v11 < 0 )
      goto LABEL_19;
    v16 = v38;
    if ( (v38 & 4) != 0 )
    {
      ExtraParameter = CmAllocateExtraParameter(v13, v12, v14, v15);
      if ( ExtraParameter )
      {
        ObfReferenceObjectWithTag(a2, 0x67655256u);
        v25 = DestinationString;
        *ExtraParameter = a2;
        *((_DWORD *)ExtraParameter + 2) = v16 & 0xFFFFFFFB;
        *((UNICODE_STRING *)ExtraParameter + 1) = v25;
        RtlInitUnicodeString(&DestinationString, 0LL);
        ExtraParameterInBlock = CmpFindExtraParameterInBlock(*(_QWORD *)(a1 + 16), ExtraParameter - 4, &v40);
        v10 = ExtraParameterInBlock;
        if ( ExtraParameterInBlock < 0 )
        {
          if ( ExtraParameterInBlock == -1073741772 )
          {
            v34 = *(_QWORD **)(v27 + 8);
            if ( *v34 != v27 )
              __fastfail(3u);
            *v28 = v27;
            v10 = 0;
            v28[1] = v34;
            *v34 = v28;
            *(_QWORD *)(v27 + 8) = v28;
          }
          if ( v10 >= 0 )
          {
            v35 = (UNICODE_STRING *)*v2;
            ExtraParameter = 0LL;
            Buffer = (*v2)->Buffer;
            if ( Buffer )
            {
              ExFreePoolWithTag(Buffer, 0x67655256u);
              v35 = (UNICODE_STRING *)*v2;
            }
            *v35 = *(UNICODE_STRING *)P;
            RtlInitUnicodeString((PUNICODE_STRING)P, 0LL);
            *(_DWORD *)(a1 + 12) = 872;
            v10 = -1073740541;
LABEL_20:
            if ( (unsigned int)dword_140C02168 > 5 )
            {
              v29 = (PCUNICODE_STRING)&EmptyUnicodeString;
              if ( (*v2)->Buffer )
                v29 = *v2;
              Length = v29->Length;
              v31 = v29->Buffer;
              v46 = v49;
              v32 = byte_140023158;
              v37 = -1073740541;
LABEL_29:
              v48 = v31;
              v49[0] = Length;
              v50 = &v37;
              v47 = 2LL;
              v49[1] = 0;
              v51 = 4LL;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140C02168,
                (unsigned __int8 *)v32,
                &ActivityId,
                0LL,
                5u,
                &v45);
              goto LABEL_30;
            }
            goto LABEL_30;
          }
        }
        else
        {
          v10 = -1073741771;
        }
        goto LABEL_19;
      }
    }
    else
    {
      *(_WORD *)(v39 + 50) = *((_WORD *)v40 + 25);
      PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x67655256u);
      v8 = PoolWithTag;
      if ( PoolWithTag )
      {
        v18 = DestinationString;
        v2[10] = PoolWithTag;
        *(_QWORD *)&PoolWithTag->Length = v2[1];
        PoolWithTag[1] = **v2;
        v19 = *v2[14];
        v20 = v37;
        v8[3] = v18;
        *(_DWORD *)&v8[4].Length = v16;
        v21 = *(UNICODE_STRING *)v43;
        v8[2] = v19;
        *(_DWORD *)(a1 + 8) = v20;
        v22 = v39;
        v23 = *(UNICODE_STRING *)P;
        v8->Buffer = (wchar_t *)a2;
        v2[1] = (PCUNICODE_STRING)v22;
        **v2 = v23;
        *v2[14] = v21;
        goto LABEL_10;
      }
    }
    v10 = -1073741670;
    goto LABEL_25;
  }
  v10 = VrpBuildKeyPath(0LL, *v2, &DestinationString);
  if ( v10 >= 0 )
    goto LABEL_5;
LABEL_10:
  if ( v10 >= 0 )
    return (unsigned int)v10;
LABEL_19:
  if ( v10 == -1073740541 )
    goto LABEL_20;
LABEL_25:
  if ( (unsigned int)dword_140C02168 > 2 )
  {
    v33 = (PCUNICODE_STRING)&EmptyUnicodeString;
    if ( (*v2)->Buffer )
      v33 = *v2;
    Length = v33->Length;
    v31 = v33->Buffer;
    v46 = v49;
    v32 = byte_140023255;
    v37 = v10;
    goto LABEL_29;
  }
LABEL_30:
  if ( v8 )
    ExFreePoolWithTag(v8, 0x67655256u);
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x67655256u);
  if ( v39 )
    HalPutDmaAdapter((PADAPTER_OBJECT)v39);
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0x67655256u);
  if ( ExtraParameter )
    CmpFreeExtraParameter(ExtraParameter - 6);
  return (unsigned int)v10;
}
