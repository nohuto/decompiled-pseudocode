/*
 * XREFs of ObpInsertOrLocateNamedObject @ 0x1405DFEC4
 * Callers:
 *     ObpCreateHandle @ 0x140616FD0 (ObpCreateHandle.c)
 * Callees:
 *     ObpDereferenceNamedObject @ 0x140204B80 (ObpDereferenceNamedObject.c)
 *     ObpReferenceNamedObject @ 0x140204BCC (ObpReferenceNamedObject.c)
 *     ObpReleaseLookupContext @ 0x14020AE7C (ObpReleaseLookupContext.c)
 *     PsGetCurrentSilo @ 0x140211160 (PsGetCurrentSilo.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     RtlGetDaclSecurityDescriptor @ 0x140244CE0 (RtlGetDaclSecurityDescriptor.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     ObpAssignSecurity @ 0x1405E035C (ObpAssignSecurity.c)
 *     ObpDecrementHandleCount @ 0x1405E04F8 (ObpDecrementHandleCount.c)
 *     ObpGrantAccess @ 0x1405E08CC (ObpGrantAccess.c)
 *     ObReleaseObjectSecurity @ 0x1405F5670 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x1405F5A60 (ObpGetObjectSecurity.c)
 *     ObpLookupObjectName @ 0x140614C20 (ObpLookupObjectName.c)
 *     ObpIncrementHandleCountEx @ 0x1406169E0 (ObpIncrementHandleCountEx.c)
 *     SeReleaseSecurityDescriptor @ 0x14061F930 (SeReleaseSecurityDescriptor.c)
 *     ObpDeleteDirectoryEntry @ 0x1406C0530 (ObpDeleteDirectoryEntry.c)
 *     RtlGetControlSecurityDescriptor @ 0x1406FB1F0 (RtlGetControlSecurityDescriptor.c)
 */

