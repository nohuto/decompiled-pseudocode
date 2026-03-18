/*
 * XREFs of LinkNodeCrackPrt @ 0x1C00192F8
 * Callers:
 *     IrqArbAddAllocation @ 0x1C0099940 (IrqArbAddAllocation.c)
 *     IrqArbGetNextAllocationRange @ 0x1C009A780 (IrqArbGetNextAllocationRange.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C009D25C (IrqArbpFindSuitableRangePci.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C0001B20 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_D @ 0x1C0001C0C (WPP_RECORDER_SF_D.c)
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B894 (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNameSpaceObject @ 0x1C0018260 (AMLIGetNameSpaceObject.c)
 *     FreeDataBuffs @ 0x1C0018A20 (FreeDataBuffs.c)
 *     AMLIEvalPkgDataElement @ 0x1C0019244 (AMLIEvalPkgDataElement.c)
 *     RtlStringCchPrintfW @ 0x1C001DBA0 (RtlStringCchPrintfW.c)
 *     LinkNodepGetFilter @ 0x1C002BB28 (LinkNodepGetFilter.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     ACPIWriteEventLogEntry @ 0x1C00543C8 (ACPIWriteEventLogEntry.c)
 *     WPP_RECORDER_SF_i @ 0x1C005F66C (WPP_RECORDER_SF_i.c)
 *     PcisuppGetRoutingInfo @ 0x1C009AE80 (PcisuppGetRoutingInfo.c)
 *     PcisuppGetBusSlotNumber @ 0x1C009CA64 (PcisuppGetBusSlotNumber.c)
 *     PcisuppSetRoutingInfo @ 0x1C009CD80 (PcisuppSetRoutingInfo.c)
 *     PcisuppGetProgConfigHeader @ 0x1C00A0B70 (PcisuppGetProgConfigHeader.c)
 *     PcisuppGetParentPdo @ 0x1C00A0D0C (PcisuppGetParentPdo.c)
 *     LinkNodeFindByNsObj @ 0x1C00B5F08 (LinkNodeFindByNsObj.c)
 *     LinkNodepAddAttachedDevice @ 0x1C00B6068 (LinkNodepAddAttachedDevice.c)
 */

