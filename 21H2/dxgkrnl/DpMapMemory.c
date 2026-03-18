/*
 * XREFs of DpMapMemory @ 0x1C0214250
 * Callers:
 *     <none>
 * Callees:
 *     DpiVerifyResources @ 0x1C02144DC (DpiVerifyResources.c)
 */

__int64 __fastcall DpMapMemory(
        __int64 a1,
        union _LARGE_INTEGER a2,
        unsigned int a3,
        char a4,
        PLARGE_INTEGER a5,
        DWORD a6,
        PVOID *BaseAddress)
{
  ULONG_PTR v7; // r13
  int v9; // ebx
  PVOID *v10; // r12
  __int64 v11; // r15
  int v12; // r9d
  __int64 v13; // rdi
  unsigned int v14; // ebx
  __int64 v15; // r8
  union _LARGE_INTEGER v16; // rbx
  __int64 v17; // rcx
  char v18; // r14
  union _LARGE_INTEGER *PoolWithTag; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  union _LARGE_INTEGER *v24; // rsi
  union _LARGE_INTEGER **v25; // rax
  LONGLONG v26; // rdx
  NTSTATUS v28; // eax
  int v29; // eax
  __int64 v30; // rdx
  PVOID v31; // rcx
  DWORD v32; // [rsp+58h] [rbp-51h]
  void *SectionHandle; // [rsp+60h] [rbp-49h] BYREF
  union _LARGE_INTEGER SectionOffset; // [rsp+68h] [rbp-41h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp-39h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-31h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-21h] BYREF
  unsigned int v38; // [rsp+F8h] [rbp+4Fh]
  union _LARGE_INTEGER v39; // [rsp+100h] [rbp+57h] BYREF
  char v40; // [rsp+110h] [rbp+67h]

  v40 = a4;
  v39 = a2;
  v7 = a3;
  v9 = a1;
  if ( !a1
    || (v10 = BaseAddress) == 0LL
    || !a3
    || (v11 = *(_QWORD *)(a1 + 64)) == 0
    || *(_DWORD *)(v11 + 16) != 1953656900
    || (unsigned int)(*(_DWORD *)(v11 + 20) - 2) > 1 )
  {
    LODWORD(v13) = -1073741811;
    v30 = -1073741811LL;
    goto LABEL_49;
  }
  if ( KeGetCurrentIrql() )
    WdLogSingleEntry1(3LL, -1073741811LL);
  *v10 = 0LL;
  LOBYTE(v12) = a4;
  LODWORD(v13) = DpiVerifyResources(v9, (unsigned int)&v39, v7, v12, (char)a5, (__int64)&a6, (__int64)v10);
  if ( (int)v13 >= 0 && !*v10 )
  {
    v32 = a6;
    if ( v40 == 1 )
    {
      v16 = v39;
      v18 = 0;
      *v10 = (PVOID)v39.QuadPart;
LABEL_19:
      PoolWithTag = (union _LARGE_INTEGER *)ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x74727044u);
      v24 = PoolWithTag;
      if ( PoolWithTag )
      {
        PoolWithTag[2].LowPart = 1953656900;
        PoolWithTag[2].HighPart = 8;
        PoolWithTag[3].LowPart = 1;
        PoolWithTag[4] = v16;
        PoolWithTag[5].LowPart = v7;
        BYTE4(PoolWithTag[5].QuadPart) = v40;
        BYTE5(PoolWithTag[5].QuadPart) = (_BYTE)a5;
        PoolWithTag[6].QuadPart = PsGetCurrentProcess(v21, v20, v22, v23);
        v24[7].LowPart = v32;
        v24[8].QuadPart = (LONGLONG)*v10;
        LOBYTE(v24[9].LowPart) = v18;
        KeWaitForSingleObject((PVOID)(v11 + 2520), Executive, 0, 0, 0LL);
        v25 = (union _LARGE_INTEGER **)(v11 + 2504);
        v26 = *(_QWORD *)(v11 + 2504);
        if ( *(_QWORD *)(v26 + 8) != v11 + 2504 )
          __fastfail(3u);
        v24->QuadPart = v26;
        v24[1].QuadPart = (LONGLONG)v25;
        *(_QWORD *)(v26 + 8) = v24;
        *v25 = v24;
        KeReleaseMutex((PRKMUTEX)(v11 + 2520), 0);
        WdLogSingleEntry1(4LL, v24);
      }
      else
      {
        LODWORD(v13) = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        if ( v18 == 1 )
        {
          *(_DWORD *)(v11 + 2576) -= ((unsigned int)v7 + (unsigned __int64)(*(_DWORD *)v10 & 0xFFF) + 4095) >> 12;
          v31 = *v10;
          if ( (_BYTE)a5 == 1 )
            ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v31);
          else
            MmUnmapIoSpace(v31, (unsigned int)v7);
        }
      }
      return (unsigned int)v13;
    }
    v38 = 0;
    if ( (_BYTE)a5 != 1 )
    {
      v14 = 4;
      v38 = 4;
      if ( !a6 || byte_1C0130490 )
      {
        v14 = 516;
      }
      else
      {
        if ( a6 == 1 )
          goto LABEL_16;
        if ( a6 != 2 )
        {
          WdLogSingleEntry2(2LL, (int)a6, v11);
          goto LABEL_16;
        }
        v14 = 1028;
      }
      v38 = v14;
LABEL_16:
      v15 = v14;
      v16 = v39;
      v17 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MmMapIoSpaceEx)(
              (union _LARGE_INTEGER)v39.QuadPart,
              v7,
              v15);
