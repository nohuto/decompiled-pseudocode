/*
 * XREFs of ObCreateObjectTypeEx @ 0x14077E640
 * Callers:
 *     ObCreateObjectType @ 0x14077E620 (ObCreateObjectType.c)
 *     EtwpInitializePrivateSessionDemuxObject @ 0x1407848C0 (EtwpInitializePrivateSessionDemuxObject.c)
 *     CmpInitializeLightWeightTransactionType @ 0x14078CCF4 (CmpInitializeLightWeightTransactionType.c)
 *     VRegSetup @ 0x1407B51D0 (VRegSetup.c)
 *     AlpcpInitSystem @ 0x1407B838C (AlpcpInitSystem.c)
 *     TtmInit @ 0x1407BCBE8 (TtmInit.c)
 *     IoCreateObjectTypes @ 0x140A39C54 (IoCreateObjectTypes.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140254130 (RtlCopyUnicodeString.c)
 *     ObpReleaseLookupContext @ 0x14025B298 (ObpReleaseLookupContext.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObpLockDirectoryExclusive @ 0x1402FCD98 (ObpLockDirectoryExclusive.c)
 *     DbgPrintEx @ 0x14037C640 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ObpAllocateObject @ 0x1405FB670 (ObpAllocateObject.c)
 *     RtlUnicodeStringToAnsiString @ 0x14061B5F0 (RtlUnicodeStringToAnsiString.c)
 *     ObpLookupDirectoryEntryEx @ 0x1406BC4C8 (ObpLookupDirectoryEntryEx.c)
 *     ObpInsertDirectoryEntry @ 0x1406C8FC4 (ObpInsertDirectoryEntry.c)
 *     RtlxUnicodeStringToAnsiSize @ 0x140746570 (RtlxUnicodeStringToAnsiSize.c)
 *     ObpInitObjectTypeSD @ 0x14077EC4C (ObpInitObjectTypeSD.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ObCreateObjectTypeEx(
        PCUNICODE_STRING SourceString,
        __int128 *a2,
        __int64 a3,
        __int16 *a4,
        __int64 *a5)
{
  __int16 *v8; // r13
  unsigned int Length; // ecx
  unsigned __int8 v10; // r12
  char v11; // al
  unsigned int v12; // ecx
  wchar_t *Buffer; // rdx
  wchar_t v14; // ax
  PADAPTER_OBJECT v15; // r8
  UNICODE_STRING v16; // xmm6
  int inited; // esi
  size_t v18; // rax
  __int64 v19; // rbx
  bool v20; // zf
  char v21; // r13
  unsigned __int16 v22; // r15
  PVOID PoolWithTag; // rax
  PVOID v24; // r15
  _DWORD *v25; // r8
  unsigned int v26; // ecx
  int v27; // ecx
  struct _KTHREAD *CurrentThread; // rax
  _DMA_OPERATIONS *v29; // rax
  PADAPTER_OBJECT v30; // rcx
  _DMA_OPERATIONS *DmaOperations; // rdx
  unsigned int v32; // edi
  PADAPTER_OBJECT v33; // rdx
  unsigned int DmaOperations_high; // eax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // ecx
  __int64 v39; // rdx
  unsigned int v41; // r9d
  _BYTE *v42; // rdx
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  int v50; // [rsp+48h] [rbp-C0h]
  size_t Size[2]; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD *DestinationString; // [rsp+68h] [rbp-A0h]
  UNICODE_STRING DestinationString_8; // [rsp+70h] [rbp-98h] BYREF
  PVOID P; // [rsp+80h] [rbp-88h]
  __int64 v56[2]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v57; // [rsp+98h] [rbp-70h]
  __int64 v58; // [rsp+A8h] [rbp-60h]
  __int64 *v59; // [rsp+B0h] [rbp-58h]
  int v60[16]; // [rsp+B8h] [rbp-50h] BYREF
  _OWORD v61[14]; // [rsp+F8h] [rbp-10h] BYREF

  v59 = a5;
  v8 = a4;
  memset(v61, 0, 0xD8uLL);
  v58 = 0LL;
  *(_OWORD *)v56 = 0LL;
  Size[0] = 0LL;
  v57 = 0LL;
  memset(v60, 0, sizeof(v60));
  DestinationString_8 = 0LL;
  if ( !SourceString
    || (Length = SourceString->Length, !(_WORD)Length)
    || (Length & 1) != 0
    || !a2
    || (*((_DWORD *)a2 + 2) & 0xFFFEE00D) != 0
    || *(_WORD *)a2 != 120
    || (v10 = 2, *((_BYTE *)a2 + 3) >= 2u)
    || (v11 = *((_BYTE *)a2 + 2), (v11 & 0x10) != 0) && !*((_QWORD *)a2 + 7) && !*((_QWORD *)a2 + 8)
    || (v11 & 4) == 0 && (*((_DWORD *)a2 + 9) & 0xFFFFFDFF) != 0 && ((unsigned __int8)v8 & 1) == 0 )
  {
    DbgPrintEx(0, 0, "Error creating object type\n");
    __debugbreak();
  }
  v12 = Length >> 1;
  Buffer = SourceString->Buffer;
  v50 = *((_DWORD *)a2 + 9);
  if ( !v12 )
  {
LABEL_13:
    LODWORD(v58) = -60876;
    if ( ObpTypeDirectoryObject
      && (ObpLockDirectoryExclusive((__int64)v56, ObpTypeDirectoryObject),
          ObpLookupDirectoryEntryEx(ObpTypeDirectoryObject, &SourceString->Length, 64, 0LL, 0, (__int64)v56)) )
    {
      v32 = -1073741771;
    }
    else
    {
      DestinationString_8.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, SourceString->MaximumLength, 0x6D4E624Fu);
      if ( DestinationString_8.Buffer )
      {
        DestinationString_8.MaximumLength = SourceString->MaximumLength;
        RtlCopyUnicodeString(&DestinationString_8, SourceString);
        v15 = ObpTypeObjectType;
        v16 = DestinationString_8;
        if ( !ObpTypeObjectType )
        {
          v43 = *a2;
          BYTE8(v61[2]) = 2;
          v15 = (PADAPTER_OBJECT)v61;
          v44 = a2[1];
          LODWORD(v61[12]) = 1416258127;
          v61[4] = v43;
          v45 = a2[2];
          v61[5] = v44;
          v46 = a2[3];
          v61[6] = v45;
          v47 = a2[4];
          v61[7] = v46;
          v48 = a2[5];
          v61[8] = v47;
          v49 = a2[6];
          v61[9] = v48;
          *(_QWORD *)&v48 = *((_QWORD *)a2 + 14);
          v61[10] = v49;
          *(_QWORD *)&v61[11] = v48;
          v61[1] = DestinationString_8;
        }
        v60[0] = 16;
        v60[5] = (int)v15[6].DmaOperations;
        v60[6] = HIDWORD(v15[6].DmaOperations);
        v60[7] = 2048;
        inited = ObpAllocateObject(v60, 0, (__int64)v15, &DestinationString_8, 216, Size, 0LL);
        if ( inited < 0 )
        {
          ObpReleaseLookupContext((__int64)v56);
          ExFreePoolWithTag(DestinationString_8.Buffer, 0);
        }
        else
        {
          v18 = Size[0];
          *(_QWORD *)(Size[0] + 32) = 0LL;
          v19 = v18 + 48;
          v20 = (_DWORD)InitializationPhase == 0;
          *(UNICODE_STRING *)(v18 + 64) = v16;
          if ( v20 || (inited = ObpInitObjectTypeSD(v18 + 48, a3), inited >= 0) )
          {
            *(_OWORD *)(v19 + 44) = 0LL;
            *(_DWORD *)(v19 + 60) = 0;
            if ( ObpTypeObjectType )
            {
              v21 = 1;
              v22 = ((RtlxUnicodeStringToAnsiSize(SourceString) + 2) & 0xFFFC) + 1;
              Size[1] = v22;
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, v22, 0x6E54624Fu);
              P = PoolWithTag;
              if ( !PoolWithTag )
                goto LABEL_75;
              memset(PoolWithTag, 0, Size[1]);
              Size[1] = 0LL;
              WORD1(Size[1]) = v22;
              v24 = P;
              DestinationString = P;
              if ( RtlUnicodeStringToAnsiString((PANSI_STRING)&Size[1], SourceString, 0) >= 0 )
              {
                v25 = DestinationString;
                v26 = SourceString->Length >> 1;
                if ( v26 < 4 )
                {
                  v41 = WORD1(Size[1]);
                  v42 = (char *)DestinationString + v26;
                  do
                  {
                    if ( v26 < v41 )
                      *v42 = 32;
                    ++v26;
                    ++v42;
                  }
                  while ( v26 < 4 );
                }
                v21 = 0;
                *(_DWORD *)(v19 + 192) = *v25;
              }
              ExFreePoolWithTag(v24, 0);
              if ( v21 )
              {
LABEL_75:
                v8 = a4;
                if ( SourceString->Length < 4u )
                  *(_DWORD *)(v19 + 192) = 1063936591;
                else
                  *(_DWORD *)(v19 + 192) = *(_DWORD *)SourceString->Buffer;
              }
              else
              {
                v8 = a4;
              }
            }
            else
            {
              ObpTypeObjectType = (PADAPTER_OBJECT)v19;
              *(_DWORD *)(v19 + 44) = 1;
              *(_DWORD *)(v19 + 192) = 1416258127;
            }
            *(_OWORD *)(v19 + 64) = *a2;
            *(_OWORD *)(v19 + 80) = a2[1];
            *(_OWORD *)(v19 + 96) = a2[2];
            *(_OWORD *)(v19 + 112) = a2[3];
            *(_OWORD *)(v19 + 128) = a2[4];
            *(_OWORD *)(v19 + 144) = a2[5];
            *(_OWORD *)(v19 + 160) = a2[6];
            *(_QWORD *)(v19 + 176) = *((_QWORD *)a2 + 14);
            *(_DWORD *)(v19 + 100) = v50;
            if ( (NtGlobalFlag & 0x4000) != 0 )
              *(_BYTE *)(v19 + 66) |= 0x20u;
            v27 = (*((_BYTE *)a2 + 2) & 0x10) != 0 ? 104 : 88;
            if ( (v50 & 1) != 0 )
              *(_DWORD *)(v19 + 104) += v27;
            else
              *(_DWORD *)(v19 + 108) += v27;
            if ( !*((_QWORD *)a2 + 11) )
              *(_QWORD *)(v19 + 152) = SeDefaultObjectMethod;
            *(_QWORD *)(v19 + 184) = 0LL;
            *(_QWORD *)(v19 + 8) = v19;
            *(_QWORD *)v19 = v19;
            *(_QWORD *)(v19 + 208) = v19 + 200;
            *(_QWORD *)(v19 + 200) = v19 + 200;
            if ( (*(_BYTE *)(v19 + 66) & 4) != 0 )
            {
              *(_DWORD *)(v19 + 92) |= 0x100000u;
              v8 = &ObpDefaultObject;
            }
            *(_QWORD *)(v19 + 32) = v8;
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->SpecialApcDisable;
            ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpTypeObjectType[11].DmaOperations, 0LL);
            if ( (*(_BYTE *)(Size[0] + 26) & 1) != 0 )
              v29 = (_DMA_OPERATIONS *)(Size[0] - 32);
            else
              v29 = 0LL;
            v30 = ObpTypeObjectType;
            DmaOperations = ObpTypeObjectType->DmaOperations;
            if ( *(PADAPTER_OBJECT *)&DmaOperations->Size != ObpTypeObjectType )
              __fastfail(3u);
            *(_QWORD *)&v29->Size = ObpTypeObjectType;
            v29->PutDmaAdapter = (void (__fastcall *)(_DMA_ADAPTER *))DmaOperations;
            *(_QWORD *)&DmaOperations->Size = v29;
            v32 = -1073741670;
            v30->DmaOperations = v29;
            v33 = ObpTypeObjectType;
            DmaOperations_high = HIDWORD(ObpTypeObjectType[2].DmaOperations);
            if ( DmaOperations_high >= 0x100 )
              inited = -1073741670;
            else
              ObpObjectTypes[DmaOperations_high - 1] = v19;
            ExReleasePushLockEx((ULONG_PTR)&v33[11].DmaOperations, 0LL);
            KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v35, v36, v37);
            if ( (PADAPTER_OBJECT)v19 != ObpTypeObjectType )
            {
              if ( inited < 0 )
              {
LABEL_69:
                v32 = inited;
LABEL_70:
                ObpReleaseLookupContext((__int64)v56);
                HalPutDmaAdapter((PADAPTER_OBJECT)v19);
                return v32;
              }
              v38 = 3;
              v39 = 3LL;
              while ( _InterlockedCompareExchange64(&ObTypeIndexTable[v39], 1LL, 0LL) )
              {
                v39 = ++v38;
                if ( (unsigned __int64)v38 >= 0x100 )
                {
                  inited = -1073741823;
                  goto LABEL_69;
                }
              }
              v10 = v38;
            }
            ObTypeIndexTable[v10] = v19;
            *(_BYTE *)(v19 + 40) = v10;
            if ( !ObpTypeDirectoryObject
              || ObpInsertDirectoryEntry((char *)ObpTypeDirectoryObject, (char *)v19, (__int64)v56) )
            {
              ObpReleaseLookupContext((__int64)v56);
              *v59 = v19;
              return 0LL;
            }
            ObTypeIndexTable[v10] = 0LL;
            goto LABEL_70;
          }
          ObpReleaseLookupContext((__int64)v56);
          HalPutDmaAdapter((PADAPTER_OBJECT)v19);
        }
        return (unsigned int)inited;
      }
      v32 = -1073741670;
    }
    ObpReleaseLookupContext((__int64)v56);
    return v32;
  }
  while ( 1 )
  {
    v14 = *Buffer;
    --v12;
    ++Buffer;
    if ( v14 == 92 )
      return 3221225523LL;
    if ( !v12 )
      goto LABEL_13;
  }
}
