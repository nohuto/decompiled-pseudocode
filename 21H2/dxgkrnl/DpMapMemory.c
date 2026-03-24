/*
 * XREFs of DpMapMemory @ 0x1C01983D0
 * Callers:
 *     <none>
 * Callees:
 *     DpiVerifyResources @ 0x1C0198654 (DpiVerifyResources.c)
 */

__int64 __fastcall DpMapMemory(
        __int64 a1,
        union _LARGE_INTEGER a2,
        __int64 a3,
        char a4,
        PLARGE_INTEGER a5,
        int a6,
        PVOID *BaseAddress)
{
  PVOID *v7; // r13
  __int64 v8; // r15
  char v9; // r12
  SIZE_T v10; // rbx
  union _LARGE_INTEGER *v11; // rdi
  int v12; // esi
  char v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rsi
  unsigned int v16; // r12d
  SIZE_T v17; // rdx
  union _LARGE_INTEGER v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  union _LARGE_INTEGER *PoolWithTag; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  union _LARGE_INTEGER **v27; // rax
  LONGLONG v28; // rdx
  char v29; // bl
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v34; // rax
  NTSTATUS v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  _QWORD *QuadPart; // rdx
  void **v44; // rax
  SIZE_T v45; // r8
  PVOID v46; // rcx
  int v47; // [rsp+5Ch] [rbp-5Dh]
  void *SectionHandle; // [rsp+60h] [rbp-59h] BYREF
  union _LARGE_INTEGER SectionOffset; // [rsp+68h] [rbp-51h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp-49h] BYREF
  SIZE_T CommitSize; // [rsp+78h] [rbp-41h]
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-39h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-29h] BYREF
  union _LARGE_INTEGER v54; // [rsp+110h] [rbp+57h] BYREF
  SIZE_T NumberOfBytes; // [rsp+118h] [rbp+5Fh]
  char v56; // [rsp+120h] [rbp+67h]

  v56 = a4;
  LODWORD(NumberOfBytes) = a3;
  v54 = a2;
  v7 = BaseAddress;
  v8 = 0LL;
  v9 = 0;
  v10 = (unsigned int)a3;
  v11 = 0LL;
  v12 = a1;
  if ( !a1 || !BaseAddress || !(_DWORD)a3 )
  {
    LODWORD(v15) = -1073741811;
    v42 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdError)(a1, (union _LARGE_INTEGER)a2.QuadPart);
    *(_QWORD *)(v42 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v42);
    goto LABEL_27;
  }
  v8 = *(_QWORD *)(a1 + 64);
  if ( !v8 || *(_DWORD *)(v8 + 16) != 1953656900 || (unsigned int)(*(_DWORD *)(v8 + 20) - 2) > 1 )
  {
    LODWORD(v15) = -1073741811;
    v40 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdError)(a1, (union _LARGE_INTEGER)a2.QuadPart);
    *(_QWORD *)(v40 + 24) = -1073741811LL;
    goto LABEL_43;
  }
  if ( KeGetCurrentIrql() )
  {
    v34 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdWarning)(
            a1,
            (union _LARGE_INTEGER)a2.QuadPart,
            a3);
    *(_QWORD *)(v34 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v34);
  }
  v13 = v56;
  *v7 = 0LL;
  LODWORD(v15) = DpiVerifyResources(v12, (unsigned int)&v54, v10, v13, (char)a5, (__int64)&a6, (__int64)v7);
  if ( (int)v15 >= 0 )
  {
    if ( !*v7 )
    {
      v47 = a6;
      if ( v56 == 1 )
      {
        v18 = v54;
        *v7 = (PVOID)v54.QuadPart;
        goto LABEL_18;
      }
      v16 = 0;
      if ( (_BYTE)a5 != 1 )
      {
        v16 = 4;
        if ( !a6 || byte_1C00B2B10 )
        {
          v16 = 516;
        }
        else if ( a6 != 1 )
        {
          if ( a6 == 2 )
          {
            v16 = 1028;
          }
          else
          {
            v39 = WdLogNewEntry5_WdError((unsigned int)(a6 - 1), v14);
            *(_QWORD *)(v39 + 24) = v47;
            *(_QWORD *)(v39 + 32) = v8;
            WdLogEvent5_WdError(v39);
          }
        }
        v17 = v10;
        v18 = v54;
        v20 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MmMapIoSpaceEx)(
                (union _LARGE_INTEGER)v54.QuadPart,
                v17,
                v16);
LABEL_16:
        *v7 = (PVOID)v20;
        v21 = (unsigned int)NumberOfBytes;
        if ( v20 )
        {
          v9 = 1;
          *(_DWORD *)(v8 + 2576) += ((v20 & 0xFFF) + (unsigned __int64)(unsigned int)NumberOfBytes + 4095) >> 12;
LABEL_18:
          PoolWithTag = (union _LARGE_INTEGER *)ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x74727044u);
          v11 = PoolWithTag;
          if ( !PoolWithTag )
          {
            LODWORD(v15) = -1073741801;
            v41 = WdLogNewEntry5_WdLowResource(v24, v23, v25, v26);
            *(_QWORD *)(v41 + 24) = -1073741801LL;
            WdLogEvent5_WdLowResource(v41);
LABEL_52:
            if ( v9 == 1 )
            {
              v45 = (unsigned int)NumberOfBytes;
              *(_DWORD *)(v8 + 2576) -= ((*(_DWORD *)v7 & 0xFFF) + (unsigned __int64)(unsigned int)NumberOfBytes + 4095) >> 12;
              v46 = *v7;
              if ( (_BYTE)a5 == 1 )
                ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v46);
              else
                MmUnmapIoSpace(v46, v45);
            }
            return (unsigned int)v15;
          }
          PoolWithTag[2].LowPart = 1953656900;
          PoolWithTag[2].HighPart = 8;
          PoolWithTag[3].LowPart = 1;
          PoolWithTag[4] = v18;
          PoolWithTag[5].LowPart = NumberOfBytes;
          BYTE4(PoolWithTag[5].QuadPart) = v56;
          BYTE5(PoolWithTag[5].QuadPart) = (_BYTE)a5;
          PoolWithTag[6].QuadPart = PsGetCurrentProcess(v24, v23);
          v11[7].LowPart = v47;
          v11[8].QuadPart = (LONGLONG)*v7;
          LOBYTE(v11[9].LowPart) = v9;
          KeWaitForSingleObject((PVOID)(v8 + 2520), Executive, 0, 0, 0LL);
          v27 = (union _LARGE_INTEGER **)(v8 + 2504);
          v28 = *(_QWORD *)(v8 + 2504);
          if ( *(_QWORD *)(v28 + 8) != v8 + 2504 )
            goto LABEL_55;
          v11->QuadPart = v28;
          v11[1].QuadPart = (LONGLONG)v27;
          *(_QWORD *)(v28 + 8) = v11;
          *v27 = v11;
          KeReleaseMutex((PRKMUTEX)(v8 + 2520), 0);
          v29 = 1;
          v32 = WdLogNewEntry5_WdEvent(v31, v30);
          *(_QWORD *)(v32 + 24) = v11;
          WdLogEvent5_WdEvent(v32);
LABEL_21:
          if ( (int)v15 >= 0 )
            return (unsigned int)v15;
          if ( v29 != 1 )
            goto LABEL_50;
          KeWaitForSingleObject((PVOID)(v8 + 2520), Executive, 0, 0, 0LL);
          QuadPart = (_QWORD *)v11->QuadPart;
          if ( *(union _LARGE_INTEGER **)(v11->QuadPart + 8) == v11 )
          {
            v44 = (void **)v11[1].QuadPart;
            if ( *v44 == v11 )
            {
              *v44 = QuadPart;
              QuadPart[1] = v44;
              KeReleaseMutex((PRKMUTEX)(v8 + 2520), 0);
LABEL_50:
              if ( v11 )
                ExFreePoolWithTag(v11, 0x74727044u);
              goto LABEL_52;
            }
          }
LABEL_55:
          __fastfail(3u);
        }
        LODWORD(v15) = -1073741811;
        v40 = WdLogNewEntry5_WdError(0LL, v19);
        *(_QWORD *)(v40 + 24) = v21;
        *(_QWORD *)(v40 + 32) = v16;
