/*
 * XREFs of ?FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z @ 0x1C02027A8
 * Callers:
 *     ?CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C020271C (-CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     ?CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C0202E20 (-CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     _tlgKeywordOn @ 0x1C0012AB4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     wcscmp_0 @ 0x1C002CBF8 (wcscmp_0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@34@Z @ 0x1C005FBA8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U1@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U1@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@343@Z @ 0x1C005FCB4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U1@U2@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_t.c)
 *     DxgkRetrieveStringFromRegistry @ 0x1C01FE9D0 (DxgkRetrieveStringFromRegistry.c)
 *     ?ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z @ 0x1C0202BC4 (-ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z.c)
 */

__int64 __fastcall FindBlockListStrings(
        PCWSTR SourceString,
        unsigned int a2,
        unsigned int a3,
        unsigned __int16 *a4,
        enum _QAI_DRIVERVERSION a5,
        unsigned int *a6,
        struct _UNICODE_STRING *a7)
{
  unsigned int *v7; // rdi
  unsigned int v8; // r15d
  struct _UNICODE_STRING *v9; // rsi
  unsigned int v10; // r14d
  __int64 v11; // r9
  NTSTATUS v12; // r12d
  int v13; // ebx
  __int64 v14; // r13
  ULONG v15; // eax
  ULONG v16; // ecx
  unsigned __int16 *v17; // r9
  unsigned __int64 v18; // rax
  NTSTATUS v20; // eax
  int v21; // r10d
  __int64 v22; // r15
  unsigned int v23; // edi
  __int64 v24; // r15
  unsigned __int16 v25; // ax
  unsigned __int64 v26; // r14
  wchar_t *Buffer; // rsi
  unsigned __int64 v28; // rax
  const wchar_t *v29; // rcx
  __int64 v30; // rbx
  int v31; // eax
  unsigned int v32; // edi
  unsigned __int16 v33; // ax
  unsigned __int64 v34; // rsi
  wchar_t *v35; // r14
  unsigned __int64 v36; // rax
  const wchar_t *v37; // rcx
  __int64 v38; // rbx
  int v39; // eax
  char v40; // si
  unsigned int v41; // edi
  unsigned __int16 v42; // ax
  unsigned __int64 v43; // r14
  wchar_t *v44; // r15
  unsigned __int64 v45; // rax
  const wchar_t *v46; // rcx
  __int64 v47; // rbx
  int v48; // eax
  char v49; // r9
  unsigned int v50; // edi
  __int64 v51; // rbx
  enum _QAI_DRIVERVERSION v52; // esi
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned __int8 v60[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v61; // [rsp+54h] [rbp-ACh]
  unsigned __int32 v62; // [rsp+58h] [rbp-A8h]
  enum _QAI_DRIVERVERSION v63; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v64; // [rsp+60h] [rbp-A0h] BYREF
  enum _QAI_DRIVERVERSION v65; // [rsp+64h] [rbp-9Ch] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp-98h] BYREF
  ULONG v67; // [rsp+6Ch] [rbp-94h]
  void *KeyHandle; // [rsp+70h] [rbp-90h] BYREF
  struct _UNICODE_STRING v69; // [rsp+80h] [rbp-80h] BYREF
  int v70; // [rsp+90h] [rbp-70h] BYREF
  ULONG v71; // [rsp+94h] [rbp-6Ch]
  unsigned __int16 *v72; // [rsp+98h] [rbp-68h]
  struct _UNICODE_STRING *v73; // [rsp+A0h] [rbp-60h]
  unsigned __int16 *v74; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int *v75; // [rsp+B0h] [rbp-50h]
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+C8h] [rbp-38h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-28h] BYREF
  _OWORD KeyInformation[2]; // [rsp+108h] [rbp+8h] BYREF
  __int128 v80; // [rsp+128h] [rbp+28h]

