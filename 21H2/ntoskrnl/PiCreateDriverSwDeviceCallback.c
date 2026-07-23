/*
 * XREFs of PiCreateDriverSwDeviceCallback @ 0x1408B4840
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintf @ 0x14036F14C (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403D2240 (_wcsicmp.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExpAllocateStringRoutine @ 0x1406006F0 (ExpAllocateStringRoutine.c)
 *     RtlHashUnicodeString @ 0x14062BAB0 (RtlHashUnicodeString.c)
 *     _PnpGetGenericStoreProperty @ 0x14062CFEC (_PnpGetGenericStoreProperty.c)
 *     RtlpQueryRegistryValues @ 0x140635878 (RtlpQueryRegistryValues.c)
 *     _CmGetDeviceRegProp @ 0x14063627C (_CmGetDeviceRegProp.c)
 *     _SysCtxRegOpenKey @ 0x1406374BC (_SysCtxRegOpenKey.c)
 *     RtlGUIDFromString @ 0x140639680 (RtlGUIDFromString.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x140669AF0 (RtlCreateUnicodeString.c)
 *     RtlPrefixUnicodeString @ 0x1406DD340 (RtlPrefixUnicodeString.c)
 *     IopGetRegistryValue @ 0x140742C58 (IopGetRegistryValue.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140768140 (_PnpGetGenericStorePropertyKeys.c)
 *     PnpGenerateDeviceIdsHash @ 0x14076B594 (PnpGenerateDeviceIdsHash.c)
 *     PipMakeGloballyUniqueId @ 0x14076C5C0 (PipMakeGloballyUniqueId.c)
 *     PiSwStartCreate @ 0x1408AEE1C (PiSwStartCreate.c)
 *     PnpCompareMultiSz @ 0x1408B23E4 (PnpCompareMultiSz.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiCreateDriverSwDeviceCallback(__int64 a1, __int64 a2, const WCHAR *a3, __int64 *a4)
{
  __int64 *v4; // rdi
  ULONG v5; // r15d
  wchar_t *v6; // r14
  void *v7; // rsi
  unsigned int v8; // r12d
  __int64 PoolWithTag; // r13
  __int64 v10; // rcx
  int RegistryValues; // ebx
  wchar_t *Buffer; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  ULONG v15; // r15d
  int v16; // edi
  wchar_t *v17; // r15
  PCWCH *v18; // r12
  unsigned int v19; // r14d
  int *v20; // r13
  int v21; // r9d
  const wchar_t *v22; // rdi
  __int64 v23; // rax
  NTSTATUS RegistryValue; // eax
  PCWSTR v26; // r14
  __int64 v27; // rcx
  PVOID v28; // rbx
  __int64 v29; // rdi
  signed int i; // eax
  unsigned int v31; // eax
  char *v32; // rax
  char *v33; // rdi
  char *v34; // rdi
  unsigned int v35; // esi
  __int64 v36; // r14
  __int64 v37; // rdx
  int v38; // eax
  int v39; // eax
  void *v40; // rcx
  PVOID v41; // rax
  PVOID v42; // rax
  PVOID *v43; // rdi
  __int64 v44; // rsi
  SIZE_T NumberOfBytes; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v46; // [rsp+78h] [rbp-88h]
  int v47; // [rsp+80h] [rbp-80h]
  _DWORD *v48; // [rsp+88h] [rbp-78h] BYREF
  wchar_t *Str1; // [rsp+90h] [rbp-70h]
  ULONG HashValue; // [rsp+98h] [rbp-68h] BYREF
  ULONG v51; // [rsp+9Ch] [rbp-64h] BYREF
  int v52; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp-58h] BYREF
  int v54; // [rsp+B0h] [rbp-50h] BYREF
  ULONG v55; // [rsp+B4h] [rbp-4Ch]
  unsigned int v56; // [rsp+B8h] [rbp-48h]
  unsigned int v57; // [rsp+BCh] [rbp-44h]
  PVOID v58; // [rsp+C0h] [rbp-40h]
  UNICODE_STRING UnicodeString; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING v60; // [rsp+D8h] [rbp-28h] BYREF
  UNICODE_STRING GuidString; // [rsp+E8h] [rbp-18h] BYREF
  PVOID P; // [rsp+F8h] [rbp-8h] BYREF
  UNICODE_STRING String2; // [rsp+100h] [rbp+0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+110h] [rbp+10h] BYREF
  UNICODE_STRING v65; // [rsp+120h] [rbp+20h] BYREF
  UNICODE_STRING v66; // [rsp+130h] [rbp+30h] BYREF
  UNICODE_STRING v67; // [rsp+140h] [rbp+40h] BYREF
  _DWORD v68[4]; // [rsp+150h] [rbp+50h] BYREF
  PCWSTR SourceString; // [rsp+160h] [rbp+60h]
  __int64 v70; // [rsp+168h] [rbp+68h]
  __int64 v71; // [rsp+170h] [rbp+70h]
  _QWORD v72[2]; // [rsp+178h] [rbp+78h] BYREF
  GUID Guid; // [rsp+188h] [rbp+88h] BYREF
  _QWORD v74[50]; // [rsp+1A0h] [rbp+A0h] BYREF

  v46 = a4;
  v70 = a1;
  v54 = 1;
  SourceString = a3;
  Handle = 0LL;
  v4 = a4;
  v52 = 0;
  v5 = 0;
  v55 = 0;
  v6 = 0LL;
  v51 = 0;
  v7 = 0LL;
  HashValue = 0;
  v8 = 0;
  Str1 = 0LL;
  PoolWithTag = 0LL;
  v47 = 0;
  v48 = 0LL;
  v71 = 0LL;
  v57 = 0;
  P = 0LL;
  v56 = 0;
  v58 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  UnicodeString = 0LL;
  v60 = 0LL;
  GuidString = 0LL;
  Guid = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  String2 = 0LL;
  DestinationString = 0LL;
  v65 = 0LL;
  if ( a1 )
    v10 = *(_QWORD *)(a1 + 224);
  else
    v10 = 0LL;
  RegistryValues = SysCtxRegOpenKey(v10, a2, (__int64)a3, 0, 0x20019u, (__int64)&Handle);
  if ( RegistryValues >= 0 )
  {
    memset(v74, 0, 0x188uLL);
    LODWORD(v74[25]) = 0x4000000;
    LODWORD(v74[1]) = 304;
    LODWORD(v74[4]) = 117440512;
    v74[2] = L"HardwareIds";
    LODWORD(v74[8]) = 304;
    v74[3] = &UnicodeString;
    LODWORD(v74[11]) = 117440512;
    v74[9] = L"CompatibleIds";
    LODWORD(v74[15]) = 288;
    v74[10] = &v60;
    LODWORD(v74[18]) = 0x1000000;
    v74[16] = L"ContainerId";
    v74[17] = &GuidString;
    v74[23] = L"Capabilities";
    v74[24] = &v52;
    v74[30] = L"Description";
    v74[31] = &v66;
    v74[37] = L"LocationInfo";
    LODWORD(v74[22]) = 288;
    LODWORD(v74[29]) = 288;
    LODWORD(v74[32]) = 0x1000000;
    LODWORD(v74[36]) = 288;
    LODWORD(v74[39]) = 0x1000000;
    v74[38] = &v67;
    RegistryValues = RtlpQueryRegistryValues(3221225472LL, (const WCHAR *)Handle, (__int64)v74, 0LL);
    if ( RegistryValues >= 0 )
    {
      if ( UnicodeString.Buffer && UnicodeString.Length <= 2u )
        RtlFreeAnsiString(&UnicodeString);
      if ( v60.Buffer && v60.Length <= 2u )
        RtlFreeAnsiString(&v60);
      Buffer = GuidString.Buffer;
      if ( !GuidString.Buffer )
        goto LABEL_17;
      if ( GuidString.Length < 2u )
      {
        RtlFreeAnsiString(&GuidString);
        Buffer = GuidString.Buffer;
      }
      if ( !Buffer || RtlGUIDFromString(&GuidString, &Guid) < 0 )
LABEL_17:
        Guid = 0LL;
      if ( v66.Buffer && v66.Length < 2u )
        RtlFreeAnsiString(&v66);
      if ( v67.Buffer && v67.Length < 2u )
        RtlFreeAnsiString(&v67);
      if ( !UnicodeString.Buffer && !v60.Buffer )
      {
        RegistryValues = -1073741637;
        goto LABEL_77;
      }
      v13 = *v4;
      v14 = -1LL;
      v72[0] = UnicodeString.Buffer;
      v72[1] = v60.Buffer;
      v68[0] = 2;
      v68[1] = 3;
      if ( (PVOID)v13 != IopRootDeviceNode )
      {
        while ( 1 )
        {
          if ( *(PDRIVER_OBJECT *)(*(_QWORD *)(v13 + 32) + 8LL) == PiSwDeviceDriverObject )
          {
            RtlInitUnicodeString(&DestinationString, L"SWD\\");
            if ( RtlPrefixUnicodeString(&DestinationString, (PCUNICODE_STRING)(v13 + 40), 1u) )
            {
              RtlInitUnicodeString(
                &String2,
                (PCWSTR)(*(_QWORD *)(v13 + 48) + 2 * ((unsigned __int64)DestinationString.Length >> 1)));
              RtlInitUnicodeString(&DestinationString, L"DRIVERENUM");
              if ( RtlPrefixUnicodeString(&DestinationString, &String2, 1u) )
              {
                if ( String2.Buffer[(unsigned __int64)DestinationString.Length >> 1] == 92 )
                {
                  if ( !v5 )
                  {
                    RegistryValues = PnpGenerateDeviceIdsHash((__int64)UnicodeString.Buffer, (__int64)v60.Buffer, &v51);
                    if ( RegistryValues < 0 )
                      goto LABEL_142;
                    if ( (v52 & 8) != 0 )
                    {
                      v15 = v51;
                    }
                    else
                    {
                      RtlInitUnicodeString(&String2, L"SWD\\GenericRaw");
                      RegistryValues = RtlHashUnicodeString(&String2, 1u, 0, &HashValue);
                      if ( RegistryValues < 0 )
                      {
LABEL_142:
                        v7 = v48;
                        goto LABEL_76;
                      }
                      v15 = HashValue + v51;
                    }
                    RtlInitUnicodeString(&String2, L"SWD\\Generic");
                    RegistryValues = RtlHashUnicodeString(&String2, 1u, 0, &HashValue);
                    if ( RegistryValues < 0 )
                      goto LABEL_44;
                    v5 = HashValue + v15;
                    v55 = v5;
                    v51 = v5;
                  }
                  if ( *(_DWORD *)(v13 + 684) == v5 )
                  {
                    if ( v6 )
                    {
                      v16 = v47;
                    }
                    else
                    {
                      v16 = 2048;
                      v47 = 2048;
                      Str1 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x800uLL, 0x20207050u);
                      v6 = Str1;
                      if ( !Str1 )
                      {
                        RegistryValues = -1073741670;
                        goto LABEL_44;
                      }
                    }
                    v17 = Str1;
                    v18 = (PCWCH *)v72;
                    v19 = 0;
                    v20 = v68;
                    do
                    {
                      v21 = *v20;
                      LODWORD(NumberOfBytes) = v16;
                      RegistryValues = CmGetDeviceRegProp(
                                         *(__int64 *)&PiPnpRtlCtx,
                                         *(_QWORD *)(v13 + 48),
                                         0LL,
                                         v21,
                                         (__int64)&v54,
                                         (__int64)v17,
                                         (__int64)&NumberOfBytes,
                                         0);
                      if ( RegistryValues < 0 || v54 != 7 || (unsigned int)NumberOfBytes < 2 )
                      {
                        *v17 = 0;
                        RegistryValues = 0;
                      }
                      if ( v19 == 1 )
                      {
                        v22 = v17;
                        if ( *v17 )
                        {
                          while ( wcsicmp(v22, L"SWD\\GenericRaw") && wcsicmp(v22, L"SWD\\Generic") )
                          {
                            v23 = -1LL;
                            do
                              ++v23;
                            while ( v22[v23] );
                            v22 += v23 + 1;
                            if ( !*v22 )
                              goto LABEL_60;
                          }
                          *v22 = 0;
                        }
LABEL_60:
                        v16 = v47;
                      }
                      if ( *v18 )
                      {
                        if ( !PnpCompareMultiSz(*v18, v17, 1u) )
                          break;
                      }
                      else if ( *v17 )
                      {
                        break;
                      }
                      ++v19;
                      ++v20;
                      ++v18;
                    }
                    while ( v19 < 2 );
                    v5 = v55;
                    if ( v19 >= 2 )
                    {
                      RegistryValues = -1073740028;
LABEL_71:
                      v8 = v56;
                      v14 = -1LL;
                      PoolWithTag = v56;
                      break;
                    }
                    v6 = Str1;
                  }
                }
              }
            }
          }
          v13 = *(_QWORD *)(v13 + 16);
          if ( (PVOID)v13 == IopRootDeviceNode )
            goto LABEL_71;
        }
      }
      if ( RegistryValues >= 0 )
      {
        RegistryValue = IopGetRegistryValue(Handle, L"Security", 0, &v48);
        v7 = v48;
        RegistryValues = RegistryValue;
        if ( RegistryValue >= 0 )
        {
          if ( v48[1] != 3 || (v57 = v48[3], v57 < 0x28) )
          {
            RegistryValues = -1073741823;
            goto LABEL_130;
          }
          v71 = (__int64)v48 + (unsigned int)v48[2];
        }
        else if ( RegistryValue != -1073741772 )
        {
LABEL_75:
          v6 = Str1;
          goto LABEL_76;
        }
        if ( (PVOID)*v46 == IopRootDeviceNode )
        {
          if ( !RtlCreateUnicodeString(&v65, SourceString) )
            goto LABEL_98;
        }
        else
        {
          RegistryValues = PipMakeGloballyUniqueId(*(_QWORD *)(*v46 + 32), 0LL, (wchar_t **)&P);
          if ( RegistryValues < 0 )
            goto LABEL_75;
          v26 = SourceString;
          v27 = -1LL;
          do
            ++v27;
          while ( SourceString[v27] );
          v28 = P;
          do
            ++v14;
          while ( *((_WORD *)P + v14) );
          v65.MaximumLength = 2 * (v14 + v27 + 2);
          v65.Buffer = (wchar_t *)ExpAllocateStringRoutine((unsigned __int16)(2 * (v14 + v27) + 4));
          if ( !v65.Buffer )
          {
LABEL_98:
            RegistryValues = -1073741670;
            goto LABEL_75;
          }
          RegistryValues = RtlUnicodeStringPrintf(&v65, L"%ws&%ws", v26, v28);
          if ( RegistryValues < 0 )
            goto LABEL_75;
        }
        v29 = v70;
        for ( i = PnpGetGenericStorePropertyKeys(v70, (__int64)Handle, 0LL, 0, 0LL, 0, (unsigned int *)&NumberOfBytes);
              ;
              i = PnpGetGenericStorePropertyKeys(
                    v29,
                    (__int64)Handle,
                    0LL,
                    0,
                    PoolWithTag,
                    v8,
                    (unsigned int *)&NumberOfBytes) )
        {
          RegistryValues = i;
          if ( i != -1073741789 )
          {
            v8 = NumberOfBytes;
            goto LABEL_110;
          }
          v31 = NumberOfBytes;
          if ( (unsigned int)NumberOfBytes <= v8 )
          {
            RegistryValues = -1073741595;
            goto LABEL_138;
          }
          if ( PoolWithTag )
          {
            ExFreePoolWithTag((PVOID)PoolWithTag, 0);
            v31 = NumberOfBytes;
          }
          v8 = v31;
          PoolWithTag = (__int64)ExAllocatePoolWithTag(PagedPool, 20LL * v31, 0x20207050u);
          if ( !PoolWithTag )
            break;
        }
        RegistryValues = -1073741670;
LABEL_110:
        if ( RegistryValues < 0 )
          goto LABEL_138;
        if ( v8 )
        {
          v32 = (char *)ExAllocatePoolWithTag(PagedPool, 48LL * v8, 0x20207050u);
          v58 = v32;
          v33 = v32;
          if ( !v32 )
          {
            RegistryValues = -1073741670;
            goto LABEL_138;
          }
          memset(v32, 0, 48LL * v8);
          v34 = v33 + 36;
          v35 = 0;
          v36 = PoolWithTag;
          do
          {
            v37 = *(_QWORD *)(v34 + 4);
            *(_OWORD *)(v34 - 36) = *(_OWORD *)v36;
            v38 = *(_DWORD *)(v36 + 16);
            *((_DWORD *)v34 - 4) = 0;
            *((_DWORD *)v34 - 5) = v38;
            while ( 1 )
            {
              RegistryValues = PnpGetGenericStoreProperty(
                                 v70,
                                 (__int64)Handle,
                                 0LL,
                                 PoolWithTag + 20LL * v35,
                                 (_DWORD *)v34 - 1,
                                 v37,
                                 *(_DWORD *)v34,
                                 &NumberOfBytes);
              v39 = NumberOfBytes;
              if ( RegistryValues != -1073741789 )
                break;
              if ( (unsigned int)NumberOfBytes <= *(_DWORD *)v34 )
              {
                RegistryValues = -1073741595;
                goto LABEL_130;
              }
              v40 = *(void **)(v34 + 4);
              if ( v40 )
              {
                ExFreePoolWithTag(v40, 0);
                v39 = NumberOfBytes;
              }
              *(_DWORD *)v34 = v39;
              v41 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20207050u);
              *(_QWORD *)(v34 + 4) = v41;
              v37 = (__int64)v41;
              if ( !v41 )
              {
                RegistryValues = -1073741670;
                goto LABEL_125;
              }
            }
            *(_DWORD *)v34 = NumberOfBytes;
LABEL_125:
            if ( RegistryValues < 0 )
              goto LABEL_130;
            ++v35;
            v34 += 48;
            v36 += 20LL;
          }
          while ( v35 < v8 );
        }
        RegistryValues = PiSwStartCreate(
                           (unsigned __int64)&Guid & -(__int64)(GuidString.Buffer != 0LL),
                           *(_QWORD *)(*v46 + 48),
                           (__int64)v65.Buffer,
                           (__int64)UnicodeString.Buffer,
                           (__int64)v60.Buffer,
                           (unsigned __int64)&Guid & -(__int64)(GuidString.Buffer != 0LL),
                           v52,
                           (__int64)v66.Buffer,
                           (__int64)v67.Buffer,
                           v71,
                           v57,
                           (__int64)v58,
                           v8);
LABEL_130:
        v42 = v58;
        if ( v58 )
        {
          if ( v8 )
          {
            v43 = (PVOID *)((char *)v58 + 40);
            v44 = v8;
            do
            {
              if ( *v43 )
                ExFreePoolWithTag(*v43, 0);
              v43 += 6;
              --v44;
            }
            while ( v44 );
            v42 = v58;
          }
          ExFreePoolWithTag(v42, 0);
        }
LABEL_138:
        if ( PoolWithTag )
          ExFreePoolWithTag((PVOID)PoolWithTag, 0);
        v7 = v48;
        goto LABEL_75;
      }
      v6 = Str1;
LABEL_44:
      v7 = v48;
LABEL_76:
      v4 = v46;
    }
  }
LABEL_77:
  RtlFreeAnsiString(&v65);
  if ( P )
    ExFreePoolWithTag(P, 0);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v60);
  RtlFreeAnsiString(&GuidString);
  RtlFreeAnsiString(&v66);
  RtlFreeAnsiString(&v67);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( *((int *)v4 + 2) >= 0 )
    *((_DWORD *)v4 + 2) = RegistryValues;
  return 0LL;
}
