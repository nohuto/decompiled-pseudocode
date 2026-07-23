/*
 * XREFs of ObpInsertOrLocateNamedObject @ 0x140667CF0
 * Callers:
 *     ObpCreateHandle @ 0x1405F6330 (ObpCreateHandle.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObpDereferenceNamedObject @ 0x140272034 (ObpDereferenceNamedObject.c)
 *     RtlGetDaclSecurityDescriptor @ 0x1402720C0 (RtlGetDaclSecurityDescriptor.c)
 *     ObpReleaseLookupContext @ 0x140297B18 (ObpReleaseLookupContext.c)
 *     PsGetCurrentSilo @ 0x140299370 (PsGetCurrentSilo.c)
 *     ObpReferenceNamedObject @ 0x14034E1DC (ObpReferenceNamedObject.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ObpLookupObjectName @ 0x1405F1FF0 (ObpLookupObjectName.c)
 *     ObpIncrementHandleCountEx @ 0x1405F3DB0 (ObpIncrementHandleCountEx.c)
 *     SeReleaseSecurityDescriptor @ 0x140628670 (SeReleaseSecurityDescriptor.c)
 *     ObpDecrementHandleCount @ 0x14063D434 (ObpDecrementHandleCount.c)
 *     RtlGetControlSecurityDescriptor @ 0x14063EC50 (RtlGetControlSecurityDescriptor.c)
 *     ObpAssignSecurity @ 0x140668188 (ObpAssignSecurity.c)
 *     ObReleaseObjectSecurity @ 0x140668D70 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x140669160 (ObpGetObjectSecurity.c)
 *     ObpGrantAccess @ 0x1406DCD48 (ObpGrantAccess.c)
 *     ObpDeleteDirectoryEntry @ 0x1406EBF40 (ObpDeleteDirectoryEntry.c)
 */

