/*
 * XREFs of LinkNodeCrackPrt @ 0x1C000E8B4
 * Callers:
 *     IrqArbAddAllocation @ 0x1C0092500 (IrqArbAddAllocation.c)
 *     IrqArbGetNextAllocationRange @ 0x1C0093A90 (IrqArbGetNextAllocationRange.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C00967A8 (IrqArbpFindSuitableRangePci.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00027D0 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_s @ 0x1C0002890 (WPP_RECORDER_SF_s.c)
 *     FreeDataBuffs @ 0x1C0002F90 (FreeDataBuffs.c)
 *     FreeData @ 0x1C0003328 (FreeData.c)
 *     AMLIGetNameSpaceObject @ 0x1C000AC5C (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B8AC (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B8E0 (AMLIEvalNameSpaceObject.c)
 *     LinkNodepGetFilter @ 0x1C000E828 (LinkNodepGetFilter.c)
 *     AMLIEvalPkgDataElement @ 0x1C000ECDC (AMLIEvalPkgDataElement.c)
 *     AMLIGetNamedChild @ 0x1C0020AF0 (AMLIGetNamedChild.c)
 *     RtlStringCchPrintfW @ 0x1C0028580 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 *     memset @ 0x1C0032180 (memset.c)
 *     ACPIWriteEventLogEntry @ 0x1C0054B08 (ACPIWriteEventLogEntry.c)
 *     WPP_RECORDER_SF_i @ 0x1C005E6C8 (WPP_RECORDER_SF_i.c)
 *     PcisuppGetProgConfigHeader @ 0x1C0091BF4 (PcisuppGetProgConfigHeader.c)
 *     PcisuppGetParentPdo @ 0x1C0091CFC (PcisuppGetParentPdo.c)
 *     PcisuppSetRoutingInfo @ 0x1C0091DF4 (PcisuppSetRoutingInfo.c)
 *     PcisuppGetRoutingInfo @ 0x1C0094A60 (PcisuppGetRoutingInfo.c)
 *     PcisuppGetBusSlotNumber @ 0x1C0095B08 (PcisuppGetBusSlotNumber.c)
 *     LinkNodeFindByNsObj @ 0x1C00B6580 (LinkNodeFindByNsObj.c)
 *     LinkNodepAddAttachedDevice @ 0x1C00B66E0 (LinkNodepAddAttachedDevice.c)
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
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 *v18; // rax
  __int64 *v19; // r15
  char v20; // r12
  char v21; // r13
  __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  unsigned int v24; // edi
  _DWORD *v25; // rcx
  int ProgConfigHeader; // r14d
  _QWORD *v27; // r12
  char v28; // di
  _QWORD *v29; // r12
  _QWORD *PoolWithTag; // rdi
  KIRQL v31; // r13
  _QWORD *v32; // rax
  _QWORD *v33; // r14
  __int64 v34; // [rsp+28h] [rbp-D8h]
  int v36; // [rsp+34h] [rbp-CCh] BYREF
  int v37; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v38; // [rsp+3Ch] [rbp-C4h]
  __int128 v39; // [rsp+40h] [rbp-C0h] BYREF
  int v40; // [rsp+50h] [rbp-B0h]
  struct _STRING v41; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING String; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-78h] BYREF
  _OWORD v45[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v46; // [rsp+B8h] [rbp-48h]
  _OWORD v47[2]; // [rsp+C0h] [rbp-40h] BYREF
  PCSZ v48; // [rsp+E0h] [rbp-20h]
  __int128 v49; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v50; // [rsp+F8h] [rbp-8h]
  __int64 v51; // [rsp+108h] [rbp+8h]
  __int128 v52; // [rsp+110h] [rbp+10h] BYREF
  __int128 v53; // [rsp+120h] [rbp+20h]
  __int64 v54; // [rsp+130h] [rbp+30h]
  __int128 v55; // [rsp+138h] [rbp+38h] BYREF
  __int128 v56; // [rsp+148h] [rbp+48h]
  __int64 v57; // [rsp+158h] [rbp+58h]
  _OWORD v58[2]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v59; // [rsp+180h] [rbp+80h]
  _DWORD v60[16]; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v61[3]; // [rsp+1D0h] [rbp+D0h] BYREF
  wchar_t *Buffer; // [rsp+1E8h] [rbp+E8h]
  WCHAR SourceString[8]; // [rsp+1F0h] [rbp+F0h] BYREF
  int v64; // [rsp+200h] [rbp+100h]
  WCHAR v65[8]; // [rsp+208h] [rbp+108h] BYREF
  int v66; // [rsp+218h] [rbp+118h]
  wchar_t pszDest[20]; // [rsp+220h] [rbp+120h] BYREF

  *(_QWORD *)&UnicodeString.Length = a3;
  *(_QWORD *)&DestinationString.Length = a2;
  v51 = 0LL;
  LOBYTE(v40) = 0;
  v54 = 0LL;
  v48 = 0LL;
  *(_QWORD *)&String.Length = 0LL;
  *(_QWORD *)&v41.Length = 0LL;
  v37 = 0;
  v49 = 0LL;
  v50 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  memset(v47, 0, sizeof(v47));
  memset(v60, 0, sizeof(v60));
  *a2 = 0LL;
  v57 = 0LL;
  v46 = 0LL;
  v59 = 0LL;
  v7 = AcpiDriverObject;
  *a3 = 0;
  v36 = 0;
  v55 = 0LL;
  v38 = 0;
  v56 = 0LL;
  memset(v45, 0, sizeof(v45));
  memset(v58, 0, sizeof(v58));
  v39 = 0LL;
  if ( *(PVOID *)(a1 + 8) == v7 && (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 8LL) & 0x2000000) != 0 )
    return 3221226021LL;
  if ( (int)PcisuppGetRoutingInfo(a1, &v39) < 0 )
  {
    if ( (int)PcisuppGetProgConfigHeader(a1, v60) < 0 )
      return 3221226021LL;
    LOBYTE(v9) = BYTE1(v60[15]);
    result = PcisuppGetParentPdo(a1, &v41);
    if ( (int)result >= 0 )
    {
      result = PcisuppGetBusSlotNumber(a1, 0, (unsigned int)&v36, 0, 0LL);
      if ( (int)result >= 0 )
      {
        v10 = v36;
        while ( 1 )
        {
          v11 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
          v12 = *(_QWORD *)&v41.Length;
          Filter = (_QWORD *)LinkNodepGetFilter(*(_QWORD *)(RootDeviceExtension + 728), *(__int64 *)&v41.Length);
          v14 = Filter;
          if ( Filter )
            ObfReferenceObject(Filter);
          KeReleaseSpinLock(&AcpiDeviceTreeLock, v11);
          if ( v14 )
          {
            v15 = *(_QWORD *)(v14[8] + 720LL);
            ObfDereferenceObject(v14);
            v18 = (unsigned __int64 *)AMLIGetNamedChild(v15, 1414680671LL, v16, v17);
            v19 = (__int64 *)v18;
            if ( v18 )
              break;
          }
          result = PcisuppGetProgConfigHeader(v12, v60);
          if ( (int)result < 0 )
            return result;
          if ( BYTE2(v60[2]) == 4 )
          {
            v9 = ((v10 & 0x1F) + (unsigned __int8)v9 - 1) % 4 + 1;
          }
          else
          {
            if ( BYTE2(v60[2]) != 7 )
              return 3221225473LL;
            LOBYTE(v9) = BYTE1(v60[15]);
          }
          result = PcisuppGetBusSlotNumber(v12, 0, (unsigned int)&v37, 0, 0LL);
          if ( (int)result >= 0 )
          {
            v10 = v37;
            result = PcisuppGetParentPdo(v12, &v41);
            if ( (int)result >= 0 )
              continue;
          }
          return result;
        }
        v20 = v9 - 1;
        if ( (int)AMLIEvalNameSpaceObject(v18, (__int64)v58, 0, 0LL) < 0 )
        {
          v24 = -1073741275;
LABEL_64:
          AMLIDereferenceHandleEx((__int64)v19);
          if ( a4 )
          {
            Buffer = 0LL;
            v66 = 0;
            v64 = 0;
            v41 = 0LL;
            *(_OWORD *)v65 = 0LL;
            String = 0LL;
            *(_OWORD *)SourceString = 0LL;
            DestinationString = 0LL;
            UnicodeString = 0LL;
            RtlStringCchPrintfW(pszDest, 0x14uLL, L"IRQARB");
            RtlInitUnicodeString(&DestinationString, SourceString);
            RtlInitUnicodeString(&String, v65);
            if ( RtlIntegerToUnicodeString(v10 & 0x1F, 0, &DestinationString) >= 0
              && RtlIntegerToUnicodeString((unsigned __int8)v10 >> 5, 0, &String) >= 0 )
            {
              v61[0] = pszDest;
              v61[1] = SourceString;
              v61[2] = v65;
              if ( v24 == -1073741811 )
              {
                ACPIWriteEventLogEntry(3221553161LL, v61, 3LL);
              }
              else if ( v24 == -1073741772 )
              {
                RtlInitAnsiString(&v41, v48);
                RtlAnsiStringToUnicodeString(&UnicodeString, &v41, 1u);
                Buffer = UnicodeString.Buffer;
                ACPIWriteEventLogEntry(3221553160LL, v61, 4LL);
                RtlFreeUnicodeString(&UnicodeString);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_s(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    2u,
                    0x14u,
                    0xBu,
                    (__int64)&WPP_796d610f2a6632692e9ca482f2e5278e_Traceguids,
                    v48);
              }
              else
              {
                ACPIWriteEventLogEntry(3221553158LL, v61, 3LL);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v34) = v10;
                  WPP_RECORDER_SF_D(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    2u,
                    0x14u,
                    0xCu,
                    (__int64)&WPP_796d610f2a6632692e9ca482f2e5278e_Traceguids,
                    v34);
                }
              }
            }
          }
          return v24;
        }
        else
        {
          v21 = v40;
          do
          {
            v22 = v38++;
            if ( (int)AMLIEvalPkgDataElement(v58, v22, v45) < 0 )
              break;
            if ( (int)AMLIEvalPkgDataElement(v45, 0LL, &v49) >= 0 )
            {
              v23 = v50;
              if ( (v10 & 0x1F) == WORD1(v50) )
              {
                if ( (_WORD)v50 != 0xFFFF )
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    WPP_RECORDER_SF_i(
                      WPP_GLOBAL_Control->DeviceExtension,
                      v50,
                      20,
                      10,
                      (__int64)&WPP_796d610f2a6632692e9ca482f2e5278e_Traceguids,
                      v50);
                    v23 = v50;
                  }
                  dword_1C0082908 = 0;
                  ::pszDest = 0;
                  v10 = v10 & 0xFFFFFF00 | (32 * (v23 & 7)) | (v23 >> 16) & 0x1F;
                  v24 = -1073741811;
                  FreeDataBuffs((__int64)&v49, 1u);
                  dword_1C0082908 = 0;
                  ::pszDest = 0;
                  FreeDataBuffs((__int64)v45, 1u);
                  goto LABEL_64;
                }
                if ( (int)AMLIEvalPkgDataElement(v45, 1LL, &v55) >= 0 )
                {
                  if ( (_BYTE)v56 == v20 )
                  {
                    v28 = v21;
                    if ( (int)AMLIEvalPkgDataElement(v45, 2LL, v47) >= 0 )
                      v28 = 1;
                    v21 = v28;
                    if ( (int)AMLIEvalPkgDataElement(v45, 3LL, &v52) >= 0 )
                      v21 = 1;
                  }
                  dword_1C0082908 = 0;
                  ::pszDest = 0;
                  FreeDataBuffs((__int64)&v55, 1u);
                }
              }
              dword_1C0082908 = 0;
              ::pszDest = 0;
              FreeData((__int64)&v49);
            }
            dword_1C0082908 = 0;
            ::pszDest = 0;
            FreeData((__int64)v45);
          }
          while ( !v21 );
          dword_1C0082908 = 0;
          ::pszDest = 0;
          FreeDataBuffs((__int64)v58, 1u);
          v24 = -1073741275;
          if ( !v21 )
            goto LABEL_64;
          if ( WORD1(v47[0]) == 2 && v48 )
          {
            if ( (int)AMLIGetNameSpaceObject(v48, v19, (unsigned __int64 *)&String.Length, 0) < 0 )
            {
              v24 = -1073741772;
              goto LABEL_64;
            }
            v29 = *(_QWORD **)&DestinationString.Length;
            ProgConfigHeader = LinkNodeFindByNsObj(*(_QWORD *)&String.Length, *(_QWORD *)&DestinationString.Length);
            if ( ProgConfigHeader >= 0 )
            {
              *(_QWORD *)&v39 = *v29;
              DWORD2(v39) = 0;
              BYTE12(v39) = 0;
              PcisuppSetRoutingInfo(a1, &v39);
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x49706341u);
              if ( PoolWithTag )
              {
                v31 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
                v32 = (_QWORD *)LinkNodepGetFilter(*(_QWORD *)(RootDeviceExtension + 728), a1);
                v33 = v32;
                if ( v32 )
                  ObfReferenceObject(v32);
                KeReleaseSpinLock(&AcpiDeviceTreeLock, v31);
                if ( v33 )
                {
                  PoolWithTag[2] = *(_QWORD *)(v33[8] + 720LL);
                  ObfDereferenceObject(v33);
                }
                else
                {
                  PoolWithTag[2] = 0LL;
                }
                PoolWithTag[3] = v19;
                PoolWithTag[6] = a1;
                v19 = 0LL;
                *((_DWORD *)PoolWithTag + 8) = v10;
                ProgConfigHeader = PcisuppGetProgConfigHeader(a1, v60);
                if ( ProgConfigHeader >= 0 )
                {
                  *((_DWORD *)PoolWithTag + 9) = v60[0];
                  *((_DWORD *)PoolWithTag + 10) = v60[11];
                }
                LinkNodepAddAttachedDevice(*v29, PoolWithTag);
              }
            }
          }
          else if ( WORD1(v52) == 1 )
          {
            v25 = *(_DWORD **)&UnicodeString.Length;
            ProgConfigHeader = 0;
            v27 = *(_QWORD **)&DestinationString.Length;
            BYTE12(v39) = 2;
            **(_DWORD **)&UnicodeString.Length = v53;
            *(_QWORD *)&v39 = 0LL;
            *v27 = 0LL;
            DWORD2(v39) = *v25;
            PcisuppSetRoutingInfo(a1, &v39);
          }
          else
          {
            ProgConfigHeader = -1073741701;
          }
          if ( v19 )
            AMLIDereferenceHandleEx((__int64)v19);
          dword_1C0082908 = 0;
          ::pszDest = 0;
          FreeDataBuffs((__int64)v47, 1u);
          dword_1C0082908 = 0;
          ::pszDest = 0;
          FreeDataBuffs((__int64)&v52, 1u);
          return (unsigned int)ProgConfigHeader;
        }
      }
    }
  }
  else
  {
    *a2 = v39;
    *a3 = DWORD2(v39);
    return 0LL;
  }
  return result;
}
