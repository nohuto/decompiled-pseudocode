/*
 * XREFs of ObpInsertOrLocateNamedObject @ 0x140662900
 * Callers:
 *     ObpCreateHandle @ 0x1406F6550 (ObpCreateHandle.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140252E50 (RtlGetDaclSecurityDescriptor.c)
 *     ObpDereferenceNamedObject @ 0x140263FB8 (ObpDereferenceNamedObject.c)
 *     PsGetCurrentSilo @ 0x14027C930 (PsGetCurrentSilo.c)
 *     ObpReleaseLookupContext @ 0x14027EAD0 (ObpReleaseLookupContext.c)
 *     ObpReferenceNamedObject @ 0x1402C0974 (ObpReferenceNamedObject.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     ObpGrantAccess @ 0x1405D97B4 (ObpGrantAccess.c)
 *     ObpDecrementHandleCount @ 0x14062CA04 (ObpDecrementHandleCount.c)
 *     SeReleaseSecurityDescriptor @ 0x14065C750 (SeReleaseSecurityDescriptor.c)
 *     ObReleaseObjectSecurity @ 0x14065F410 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x14065F800 (ObpGetObjectSecurity.c)
 *     ObpAssignSecurity @ 0x140662FAC (ObpAssignSecurity.c)
 *     RtlGetControlSecurityDescriptor @ 0x1406772D0 (RtlGetControlSecurityDescriptor.c)
 *     ObpDeleteDirectoryEntry @ 0x14069C480 (ObpDeleteDirectoryEntry.c)
 *     ObpLookupObjectName @ 0x1406F3F20 (ObpLookupObjectName.c)
 *     ObpIncrementHandleCountEx @ 0x1406F5F60 (ObpIncrementHandleCountEx.c)
 */