LABEL_17:
      *v10 = (PVOID)v17;
      if ( !v17 )
      {
        LODWORD(v13) = -1073741811;
        WdLogSingleEntry2(2LL, (unsigned int)v7, v38);
        return (unsigned int)v13;
      }
      v18 = 1;
      *(_DWORD *)(v11 + 2576) += ((unsigned int)v7 + (unsigned __int64)(v17 & 0xFFF) + 4095) >> 12;
      goto LABEL_19;
    }
    *(&ObjectAttributes.Length + 1) = 0;
    *(&ObjectAttributes.Attributes + 1) = 0;
    SectionHandle = 0LL;
    DestinationString = 0LL;
    ViewSize = v7;
    RtlInitUnicodeString(&DestinationString, L"\\Device\\PhysicalMemory");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v28 = ZwOpenSection(&SectionHandle, 0xF001Fu, &ObjectAttributes);
    v13 = v28;
    if ( v28 < 0 )
      goto LABEL_33;
    v16 = v39;
    SectionOffset = v39;
    if ( byte_1C0130490 == 1 || !v32 )
    {
      v29 = 512;
    }
    else
    {
      if ( v32 != 2 )
      {
        v29 = 0;
LABEL_37:
        v13 = ZwMapViewOfSection(
                SectionHandle,
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                v10,
                0LL,
                v7,
                &SectionOffset,
                &ViewSize,
                ViewUnmap,
                0,
                v29 | 4);
        ZwClose(SectionHandle);
        if ( (int)v13 >= 0 )
        {
          if ( v16.LowPart < SectionOffset.LowPart )
          {
            LODWORD(v13) = -1073741823;
            WdLogSingleEntry3(0LL, 275LL, 21LL, -1073741823LL);
            return (unsigned int)v13;
          }
          LODWORD(v7) = SectionOffset.LowPart + ViewSize - v16.LowPart;
          v17 = (__int64)*v10 + v16.QuadPart - SectionOffset.QuadPart;
          goto LABEL_17;
        }
LABEL_33:
        v30 = v13;
LABEL_49:
        WdLogSingleEntry1(2LL, v30);
        return (unsigned int)v13;
      }
      v29 = 1024;
    }
    v38 = v29;
    goto LABEL_37;
  }
  return (unsigned int)v13;
}
