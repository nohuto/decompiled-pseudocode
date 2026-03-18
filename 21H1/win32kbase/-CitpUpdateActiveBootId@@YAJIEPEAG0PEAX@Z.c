/*
 * XREFs of ?CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z @ 0x1C00246E8
 * Callers:
 *     ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00243C4 (-CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0024578 (-CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 * Callees:
 *     ?CitpBytesToString@@YAXPEBXIPEAG@Z @ 0x1C0024914 (-CitpBytesToString@@YAXPEBXIPEAG@Z.c)
 *     ?CitpEnsureDataKey@@YAJPEAPEAX@Z @ 0x1C0024988 (-CitpEnsureDataKey@@YAJPEAPEAX@Z.c)
 *     ?CitpEnsureKey@@YAJPEAPEAXPEBG_N@Z @ 0x1C0024A54 (-CitpEnsureKey@@YAJPEAPEAXPEBG_N@Z.c)
 *     ?CitpParameterGetInt32@@YAXPEAXPEBGPEAI@Z @ 0x1C0024E5C (-CitpParameterGetInt32@@YAXPEAXPEBGPEAI@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C01FF578 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpUpdateActiveBootId(int a1, char a2, unsigned __int16 *a3, unsigned __int16 *a4)
{
  unsigned int v4; // r14d
  unsigned int v8; // edi
  int v9; // ebx
  char IsStateSeparationEnabled; // al
  const unsigned __int16 *v11; // rdx
  unsigned int v12; // edx
  bool v13; // zf
  HANDLE v14; // rsi
  NTSTATUS v15; // eax
  const char *v16; // rdx
  unsigned __int16 v17; // ax
  NTSTATUS v19; // eax
  const char *v20; // rdx
  unsigned int v21; // eax
  unsigned int v22; // r8d
  int v23; // edi
  ULONG v24; // r15d
  __int16 v25; // ax
  NTSTATUS v26; // eax
  const char *v27; // rdx
  unsigned int Data; // [rsp+30h] [rbp-A1h] BYREF
  HANDLE Handle[2]; // [rsp+38h] [rbp-99h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-89h] BYREF
  unsigned int v31; // [rsp+4Ch] [rbp-85h] BYREF
  int v32; // [rsp+50h] [rbp-81h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-79h] BYREF
  _OWORD KeyInformation[2]; // [rsp+68h] [rbp-69h] BYREF
  __int128 v35; // [rsp+88h] [rbp-49h]
  WCHAR SourceString[12]; // [rsp+98h] [rbp-39h] BYREF
  _BYTE KeyValueInformation[16]; // [rsp+B0h] [rbp-21h] BYREF
  __int16 v38; // [rsp+C0h] [rbp-11h]
  char v39; // [rsp+C4h] [rbp-Dh] BYREF

  v4 = 0;
  v32 = a1;
  Handle[0] = 0LL;
  Data = 0;
  v31 = 0;
  ResultLength = 0;
  v8 = 0;
  if ( a2 )
  {
    Data = MEMORY[0xFFFFF780000002C4];
    if ( !MEMORY[0xFFFFF780000002C4] )
      return (unsigned int)-1073741637;
  }
  v9 = CitpEnsureDataKey(Handle);
  if ( v9 < 0 )
    goto LABEL_50;
  ZwClose(Handle[0]);
  Handle[0] = 0LL;
  IsStateSeparationEnabled = RtlIsStateSeparationEnabled();
  v11 = L"\\Registry\\Machine\\OSDATA\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT\\System\\Active";
  if ( !IsStateSeparationEnabled )
    v11 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT\\System\\Active";
  v9 = CitpEnsureKey(Handle, v11, 1);
  if ( v9 < 0 )
  {
LABEL_50:
    v14 = Handle[0];
  }
  else
  {
    DestinationString = 0LL;
    CitpBytesToString(&v32, v12, SourceString);
    RtlInitUnicodeString(&DestinationString, SourceString);
    v13 = a2 == 0;
    v14 = Handle[0];
    if ( v13 )
    {
      v15 = ZwDeleteValueKey(Handle[0], &DestinationString);
      if ( v15 == -1073741772 )
        v15 = 0;
      if ( v15 < 0 )
        CitpLogFailureWorker(v15, v16, 0x5D3u);
      goto LABEL_12;
    }
    CitpParameterGetInt32(Handle[0], SourceString, &v31);
    memset(KeyInformation, 0, sizeof(KeyInformation));
    v35 = 0LL;
    v19 = ZwQueryKey(v14, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
    v9 = v19;
    if ( v19 >= 0 || v19 == -2147483643 || v19 == -1073741789 )
    {
      v21 = v35;
      if ( (unsigned int)v35 > 8 )
      {
        v23 = v35 - 8;
        v24 = 0;
        while ( v4 < v21 )
        {
          v19 = ZwEnumerateValueKey(v14, v24, KeyValueFullInformation, KeyValueInformation, 0x2Au, &ResultLength);
          v9 = v19;
          if ( v19 < 0 && v19 != -2147483643 && v19 != -1073741789 )
          {
            if ( v19 == -2147483622 )
              break;
            v22 = 1444;
            goto LABEL_33;
          }
          Handle[0] = 0LL;
          Handle[1] = &v39;
          v25 = v38;
          if ( (unsigned __int16)v38 <= 0x12u )
          {
            LOWORD(Handle[0]) = v38;
          }
          else
          {
            v25 = 18;
            LOWORD(Handle[0]) = 18;
          }
          WORD1(Handle[0]) = v25;
          v26 = ZwDeleteValueKey(v14, (PUNICODE_STRING)Handle);
          if ( v26 < 0 )
          {
            ++v24;
            CitpLogFailureWorker(v26, v27, 0x5B8u);
          }
          else
          {
            --v23;
          }
          ++v4;
          if ( !v23 )
            break;
          v21 = v35;
        }
      }
      v19 = ZwSetValueKey(v14, &DestinationString, 0, 4u, &Data, 4u);
      v9 = v19;
      if ( v19 >= 0 )
      {
        v8 = v31;
LABEL_12:
        if ( a3 )
        {
          if ( v8 > 0xFFFF )
            LOWORD(v8) = -1;
          *a3 = v8;
        }
        if ( a4 )
        {
          v17 = Data;
          if ( Data > 0xFFFF )
            v17 = -1;
          *a4 = v17;
        }
        v9 = 0;
        goto LABEL_21;
      }
      v22 = 1475;
    }
    else
    {
      v22 = 1423;
    }
LABEL_33:
    CitpLogFailureWorker(v19, v20, v22);
  }
LABEL_21:
  if ( v14 )
    ZwClose(v14);
  return (unsigned int)v9;
}
