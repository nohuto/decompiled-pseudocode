/*
 * XREFs of ObpInsertOrLocateNamedObject @ 0x140657720
 * Callers:
 *     ObpCreateHandle @ 0x14070D930 (ObpCreateHandle.c)
 * Callees:
 *     ObpReferenceNamedObject @ 0x14023EDE8 (ObpReferenceNamedObject.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PsGetCurrentSilo @ 0x14026A8D0 (PsGetCurrentSilo.c)
 *     ObpReleaseLookupContext @ 0x14026CA70 (ObpReleaseLookupContext.c)
 *     ObpDereferenceNamedObject @ 0x14026D018 (ObpDereferenceNamedObject.c)
 *     RtlGetDaclSecurityDescriptor @ 0x140285CC0 (RtlGetDaclSecurityDescriptor.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     ObpGrantAccess @ 0x1405EA53C (ObpGrantAccess.c)
 *     ObpDeleteDirectoryEntry @ 0x1405FB640 (ObpDeleteDirectoryEntry.c)
 *     SeReleaseSecurityDescriptor @ 0x140651570 (SeReleaseSecurityDescriptor.c)
 *     ObReleaseObjectSecurity @ 0x140654230 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x140654620 (ObpGetObjectSecurity.c)
 *     ObpAssignSecurity @ 0x140657DCC (ObpAssignSecurity.c)
 *     ObpDecrementHandleCount @ 0x140663B94 (ObpDecrementHandleCount.c)
 *     RtlGetControlSecurityDescriptor @ 0x14066A9A0 (RtlGetControlSecurityDescriptor.c)
 *     ObpLookupObjectName @ 0x14070B300 (ObpLookupObjectName.c)
 *     ObpIncrementHandleCountEx @ 0x14070D340 (ObpIncrementHandleCountEx.c)
 */

