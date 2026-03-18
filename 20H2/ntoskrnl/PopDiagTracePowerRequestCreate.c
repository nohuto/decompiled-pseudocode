/*
 * XREFs of PopDiagTracePowerRequestCreate @ 0x14071D408
 * Callers:
 *     PopDiagTraceControlCallback @ 0x14071C0D0 (PopDiagTraceControlCallback.c)
 *     PopCreateUserPowerRequest @ 0x14071CC80 (PopCreateUserPowerRequest.c)
 *     PopCreateKernelPowerRequest @ 0x14076E658 (PopCreateKernelPowerRequest.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14020AEFC (RtlStringCbPrintfW.c)
 *     EtwWrite @ 0x14020E030 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     EtwEventEnabled @ 0x14027E3D0 (EtwEventEnabled.c)
 *     PoStoreRequester @ 0x140361B40 (PoStoreRequester.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PopDiagTracePowerRequestCreate(char a1, __int64 a2)
{
  const EVENT_DESCRIPTOR *v4; // rdx
  int *v5; // rax
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // rdi
  __int64 v8; // rsi
  SIZE_T v9; // rsi
  _WORD *v10; // rax
  __int64 v11; // rcx
  unsigned __int16 v12; // bx
  wchar_t *v13; // rdx
  __int64 v14; // r8
  int v15; // eax
  int v16; // eax
  bool v17; // zf
  int v18; // eax
  unsigned int v19; // r9d
  unsigned __int16 v20; // bx
  unsigned __int16 v21; // dx
  __int64 v22; // rax
  const EVENT_DESCRIPTOR *v23; // rdx
  __int64 v24; // rax
  unsigned int v25; // r9d
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  ULONG v30; // r9d
  __int64 v31; // rcx
  __int64 v32; // rsi
  wchar_t *v33; // r9
  __int64 v34; // r8
  _WORD *v35; // rax
  __int64 v36; // r8
  wchar_t *v37; // rax
  unsigned __int16 v38; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v39; // [rsp+34h] [rbp-CCh] BYREF
  int v40; // [rsp+38h] [rbp-C8h] BYREF
  int v41; // [rsp+3Ch] [rbp-C4h] BYREF
  int v42; // [rsp+40h] [rbp-C0h] BYREF
  int v43; // [rsp+44h] [rbp-BCh] BYREF
  int SessionId; // [rsp+48h] [rbp-B8h] BYREF
  int v45; // [rsp+4Ch] [rbp-B4h] BYREF
  int v46; // [rsp+50h] [rbp-B0h] BYREF
  int v47; // [rsp+54h] [rbp-ACh] BYREF
  int v48; // [rsp+58h] [rbp-A8h] BYREF
  int v49; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v50; // [rsp+60h] [rbp-A0h] BYREF
  SIZE_T NumberOfBytes[2]; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  int *v54; // [rsp+A0h] [rbp-60h]
  __int64 v55; // [rsp+A8h] [rbp-58h]
  int *v56; // [rsp+B0h] [rbp-50h]
  __int64 v57; // [rsp+B8h] [rbp-48h]
  int *p_SessionId; // [rsp+C0h] [rbp-40h]
  __int64 v59; // [rsp+C8h] [rbp-38h]
  int *v60; // [rsp+D0h] [rbp-30h]
  __int64 v61; // [rsp+D8h] [rbp-28h]
  int *v62; // [rsp+E0h] [rbp-20h]
  __int64 v63; // [rsp+E8h] [rbp-18h]
  int *v64; // [rsp+F0h] [rbp-10h]
  __int64 v65; // [rsp+F8h] [rbp-8h]
  int *v66; // [rsp+100h] [rbp+0h]
  __int64 v67; // [rsp+108h] [rbp+8h]
  __int64 v68; // [rsp+110h] [rbp+10h]
  __int64 v69; // [rsp+118h] [rbp+18h]
  __int64 v70; // [rsp+120h] [rbp+20h]
  __int64 v71; // [rsp+128h] [rbp+28h]
  __int64 v72; // [rsp+130h] [rbp+30h]
  __int64 v73; // [rsp+138h] [rbp+38h]
  __int16 *v74; // [rsp+140h] [rbp+40h]
  __int64 v75; // [rsp+148h] [rbp+48h]
  __int16 *v76; // [rsp+150h] [rbp+50h]
  __int64 v77; // [rsp+158h] [rbp+58h]
  SIZE_T v78; // [rsp+160h] [rbp+60h]
  int v79; // [rsp+168h] [rbp+68h]
  int v80; // [rsp+16Ch] [rbp+6Ch]
  wchar_t pszDest[24]; // [rsp+1E0h] [rbp+E0h] BYREF

  v50 = a2;
  v38 = 0;
  v39 = 0;
  DestinationString = 0LL;
  if ( PopDiagHandleRegistered )
  {
    v4 = &POP_ETW_EVENT_CREATE_POWER_REQUEST;
    if ( a1 )
      v4 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_POWER_REQUEST_RUNDOWN;
    if ( EtwEventEnabled(PopDiagHandle, v4) )
    {
      v5 = *(int **)(a2 + 80);
      NumberOfBytes[0] = 0LL;
      v40 = *v5;
      v43 = 0;
      SessionId = 0;
      v41 = 0;
      v45 = 0;
      v46 = 0;
      v47 = 0;
      v42 = 0;
      v49 = 0;
      v48 = 0;
      PoStoreRequester(*(_QWORD *)(a2 + 80), 0LL, NumberOfBytes, 0);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x50455654u);
      v7 = PoolWithTag;
      if ( PoolWithTag )
      {
        if ( (int)PoStoreRequester(*(_QWORD *)(v50 + 80), (__int64)PoolWithTag, NumberOfBytes, 0) >= 0 )
        {
          if ( v40 )
          {
            v43 = v7[6];
            SessionId = MmGetSessionIdEx(*(_QWORD *)(*(_QWORD *)(v50 + 80) + 8LL));
            v8 = *((_QWORD *)v7 + 2);
            *(_OWORD *)NumberOfBytes = 0LL;
            v9 = (SIZE_T)v7 + v8;
            if ( !v9 )
              goto LABEL_54;
            v10 = (_WORD *)v9;
            v11 = 0x7FFFLL;
            do
            {
              if ( !*v10 )
                break;
              ++v10;
              --v11;
            }
            while ( v11 );
            if ( v11 )
            {
              v12 = 2 * (v11 != 0 ? 0x7FFF - v11 : 0);
            }
            else
            {
LABEL_54:
              v9 = NumberOfBytes[1];
              v12 = NumberOfBytes[0];
            }
            if ( v40 == 2 )
            {
              RtlStringCbPrintfW(pszDest, 0x2CuLL, L"%d", (unsigned int)v7[7]);
              v13 = pszDest;
            }
            else
            {
              v13 = 0LL;
            }
            RtlInitUnicodeString(&DestinationString, v13);
          }
          else
          {
            v32 = *((_QWORD *)v7 + 2);
            v33 = (wchar_t *)((char *)v7 + *((_QWORD *)v7 + 3));
            *(_OWORD *)NumberOfBytes = 0LL;
            v9 = (SIZE_T)v7 + v32;
            if ( !v9 )
              goto LABEL_53;
            v34 = 0x7FFFLL;
            v35 = (_WORD *)v9;
            do
            {
              if ( !*v35 )
                break;
              ++v35;
              --v34;
            }
            while ( v34 );
            if ( v34 )
            {
              v12 = 2 * (v34 != 0 ? 0x7FFF - v34 : 0);
            }
            else
            {
LABEL_53:
              v9 = NumberOfBytes[1];
              v12 = NumberOfBytes[0];
            }
            if ( v33 )
            {
              v36 = 0x7FFFLL;
              v37 = v33;
              do
              {
                if ( !*v37 )
                  break;
                ++v37;
                --v36;
              }
              while ( v36 );
              if ( v36 )
              {
                DestinationString.Buffer = v33;
                DestinationString.Length = 2 * (v36 != 0 ? 0x7FFF - v36 : 0);
              }
            }
          }
          v14 = v50;
          v15 = v41;
          if ( !*(_QWORD *)(v50 + 80) )
            v15 = 1;
          v41 = v15;
          v16 = *(_DWORD *)(v50 + 20);
          if ( (v16 & 2) != 0 )
          {
            v45 = 1;
            v16 = *(_DWORD *)(v50 + 20);
          }
          if ( (v16 & 1) != 0 )
          {
            v46 = 1;
            v16 = *(_DWORD *)(v50 + 20);
          }
          if ( (v16 & 4) != 0 )
          {
            v47 = 1;
            v16 = *(_DWORD *)(v50 + 20);
          }
          if ( (v16 & 8) != 0 )
          {
            v48 = 1;
            v16 = *(_DWORD *)(v50 + 20);
          }
          if ( (v16 & 0x10) != 0 )
          {
            v49 = 1;
            v16 = *(_DWORD *)(v50 + 20);
          }
          v17 = (v16 & 0x20) == 0;
          v18 = v42;
          v19 = 13;
          if ( !v17 )
            v18 = 1;
          *(_QWORD *)&UserData.Size = 8LL;
          v42 = v18;
          UserData.Ptr = (ULONGLONG)&v50;
          v54 = &v40;
          v56 = &v43;
          p_SessionId = &SessionId;
          v60 = &v41;
          v62 = &v45;
          v64 = &v46;
          v66 = &v47;
          v68 = v50 + 36;
          v70 = v50 + 32;
          v72 = v50 + 40;
          v20 = v12 >> 1;
          v21 = DestinationString.Length >> 1;
          v74 = (__int16 *)&v38;
          v76 = &v39;
          v38 = v20;
          v39 = DestinationString.Length >> 1;
          v55 = 4LL;
          v57 = 4LL;
          v59 = 4LL;
          v61 = 4LL;
          v63 = 4LL;
          v65 = 4LL;
          v67 = 4LL;
          v69 = 4LL;
          v71 = 4LL;
          v73 = 4LL;
          v75 = 2LL;
          v77 = 2LL;
          if ( v20 )
          {
            v19 = 14;
            v78 = v9;
            v79 = 2 * v20;
            v80 = 0;
          }
          if ( v21 )
          {
            v31 = 2LL * v19;
            *(&UserData.Ptr + v31) = (ULONGLONG)DestinationString.Buffer;
            *(&UserData.Reserved + 2 * v31) = 0;
            *(&UserData.Size + 2 * v31) = 2 * v21;
            ++v19;
          }
          v22 = 2LL * v19;
          v23 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_POWER_REQUEST_RUNDOWN;
          *(&UserData.Ptr + v22) = (ULONGLONG)&v48;
          *((_QWORD *)&UserData.Size + v22) = 4LL;
          v24 = v19 + 1;
          v25 = v19 + 2;
          v24 *= 2LL;
          *(&UserData.Ptr + v24) = (ULONGLONG)&v49;
          *((_QWORD *)&UserData.Size + v24) = 4LL;
          v26 = 2LL * v25;
          *(&UserData.Ptr + v26) = (ULONGLONG)&v42;
          *((_QWORD *)&UserData.Size + v26) = 4LL;
          v27 = v25 + 1;
          v25 += 2;
          v27 *= 2LL;
          *(&UserData.Ptr + v27) = v14 + 44;
          *((_QWORD *)&UserData.Size + v27) = 4LL;
          v28 = 2LL * v25;
          *(&UserData.Ptr + v28) = v14 + 48;
          *((_QWORD *)&UserData.Size + v28) = 4LL;
          v29 = v25 + 1;
          v30 = v25 + 2;
          v29 *= 2LL;
          *(&UserData.Ptr + v29) = v14 + 52;
          *((_QWORD *)&UserData.Size + v29) = 4LL;
          if ( !a1 )
            v23 = &POP_ETW_EVENT_CREATE_POWER_REQUEST;
          EtwWrite(PopDiagHandle, v23, 0LL, v30, &UserData);
        }
        ExFreePoolWithTag(v7, 0x50455654u);
      }
    }
  }
}
