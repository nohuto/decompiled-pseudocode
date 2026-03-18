/*
 * XREFs of DpiFdoValidateKmdAndPnpVersionMatch @ 0x1C01722D0
 * Callers:
 *     DpiFdoInitializeFdo @ 0x1C0174F5C (DpiFdoInitializeFdo.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0009604 (_tlgKeywordOn.c)
 *     ?RtlUnicodeStringCchCopyStringN@@YAJPEAU_UNICODE_STRING@@PEBG_K@Z @ 0x1C0021FFC (-RtlUnicodeStringCchCopyStringN@@YAJPEAU_UNICODE_STRING@@PEBG_K@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@5555@Z @ 0x1C0050A88 (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$.c)
 *     ?DxgkpGetFileVersion@@YAJPEAU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@PEAJ@Z @ 0x1C016EF60 (-DxgkpGetFileVersion@@YAJPEAU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@PEAJ@Z.c)
 *     DpiGetDriverFullPath @ 0x1C0170B8C (DpiGetDriverFullPath.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z @ 0x1C021CE50 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z.c)
 *     IsKnownMismatchedVersionedDriver @ 0x1C02C3B90 (IsKnownMismatchedVersionedDriver.c)
 */

__int64 __fastcall DpiFdoValidateKmdAndPnpVersionMatch(__int64 a1)
{
  unsigned int v2; // r14d
  __int64 v3; // rcx
  char v4; // r13
  _DWORD *v5; // r15
  unsigned int v6; // edx
  int DriverFullPath; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  int FileVersion; // eax
  _WORD *v12; // r10
  __int64 v13; // r8
  _WORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 *v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned __int16 **v20; // r9
  int v21; // r8d
  unsigned int v23; // edi
  unsigned int *v24; // r12
  unsigned int v25; // ebx
  int v26; // eax
  NTSTATUS v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r14
  union _LARGE_INTEGER v30; // rbx
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  int v39; // r11d
  _QWORD *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // [rsp+68h] [rbp-69h] BYREF
  union _LARGE_INTEGER v43; // [rsp+70h] [rbp-61h] BYREF
  __int128 v44; // [rsp+78h] [rbp-59h] BYREF
  int v45; // [rsp+88h] [rbp-49h] BYREF
  int v46; // [rsp+8Ch] [rbp-45h] BYREF
  int v47; // [rsp+90h] [rbp-41h] BYREF
  int v48; // [rsp+94h] [rbp-3Dh] BYREF
  unsigned int v49; // [rsp+98h] [rbp-39h]
  UNICODE_STRING String; // [rsp+A0h] [rbp-31h] BYREF
  union _LARGE_INTEGER v51; // [rsp+B0h] [rbp-21h] BYREF
  __int64 v52; // [rsp+B8h] [rbp-19h] BYREF
  PVOID P[2]; // [rsp+C0h] [rbp-11h] BYREF
  unsigned __int16 *v54; // [rsp+D0h] [rbp-1h] BYREF
  int v55; // [rsp+D8h] [rbp+7h]
  __int128 v56; // [rsp+E0h] [rbp+Fh] BYREF
  __int64 v57; // [rsp+F0h] [rbp+1Fh] BYREF
  int v58; // [rsp+F8h] [rbp+27h]

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 24);
  *(_OWORD *)P = 0LL;
  v4 = 0;
  v5 = (_DWORD *)(a1 + 1124);
  v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 64) + 40LL) + 28LL);
  v49 = v6;
  if ( (v6 >= 0x6000 && *v5 != 1297040209 || v6 >= 0x8000 && *v5 == 1297040209)
    && !*(_BYTE *)(a1 + 2693)
    && !*(_BYTE *)(a1 + 2692)
    && !*(_BYTE *)(a1 + 2695)
    && !*(_BYTE *)(a1 + 481)
    && !*(_BYTE *)(a1 + 2694) )
  {
    v43.QuadPart = 0LL;
    DriverFullPath = DpiGetDriverFullPath(v3, P);
    v10 = DriverFullPath;
    if ( DriverFullPath >= 0 )
    {
      FileVersion = DxgkpGetFileVersion((struct _UNICODE_STRING *)P, &v43, 0LL);
      v10 = FileVersion;
      if ( FileVersion >= 0 )
      {
        v12 = *(_WORD **)(a1 + 4896);
        if ( !v12 )
        {
          v32 = WdLogNewEntry5_WdError(v9, v8);
          *(_QWORD *)(v32 + 24) = -1073741823LL;
          goto LABEL_60;
        }
        v44 = 0LL;
        v13 = 0x7FFFLL;
        v14 = v12;
        do
        {
          if ( !*v14 )
            break;
          ++v14;
          --v13;
        }
        while ( v13 );
        v15 = (0x7FFF - v13) & ((unsigned __int128)-(__int128)(unsigned __int64)v13 >> 64);
        if ( v13 )
        {
          LOWORD(v15) = 2 * v15;
          *((_QWORD *)&v44 + 1) = v12;
          LOWORD(v44) = v15;
          WORD1(v44) = v15 + 2;
        }
        else
        {
          v15 = (unsigned __int16)v44;
        }
        v16 = 0x7FFFLL;
        v57 = *(_QWORD *)L"00000";
        v58 = *(_DWORD *)L"0";
        v17 = &v57;
        String = 0LL;
        do
        {
          if ( !*(_WORD *)v17 )
            break;
          v17 = (__int64 *)((char *)v17 + 2);
          --v16;
        }
        while ( v16 );
        v18 = (0x7FFF - v16) & -(__int64)(v16 != 0);
        if ( v16 )
        {
          String.Length = 2 * v18;
          LOWORD(v18) = 2 * v18 + 2;
          String.MaximumLength = v18;
          String.Buffer = (wchar_t *)&v57;
        }
        v19 = 0;
        v20 = &v54;
        v54 = 0LL;
        v56 = 0LL;
        v55 = 0;
        v21 = 0;
        if ( !((unsigned __int16)v15 >> 1) )
        {
LABEL_59:
          v32 = WdLogNewEntry5_WdError(v18, v15);
          *(_QWORD *)(v32 + 24) = -1073741275LL;
          goto LABEL_60;
        }
        v18 = *((_QWORD *)&v44 + 1);
        while ( 1 )
        {
          if ( *(_WORD *)v18 == 46 )
          {
            *(_DWORD *)v20 = v19;
            v20 = (unsigned __int16 **)((char *)v20 + 4);
            ++v21;
          }
          if ( v21 == 3 )
            break;
          ++v19;
          v18 += 2LL;
          if ( v19 >= (unsigned __int16)v15 >> 1 )
            goto LABEL_59;
        }
        v23 = 0;
        v24 = (unsigned int *)&v54;
        while ( 1 )
        {
          if ( v23 && (v2 = *((_DWORD *)&v54 + v23 - 1) + 1, v23 == 3) )
            v25 = (unsigned __int16)v15 >> 1;
          else
            v25 = *v24;
          if ( v2 >= v25 || v25 > (unsigned __int16)v15 >> 1 )
          {
            v33 = WdLogNewEntry5_WdAssertion(v18, v15);
            *(_QWORD *)(v33 + 24) = 7871LL;
            WdLogEvent5_WdAssertion(v33);
          }
          v26 = RtlUnicodeStringCchCopyStringN(&String, (char *)(*((_QWORD *)&v44 + 1) + 2LL * v2), v25 - v2);
          v10 = v26;
          if ( v26 < 0 )
            break;
          v27 = RtlUnicodeStringToInteger(&String, 0, (PULONG)&v56 + v23);
          v29 = v27;
          if ( v27 < 0 )
          {
            v32 = WdLogNewEntry5_WdError(v18, v28);
            *(_QWORD *)(v32 + 24) = v29;
            goto LABEL_60;
          }
          ++v23;
          ++v24;
          if ( v23 > 3 )
          {
            v30 = v43;
            HIDWORD(v42) = WORD2(v56) | ((_DWORD)v56 << 16);
            LODWORD(v42) = WORD6(v56) | (DWORD2(v56) << 16);
            v31 = v42;
            if ( v42 != v43.QuadPart
              && !(unsigned __int8)IsKnownMismatchedVersionedDriver((unsigned int)*v5, &v42, &v43) )
            {
              if ( (unsigned int)dword_1C00AEA90 > 5 && tlgKeywordOn((__int64)&dword_1C00AEA90, 0x400000000100LL) )
              {
                v45 = *(_DWORD *)(a1 + 1140);
                v46 = *(_DWORD *)(a1 + 1136);
                v47 = *(_DWORD *)(a1 + 1132);
                v48 = *(_DWORD *)(a1 + 1128);
                v54 = (unsigned __int16 *)&v44;
                LODWORD(v42) = v39;
                v51 = v30;
                v52 = v31;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                  v36,
                  byte_1C007DF80,
                  v37,
                  v38,
                  &v54,
                  (__int64)&v52,
                  (__int64)&v51,
                  (__int64)&v42,
                  (__int64)&v48,
                  (__int64)&v47,
                  (__int64)&v46,
                  (__int64)&v45);
              }
              v40 = (_QWORD *)WdLogNewEntry5_WdError(v36, v35);
              v40[3] = a1;
              v40[4] = v31;
              v40[5] = v30.QuadPart;
              v40[6] = v29;
              v40[7] = -1073741438LL;
              WdLogEvent5_WdError(v40);
              DxgCreateLiveDumpWithWdLogs(0x193u, 0x80BuLL, (unsigned int)*v5, v43.HighPart, v30.LowPart, v49 >= 0xB000);
              LOBYTE(v41) = 1;
              if ( (unsigned __int8)WdIsDebuggerPresent(v41) )
              {
                DbgPrintEx(
                  0x65u,
                  0,
                  "A mismatch between the PNP/INF version and the KMD file version on the graphics adapter has been detec"
                  "ted. The adapter will fail to start.");
                __debugbreak();
              }
              v4 = 1;
            }
            goto LABEL_29;
          }
          v15 = (unsigned __int16)v44;
          v2 = 0;
        }
      }
    }
    v32 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v32 + 24) = v10;
LABEL_60:
    WdLogEvent5_WdError(v32);
  }
LABEL_29:
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  return v4 != 0 ? 0xC0000182 : 0;
}