  v7 = a6;
  v8 = a2;
  v9 = a7;
  v62 = a2;
  v10 = a3;
  v72 = a4;
  v61 = a3;
  v75 = a6;
  v73 = a7;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    return 0LL;
  ResultLength = 0;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v80 = 0LL;
  v12 = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
  if ( v12 >= 0 )
  {
    if ( (_DWORD)v80 )
    {
      v13 = DWORD1(v80) + 18;
      v14 = operator new[]((unsigned int)(DWORD1(v80) + 18), 0x4B677844u, 256LL, v11);
      if ( v14 )
      {
        v15 = 0;
        v67 = 0;
        if ( (_DWORD)v80 )
        {
          v16 = v13 - 2;
          v71 = v13 - 2;
          do
          {
            v12 = ZwEnumerateValueKey(KeyHandle, v15, KeyValueBasicInformation, (PVOID)v14, v16, &ResultLength);
            if ( v12 >= 0 && *(_DWORD *)(v14 + 4) == 7 )
            {
              v17 = v72;
              v18 = (unsigned __int64)*(unsigned int *)(v14 + 8) >> 1;
              v60[0] = 0;
              *(_WORD *)(v14 + 2 * v18 + 12) = 0;
              v12 = ParseAndCompareBlockListCondition((const unsigned __int16 *)(v14 + 12), v8, v10, v17, a5, v60);
              if ( v12 >= 0 )
              {
                if ( v60[0] )
                {
                  ValueName = 0LL;
                  RtlInitUnicodeString(&ValueName, (PCWSTR)(v14 + 12));
                  if ( *v7 < 0x14 )
                  {
                    v20 = DxgkRetrieveStringFromRegistry(KeyHandle, &ValueName, (__int64)&v9[*v7]);
                    LOBYTE(v21) = 0;
                    v12 = v20;
                    if ( v20 >= 0 )
                    {
                      v9[*v7].Buffer[((unsigned __int64)v9[*v7].Length >> 1) - 1] = 0;
                      v22 = *v7;
                      v23 = 0;
                      v24 = v22;
                      v25 = _mm_cvtsi128_si32((__m128i)v9[v24]);
                      v69 = v9[v24];
                      v26 = v25;
                      if ( v25 )
                      {
                        Buffer = v69.Buffer;
                        v28 = 0LL;
                        do
                        {
                          v29 = &Buffer[v28 / 2];
                          v30 = -1LL;
                          do
                            ++v30;
                          while ( v29[v30] );
                          if ( !(_DWORD)v30 )
                            break;
                          v31 = wcscmp_0(v29, L"GPU_P_ALL");
                          LOBYTE(v21) = 0;
                          if ( !v31 )
                          {
                            v60[0] = 1;
                            goto LABEL_24;
                          }
                          v23 += v30 + 1;
                          v28 = 2LL * v23;
                        }
                        while ( v28 < v26 );
                      }
                      v60[0] = 0;
LABEL_24:
                      v32 = 0;
                      v33 = _mm_cvtsi128_si32((__m128i)v73[v24]);
                      v69 = v73[v24];
                      v34 = v33;
                      if ( v33 )
                      {
                        v35 = v69.Buffer;
                        v36 = 0LL;
                        do
                        {
                          v37 = &v35[v36 / 2];
                          v38 = -1LL;
                          do
                            ++v38;
                          while ( v37[v38] );
                          if ( !(_DWORD)v38 )
                            break;
                          v39 = wcscmp_0(v37, L"GPU_PV_ALL");
                          LOBYTE(v21) = 0;
                          if ( !v39 )
                          {
                            v40 = 1;
                            goto LABEL_31;
                          }
                          v32 += v38 + 1;
                          v36 = 2LL * v32;
                        }
                        while ( v36 < v34 );
                      }
                      v40 = 0;
LABEL_31:
                      v41 = 0;
                      v42 = _mm_cvtsi128_si32((__m128i)v73[v24]);
                      v69 = v73[v24];
                      v43 = v42;
                      if ( v42 )
                      {
                        v44 = v69.Buffer;
                        v45 = 0LL;
                        do
                        {
                          v46 = &v44[v45 / 2];
                          v47 = -1LL;
                          do
                            ++v47;
                          while ( v46[v47] );
                          if ( !(_DWORD)v47 )
                            break;
                          v48 = wcscmp_0(v46, L"GPU_PV_HIGH_SECURITY");
                          LOBYTE(v21) = 0;
                          if ( !v48 )
                          {
                            v49 = 1;
                            goto LABEL_44;
                          }
                          v41 += v47 + 1;
                          v45 = 2LL * v41;
                        }
                        while ( v45 < v43 );
                      }
                      v49 = 0;
LABEL_44:
                      if ( (v40 || v49)
                        && (unsigned int)dword_1C012F918 > 5
                        && tlgKeywordOn((__int64)&dword_1C012F918, 0x400000000200LL) )
                      {
                        if ( !(_BYTE)v55 || (v56 = 1, v40) )
                          v56 = v21;
                        v50 = v61;
                        v51 = v14 + 12;
                        v52 = v62;
                        v70 = v56;
                        v63 = a5;
                        *(_QWORD *)&v69.Length = v72;
                        v74 = (unsigned __int16 *)(v14 + 12);
                        v64 = v61;
                        v65 = v62;
                        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                          v53,
                          byte_1C0099BE3,
                          v54,
                          v55,
                          (__int64)&v65,
                          (__int64)&v64,
                          (void **)&v69,
                          (__int64)&v63,
                          (void **)&v74,
                          (__int64)&v70);
                        LOBYTE(v21) = 0;
                      }
                      else
                      {
                        v50 = v61;
                        v51 = v14 + 12;
                        v52 = v62;
                      }
                      if ( v60[0] != (_BYTE)v21 && (unsigned int)dword_1C012F918 > 5 )
                      {
                        if ( tlgKeywordOn((__int64)&dword_1C012F918, 0x400000001000LL) )
                        {
                          v65 = a5;
                          v74 = v72;
                          *(_QWORD *)&v69.Length = v51;
                          v64 = v50;
                          v63 = v52;
                          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                            v57,
                            byte_1C0099B7F,
                            v58,
                            v59,
                            (__int64)&v63,
                            (__int64)&v64,
                            (void **)&v74,
                            (__int64)&v65,
                            (void **)&v69);
                        }
                      }
                      v7 = v75;
                      v9 = v73;
                      v10 = v61;
                      v8 = v62;
                      ++*v75;
                    }
                  }
                }
              }
            }
            v16 = v71;
            v15 = v67 + 1;
            v67 = v15;
          }
          while ( v15 < (unsigned int)v80 );
        }
        operator delete[]((void *)v14);
      }
    }
  }
  ZwClose(KeyHandle);
  return (unsigned int)v12;
}
