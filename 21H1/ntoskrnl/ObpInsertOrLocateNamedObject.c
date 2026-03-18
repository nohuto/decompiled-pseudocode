/*
 * XREFs of ObpInsertOrLocateNamedObject @ 0x140616B1C
 * Callers:
 *     ObpCreateHandle @ 0x14062B8A0 (ObpCreateHandle.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x140206860 (PsGetCurrentSilo.c)
 *     ObpReleaseLookupContext @ 0x14025B298 (ObpReleaseLookupContext.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     RtlGetDaclSecurityDescriptor @ 0x1402D70E0 (RtlGetDaclSecurityDescriptor.c)
 *     ObpDereferenceNamedObject @ 0x1402E19B8 (ObpDereferenceNamedObject.c)
 *     ObpReferenceNamedObject @ 0x140310B4C (ObpReferenceNamedObject.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     SeReleaseSecurityDescriptor @ 0x1405E2F00 (SeReleaseSecurityDescriptor.c)
 *     ObReleaseObjectSecurity @ 0x140613A90 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x140613E80 (ObpGetObjectSecurity.c)
 *     ObpAssignSecurity @ 0x1406171CC (ObpAssignSecurity.c)
 *     ObpLookupObjectName @ 0x140627610 (ObpLookupObjectName.c)
 *     ObpIncrementHandleCountEx @ 0x140629320 (ObpIncrementHandleCountEx.c)
 *     ObpDecrementHandleCount @ 0x14068AA54 (ObpDecrementHandleCount.c)
 *     RtlGetControlSecurityDescriptor @ 0x14068ED70 (RtlGetControlSecurityDescriptor.c)
 *     ObpGrantAccess @ 0x1406BBB08 (ObpGrantAccess.c)
 *     ObpDeleteDirectoryEntry @ 0x1406CAC40 (ObpDeleteDirectoryEntry.c)
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
  __int64 *v12; // rdi
  char v13; // bl
  struct _LIST_ENTRY *CurrentSilo; // rax
  int v15; // r8d
  char v16; // cl
  int v17; // edx
  struct _DMA_ADAPTER *v18; // rdi
  int v19; // ebx
  bool v20; // zf
  PADAPTER_OBJECT v21; // rdi
  __int64 *v22; // rax
  BOOLEAN v23; // r12
  __int64 v24; // rcx
  int ObjectSecurity; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  char v28; // bl
  _OWORD *v29; // rcx
  __int64 v31; // r9
  int v32; // eax
  PADAPTER_OBJECT v33; // rdx
  void *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r8
  int ControlSecurityDescriptor; // eax
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  BOOLEAN DaclDefaulted; // [rsp+70h] [rbp-90h] BYREF
  BOOLEAN DaclPresent[3]; // [rsp+71h] [rbp-8Fh] BYREF
  __int16 v48; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 *v49; // [rsp+78h] [rbp-88h] BYREF
  int v50; // [rsp+80h] [rbp-80h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+88h] [rbp-78h] BYREF
  struct _DMA_ADAPTER *v52; // [rsp+90h] [rbp-70h] BYREF
  PACL Dacl; // [rsp+98h] [rbp-68h] BYREF
  PVOID v54; // [rsp+A0h] [rbp-60h]
  __int64 v55[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v56; // [rsp+B8h] [rbp-48h]
  __int64 v57; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v58; // [rsp+D0h] [rbp-30h]
  PADAPTER_OBJECT *v59; // [rsp+D8h] [rbp-28h]
  _OWORD v60[10]; // [rsp+E0h] [rbp-20h] BYREF

  v54 = a2;
  v59 = a7;
  v48 = 0;
  DaclPresent[0] = 0;
  DmaAdapter = 0LL;
  v57 = 0LL;
  *(_OWORD *)v55 = 0LL;
  v56 = 0LL;
  memset(v60, 0, sizeof(v60));
  *a7 = 0LL;
  Dacl = 0LL;
  v11 = a2 - 48;
  if ( (*(a2 - 22) & 2) != 0 )
    v12 = (__int64 *)&v11[-ObpInfoMaskToOffset[*(a2 - 22) & 3]];
  else
    v12 = 0LL;
  v13 = v11[27];
  v49 = v12;
  CurrentSilo = PsGetCurrentSilo();
  v15 = *a6;
  v16 = BYTE1(v11) ^ v11[24];
  v58 = (unsigned __int64)v11 >> 8;
  v17 = (_DWORD)v12 + 8;
  v18 = (struct _DMA_ADAPTER *)v54;
  v19 = ObpLookupObjectName(
          *((_QWORD *)a6 + 1),
          v17,
          v15,
          ObTypeIndexTable[(unsigned __int8)(ObHeaderCookie ^ v16)],
          (v13 & 2) == 0,
          0LL,
          *((_QWORD *)a6 + 5),
          v54,
          (__int64)CurrentSilo,
          a4,
          (__int64)v55,
          0LL,
          (__int64)&DmaAdapter);
  if ( v19 < 0 )
    goto LABEL_45;
  v20 = DmaAdapter == v18;
  v21 = 0LL;
  if ( !v20 )
  {
    if ( BYTE14(v56) )
    {
      v21 = DmaAdapter - 3;
      ObpReferenceNamedObject((__int64)&DmaAdapter[-3]);
    }
    ObpReleaseLookupContext((__int64)v55);
    ObpDecrementHandleCount(BugCheckParameter1);
    if ( (*a6 & 0x80u) == 0 )
    {
      if ( v21 )
        ObpDereferenceNamedObject((__int64)v21);
      v19 = -1073741771;
    }
    else
    {
      v32 = *(_DWORD *)(a4 + 24);
      *(_DWORD *)(a4 + 20) = 0;
      v33 = DmaAdapter;
      LOBYTE(v31) = a5;
      *(_DWORD *)(a4 + 16) = v32;
      v19 = ObpGrantAccess(1LL, v33, a4, v31, *a6, a3);
      if ( v19 < 0 )
      {
        if ( v21 )
          ObpDereferenceNamedObject((__int64)v21);
      }
      else
      {
        v19 = ObpIncrementHandleCountEx(1, a3, BugCheckParameter1, (_DWORD)DmaAdapter, a5, *a6, 0LL);
        if ( v21 )
          ObpDereferenceNamedObject((__int64)v21);
        if ( v19 >= 0 )
          goto LABEL_19;
      }
    }
    HalPutDmaAdapter(DmaAdapter);
    return (unsigned int)v19;
  }
  v22 = v49;
  v23 = 0;
  v52 = 0LL;
  DaclDefaulted = 0;
  v50 = 0;
  v24 = *v49;
  if ( *v49 )
  {
    if ( (*(_DWORD *)(v24 + 336) & 8) != 0 || ObpObjectSecurityInheritance )
      v50 = 3;
    ObjectSecurity = ObpGetObjectSecurity(v24, (PVOID *)&v52, &DaclDefaulted, a5);
    v27 = 0LL;
    v19 = ObjectSecurity;
    if ( ObjectSecurity < 0 )
      goto LABEL_52;
    v21 = v52;
    v23 = DaclDefaulted;
    v22 = v49;
  }
  v28 = 0;
  if ( !*v22 || (*(_DWORD *)(*v22 + 336) & 8) == 0 && !ObpObjectSecurityInheritance )
    goto LABEL_13;
  v34 = *(void **)(a4 + 64);
  if ( !v34 )
    goto LABEL_13;
  LODWORD(v49) = RtlGetDaclSecurityDescriptor(v34, DaclPresent, &Dacl, &DaclDefaulted);
  if ( (int)v49 >= 0 )
  {
    ControlSecurityDescriptor = RtlGetControlSecurityDescriptor(*(_QWORD *)(a4 + 64), &v48, &v49);
    v36 = 0LL;
    LODWORD(v49) = ControlSecurityDescriptor;
    if ( ControlSecurityDescriptor >= 0 )
    {
      if ( !Dacl && (v48 & 0x1000) == 0 )
      {
        v38 = *(_OWORD *)(a4 + 16);
        v60[0] = *(_OWORD *)a4;
        v39 = *(_OWORD *)(a4 + 32);
        v60[1] = v38;
        v40 = *(_OWORD *)(a4 + 48);
        v60[2] = v39;
        v41 = *(_OWORD *)(a4 + 64);
        v60[3] = v40;
        v42 = *(_OWORD *)(a4 + 80);
        v60[4] = v41;
        v43 = *(_OWORD *)(a4 + 96);
        v60[5] = v42;
        v44 = *(_OWORD *)(a4 + 128);
        v60[6] = v43;
        v60[7] = *(_OWORD *)(a4 + 112);
        v45 = *(_OWORD *)(a4 + 144);
        v60[8] = v44;
        v60[9] = v45;
        *(_QWORD *)&v60[4] = 0LL;
        v29 = v60;
        goto LABEL_14;
      }
LABEL_13:
      v29 = (_OWORD *)a4;
LABEL_14:
      if ( !*((_QWORD *)v29 + 8) )
      {
        if ( v50 )
          v28 = 1;
      }
      v19 = ObpAssignSecurity(
              (_DWORD)v29,
              (_DWORD)v21,
              (_DWORD)v54,
              ObTypeIndexTable[(unsigned __int8)(ObHeaderCookie ^ v58 ^ *((char *)v54 - 24))],
              v50,
              v28);
      if ( v21 )
      {
        ObReleaseObjectSecurity(v21, v23);
        goto LABEL_17;
      }
      if ( v19 >= 0 )
      {
        SeReleaseSecurityDescriptor(*((void **)a6 + 4), *((_BYTE *)a6 + 16), 1);
        *((_QWORD *)a6 + 4) = 0LL;
        *(_QWORD *)(a4 + 64) = 0LL;
LABEL_17:
        if ( v19 >= 0 )
        {
          ObpReleaseLookupContext((__int64)v55);
LABEL_19:
          *v59 = DmaAdapter;
          return (unsigned int)v19;
        }
      }
LABEL_52:
      ObpDeleteDirectoryEntry(v55, v26, v27);
      ObpReleaseLookupContext((__int64)v55);
LABEL_45:
      ObpDecrementHandleCount(BugCheckParameter1);
      return (unsigned int)v19;
    }
  }
  if ( v21 )
    ObReleaseObjectSecurity(v21, v23);
  ObpDeleteDirectoryEntry(v55, v35, v36);
  ObpReleaseLookupContext((__int64)v55);
  ObpDecrementHandleCount(BugCheckParameter1);
  return (unsigned int)v49;
}
