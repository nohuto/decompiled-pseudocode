/*
 * XREFs of EtwpSavePersistedLogger @ 0x140948E5C
 * Callers:
 *     EtwpSavePersistedLoggersWorker @ 0x14094940C (EtwpSavePersistedLoggersWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     IoAllocateMdl @ 0x140299F00 (IoAllocateMdl.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1403C8C10 (MmMapLockedPagesWithReservedMapping.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwWriteFile @ 0x1403FA680 (ZwWriteFile.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwSetInformationFile @ 0x1403FAA60 (ZwSetInformationFile.c)
 *     memset @ 0x140414300 (memset.c)
 *     MmUnmapReservedMapping @ 0x140531ED0 (MmUnmapReservedMapping.c)
 *     MmAllocateMappingAddressEx @ 0x14060CD40 (MmAllocateMappingAddressEx.c)
 *     EtwpDelayCreate @ 0x1406B73D0 (EtwpDelayCreate.c)
 *     MmFreeMappingAddress @ 0x1407688C0 (MmFreeMappingAddress.c)
 *     EtwpInitializeCompressedWriter @ 0x140948854 (EtwpInitializeCompressedWriter.c)
 *     EtwpQueryPersistedMemory @ 0x140948D70 (EtwpQueryPersistedMemory.c)
 *     EtwpTraceSavePersistedLoggerStop @ 0x14094976C (EtwpTraceSavePersistedLoggerStop.c)
 *     EtwpWriteBufferCompressed @ 0x140949888 (EtwpWriteBufferCompressed.c)
 *     EtwpWriteRemainingCompressedData @ 0x140949A4C (EtwpWriteRemainingCompressedData.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpSavePersistedLogger(unsigned int *a1, __int64 a2)
{
  unsigned int *v3; // rsi
  HANDLE v4; // r14
  int v5; // edi
  unsigned int v6; // r12d
  struct _MDL *v7; // r13
  unsigned __int64 v8; // r8
  __int64 Length; // r15
  int v10; // ebx
  PMDL Mdl; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r9
  int v15; // eax
  struct _MDL *v16; // rcx
  unsigned int v17; // esi
  unsigned int *v18; // r14
  unsigned int v19; // eax
  unsigned int v20; // r14d
  struct _MDL *v21; // r10
  __int64 v22; // r11
  _QWORD *v23; // rdx
  unsigned int v24; // eax
  __int64 v25; // r9
  bool v26; // zf
  unsigned int v27; // eax
  _DWORD *v28; // rax
  _DWORD *v29; // rsi
  unsigned int v30; // eax
  unsigned int v31; // r11d
  __int64 v32; // rbx
  struct _MDL *v33; // r14
  _QWORD *v34; // rdx
  unsigned int v35; // r10d
  unsigned int v36; // eax
  __int64 v37; // r9
  __int64 v38; // rcx
  _DWORD *Buffer; // rax
  void *v40; // rsi
  int v42; // [rsp+50h] [rbp-B0h] BYREF
  char v43[4]; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v44; // [rsp+58h] [rbp-A8h]
  unsigned int v45; // [rsp+5Ch] [rbp-A4h]
  unsigned int v46; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v47; // [rsp+64h] [rbp-9Ch]
  unsigned int *v48; // [rsp+68h] [rbp-98h]
  HANDLE FileHandle; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v50; // [rsp+78h] [rbp-88h] BYREF
  PVOID v51; // [rsp+80h] [rbp-80h] BYREF
  PVOID MappingAddress; // [rsp+88h] [rbp-78h]
  int v53; // [rsp+90h] [rbp-70h]
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v56; // [rsp+B0h] [rbp-50h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v58[8]; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD FileInformation[2]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v60; // [rsp+130h] [rbp+30h]

  v56 = a2;
  v48 = a1;
  ByteOffset.QuadPart = 0LL;
  v3 = a1;
  v50 = 0;
  FileHandle = 0LL;
  v60 = 0LL;
  v42 = 0;
  v46 = 0;
  memset(FileInformation, 0, sizeof(FileInformation));
  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  v7 = 0LL;
  DestinationString = 0LL;
  MappingAddress = 0LL;
  IoStatusBlock = 0LL;
  v51 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  memset(v58, 0, sizeof(v58));
  EtwWrite(EtwpEventTracingProvRegHandle, &ETW_EVENT_SAVE_PERSISTED_LOGGER_START, 0LL, 0, 0LL);
  Length = v3[2];
  v53 = Length;
  if ( !(_DWORD)Length || (Length & 0xFFF) != 0 )
  {
    v10 = -1072037875;
    goto LABEL_59;
  }
  MappingAddress = (PVOID)MmAllocateMappingAddressEx((unsigned int)Length, 0x4B777445u, 0);
  if ( !MappingAddress || (Mdl = IoAllocateMdl(0LL, Length, 0, 0, 0LL), (v7 = Mdl) == 0LL) )
  {
    v10 = -1073741670;
    goto LABEL_59;
  }
  Mdl->MdlFlags |= 2u;
  v10 = EtwpQueryPersistedMemory(v12, a2, &v51, &v50);
  if ( v10 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)v3 + v3[3]));
    v13 = 0LL;
    v14 = 0LL;
    if ( v50 )
    {
      while ( 1 )
      {
        v8 = *((_QWORD *)v51 + v14);
        if ( v8 < 0x10000000000LL )
          break;
        v8 >>= 40;
        v14 = (unsigned int)(v14 + 1);
        v13 += v8;
        if ( (unsigned int)v14 >= v50 )
          goto LABEL_10;
      }
LABEL_25:
      v10 = -1072103376;
      goto LABEL_59;
    }
LABEL_10:
    if ( v13 << 12 != Length * v3[1] )
      goto LABEL_25;
    LOBYTE(v14) = 1;
    v43[0] = 0;
    v15 = EtwpDelayCreate((__int64)&FileHandle, (__int64)&DestinationString, v43, v14, 0, 1);
    v4 = FileHandle;
    v10 = v15;
    if ( v15 < 0 )
      goto LABEL_59;
    LODWORD(v60) = 0x2000;
    ZwSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
    v10 = EtwpInitializeCompressedWriter((__int64)v58, Length, (__int64)v4);
    if ( v10 < 0 )
      goto LABEL_59;
    v16 = v7 + 1;
    v17 = 0;
    v44 = 0;
    v45 = 0;
    if ( !v48[1] )
      goto LABEL_44;
    v18 = v48;
    v19 = (unsigned int)Length >> 12;
    v47 = (unsigned int)Length >> 12;
    while ( 1 )
    {
      if ( v19 )
      {
        v20 = v44;
        v21 = v16;
        v22 = v19;
        do
        {
          v23 = v51;
          v24 = v17 + 1;
          v21->Next = (struct _MDL *)(v17 + (*((_QWORD *)v51 + v20) & 0xFFFFFFFFFFLL));
          v17 = 0;
          v21 = (struct _MDL *)((char *)v21 + 8);
          v25 = v23[v20] >> 40;
          v26 = v24 == v25;
          if ( v24 != v25 )
            v17 = v24;
          v27 = v20 + 1;
          if ( !v26 )
            v27 = v20;
          v20 = v27;
          --v22;
        }
        while ( v22 );
        LODWORD(Length) = v53;
        v18 = v48;
        v44 = v27;
        v45 = v17;
      }
      v28 = MmMapLockedPagesWithReservedMapping(MappingAddress, 0x4B777445u, v7, MmCached);
      v29 = v28;
      if ( *v28 != (_DWORD)Length )
        goto LABEL_24;
      v30 = v28[2] <= *v28 ? v28[2] : v28[1];
      v29[12] = v30;
      if ( v30 > (unsigned int)Length )
        break;
      if ( v30 > 0x48 )
      {
        if ( (_DWORD)Length != v30 )
          memset((char *)v29 + v30, 255, (unsigned int)Length - v30);
        if ( v6 )
          v10 = EtwpWriteBufferCompressed(v58, v29);
        else
          v58[1] += (unsigned int)Length;
      }
      v5 = v42;
LABEL_38:
      MmUnmapReservedMapping(v29, 0x4B777445u, v7);
      if ( v10 < 0 && !v6 )
      {
        v6 = v46;
        v4 = FileHandle;
        v3 = v48;
        goto LABEL_59;
      }
      v17 = v45;
      if ( ++v6 >= v18[1] )
      {
        v4 = FileHandle;
LABEL_44:
        EtwpWriteRemainingCompressedData(v58, &v46, &v42);
        v31 = 0;
        if ( (unsigned int)Length >> 12 )
        {
          v32 = (unsigned int)Length >> 12;
          v33 = v7 + 1;
          do
          {
            v34 = v51;
            v35 = v17 + 1;
            v36 = v31 + 1;
            v33->Next = (struct _MDL *)(v17 + (*((_QWORD *)v51 + v31) & 0xFFFFFFFFFFLL));
            v33 = (struct _MDL *)((char *)v33 + 8);
            v37 = v34[v31] >> 40;
            v38 = v17 + 1;
            if ( v38 != v37 )
              v36 = v31;
            v17 = 0;
            v31 = v36;
            if ( v38 != v37 )
              v17 = v35;
            --v32;
          }
          while ( v32 );
          v4 = FileHandle;
        }
        Buffer = MmMapLockedPagesWithReservedMapping(MappingAddress, 0x4B777445u, v7, MmCached);
        v6 = v46;
        v40 = Buffer;
        v5 = v42;
        Buffer[34] |= 0x4000000u;
        v26 = Buffer[37] == 4;
        Buffer[11] = 3;
        v47 = v6 + 1;
        Buffer[35] = v6 + 1;
        if ( v26 )
          Buffer[93] += v5;
        else
          Buffer[95] += v5;
        v10 = ZwWriteFile(v4, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
        MmUnmapReservedMapping(v40, 0x4B777445u, v7);
        v3 = v48;
        if ( v10 >= 0 )
          v6 = v47;
        else
          LOBYTE(v5) = v5 + 1;
        goto LABEL_59;
      }
      v19 = v47;
      v16 = v7 + 1;
    }
    v5 = v42;
LABEL_24:
    ++v5;
    v10 = -1073741306;
    v42 = v5;
    goto LABEL_38;
  }
LABEL_59:
  if ( v58[4] )
  {
    ExFreePoolWithTag((PVOID)v58[4], 0);
    v58[4] = 0LL;
  }
  if ( v58[5] )
  {
    ExFreePoolWithTag((PVOID)v58[5], 0);
    v58[5] = 0LL;
  }
  if ( v4 )
    ZwClose(v4);
  if ( MappingAddress )
    MmFreeMappingAddress(MappingAddress, 0x4B777445u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v51 )
    ExFreePoolWithTag(v51, 0);
  LOBYTE(v8) = 1;
  KsrFreePersistedMemoryBlock(EtwpKsrGuid, v56, v8);
  EtwpTraceSavePersistedLoggerStop((unsigned int)&DestinationString, Length, v3[1], v6, v5, v10);
  return (unsigned int)v10;
}