__int64 __fastcall LinkNodeCrackPrt(__int64 a1, _QWORD *a2, _DWORD *a3, char a4)
{
  PVOID v7; // rax
  __int64 result; // rax
  int v9; // r12d
  int v10; // ebx
  KIRQL v11; // di
  __int64 v12; // r13
  _QWORD *Filter; // rax
  _QWORD *v14; // r14
  __int64 *v15; // rdi
  __int64 *v16; // rax
  volatile signed __int32 *v17; // r15
  char v18; // r12
  char v19; // r13
  unsigned int v20; // edx
  unsigned __int64 v21; // rdx
  unsigned int v22; // edi
  _DWORD *v23; // rcx
  int ProgConfigHeader; // r14d
  _QWORD *v25; // r12
  char v26; // di
  _QWORD *v27; // r12
  __int64 Pool2; // rdi
  KIRQL v29; // r13
  _QWORD *v30; // rax
  _QWORD *v31; // r14
  __int64 v32; // [rsp+28h] [rbp-D8h]
  int v34; // [rsp+34h] [rbp-CCh] BYREF
  int v35; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v36; // [rsp+3Ch] [rbp-C4h]
  __int128 v37; // [rsp+40h] [rbp-C0h] BYREF
  int v38; // [rsp+50h] [rbp-B0h]
  struct _STRING v39; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING String; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-78h] BYREF
  _OWORD v43[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v44; // [rsp+B8h] [rbp-48h]
  _OWORD v45[2]; // [rsp+C0h] [rbp-40h] BYREF
  PCSZ v46; // [rsp+E0h] [rbp-20h]
  __int128 v47; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v48; // [rsp+F8h] [rbp-8h]
  __int64 v49; // [rsp+108h] [rbp+8h]
  __int128 v50; // [rsp+110h] [rbp+10h] BYREF
  __int128 v51; // [rsp+120h] [rbp+20h]
  __int64 v52; // [rsp+130h] [rbp+30h]
  __int128 v53; // [rsp+138h] [rbp+38h] BYREF
  __int128 v54; // [rsp+148h] [rbp+48h]
  __int64 v55; // [rsp+158h] [rbp+58h]
  _OWORD v56[2]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v57; // [rsp+180h] [rbp+80h]
  _DWORD v58[16]; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v59[3]; // [rsp+1D0h] [rbp+D0h] BYREF
  wchar_t *Buffer; // [rsp+1E8h] [rbp+E8h]
  WCHAR SourceString[8]; // [rsp+1F0h] [rbp+F0h] BYREF
  int v62; // [rsp+200h] [rbp+100h]
  WCHAR v63[8]; // [rsp+208h] [rbp+108h] BYREF
  int v64; // [rsp+218h] [rbp+118h]
  wchar_t pszDest[20]; // [rsp+220h] [rbp+120h] BYREF

  *(_QWORD *)&UnicodeString.Length = a3;
  *(_QWORD *)&DestinationString.Length = a2;
  v49 = 0LL;
  LOBYTE(v38) = 0;
  v52 = 0LL;
  v46 = 0LL;
  *(_QWORD *)&String.Length = 0LL;
  *(_QWORD *)&v39.Length = 0LL;
  v35 = 0;
  v47 = 0LL;
  v48 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  memset(v45, 0, sizeof(v45));
  memset(v58, 0, sizeof(v58));
  *a2 = 0LL;
  v55 = 0LL;
  v44 = 0LL;
  v57 = 0LL;
  v7 = AcpiDriverObject;
  *a3 = 0;
  v34 = 0;
  v53 = 0LL;
  v36 = 0;
  v54 = 0LL;
  memset(v43, 0, sizeof(v43));
  memset(v56, 0, sizeof(v56));
  v37 = 0LL;
  if ( *(PVOID *)(a1 + 8) == v7 && (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 8LL) & 0x2000000) != 0 )
    return 3221226021LL;
  if ( (int)PcisuppGetRoutingInfo(a1, &v37) >= 0 )
  {
    *a2 = v37;
    *a3 = DWORD2(v37);
    return 0LL;
  }
  if ( (int)PcisuppGetProgConfigHeader(a1, v58) < 0 )
    return 3221226021LL;
  LOBYTE(v9) = BYTE1(v58[15]);
  result = PcisuppGetParentPdo(a1, &v39);
  if ( (int)result >= 0 )
  {
    result = PcisuppGetBusSlotNumber(a1, 0, (unsigned int)&v34, 0, 0LL);
    if ( (int)result >= 0 )
    {
      v10 = v34;
      while ( 1 )
      {
        v11 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
        v12 = *(_QWORD *)&v39.Length;
        Filter = (_QWORD *)LinkNodepGetFilter(*(_QWORD *)(RootDeviceExtension + 768), *(_QWORD *)&v39.Length);
        v14 = Filter;
        if ( Filter )
          ObfReferenceObject(Filter);
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v11);
        if ( v14 )
        {
          v15 = *(__int64 **)(v14[8] + 760LL);
          ObfDereferenceObject(v14);
          v16 = AMLIGetNamedChild(v15, 1414680671);
          v17 = (volatile signed __int32 *)v16;
          if ( v16 )
            break;
        }
        result = PcisuppGetProgConfigHeader(v12, v58);
        if ( (int)result >= 0 )
        {
          if ( BYTE2(v58[2]) == 4 )
          {
            v9 = ((v10 & 0x1F) + (unsigned __int8)v9 - 1) % 4 + 1;
          }
          else
          {
            if ( BYTE2(v58[2]) != 7 )
              return 3221225473LL;
            LOBYTE(v9) = BYTE1(v58[15]);
          }
          result = PcisuppGetBusSlotNumber(v12, 0, (unsigned int)&v35, 0, 0LL);
          if ( (int)result >= 0 )
          {
            v10 = v35;
            result = PcisuppGetParentPdo(v12, &v39);
            if ( (int)result >= 0 )
              continue;
          }
        }
        return result;
      }
      v18 = v9 - 1;
      if ( (int)AMLIEvalNameSpaceObject(v16, (__int64)v56, 0, 0LL) < 0 )
      {
        v22 = -1073741275;
        goto LABEL_65;
      }
      v19 = v38;
      do
      {
        v20 = v36++;
        if ( (int)AMLIEvalPkgDataElement((__int64)v56, v20, (__int64)v43) < 0 )
          break;
        if ( (int)AMLIEvalPkgDataElement((__int64)v43, 0, (__int64)&v47) >= 0 )
        {
          v21 = v48;
          if ( (v10 & 0x1F) == WORD1(v48) )
          {
            if ( (_WORD)v48 != 0xFFFF )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                WPP_RECORDER_SF_i(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v48,
                  20,
                  10,
                  (__int64)&WPP_924a918d9bb63f0ecf58b5e5a2c616f6_Traceguids,
                  v48);
                v21 = v48;
              }
              dword_1C0081AC8 = 0;
              byte_1C0081ACC = 0;
              v10 = v10 & 0xFFFFFF00 | (32 * (v21 & 7)) | (v21 >> 16) & 0x1F;
              v22 = -1073741811;
              FreeDataBuffs((__int64)&v47, 1u);
              dword_1C0081AC8 = 0;
              byte_1C0081ACC = 0;
              FreeDataBuffs((__int64)v43, 1u);
LABEL_65:
              AMLIDereferenceHandleEx(v17);
              if ( a4 )
              {
                Buffer = 0LL;
                v64 = 0;
                v62 = 0;
                v39 = 0LL;
                *(_OWORD *)v63 = 0LL;
                String = 0LL;
                *(_OWORD *)SourceString = 0LL;
                DestinationString = 0LL;
                UnicodeString = 0LL;
                RtlStringCchPrintfW(pszDest, 0x14uLL, L"IRQARB");
                RtlInitUnicodeString(&DestinationString, SourceString);
                RtlInitUnicodeString(&String, v63);
                if ( RtlIntegerToUnicodeString(v10 & 0x1F, 0, &DestinationString) >= 0
                  && RtlIntegerToUnicodeString((unsigned __int8)v10 >> 5, 0, &String) >= 0 )
                {
                  v59[0] = pszDest;
                  v59[1] = SourceString;
                  v59[2] = v63;
                  if ( v22 == -1073741811 )
                  {
                    ACPIWriteEventLogEntry(3221553161LL, v59, 3LL);
                  }
                  else if ( v22 == -1073741772 )
                  {
                    RtlInitAnsiString(&v39, v46);
                    RtlAnsiStringToUnicodeString(&UnicodeString, &v39, 1u);
                    Buffer = UnicodeString.Buffer;
                    ACPIWriteEventLogEntry(3221553160LL, v59, 4LL);
                    RtlFreeUnicodeString(&UnicodeString);
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      WPP_RECORDER_SF_s(
                        (__int64)WPP_GLOBAL_Control->DeviceExtension,
                        2u,
                        0x14u,
                        0xBu,
                        (__int64)&WPP_924a918d9bb63f0ecf58b5e5a2c616f6_Traceguids,
                        v46);
                  }
                  else
                  {
                    ACPIWriteEventLogEntry(3221553158LL, v59, 3LL);
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      LODWORD(v32) = v10;
                      WPP_RECORDER_SF_D(
                        (__int64)WPP_GLOBAL_Control->DeviceExtension,
                        2u,
                        0x14u,
                        0xCu,
                        (__int64)&WPP_924a918d9bb63f0ecf58b5e5a2c616f6_Traceguids,
                        v32);
                    }
                  }
                }
              }
              return v22;
            }
            if ( (int)AMLIEvalPkgDataElement((__int64)v43, 1u, (__int64)&v53) >= 0 )
            {
              if ( (_BYTE)v54 == v18 )
              {
                v26 = v19;
                if ( (int)AMLIEvalPkgDataElement((__int64)v43, 2u, (__int64)v45) >= 0 )
                  v26 = 1;
                v19 = v26;
                if ( (int)AMLIEvalPkgDataElement((__int64)v43, 3u, (__int64)&v50) >= 0 )
                  v19 = 1;
              }
              dword_1C0081AC8 = 0;
              byte_1C0081ACC = 0;
              FreeDataBuffs((__int64)&v53, 1u);
            }
          }
          dword_1C0081AC8 = 0;
          byte_1C0081ACC = 0;
          FreeDataBuffs((__int64)&v47, 1u);
        }
        dword_1C0081AC8 = 0;
        byte_1C0081ACC = 0;
        FreeDataBuffs((__int64)v43, 1u);
      }
      while ( !v19 );
      dword_1C0081AC8 = 0;
      byte_1C0081ACC = 0;
      FreeDataBuffs((__int64)v56, 1u);
      v22 = -1073741275;
      if ( !v19 )
        goto LABEL_65;
      if ( WORD1(v45[0]) == 2 && v46 )
      {
        if ( (int)AMLIGetNameSpaceObject(v46, (__int64 *)v17, &String, 0) < 0 )
        {
          v22 = -1073741772;
          goto LABEL_65;
        }
        v27 = *(_QWORD **)&DestinationString.Length;
        ProgConfigHeader = LinkNodeFindByNsObj(*(_QWORD *)&String.Length, *(_QWORD *)&DestinationString.Length);
        if ( ProgConfigHeader >= 0 )
        {
          *(_QWORD *)&v37 = *v27;
          DWORD2(v37) = 0;
          BYTE12(v37) = 0;
          PcisuppSetRoutingInfo(a1, &v37);
          Pool2 = ExAllocatePool2(256LL, 56LL, 1232102209LL);
          if ( Pool2 )
          {
            v29 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
            v30 = (_QWORD *)LinkNodepGetFilter(*(_QWORD *)(RootDeviceExtension + 768), a1);
            v31 = v30;
            if ( v30 )
              ObfReferenceObject(v30);
            KeReleaseSpinLock(&AcpiDeviceTreeLock, v29);
            if ( v31 )
            {
              *(_QWORD *)(Pool2 + 16) = *(_QWORD *)(v31[8] + 760LL);
              ObfDereferenceObject(v31);
            }
            else
            {
              *(_QWORD *)(Pool2 + 16) = 0LL;
            }
            *(_QWORD *)(Pool2 + 24) = v17;
            *(_QWORD *)(Pool2 + 48) = a1;
            v17 = 0LL;
            *(_DWORD *)(Pool2 + 32) = v10;
            ProgConfigHeader = PcisuppGetProgConfigHeader(a1, v58);
            if ( ProgConfigHeader >= 0 )
            {
              *(_DWORD *)(Pool2 + 36) = v58[0];
              *(_DWORD *)(Pool2 + 40) = v58[11];
            }
            LinkNodepAddAttachedDevice(*v27, Pool2);
          }
          if ( !v17 )
          {
LABEL_24:
            dword_1C0081AC8 = 0;
            byte_1C0081ACC = 0;
            FreeDataBuffs((__int64)v45, 1u);
            dword_1C0081AC8 = 0;
            byte_1C0081ACC = 0;
            FreeDataBuffs((__int64)&v50, 1u);
            return (unsigned int)ProgConfigHeader;
          }
        }
      }
      else if ( WORD1(v50) == 1 )
      {
        v23 = *(_DWORD **)&UnicodeString.Length;
        ProgConfigHeader = 0;
        v25 = *(_QWORD **)&DestinationString.Length;
        BYTE12(v37) = 2;
        **(_DWORD **)&UnicodeString.Length = v51;
        *(_QWORD *)&v37 = 0LL;
        *v25 = 0LL;
        DWORD2(v37) = *v23;
        PcisuppSetRoutingInfo(a1, &v37);
      }
      else
      {
        ProgConfigHeader = -1073741701;
      }
      AMLIDereferenceHandleEx(v17);
      goto LABEL_24;
    }
  }
  return result;
}