__int64 __fastcall ObpInsertOrLocateNamedObject(
        ULONG_PTR BugCheckParameter1,
        char *a2,
        ACCESS_MASK *a3,
        __int64 a4,
        char a5,
        __int64 a6,
        PADAPTER_OBJECT *a7)
{
  char *v11; // r14
  char *v12; // rdi
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
  int v38; // [rsp+28h] [rbp-D8h]
  BOOLEAN DaclDefaulted; // [rsp+70h] [rbp-90h] BYREF
  BOOLEAN DaclPresent[3]; // [rsp+71h] [rbp-8Fh] BYREF
  WORD Control; // [rsp+74h] [rbp-8Ch] BYREF
  ULONG Revision[2]; // [rsp+78h] [rbp-88h] BYREF
  int v43; // [rsp+80h] [rbp-80h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+88h] [rbp-78h] BYREF
  struct _DMA_ADAPTER *v45; // [rsp+90h] [rbp-70h] BYREF
  PACL Dacl; // [rsp+98h] [rbp-68h] BYREF
  PVOID Object; // [rsp+A0h] [rbp-60h]
  __int64 v48[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v49; // [rsp+B8h] [rbp-48h]
  __int64 v50; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v51; // [rsp+D0h] [rbp-30h]
  PADAPTER_OBJECT *v52; // [rsp+D8h] [rbp-28h]
  _OWORD v53[10]; // [rsp+E0h] [rbp-20h] BYREF

  Object = a2;
  v52 = a7;
  Control = 0;
  DaclPresent[0] = 0;
  DmaAdapter = 0LL;
  v50 = 0LL;
  *(_OWORD *)v48 = 0LL;
  v49 = 0LL;
  memset(v53, 0, sizeof(v53));
  *a7 = 0LL;
  Dacl = 0LL;
  v11 = a2 - 48;
  if ( (*(a2 - 22) & 2) != 0 )
    v12 = &v11[-ObpInfoMaskToOffset[*(a2 - 22) & 3]];
  else
    v12 = 0LL;
  v13 = v11[27];
  *(_QWORD *)Revision = v12;
  CurrentSilo = PsGetCurrentSilo();
  v51 = (unsigned __int64)v11 >> 8;
  v15 = (struct _DMA_ADAPTER *)Object;
  ObjectSecurity = ObpLookupObjectName(
                     *(_QWORD *)(a6 + 8),
                     (v13 & 2) == 0,
                     0LL,
                     *(_QWORD *)(a6 + 40),
                     Object,
                     (__int64)CurrentSilo,
                     a4,
                     (__int64)v48,
                     0LL,
                     (__int64)&DmaAdapter);
  if ( ObjectSecurity < 0 )
    goto LABEL_45;
  v17 = DmaAdapter == v15;
  v18 = 0LL;
  if ( !v17 )
  {
    if ( BYTE14(v49) )
    {
      v18 = DmaAdapter - 3;
      ObpReferenceNamedObject((__int64)&DmaAdapter[-3]);
    }
    ObpReleaseLookupContext((__int64)v48);
    ObpDecrementHandleCount(BugCheckParameter1);
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
                           BugCheckParameter1,
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
  v19 = *(__int64 **)Revision;
  v20 = 0;
  v45 = 0LL;
  DaclDefaulted = 0;
  v43 = 0;
  v21 = **(_QWORD **)Revision;
  if ( **(_QWORD **)Revision )
  {
    if ( (*(_DWORD *)(v21 + 336) & 8) != 0 || ObpObjectSecurityInheritance )
      v43 = 3;
    ObjectSecurity = ObpGetObjectSecurity(v21, (PVOID *)&v45, &DaclDefaulted, a5);
    if ( ObjectSecurity < 0 )
      goto LABEL_52;
    v18 = v45;
    v20 = DaclDefaulted;
    v19 = *(__int64 **)Revision;
  }
  v22 = 0;
  if ( !*v19 || (*(_DWORD *)(*v19 + 336) & 8) == 0 && !ObpObjectSecurityInheritance )
    goto LABEL_13;
  v28 = *(void **)(a4 + 64);
  if ( !v28 )
    goto LABEL_13;
  Revision[0] = RtlGetDaclSecurityDescriptor(v28, DaclPresent, &Dacl, &DaclDefaulted);
  if ( (Revision[0] & 0x80000000) == 0 )
  {
    Revision[0] = RtlGetControlSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)(a4 + 64), &Control, Revision);
    if ( (Revision[0] & 0x80000000) == 0 )
    {
      if ( !Dacl && (Control & 0x1000) == 0 )
      {
        v29 = *(_OWORD *)(a4 + 16);
        v53[0] = *(_OWORD *)a4;
        v30 = *(_OWORD *)(a4 + 32);
        v53[1] = v29;
        v31 = *(_OWORD *)(a4 + 48);
        v53[2] = v30;
        v32 = *(_OWORD *)(a4 + 64);
        v53[3] = v31;
        v33 = *(_OWORD *)(a4 + 80);
        v53[4] = v32;
        v34 = *(_OWORD *)(a4 + 96);
        v53[5] = v33;
        v35 = *(_OWORD *)(a4 + 128);
        v53[6] = v34;
        v53[7] = *(_OWORD *)(a4 + 112);
        v36 = *(_OWORD *)(a4 + 144);
        v53[8] = v35;
        v53[9] = v36;
        *(_QWORD *)&v53[4] = 0LL;
        v23 = v53;
        goto LABEL_14;
      }
LABEL_13:
      v23 = (_OWORD *)a4;
LABEL_14:
      if ( !*((_QWORD *)v23 + 8) )
      {
        if ( v43 )
          v22 = 1;
      }
      LOBYTE(v38) = v22;
      ObjectSecurity = ObpAssignSecurity(
                         v23,
                         v18,
                         Object,
                         ObTypeIndexTable[(unsigned __int8)(ObHeaderCookie ^ v51 ^ *((char *)Object - 24))],
                         v43,
                         v38);
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
          ObpReleaseLookupContext((__int64)v48);
LABEL_19:
          *v52 = DmaAdapter;
          return (unsigned int)ObjectSecurity;
        }
      }
LABEL_52:
      ObpDeleteDirectoryEntry((__int64)v48);
      ObpReleaseLookupContext((__int64)v48);
LABEL_45:
      ObpDecrementHandleCount(BugCheckParameter1);
      return (unsigned int)ObjectSecurity;
    }
  }
  if ( v18 )
    ObReleaseObjectSecurity(v18, v20);
  ObpDeleteDirectoryEntry((__int64)v48);
  ObpReleaseLookupContext((__int64)v48);
  ObpDecrementHandleCount(BugCheckParameter1);
  return Revision[0];
}