__int64 __fastcall ObpInsertOrLocateNamedObject(
        _KPROCESS *BugCheckParameter1,
        char *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        _DWORD *a6,
        PADAPTER_OBJECT *a7)
{
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rdi
  char v13; // bl
  struct _LIST_ENTRY *CurrentSilo; // rax
  int v15; // r8d
  char v16; // cl
  __m128i *v17; // rdx
  struct _DMA_ADAPTER *v18; // rdi
  int ObjectSecurity; // ebx
  __int64 v20; // r9
  bool v21; // zf
  PADAPTER_OBJECT v22; // rdi
  __int64 *v23; // rax
  BOOLEAN v24; // r12
  __int64 v25; // rcx
  char v26; // bl
  _OWORD *v27; // rcx
  __int64 v29; // r9
  int v30; // eax
  PADAPTER_OBJECT v31; // rdx
  void *v32; // rcx
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  int v41; // [rsp+28h] [rbp-D8h]
  BOOLEAN DaclDefaulted; // [rsp+70h] [rbp-90h] BYREF
  BOOLEAN DaclPresent[3]; // [rsp+71h] [rbp-8Fh] BYREF
  WORD Control; // [rsp+74h] [rbp-8Ch] BYREF
  ULONG Revision[2]; // [rsp+78h] [rbp-88h] BYREF
  int v46; // [rsp+80h] [rbp-80h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+88h] [rbp-78h] BYREF
  struct _DMA_ADAPTER *v48; // [rsp+90h] [rbp-70h] BYREF
  PACL Dacl; // [rsp+98h] [rbp-68h] BYREF
  PVOID v50; // [rsp+A0h] [rbp-60h]
  __int64 v51[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v52; // [rsp+B8h] [rbp-48h]
  __int64 v53; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v54; // [rsp+D0h] [rbp-30h]
  PADAPTER_OBJECT *v55; // [rsp+D8h] [rbp-28h]
  _OWORD v56[10]; // [rsp+E0h] [rbp-20h] BYREF

  v50 = a2;
  v55 = a7;
  Control = 0;
  DaclPresent[0] = 0;
  DmaAdapter = 0LL;
  v53 = 0LL;
  *(_OWORD *)v51 = 0LL;
  v52 = 0LL;
  memset(v56, 0, sizeof(v56));
  *a7 = 0LL;
  Dacl = 0LL;
  v11 = (unsigned __int64)(a2 - 48);
  if ( (*(a2 - 22) & 2) != 0 )
    v12 = v11 - ObpInfoMaskToOffset[*(a2 - 22) & 3];
  else
    v12 = 0LL;
  v13 = *(_BYTE *)(v11 + 27);
  *(_QWORD *)Revision = v12;
  CurrentSilo = PsGetCurrentSilo();
  v15 = *a6;
  v16 = BYTE1(v11) ^ *(_BYTE *)(v11 + 24);
  v54 = v11 >> 8;
  v17 = (__m128i *)(v12 + 8);
  v18 = (struct _DMA_ADAPTER *)v50;
  ObjectSecurity = ObpLookupObjectName(
                     *((_QWORD *)a6 + 1),
                     v17,
                     v15,
                     ObTypeIndexTable[(unsigned __int8)(ObHeaderCookie ^ v16)],
                     (v13 & 2) == 0,
                     0LL,
                     *((_QWORD *)a6 + 5),
                     (struct _DMA_ADAPTER *)v50,
                     (__int64)CurrentSilo,
                     a4,
                     (__int64)v51,
                     0LL,
                     &DmaAdapter);
  if ( ObjectSecurity < 0 )
    goto LABEL_45;
  v21 = DmaAdapter == v18;
  v22 = 0LL;
  if ( !v21 )
  {
    if ( BYTE14(v52) )
    {
      v22 = DmaAdapter - 3;
      ObpReferenceNamedObject((__int64)&DmaAdapter[-3]);
    }
    ObpReleaseLookupContext((__int64)v51);
    ObpDecrementHandleCount(BugCheckParameter1, v11);
    if ( (*a6 & 0x80u) == 0 )
    {
      if ( v22 )
        ObpDereferenceNamedObject((__int64)v22);
      ObjectSecurity = -1073741771;
    }
    else
    {
      v30 = *(_DWORD *)(a4 + 24);
      *(_DWORD *)(a4 + 20) = 0;
      v31 = DmaAdapter;
      LOBYTE(v29) = a5;
      *(_DWORD *)(a4 + 16) = v30;
      ObjectSecurity = ObpGrantAccess(1LL, v31, a4, v29, *a6, a3);
      if ( ObjectSecurity < 0 )
      {
        if ( v22 )
          ObpDereferenceNamedObject((__int64)v22);
      }
      else
      {
        ObjectSecurity = ObpIncrementHandleCountEx(1u, a3, BugCheckParameter1, (__int64)DmaAdapter, a5, *a6, 0LL);
        if ( v22 )
          ObpDereferenceNamedObject((__int64)v22);
        if ( ObjectSecurity >= 0 )
          goto LABEL_19;
      }
    }
    HalPutDmaAdapter(DmaAdapter);
    return (unsigned int)ObjectSecurity;
  }
  v23 = *(__int64 **)Revision;
  v24 = 0;
  v48 = 0LL;
  DaclDefaulted = 0;
  v46 = 0;
  v25 = **(_QWORD **)Revision;
  if ( **(_QWORD **)Revision )
  {
    if ( (*(_DWORD *)(v25 + 336) & 8) != 0 || ObpObjectSecurityInheritance )
      v46 = 3;
    LOBYTE(v20) = a5;
    ObjectSecurity = ObpGetObjectSecurity(v25, &v48, &DaclDefaulted, v20);
    if ( ObjectSecurity < 0 )
      goto LABEL_52;
    v22 = v48;
    v24 = DaclDefaulted;
    v23 = *(__int64 **)Revision;
  }
  v26 = 0;
  if ( !*v23 || (*(_DWORD *)(*v23 + 336) & 8) == 0 && !ObpObjectSecurityInheritance )
    goto LABEL_13;
  v32 = *(void **)(a4 + 64);
  if ( !v32 )
    goto LABEL_13;
  Revision[0] = RtlGetDaclSecurityDescriptor(v32, DaclPresent, &Dacl, &DaclDefaulted);
  if ( (Revision[0] & 0x80000000) == 0 )
  {
    Revision[0] = RtlGetControlSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)(a4 + 64), &Control, Revision);
    if ( (Revision[0] & 0x80000000) == 0 )
    {
      if ( !Dacl && (Control & 0x1000) == 0 )
      {
        v33 = *(_OWORD *)(a4 + 16);
        v56[0] = *(_OWORD *)a4;
        v34 = *(_OWORD *)(a4 + 32);
        v56[1] = v33;
        v35 = *(_OWORD *)(a4 + 48);
        v56[2] = v34;
        v36 = *(_OWORD *)(a4 + 64);
        v56[3] = v35;
        v37 = *(_OWORD *)(a4 + 80);
        v56[4] = v36;
        v38 = *(_OWORD *)(a4 + 96);
        v56[5] = v37;
        v39 = *(_OWORD *)(a4 + 128);
        v56[6] = v38;
        v56[7] = *(_OWORD *)(a4 + 112);
        v40 = *(_OWORD *)(a4 + 144);
        v56[8] = v39;
        v56[9] = v40;
        *(_QWORD *)&v56[4] = 0LL;
        v27 = v56;
        goto LABEL_14;
      }
LABEL_13:
      v27 = (_OWORD *)a4;
LABEL_14:
      if ( !*((_QWORD *)v27 + 8) )
      {
        if ( v46 )
          v26 = 1;
      }
      LOBYTE(v41) = v26;
      ObjectSecurity = ObpAssignSecurity(
                         v27,
                         v22,
                         v50,
                         ObTypeIndexTable[(unsigned __int8)(ObHeaderCookie ^ v54 ^ *((char *)v50 - 24))],
                         v46,
                         v41);
      if ( v22 )
      {
        ObReleaseObjectSecurity(v22, v24);
        goto LABEL_17;
      }
      if ( ObjectSecurity >= 0 )
      {
        SeReleaseSecurityDescriptor(*((void **)a6 + 4), *((_BYTE *)a6 + 16), 1);
        *((_QWORD *)a6 + 4) = 0LL;
        *(_QWORD *)(a4 + 64) = 0LL;
LABEL_17:
        if ( ObjectSecurity >= 0 )
        {
          ObpReleaseLookupContext((__int64)v51);
LABEL_19:
          *v55 = DmaAdapter;
          return (unsigned int)ObjectSecurity;
        }
      }
LABEL_52:
      ObpDeleteDirectoryEntry(v51);
      ObpReleaseLookupContext((__int64)v51);
LABEL_45:
      ObpDecrementHandleCount(BugCheckParameter1, v11);
      return (unsigned int)ObjectSecurity;
    }
  }
  if ( v22 )
    ObReleaseObjectSecurity(v22, v24);
  ObpDeleteDirectoryEntry(v51);
  ObpReleaseLookupContext((__int64)v51);
  ObpDecrementHandleCount(BugCheckParameter1, v11);
  return Revision[0];
}
