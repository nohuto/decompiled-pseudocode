/*
 * XREFs of CrmSrvActivityAllocate @ 0x18002F840
 * Callers:
 *     CrmRpcSrvActivityAllocate @ 0x18002F760 (CrmRpcSrvActivityAllocate.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x18002E750 (_tlgCreate1Sz_wchar_t.c)
 *     CrmActivityPolicyTableEntryGet @ 0x18002F788 (CrmActivityPolicyTableEntryGet.c)
 *     CrmActivityDereference @ 0x18002FAA4 (CrmActivityDereference.c)
 *     CrmRegistrationCreateActivity @ 0x18002FE98 (CrmRegistrationCreateActivity.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

__int64 __fastcall CrmSrvActivityAllocate(__int64 *a1, __int64 a2, unsigned int a3, _WORD *a4, _QWORD *a5)
{
  __int64 v5; // r14
  int v10; // ebx
  int v11; // ebx
  int v12; // eax
  __int64 v13; // rcx
  int v15; // eax
  int v16; // r10d
  __int64 v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v19; // [rsp+3Ch] [rbp-C4h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+50h] [rbp-B0h] BYREF
  UUID *v22; // [rsp+70h] [rbp-90h]
  int v23; // [rsp+78h] [rbp-88h]
  int v24; // [rsp+7Ch] [rbp-84h]
  int *v25; // [rsp+80h] [rbp-80h]
  int v26; // [rsp+88h] [rbp-78h]
  int v27; // [rsp+8Ch] [rbp-74h]
  __int64 v28; // [rsp+90h] [rbp-70h]
  int v29; // [rsp+98h] [rbp-68h]
  int v30; // [rsp+9Ch] [rbp-64h]
  unsigned int *v31; // [rsp+A0h] [rbp-60h]
  int v32; // [rsp+A8h] [rbp-58h]
  int v33; // [rsp+ACh] [rbp-54h]
  _QWORD *v34; // [rsp+B0h] [rbp-50h]
  int v35; // [rsp+B8h] [rbp-48h]
  int v36; // [rsp+BCh] [rbp-44h]
  char v37[16]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v38; // [rsp+D0h] [rbp-30h]
  int v39; // [rsp+D8h] [rbp-28h]
  int v40; // [rsp+DCh] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+E0h] [rbp-20h] BYREF
  UUID *v42; // [rsp+100h] [rbp+0h]
  int v43; // [rsp+108h] [rbp+8h]
  int v44; // [rsp+10Ch] [rbp+Ch]

  v17 = 0LL;
  v5 = -1LL;
  if ( (unsigned int)dword_1800B3250 > 5 && (qword_1800B3260 & 1) != 0 && (qword_1800B3268 & 1) == qword_1800B3268 )
  {
    v44 = 0;
    v42 = &Uuid;
    v43 = 16;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B3250,
      (unsigned __int8 *)dword_1800A2590,
      0LL,
      0LL,
      3u,
      &v41);
  }
  v10 = *(_DWORD *)(a2 + 24);
  if ( v10 >= 305 )
    goto LABEL_18;
  if ( a3 <= 0x3E8 )
  {
    if ( (int)CrmActivityPolicyTableEntryGet(v10, a3, (__int64)v20) >= 0 && LODWORD(v20[0]) == v10 )
    {
      v11 = 0;
      goto LABEL_8;
    }
LABEL_18:
    v11 = -1073741811;
    goto LABEL_13;
  }
  v11 = -1073741811;
LABEL_8:
  if ( v11 >= 0 )
  {
    v12 = CrmRegistrationCreateActivity(a2, a3, &v17);
    v13 = v17;
    v11 = v12;
    if ( v12 >= 0 )
    {
      v5 = *(_QWORD *)(v17 + 48);
      v11 = 0;
      *a1 = v5;
      *a5 = *(_QWORD *)(v13 + 120);
    }
    if ( v13 )
      CrmActivityDereference(v13);
  }
LABEL_13:
  if ( (unsigned int)dword_1800B3250 > 5 && (qword_1800B3260 & 1) != 0 && (qword_1800B3268 & 1) == qword_1800B3268 )
  {
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v36 = 0;
    v22 = &Uuid;
    v18 = *(_DWORD *)(a2 + 24);
    v25 = &v18;
    v28 = a2 + 72;
    v15 = *(unsigned __int8 *)(a2 + 73);
    v23 = 16;
    v26 = 4;
    v19 = a3;
    v32 = 4;
    v29 = 4 * v15 + 8;
    v31 = &v19;
    v34 = v20;
    v20[0] = v5;
    v35 = 8;
    tlgCreate1Sz_wchar_t((__int64)v37, a4);
    v40 = 0;
    v38 = &v17;
    LODWORD(v17) = v11;
    v39 = v16;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B3250,
      (unsigned __int8 *)dword_1800A27F3,
      0LL,
      0LL,
      9u,
      &v21);
  }
  return (unsigned int)v11;
}