__int64 __fastcall ObpInsertOrLocateNamedObject(
        _KPROCESS *BugCheckParameter1,
        char *a2,
        ACCESS_MASK *a3,
        __int64 a4,
        char a5,
        __int64 a6,
        PADAPTER_OBJECT *a7)
{
  unsigned __int64 v11; // r14
  __int64 *v12; // rdi
  char v13; // bl
  struct _LIST_ENTRY *CurrentSilo; // rax
  struct _DMA_ADAPTER *v15; // rdi
  int ObjectSecurity; // ebx
  bool v17; // zf
  PADAPTER_OBJECT v18; // rdi
  __int64 *v19; // rax
  BOOLEAN v20; // r12
  __int64 v21; // rcx
  char v22; // bl
  _OWORD *v23; // rcx
  __int64 v25; // r9
  int v26; // eax
  PADAPTER_OBJECT v27; // rdx
  void *v28; // rcx
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int64 v37; // [rsp+20h] [rbp-E0h]
  BOOLEAN DaclDefaulted; // [rsp+70h] [rbp-90h] BYREF
  BOOLEAN DaclPresent[3]; // [rsp+71h] [rbp-8Fh] BYREF
  __int16 v40; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 *v41; // [rsp+78h] [rbp-88h] BYREF
  int v42; // [rsp+80h] [rbp-80h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+88h] [rbp-78h] BYREF
  struct _DMA_ADAPTER *v44; // [rsp+90h] [rbp-70h] BYREF
  PACL Dacl; // [rsp+98h] [rbp-68h] BYREF
  PVOID Object; // [rsp+A0h] [rbp-60h]
  __int64 v47[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v48; // [rsp+B8h] [rbp-48h]
  __int64 v49; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v50; // [rsp+D0h] [rbp-30h]
  PADAPTER_OBJECT *v51; // [rsp+D8h] [rbp-28h]
  _OWORD v52[10]; // [rsp+E0h] [rbp-20h] BYREF

  Object = a2;
  v51 = a7;
  v40 = 0;
  DaclPresent[0] = 0;
  DmaAdapter = 0LL;
  v49 = 0LL;
  *(_OWORD *)v47 = 0LL;
  v48 = 0LL;
  memset(v52, 0, sizeof(v52));
  *a7 = 0LL;
  Dacl = 0LL;
  v11 = (unsigned __int64)(a2 - 48);
  if ( (*(a2 - 22) & 2) != 0 )
    v12 = (__int64 *)(v11 - ObpInfoMaskToOffset[*(a2 - 22) & 3]);
  else
    v12 = 0LL;
  v13 = *(_BYTE *)(v11 + 27);
  v41 = v12;
  CurrentSilo = PsGetCurrentSilo();
  v50 = v11 >> 8;
  v15 = (struct _DMA_ADAPTER *)Object;
  ObjectSecurity = ObpLookupObjectName(
                     *(_QWORD *)(a6 + 8),
                     (v13 & 2) == 0,
                     0LL,
                     *(_QWORD *)(a6 + 40),
                     Object,
                     (__int64)CurrentSilo,
                     a4,
                     (__int64)v47,
                     0LL,
                     (__int64)&DmaAdapter);
  if ( ObjectSecurity < 0 )
    goto LABEL_45;
  v17 = DmaAdapter == v15;
  v18 = 0LL;
  if ( !v17 )
  {
    if ( BYTE14(v48) )
    {
      v18 = DmaAdapter - 3;
      ObpReferenceNamedObject((__int64)&DmaAdapter[-3]);
    }
    ObpReleaseLookupContext((__int64)v47);
    ObpDecrementHandleCount(BugCheckParameter1, v11);
    if ( (*(_DWORD *)a6 & 0x80u) == 0 )
    {
      if ( v18 )
        ObpDereferenceNamedObject((__int64)v18);
      ObjectSecurity = -1073741771;
    }
    else
    {
      v26 = *(_DWORD *)(a4 + 24);
      *(_DWORD *)(a4 + 20) = 0;
      v27 = DmaAdapter;
      LOBYTE(v25) = a5;
      *(_DWORD *)(a4 + 16) = v26;
      LODWORD(v37) = *(_DWORD *)a6;
      ObjectSecurity = ObpGrantAccess(1, v27, (struct _ACCESS_STATE *)a4, v25, v37, a3);
      if ( ObjectSecurity < 0 )
      {
        if ( v18 )
          ObpDereferenceNamedObject((__int64)v18);
      }
      else
      {
        ObjectSecurity = ObpIncrementHandleCountEx(
                           1,
                           (_DWORD)a3,
                           (_DWORD)BugCheckParameter1,
                           (_DWORD)DmaAdapter,
                           a5,
                           *(_DWORD *)a6,
                           0LL);
        if ( v18 )
          ObpDereferenceNamedObject((__int64)v18);
        if ( ObjectSecurity >= 0 )
          goto LABEL_19;
      }
    }
    HalPutDmaAdapter(DmaAdapter);
    return (unsigned int)ObjectSecurity;
  }
  v19 = v41;
  v20 = 0;
  v44 = 0LL;
  DaclDefaulted = 0;
  v42 = 0;
  v21 = *v41;
  if ( *v41 )
  {
    if ( (*(_DWORD *)(v21 + 336) & 8) != 0 || ObpObjectSecurityInheritance )
      v42 = 3;
    ObjectSecurity = ObpGetObjectSecurity(v21, (PVOID *)&v44, &DaclDefaulted, a5);
    if ( ObjectSecurity < 0 )
      goto LABEL_52;
    v18 = v44;
    v20 = DaclDefaulted;
    v19 = v41;
  }
  v22 = 0;
  if ( !*v19 || (*(_DWORD *)(*v19 + 336) & 8) == 0 && !ObpObjectSecurityInheritance )
    goto LABEL_13;
  v28 = *(void **)(a4 + 64);
  if ( !v28 )
    goto LABEL_13;
  LODWORD(v41) = RtlGetDaclSecurityDescriptor(v28, DaclPresent, &Dacl, &DaclDefaulted);
  if ( (int)v41 >= 0 )
  {
    LODWORD(v41) = RtlGetControlSecurityDescriptor(*(_QWORD *)(a4 + 64), &v40, &v41);
    if ( (int)v41 >= 0 )
    {
      if ( !Dacl && (v40 & 0x1000) == 0 )
      {
        v29 = *(_OWORD *)(a4 + 16);
        v52[0] = *(_OWORD *)a4;
        v30 = *(_OWORD *)(a4 + 32);
        v52[1] = v29;
        v31 = *(_OWORD *)(a4 + 48);
        v52[2] = v30;
        v32 = *(_OWORD *)(a4 + 64);
        v52[3] = v31;
        v33 = *(_OWORD *)(a4 + 80);
        v52[4] = v32;
        v34 = *(_OWORD *)(a4 + 96);
        v52[5] = v33;
        v35 = *(_OWORD *)(a4 + 128);
        v52[6] = v34;
        v52[7] = *(_OWORD *)(a4 + 112);
        v36 = *(_OWORD *)(a4 + 144);
        v52[8] = v35;
        v52[9] = v36;
        *(_QWORD *)&v52[4] = 0LL;
        v23 = v52;
        goto LABEL_14;
      }
LABEL_13:
      v23 = (_OWORD *)a4;
LABEL_14:
      if ( !*((_QWORD *)v23 + 8) )
      {
        if ( v42 )
          v22 = 1;
      }
      ObjectSecurity = ObpAssignSecurity(
                         (_DWORD)v23,
                         (_DWORD)v18,
                         (_DWORD)Object,
                         ObTypeIndexTable[(unsigned __int8)(ObHeaderCookie ^ v50 ^ *((char *)Object - 24))],
                         v42,
                         v22);
      if ( v18 )
      {
        ObReleaseObjectSecurity(v18, v20);
        goto LABEL_17;
      }
      if ( ObjectSecurity >= 0 )
      {
        SeReleaseSecurityDescriptor(*(void **)(a6 + 32), *(_BYTE *)(a6 + 16), 1);
        *(_QWORD *)(a6 + 32) = 0LL;
        *(_QWORD *)(a4 + 64) = 0LL;
LABEL_17:
        if ( ObjectSecurity >= 0 )
        {
          ObpReleaseLookupContext((__int64)v47);
LABEL_19:
          *v51 = DmaAdapter;
          return (unsigned int)ObjectSecurity;
        }
      }
LABEL_52:
      ObpDeleteDirectoryEntry(v47);
      ObpReleaseLookupContext((__int64)v47);
LABEL_45:
      ObpDecrementHandleCount(BugCheckParameter1, v11);
      return (unsigned int)ObjectSecurity;
    }
  }
  if ( v18 )
    ObReleaseObjectSecurity(v18, v20);
  ObpDeleteDirectoryEntry(v47);
  ObpReleaseLookupContext((__int64)v47);
  ObpDecrementHandleCount(BugCheckParameter1, v11);
  return (unsigned int)v41;
}
