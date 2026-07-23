/*
 * XREFs of ObCreateObjectTypeEx @ 0x140795AF0
 * Callers:
 *     ObCreateObjectType @ 0x140795AD0 (ObCreateObjectType.c)
 *     CmpInitializeLightWeightTransactionType @ 0x1407A5834 (CmpInitializeLightWeightTransactionType.c)
 *     VRegSetup @ 0x1407CB1E0 (VRegSetup.c)
 *     AlpcpInitSystem @ 0x1407CE1BC (AlpcpInitSystem.c)
 *     TtmInit @ 0x1407D2B48 (TtmInit.c)
 *     EtwpInitializePrivateSessionDemuxObject @ 0x1407D390C (EtwpInitializePrivateSessionDemuxObject.c)
 *     IoCreateObjectTypes @ 0x140A3E6D8 (IoCreateObjectTypes.c)
 * Callees:
 *     ObpLockDirectoryExclusive @ 0x140229730 (ObpLockDirectoryExclusive.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObpReleaseLookupContext @ 0x14026CA70 (ObpReleaseLookupContext.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     RtlCopyUnicodeString @ 0x14035E210 (RtlCopyUnicodeString.c)
 *     DbgPrintEx @ 0x14037F370 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     ObpInsertDirectoryEntry @ 0x1405FA0B4 (ObpInsertDirectoryEntry.c)
 *     RtlUnicodeStringToAnsiString @ 0x1406DD260 (RtlUnicodeStringToAnsiString.c)
 *     ObpLookupDirectoryEntryEx @ 0x1406F1554 (ObpLookupDirectoryEntryEx.c)
 *     ObpAllocateObject @ 0x140716610 (ObpAllocateObject.c)
 *     RtlxUnicodeStringToAnsiSize @ 0x14075DD50 (RtlxUnicodeStringToAnsiSize.c)
 *     ObpInitObjectTypeSD @ 0x1407960FC (ObpInitObjectTypeSD.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  int Object; // esi
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
  int v35; // ecx
  __int64 v36; // rdx
  unsigned int v38; // r9d
  _BYTE *v39; // rdx
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  int v47; // [rsp+48h] [rbp-C0h]
  size_t Size[2]; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD *DestinationString; // [rsp+68h] [rbp-A0h]
  UNICODE_STRING DestinationString_8; // [rsp+70h] [rbp-98h] BYREF
  PVOID P; // [rsp+80h] [rbp-88h]
  __int64 v53[2]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v54; // [rsp+98h] [rbp-70h]
  __int64 v55; // [rsp+A8h] [rbp-60h]
  __int64 *v56; // [rsp+B0h] [rbp-58h]
  int v57[16]; // [rsp+B8h] [rbp-50h] BYREF
  _OWORD v58[14]; // [rsp+F8h] [rbp-10h] BYREF

  v56 = a5;
  v8 = a4;
  memset(v58, 0, 0xD8uLL);
  v55 = 0LL;
  *(_OWORD *)v53 = 0LL;
  Size[0] = 0LL;
  v54 = 0LL;
  memset(v57, 0, sizeof(v57));
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
  v47 = *((_DWORD *)a2 + 9);
  if ( !v12 )
  {
LABEL_13:
    LODWORD(v55) = -60876;
    if ( ObpTypeDirectoryObject
      && (ObpLockDirectoryExclusive((__int64)v53, ObpTypeDirectoryObject),
          ObpLookupDirectoryEntryEx(ObpTypeDirectoryObject, &SourceString->Length, 64, 0LL, 0, (__int64)v53)) )
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
          v40 = *a2;
          BYTE8(v58[2]) = 2;
          v15 = (PADAPTER_OBJECT)v58;
          v41 = a2[1];
          LODWORD(v58[12]) = 1416258127;
          v58[4] = v40;
          v42 = a2[2];
          v58[5] = v41;
          v43 = a2[3];
          v58[6] = v42;
          v44 = a2[4];
          v58[7] = v43;
          v45 = a2[5];
          v58[8] = v44;
          v46 = a2[6];
          v58[9] = v45;
          *(_QWORD *)&v45 = *((_QWORD *)a2 + 14);
          v58[10] = v46;
          *(_QWORD *)&v58[11] = v45;
          v58[1] = DestinationString_8;
        }
        v57[0] = 16;
        v57[5] = (int)v15[6].DmaOperations;
        v57[6] = HIDWORD(v15[6].DmaOperations);
        v57[7] = 2048;
        Object = ObpAllocateObject(v57, 0, (__int64)v15, (__int128 *)&DestinationString_8, 216, (char **)Size, 0LL);
        if ( Object < 0 )
        {
          ObpReleaseLookupContext((__int64)v53);
          ExFreePoolWithTag(DestinationString_8.Buffer, 0);
        }
        else
        {
          v18 = Size[0];
          *(_QWORD *)(Size[0] + 32) = 0LL;
          v19 = v18 + 48;
          v20 = (_DWORD)InitializationPhase == 0;
          *(UNICODE_STRING *)(v18 + 64) = v16;
          if ( v20 || (Object = ObpInitObjectTypeSD(v18 + 48, a3), Object >= 0) )
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
                  v38 = WORD1(Size[1]);
                  v39 = (char *)DestinationString + v26;
                  do
                  {
                    if ( v26 < v38 )
                      *v39 = 32;
                    ++v26;
                    ++v39;
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
            *(_DWORD *)(v19 + 100) = v47;
            if ( (NtGlobalFlag & 0x4000) != 0 )
              *(_BYTE *)(v19 + 66) |= 0x20u;
            v27 = (*((_BYTE *)a2 + 2) & 0x10) != 0 ? 104 : 88;
            if ( (v47 & 1) != 0 )
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
              Object = -1073741670;
            else
              ObpObjectTypes[DmaOperations_high - 1] = v19;
            ExReleasePushLockEx((ULONG_PTR)&v33[11].DmaOperations, 0LL);
            KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
            if ( (PADAPTER_OBJECT)v19 != ObpTypeObjectType )
            {
              if ( Object < 0 )
              {
LABEL_69:
                v32 = Object;
LABEL_70:
                ObpReleaseLookupContext((__int64)v53);
                HalPutDmaAdapter((PADAPTER_OBJECT)v19);
                return v32;
              }
              v35 = 3;
              v36 = 3LL;
              while ( _InterlockedCompareExchange64(&ObTypeIndexTable[v36], 1LL, 0LL) )
              {
                v36 = ++v35;
                if ( (unsigned __int64)v35 >= 0x100 )
                {
                  Object = -1073741823;
                  goto LABEL_69;
                }
              }
              v10 = v35;
            }
            ObTypeIndexTable[v10] = v19;
            *(_BYTE *)(v19 + 40) = v10;
            if ( !ObpTypeDirectoryObject
              || ObpInsertDirectoryEntry((char *)ObpTypeDirectoryObject, (char *)v19, (__int64)v53) )
            {
              ObpReleaseLookupContext((__int64)v53);
              *v56 = v19;
              return 0LL;
            }
            ObTypeIndexTable[v10] = 0LL;
            goto LABEL_70;
          }
          ObpReleaseLookupContext((__int64)v53);
          HalPutDmaAdapter((PADAPTER_OBJECT)v19);
        }
        return (unsigned int)Object;
      }
      v32 = -1073741670;
    }
    ObpReleaseLookupContext((__int64)v53);
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