__int64 __fastcall ObpInsertOrLocateNamedObject(
        ULONG_PTR BugCheckParameter1,
        char *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        _DWORD *a6,
        PADAPTER_OBJECT *a7)
{
  char *v11; // r14
  char *v12; // rdi
  char v13; // bl
  struct _LIST_ENTRY *CurrentSilo; // rax
  struct _DMA_ADAPTER *v15; // rdi
  int v16; // ebx
  __int64 v17; // r9
  bool v18; // zf
  PADAPTER_OBJECT v19; // rdi
  char *v20; // rax
  BOOLEAN v21; // r12
  __int64 v22; // rcx
  int ObjectSecurity; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  char v26; // bl
  _OWORD *v27; // rcx
  __int64 v28; // r9
  __int64 v30; // r9
  int v31; // eax
  PADAPTER_OBJECT v32; // rdx
  void *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // r8
  int ControlSecurityDescriptor; // eax
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  BOOLEAN DaclDefaulted; // [rsp+70h] [rbp-90h] BYREF
  BOOLEAN DaclPresent[3]; // [rsp+71h] [rbp-8Fh] BYREF
  __int16 v47; // [rsp+74h] [rbp-8Ch] BYREF
  char *v48; // [rsp+78h] [rbp-88h] BYREF
  int v49; // [rsp+80h] [rbp-80h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+88h] [rbp-78h] BYREF
  struct _DMA_ADAPTER *v51; // [rsp+90h] [rbp-70h] BYREF
  PACL Dacl; // [rsp+98h] [rbp-68h] BYREF
  PVOID v53; // [rsp+A0h] [rbp-60h]
  __int64 v54[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v55; // [rsp+B8h] [rbp-48h]
  __int64 v56; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v57; // [rsp+D0h] [rbp-30h]
  PADAPTER_OBJECT *v58; // [rsp+D8h] [rbp-28h]
  _OWORD v59[10]; // [rsp+E0h] [rbp-20h] BYREF

  v53 = a2;
  v58 = a7;
  v47 = 0;
  DaclPresent[0] = 0;
  DmaAdapter = 0LL;
  v56 = 0LL;
  *(_OWORD *)v54 = 0LL;
  v55 = 0LL;
  memset(v59, 0, sizeof(v59));
  *a7 = 0LL;
  Dacl = 0LL;
  v11 = a2 - 48;
  if ( (*(a2 - 22) & 2) != 0 )
    v12 = &v11[-ObpInfoMaskToOffset[*(a2 - 22) & 3]];
  else
    v12 = 0LL;
  v13 = v11[27];
  v48 = v12;
  CurrentSilo = PsGetCurrentSilo();
  v57 = (unsigned __int64)v11 >> 8;
  v15 = (struct _DMA_ADAPTER *)v53;
  v16 = ObpLookupObjectName(
          *((_QWORD *)a6 + 1),
          (v13 & 2) == 0,
          0LL,
          *((_QWORD *)a6 + 5),
          v53,
          (__int64)CurrentSilo,
          a4,
          (__int64)v54,
          0LL,
          (__int64)&DmaAdapter);
  if ( v16 < 0 )
    goto LABEL_45;
  v18 = DmaAdapter == v15;
  v19 = 0LL;
  if ( !v18 )
  {
    if ( BYTE14(v55) )
    {
      v19 = DmaAdapter - 3;
      ObpReferenceNamedObject((__int64)&DmaAdapter[-3]);
    }
    ObpReleaseLookupContext((__int64)v54);
    ObpDecrementHandleCount(BugCheckParameter1);
    if ( (*a6 & 0x80u) == 0 )
    {
      if ( v19 )
        ObpDereferenceNamedObject((__int64)v19);
      v16 = -1073741771;
    }
    else
    {
      v31 = *(_DWORD *)(a4 + 24);
      *(_DWORD *)(a4 + 20) = 0;
      v32 = DmaAdapter;
      LOBYTE(v30) = a5;
      *(_DWORD *)(a4 + 16) = v31;
      v16 = ObpGrantAccess(1LL, v32, a4, v30, *a6, a3);
      if ( v16 < 0 )
      {
        if ( v19 )
          ObpDereferenceNamedObject((__int64)v19);
      }
      else
      {
        v16 = ObpIncrementHandleCountEx(1, a3, BugCheckParameter1, (_DWORD)DmaAdapter, a5, *a6, 0LL);
        if ( v19 )
          ObpDereferenceNamedObject((__int64)v19);
        if ( v16 >= 0 )
          goto LABEL_19;
      }
    }
    HalPutDmaAdapter(DmaAdapter);
    return (unsigned int)v16;
  }
  v20 = v48;
  v21 = 0;
  v51 = 0LL;
  DaclDefaulted = 0;
  v49 = 0;
  v22 = *(_QWORD *)v48;
  if ( *(_QWORD *)v48 )
  {
    if ( (*(_DWORD *)(v22 + 336) & 8) != 0 || ObpObjectSecurityInheritance )
      v49 = 3;
    LOBYTE(v17) = a5;
    ObjectSecurity = ObpGetObjectSecurity(v22, &v51, &DaclDefaulted, v17);
    v25 = 0LL;
    v16 = ObjectSecurity;
    if ( ObjectSecurity < 0 )
      goto LABEL_52;
    v19 = v51;
    v21 = DaclDefaulted;
    v20 = v48;
  }
  v26 = 0;
  if ( !*(_QWORD *)v20 || (*(_DWORD *)(*(_QWORD *)v20 + 336LL) & 8) == 0 && !ObpObjectSecurityInheritance )
    goto LABEL_13;
  v33 = *(void **)(a4 + 64);
  if ( !v33 )
    goto LABEL_13;
  LODWORD(v48) = RtlGetDaclSecurityDescriptor(v33, DaclPresent, &Dacl, &DaclDefaulted);
  if ( (int)v48 >= 0 )
  {
    ControlSecurityDescriptor = RtlGetControlSecurityDescriptor(*(_QWORD *)(a4 + 64), &v47, &v48);
    v35 = 0LL;
    LODWORD(v48) = ControlSecurityDescriptor;
    if ( ControlSecurityDescriptor >= 0 )
    {
      if ( !Dacl && (v47 & 0x1000) == 0 )
      {
        v37 = *(_OWORD *)(a4 + 16);
        v59[0] = *(_OWORD *)a4;
        v38 = *(_OWORD *)(a4 + 32);
        v59[1] = v37;
        v39 = *(_OWORD *)(a4 + 48);
        v59[2] = v38;
        v40 = *(_OWORD *)(a4 + 64);
        v59[3] = v39;
        v41 = *(_OWORD *)(a4 + 80);
        v59[4] = v40;
        v42 = *(_OWORD *)(a4 + 96);
        v59[5] = v41;
        v43 = *(_OWORD *)(a4 + 128);
        v59[6] = v42;
        v59[7] = *(_OWORD *)(a4 + 112);
        v44 = *(_OWORD *)(a4 + 144);
        v59[8] = v43;
        v59[9] = v44;
        *(_QWORD *)&v59[4] = 0LL;
        v27 = v59;
        goto LABEL_14;
      }
LABEL_13:
      v27 = (_OWORD *)a4;
LABEL_14:
      if ( !*((_QWORD *)v27 + 8) )
      {
        if ( v49 )
          v26 = 1;
      }
      v16 = ObpAssignSecurity(
              (_DWORD)v27,
              (_DWORD)v19,
              (_DWORD)v53,
              ObTypeIndexTable[(unsigned __int8)(ObHeaderCookie ^ v57 ^ *((char *)v53 - 24))],
              v49,
              v26);
      if ( v19 )
      {
        ObReleaseObjectSecurity(v19, v21);
        goto LABEL_17;
      }
      if ( v16 >= 0 )
      {
        LOBYTE(v24) = *((_BYTE *)a6 + 16);
        SeReleaseSecurityDescriptor(*((_QWORD *)a6 + 4), v24, 1LL, v28);
        *((_QWORD *)a6 + 4) = 0LL;
        *(_QWORD *)(a4 + 64) = 0LL;
LABEL_17:
        if ( v16 >= 0 )
        {
          ObpReleaseLookupContext((__int64)v54);
LABEL_19:
          *v58 = DmaAdapter;
          return (unsigned int)v16;
        }
      }
LABEL_52:
      ObpDeleteDirectoryEntry(v54, v24, v25);
      ObpReleaseLookupContext((__int64)v54);
LABEL_45:
      ObpDecrementHandleCount(BugCheckParameter1);
      return (unsigned int)v16;
    }
  }
  if ( v19 )
    ObReleaseObjectSecurity(v19, v21);
  ObpDeleteDirectoryEntry(v54, v34, v35);
  ObpReleaseLookupContext((__int64)v54);
  ObpDecrementHandleCount(BugCheckParameter1);
  return (unsigned int)v48;
}
