/*
 * XREFs of EtwpRegTraceCallback @ 0x14093B4F0
 * Callers:
 *     <none>
 * Callees:
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     CmCallbackGetKeyObjectID @ 0x140869BD0 (CmCallbackGetKeyObjectID.c)
 *     EtwpCapturePreviousRegistryData @ 0x14093B354 (EtwpCapturePreviousRegistryData.c)
 *     EtwpCaptureRegistryData @ 0x14093B458 (EtwpCaptureRegistryData.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpRegTraceCallback(PVOID CallbackContext, PVOID Argument1, int *Argument2)
{
  char v4; // si
  _DWORD *v5; // r13
  PCUNICODE_STRING v6; // r12
  unsigned int v7; // edi
  unsigned __int16 *v8; // r15
  unsigned __int16 v9; // r9
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  __int128 v17; // xmm0
  __int64 v18; // rdx
  PVOID v19; // rax
  unsigned int v20; // r8d
  __int64 v21; // r14
  const void *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned int v25; // r8d
  PVOID *v26; // rax
  __int128 v27; // xmm0
  int v28; // edx
  int v29; // edx
  int v30; // edx
  int v31; // edx
  int v32; // edx
  int v33; // edx
  unsigned __int16 **v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  PVOID v37; // rax
  char v38; // bl
  __int64 **v39; // rax
  __int64 *v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  ULONGLONG Buffer; // r8
  ULONG Length; // eax
  __int64 v47; // rcx
  __int64 v48; // rax
  ULONG v49; // edi
  ULONGLONG v50; // rax
  ULONG v51; // r8d
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  unsigned int v56; // ecx
  __int64 v57; // rax
  __int64 v58; // rax
  ULONG v59; // edx
  __int64 v60; // rax
  __int64 v61; // rcx
  bool v62; // sf
  int v64; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int16 v65; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v66; // [rsp+40h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v68; // [rsp+50h] [rbp-B8h] BYREF
  PVOID P; // [rsp+58h] [rbp-B0h] BYREF
  int v70; // [rsp+60h] [rbp-A8h] BYREF
  int v71; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v72; // [rsp+68h] [rbp-A0h] BYREF
  PVOID v73; // [rsp+70h] [rbp-98h] BYREF
  PCUNICODE_STRING ObjectName[4]; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v76[2]; // [rsp+A8h] [rbp-60h] BYREF
  char v77; // [rsp+B8h] [rbp-50h] BYREF

  memset(ObjectName, 0, 24);
  v4 = 0;
  v5 = 0LL;
  v70 = 0;
  v6 = 0LL;
  v68 = 0LL;
  LODWORD(v66) = 0;
  v7 = 3;
  Object = 0LL;
  v8 = 0LL;
  v73 = 0LL;
  v9 = 0;
  P = 0LL;
  LODWORD(v72) = 0;
  v71 = 0;
  LOWORD(v64) = 0;
  v65 = 0;
  if ( (int)Argument1 > 22 )
  {
    v28 = (_DWORD)Argument1 - 23;
    if ( !v28 )
    {
      v21 = (__int64)Argument2;
      v36 = *((_QWORD *)Argument2 + 2);
      v4 = 113;
      v37 = *(PVOID *)Argument2;
      *(_OWORD *)&ObjectName[1] = ETW_REGISTRY_EVENT_QUERY_VALUE_KEY;
      v8 = *(unsigned __int16 **)(v36 + 8);
      Object = v37;
      LODWORD(v68) = *(_DWORD *)(v36 + 16);
      v20 = **(_DWORD **)(v36 + 40);
      LODWORD(v66) = v20;
      if ( (EtwpRegTraceOptions & 2) == 0 || Argument2[2] < 0 )
        goto LABEL_53;
      v22 = *(const void **)(v36 + 24);
LABEL_52:
      LOWORD(v64) = EtwpCaptureRegistryData(&P, v22, v20);
      v9 = v64;
      goto LABEL_53;
    }
    v29 = v28 - 1;
    if ( !v29 )
    {
      v35 = *((_QWORD *)Argument2 + 2);
      v21 = (__int64)Argument2;
      v4 = 40;
      Object = *(PVOID *)Argument2;
      *(_OWORD *)&ObjectName[1] = ETW_REGISTRY_EVENT_QUERY_MULTIPLE_VALUE_KEY;
      HIDWORD(v68) = *(_DWORD *)(v35 + 16);
      LODWORD(v66) = **(_DWORD **)(v35 + 32);
      goto LABEL_53;
    }
    v30 = v29 - 3;
    if ( v30 )
    {
      v31 = v30 - 2;
      if ( v31 )
      {
        v32 = v31 - 2;
        if ( v32 )
        {
          v33 = v32 - 6;
          if ( v33 )
          {
            if ( v33 != 2 )
              return 0LL;
            v27 = ETW_REGISTRY_EVENT_SET_SECURITY_KEY;
          }
          else
          {
            v27 = ETW_REGISTRY_EVENT_QUERY_SECURITY_KEY;
          }
        }
        else
        {
          v27 = ETW_REGISTRY_EVENT_FLUSH_KEY;
        }
        v21 = (__int64)Argument2;
        goto LABEL_41;
      }
      v21 = (__int64)Argument2;
      v34 = (unsigned __int16 **)*((_QWORD *)Argument2 + 2);
      *(_OWORD *)&ObjectName[1] = ETW_REGISTRY_EVENT_OPEN_KEY;
      Object = v34[1];
      if ( Argument2[2] >= 0 )
        goto LABEL_46;
    }
    else
    {
      v21 = (__int64)Argument2;
      v34 = (unsigned __int16 **)*((_QWORD *)Argument2 + 2);
      *(_OWORD *)&ObjectName[1] = ETW_REGISTRY_EVENT_CREATE_KEY;
      Object = v34[1];
      if ( Argument2[2] >= 0 )
      {
        v70 = *(_DWORD *)v34[8];
LABEL_46:
        v73 = *(PVOID *)Argument2;
      }
    }
    v8 = *v34;
    v4 = 7;
    goto LABEL_53;
  }
  if ( (_DWORD)Argument1 == 22 )
  {
    v18 = *((_QWORD *)Argument2 + 2);
    Object = *(PVOID *)Argument2;
    *(_OWORD *)&ObjectName[1] = ETW_REGISTRY_EVENT_QUERY_KEY;
    LODWORD(v68) = *(_DWORD *)(v18 + 8);
    v20 = **(_DWORD **)(v18 + 32);
    goto LABEL_18;
  }
  v10 = (_DWORD)Argument1 - 1;
  if ( v10 )
  {
    v11 = v10 - 13;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( !v12 )
      {
        v26 = (PVOID *)*((_QWORD *)Argument2 + 2);
        v21 = (__int64)Argument2;
        *(_OWORD *)&ObjectName[1] = ETW_REGISTRY_EVENT_DELETE_KEY;
        Object = *v26;
        goto LABEL_53;
      }
      v13 = v12 - 1;
      if ( !v13 )
      {
        v21 = (__int64)Argument2;
        v24 = *((_QWORD *)Argument2 + 2);
        *(_OWORD *)&ObjectName[1] = ETW_REGISTRY_EVENT_SET_VALUE_KEY;
        v8 = *(unsigned __int16 **)(v24 + 8);
        LODWORD(v68) = *(_DWORD *)(v24 + 20);
        Object = *(PVOID *)Argument2;
        v25 = *(_DWORD *)(v24 + 32);
        LODWORD(v66) = v25;
        if ( (EtwpRegTraceOptions & 2) != 0 && Argument2[2] >= 0 )
        {
          v9 = EtwpCaptureRegistryData(&P, *(const void **)(v24 + 24), v25);
          LOWORD(v64) = v9;
        }
        v5 = (_DWORD *)*((_QWORD *)Argument2 + 4);
        v4 = -15;
        goto LABEL_53;
      }
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 2;
          if ( v16 )
          {
            if ( v16 != 1 )
              return 0LL;
            v17 = ETW_REGISTRY_EVENT_ENUMERATE_VALUE_KEY;
          }
          else
          {
            v17 = ETW_REGISTRY_EVENT_ENUMERATE_KEY;
          }
          v18 = *((_QWORD *)Argument2 + 2);
          v4 = 120;
          v19 = *(PVOID *)Argument2;
          *(_OWORD *)&ObjectName[1] = v17;
          Object = v19;
          HIDWORD(v68) = *(_DWORD *)(v18 + 8);
          LODWORD(v68) = *(_DWORD *)(v18 + 12);
          v20 = **(_DWORD **)(v18 + 32);
          goto LABEL_13;
        }
        v18 = *((_QWORD *)Argument2 + 2);
        Object = *(PVOID *)Argument2;
        *(_OWORD *)&ObjectName[1] = ETW_REGISTRY_EVENT_SET_INFORMATION_KEY;
        LODWORD(v68) = *(_DWORD *)(v18 + 8);
        v20 = *(_DWORD *)(v18 + 24);
LABEL_18:
        v4 = 112;
LABEL_13:
        v21 = (__int64)Argument2;
        LODWORD(v66) = v20;
        if ( (EtwpRegTraceOptions & 2) == 0 || Argument2[2] < 0 )
          goto LABEL_53;
        v22 = *(const void **)(v18 + 16);
        goto LABEL_52;
      }
      v23 = *((_QWORD *)Argument2 + 2);
      v21 = (__int64)Argument2;
      v4 = 1;
      *(_OWORD *)&ObjectName[1] = ETW_REGISTRY_EVENT_DELETE_VALUE_KEY;
      v8 = *(unsigned __int16 **)(v23 + 8);
LABEL_20:
      Object = *(PVOID *)Argument2;
LABEL_53:
      if ( (EtwpRegTraceOptions & 1) != 0 )
      {
        v38 = 1;
        if ( Object )
        {
          CmCallbackGetKeyObjectID(&EtwpRegTraceCookie, Object, 0LL, ObjectName);
          v9 = v64;
          v6 = ObjectName[0];
        }
      }
      else
      {
        v38 = 0;
      }
      UserData.Ptr = (ULONGLONG)&Object;
      *(_QWORD *)&UserData.Size = 8LL;
      if ( (v4 & 4) != 0 )
      {
        v76[1] = 8LL;
        v76[0] = &v73;
        v39 = (__int64 **)&v77;
      }
      else
      {
        v7 = 2;
        v39 = (__int64 **)v76;
      }
      v40 = &EtwpNull;
      if ( v21 != 1 )
        v40 = (__int64 *)(v21 + 8);
      *v39 = v40;
      v39[1] = (__int64 *)4;
      if ( (v4 & 8) != 0 )
      {
        v41 = 2LL * v7++;
        *(&UserData.Ptr + v41) = (ULONGLONG)&v68 + 4;
        *((_QWORD *)&UserData.Size + v41) = 4LL;
      }
      if ( (v4 & 0x10) != 0 )
      {
        v42 = 2LL * v7++;
        *(&UserData.Ptr + v42) = (ULONGLONG)&v68;
        *((_QWORD *)&UserData.Size + v42) = 4LL;
      }
      if ( (v4 & 2) != 0 )
      {
        v43 = 2LL * v7++;
        *(&UserData.Ptr + v43) = (ULONGLONG)&v70;
        *((_QWORD *)&UserData.Size + v43) = 4LL;
      }
      if ( (v4 & 0x20) != 0 )
      {
        v44 = 2LL * v7++;
        *(&UserData.Ptr + v44) = (ULONGLONG)&v66;
        *((_QWORD *)&UserData.Size + v44) = 4LL;
      }
      if ( v38 == 1 )
      {
        if ( v6 )
        {
          Buffer = (ULONGLONG)v6->Buffer;
          if ( Buffer )
          {
            Length = v6->Length;
            if ( (_WORD)Length )
            {
              v47 = 2LL * v7;
              *(&UserData.Ptr + v47) = Buffer;
              *(&UserData.Reserved + 2 * v47) = 0;
              ++v7;
              *(&UserData.Size + 2 * v47) = Length;
            }
          }
        }
      }
      v48 = 2LL * v7;
      v49 = v7 + 1;
      *(&UserData.Ptr + v48) = (ULONGLONG)&EtwpNull;
      *((_QWORD *)&UserData.Size + v48) = 2LL;
      if ( (v4 & 1) != 0 )
      {
        if ( v8 )
        {
          v50 = *((_QWORD *)v8 + 1);
          if ( v50 )
          {
            v51 = *v8;
            if ( (_WORD)v51 )
            {
              v52 = 2LL * v49;
              *(&UserData.Size + 2 * v52) = v51;
              *(&UserData.Reserved + 2 * v52) = 0;
              ++v49;
              *(&UserData.Ptr + v52) = v50;
            }
          }
        }
        v53 = 2LL * v49++;
        *(&UserData.Ptr + v53) = (ULONGLONG)&EtwpNull;
        *((_QWORD *)&UserData.Size + v53) = 2LL;
      }
      if ( (v4 & 0x40) != 0 )
      {
        v54 = 2LL * v49++;
        *(&UserData.Ptr + v54) = (ULONGLONG)&v64;
        *((_QWORD *)&UserData.Size + v54) = 2LL;
        if ( v9 )
        {
          v55 = 2LL * v49++;
          *(&UserData.Ptr + v55) = (ULONGLONG)P;
          *(&UserData.Size + 2 * v55) = v9;
          *(&UserData.Reserved + 2 * v55) = 0;
        }
      }
      if ( v4 < 0 )
      {
        if ( v5 )
        {
          v56 = v5[2];
          LODWORD(v72) = v56;
          v71 = v5[1];
          v65 = 2048;
          if ( v56 <= 0x800 )
            v65 = v56;
        }
        v57 = 2LL * v49;
        *(&UserData.Ptr + v57) = (ULONGLONG)&v71;
        *((_QWORD *)&UserData.Size + v57) = 4LL;
        v58 = 2LL * (v49 + 1);
        *(&UserData.Ptr + v58) = (ULONGLONG)&v72;
        *((_QWORD *)&UserData.Size + v58) = 4LL;
        v59 = v65;
        v60 = v49 + 2;
        v49 += 3;
        v60 *= 2LL;
        *(&UserData.Ptr + v60) = (ULONGLONG)&v65;
        *((_QWORD *)&UserData.Size + v60) = 2LL;
        if ( (_WORD)v59 )
        {
          v61 = 2LL * v49++;
          *(&UserData.Ptr + v61) = (ULONGLONG)(v5 + 3);
          *(&UserData.Size + 2 * v61) = v59;
          *(&UserData.Reserved + 2 * v61) = 0;
        }
      }
      if ( v21 == 1 || (v62 = *(int *)(v21 + 8) < 0, BYTE4(ObjectName[1]) = 1, !v62) )
        BYTE4(ObjectName[1]) = 2;
      EtwWrite(EtwpRegTraceHandle, (PCEVENT_DESCRIPTOR)&ObjectName[1], 0LL, v49, &UserData);
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
      return 0LL;
    }
    v27 = ETW_REGISTRY_EVENT_CLOSE_KEY;
    v21 = 1LL;
LABEL_41:
    *(_OWORD *)&ObjectName[1] = v27;
    goto LABEL_20;
  }
  if ( (EtwpRegTraceOptions & 4) != 0 )
    EtwpCapturePreviousRegistryData((__int64)Argument2);
  return 0LL;
}
