/*
 * XREFs of PopDiagTracePowerRequestCreate @ 0x140670078
 * Callers:
 *     PopCreateUserPowerRequest @ 0x140670C38 (PopCreateUserPowerRequest.c)
 *     PopDiagTraceControlCallback @ 0x140671060 (PopDiagTraceControlCallback.c)
 *     PopCreateKernelPowerRequest @ 0x140772988 (PopCreateKernelPowerRequest.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x14026CAF0 (RtlStringCbPrintfW.c)
 *     PoStoreRequester @ 0x1402710E8 (PoStoreRequester.c)
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     Feature_3401902395__private_IsEnabledDeviceUsage @ 0x1403F7E54 (Feature_3401902395__private_IsEnabledDeviceUsage.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall PopDiagTracePowerRequestCreate(char a1, __int64 a2)
{
  const EVENT_DESCRIPTOR *v4; // rdx
  int *v5; // rax
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // rbx
  __int64 v8; // rsi
  wchar_t *v9; // r9
  SIZE_T v10; // rsi
  __int64 v11; // r8
  _WORD *v12; // rax
  unsigned __int16 v13; // di
  __int64 v14; // r8
  wchar_t *v15; // rax
  int SessionId; // eax
  __int64 v17; // rsi
  _WORD *v18; // rax
  __int64 v19; // rcx
  wchar_t *v20; // rdx
  __int64 v21; // r8
  int v22; // eax
  int v23; // eax
  bool v24; // zf
  int v25; // eax
  unsigned int v26; // r9d
  unsigned __int16 v27; // di
  unsigned __int16 v28; // dx
  __int64 v29; // rcx
  __int64 v30; // rax
  const EVENT_DESCRIPTOR *v31; // rdx
  __int64 v32; // rax
  unsigned int v33; // r9d
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  ULONG v38; // r9d
  unsigned __int16 v39; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v40; // [rsp+34h] [rbp-CCh] BYREF
  int v41; // [rsp+38h] [rbp-C8h] BYREF
  int v42; // [rsp+3Ch] [rbp-C4h] BYREF
  int v43; // [rsp+40h] [rbp-C0h] BYREF
  int v44; // [rsp+44h] [rbp-BCh] BYREF
  int v45; // [rsp+48h] [rbp-B8h] BYREF
  int v46; // [rsp+4Ch] [rbp-B4h] BYREF
  int v47; // [rsp+50h] [rbp-B0h] BYREF
  int v48; // [rsp+54h] [rbp-ACh] BYREF
  int v49; // [rsp+58h] [rbp-A8h] BYREF
  int v50; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v51; // [rsp+60h] [rbp-A0h] BYREF
  SIZE_T NumberOfBytes[2]; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  int *v55; // [rsp+A0h] [rbp-60h]
  __int64 v56; // [rsp+A8h] [rbp-58h]
  int *v57; // [rsp+B0h] [rbp-50h]
  __int64 v58; // [rsp+B8h] [rbp-48h]
  int *v59; // [rsp+C0h] [rbp-40h]
  __int64 v60; // [rsp+C8h] [rbp-38h]
  int *v61; // [rsp+D0h] [rbp-30h]
  __int64 v62; // [rsp+D8h] [rbp-28h]
  int *v63; // [rsp+E0h] [rbp-20h]
  __int64 v64; // [rsp+E8h] [rbp-18h]
  int *v65; // [rsp+F0h] [rbp-10h]
  __int64 v66; // [rsp+F8h] [rbp-8h]
  int *v67; // [rsp+100h] [rbp+0h]
  __int64 v68; // [rsp+108h] [rbp+8h]
  __int64 v69; // [rsp+110h] [rbp+10h]
  __int64 v70; // [rsp+118h] [rbp+18h]
  __int64 v71; // [rsp+120h] [rbp+20h]
  __int64 v72; // [rsp+128h] [rbp+28h]
  __int64 v73; // [rsp+130h] [rbp+30h]
  __int64 v74; // [rsp+138h] [rbp+38h]
  __int16 *v75; // [rsp+140h] [rbp+40h]
  __int64 v76; // [rsp+148h] [rbp+48h]
  __int16 *v77; // [rsp+150h] [rbp+50h]
  __int64 v78; // [rsp+158h] [rbp+58h]
  SIZE_T v79; // [rsp+160h] [rbp+60h]
  int v80; // [rsp+168h] [rbp+68h]
  int v81; // [rsp+16Ch] [rbp+6Ch]
  wchar_t pszDest[24]; // [rsp+1E0h] [rbp+E0h] BYREF

  v51 = a2;
  v39 = 0;
  v40 = 0;
  DestinationString = 0LL;
  if ( PopDiagHandleRegistered )
  {
    v4 = &POP_ETW_EVENT_CREATE_POWER_REQUEST;
    if ( a1 )
      v4 = &POP_ETW_EVENT_POWER_REQUEST_RUNDOWN;
    if ( EtwEventEnabled(PopDiagHandle, v4) )
    {
      v5 = *(int **)(a2 + 80);
      NumberOfBytes[0] = 0LL;
      v41 = *v5;
      v44 = 0;
      v45 = 0;
      v42 = 0;
      v46 = 0;
      v47 = 0;
      v48 = 0;
      v43 = 0;
      v50 = 0;
      v49 = 0;
      PoStoreRequester(*(_QWORD *)(a2 + 80), 0LL, NumberOfBytes, 0);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x50455654u);
      v7 = PoolWithTag;
      if ( PoolWithTag )
      {
        if ( (int)PoStoreRequester(*(_QWORD *)(v51 + 80), (__int64)PoolWithTag, NumberOfBytes, 0) >= 0 )
        {
          if ( v41 )
          {
            v44 = v7[6];
            if ( (unsigned int)Feature_3401902395__private_IsEnabledDeviceUsage() )
              SessionId = *(_DWORD *)(v51 + 16);
            else
              SessionId = MmGetSessionIdEx(*(_QWORD *)(*(_QWORD *)(v51 + 80) + 8LL));
            v45 = SessionId;
            v17 = *((_QWORD *)v7 + 2);
            *(_OWORD *)NumberOfBytes = 0LL;
            v10 = (SIZE_T)v7 + v17;
            if ( !v10 )
              goto LABEL_30;
            v18 = (_WORD *)v10;
            v19 = 0x7FFFLL;
            do
            {
              if ( !*v18 )
                break;
              ++v18;
              --v19;
            }
            while ( v19 );
            if ( v19 )
            {
              v13 = 2 * (v19 != 0 ? 0x7FFF - v19 : 0);
            }
            else
            {
LABEL_30:
              v10 = NumberOfBytes[1];
              v13 = NumberOfBytes[0];
            }
            if ( v41 == 2 )
            {
              RtlStringCbPrintfW(pszDest, 0x2CuLL, L"%d", (unsigned int)v7[7]);
              v20 = pszDest;
            }
            else
            {
              v20 = 0LL;
            }
            RtlInitUnicodeString(&DestinationString, v20);
          }
          else
          {
            v8 = *((_QWORD *)v7 + 2);
            v9 = (wchar_t *)((char *)v7 + *((_QWORD *)v7 + 3));
            *(_OWORD *)NumberOfBytes = 0LL;
            v10 = (SIZE_T)v7 + v8;
            if ( !v10 )
              goto LABEL_14;
            v11 = 0x7FFFLL;
            v12 = (_WORD *)v10;
            do
            {
              if ( !*v12 )
                break;
              ++v12;
              --v11;
            }
            while ( v11 );
            if ( v11 )
            {
              v13 = 2 * (v11 != 0 ? 0x7FFF - v11 : 0);
            }
            else
            {
LABEL_14:
              v10 = NumberOfBytes[1];
              v13 = NumberOfBytes[0];
            }
            if ( v9 )
            {
              v14 = 0x7FFFLL;
              v15 = v9;
              do
              {
                if ( !*v15 )
                  break;
                ++v15;
                --v14;
              }
              while ( v14 );
              if ( v14 )
              {
                DestinationString.Buffer = v9;
                DestinationString.Length = 2 * (v14 != 0 ? 0x7FFF - v14 : 0);
              }
            }
          }
          v21 = v51;
          v22 = v42;
          if ( !*(_QWORD *)(v51 + 80) )
            v22 = 1;
          v42 = v22;
          v23 = *(_DWORD *)(v51 + 20);
          if ( (v23 & 2) != 0 )
          {
            v46 = 1;
            v23 = *(_DWORD *)(v51 + 20);
          }
          if ( (v23 & 1) != 0 )
          {
            v47 = 1;
            v23 = *(_DWORD *)(v51 + 20);
          }
          if ( (v23 & 4) != 0 )
          {
            v48 = 1;
            v23 = *(_DWORD *)(v51 + 20);
          }
          if ( (v23 & 8) != 0 )
          {
            v49 = 1;
            v23 = *(_DWORD *)(v51 + 20);
          }
          if ( (v23 & 0x10) != 0 )
          {
            v50 = 1;
            v23 = *(_DWORD *)(v51 + 20);
          }
          v24 = (v23 & 0x20) == 0;
          v25 = v43;
          v26 = 13;
          if ( !v24 )
            v25 = 1;
          *(_QWORD *)&UserData.Size = 8LL;
          v43 = v25;
          UserData.Ptr = (ULONGLONG)&v51;
          v55 = &v41;
          v57 = &v44;
          v59 = &v45;
          v61 = &v42;
          v63 = &v46;
          v65 = &v47;
          v67 = &v48;
          v69 = v51 + 36;
          v71 = v51 + 32;
          v73 = v51 + 40;
          v27 = v13 >> 1;
          v28 = DestinationString.Length >> 1;
          v75 = (__int16 *)&v39;
          v77 = &v40;
          v39 = v27;
          v40 = DestinationString.Length >> 1;
          v56 = 4LL;
          v58 = 4LL;
          v60 = 4LL;
          v62 = 4LL;
          v64 = 4LL;
          v66 = 4LL;
          v68 = 4LL;
          v70 = 4LL;
          v72 = 4LL;
          v74 = 4LL;
          v76 = 2LL;
          v78 = 2LL;
          if ( v27 )
          {
            v26 = 14;
            v79 = v10;
            v80 = 2 * v27;
            v81 = 0;
          }
          if ( v28 )
          {
            v29 = 2LL * v26;
            *(&UserData.Ptr + v29) = (ULONGLONG)DestinationString.Buffer;
            *(&UserData.Reserved + 2 * v29) = 0;
            *(&UserData.Size + 2 * v29) = 2 * v28;
            ++v26;
          }
          v30 = 2LL * v26;
          v31 = &POP_ETW_EVENT_POWER_REQUEST_RUNDOWN;
          *(&UserData.Ptr + v30) = (ULONGLONG)&v49;
          *((_QWORD *)&UserData.Size + v30) = 4LL;
          v32 = v26 + 1;
          v33 = v26 + 2;
          v32 *= 2LL;
          *(&UserData.Ptr + v32) = (ULONGLONG)&v50;
          *((_QWORD *)&UserData.Size + v32) = 4LL;
          v34 = 2LL * v33;
          *(&UserData.Ptr + v34) = (ULONGLONG)&v43;
          *((_QWORD *)&UserData.Size + v34) = 4LL;
          v35 = v33 + 1;
          v33 += 2;
          v35 *= 2LL;
          *(&UserData.Ptr + v35) = v21 + 44;
          *((_QWORD *)&UserData.Size + v35) = 4LL;
          v36 = 2LL * v33;
          *(&UserData.Ptr + v36) = v21 + 48;
          *((_QWORD *)&UserData.Size + v36) = 4LL;
          v37 = v33 + 1;
          v38 = v33 + 2;
          v37 *= 2LL;
          *(&UserData.Ptr + v37) = v21 + 52;
          *((_QWORD *)&UserData.Size + v37) = 4LL;
          if ( !a1 )
            v31 = &POP_ETW_EVENT_CREATE_POWER_REQUEST;
          EtwWrite(PopDiagHandle, v31, 0LL, v38, &UserData);
        }
        ExFreePoolWithTag(v7, 0x50455654u);
      }
    }
  }
}