LABEL_43:
        WdLogEvent5_WdError(v40);
        return (unsigned int)v15;
      }
      *(&ObjectAttributes.Length + 1) = 0;
      *(&ObjectAttributes.Attributes + 1) = 0;
      SectionHandle = 0LL;
      DestinationString = 0LL;
      CommitSize = v10;
      ViewSize = v10;
      RtlInitUnicodeString(&DestinationString, L"\\Device\\PhysicalMemory");
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v35 = ZwOpenSection(&SectionHandle, 0xF001Fu, &ObjectAttributes);
      v15 = v35;
      if ( v35 >= 0 )
      {
        v18 = v54;
        SectionOffset = v54;
        if ( byte_1C00B2B10 == 1 || !v47 )
        {
          v16 = 512;
        }
        else if ( v47 == 2 )
        {
          v16 = 1024;
        }
        v15 = ZwMapViewOfSection(
                SectionHandle,
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                v7,
                0LL,
                CommitSize,
                &SectionOffset,
                &ViewSize,
                ViewUnmap,
                0,
                v16 | 4);
        ZwClose(SectionHandle);
        if ( (int)v15 >= 0 )
        {
          if ( v18.LowPart < SectionOffset.LowPart )
          {
            LODWORD(v15) = -1073741823;
            v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v36, v19);
            v38[3] = 275LL;
            v38[4] = 21LL;
            v38[5] = -1073741823LL;
            WdLogEvent5_WdCriticalError(v38);
            return (unsigned int)v15;
          }
          LODWORD(NumberOfBytes) = SectionOffset.LowPart + ViewSize - v18.LowPart;
          v20 = (__int64)*v7 + v18.QuadPart - SectionOffset.QuadPart;
          goto LABEL_16;
        }
      }
      v37 = WdLogNewEntry5_WdError(v36, v19);
      *(_QWORD *)(v37 + 24) = v15;
      WdLogEvent5_WdError(v37);
      v9 = 0;
    }
LABEL_27:
    v29 = 0;
    goto LABEL_21;
  }
  return (unsigned int)v15;
}
