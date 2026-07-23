/*
 * XREFs of NtQueryLicenseValue @ 0x14062C890
 * Callers:
 *     ExpGetNtProductTypeFromLicenseValue @ 0x1407945F4 (ExpGetNtProductTypeFromLicenseValue.c)
 *     MiMemoryLicense @ 0x140A6A21C (MiMemoryLicense.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     ProbeForWrite @ 0x14060B790 (ProbeForWrite.c)
 *     ntoskrnl_27 @ 0x14062C800 (ntoskrnl_27.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     SLQueryLicenseValueInternal @ 0x1407A0F5C (SLQueryLicenseValueInternal.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQueryLicenseValue(
        PUNICODE_STRING ValueName,
        PULONG Type,
        PVOID Data,
        ULONG DataSize,
        PULONG ResultDataSize)
{
  SIZE_T v5; // r12
  NTSTATUS v8; // ebx
  char PreviousMode; // dl
  PULONG v10; // r14
  int v11; // eax
  wchar_t *Buffer; // rcx
  unsigned __int64 v13; // rdx
  PVOID PoolWithTag; // rax
  PVOID v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  _DWORD Size[3]; // [rsp+44h] [rbp-64h] BYREF
  PVOID P; // [rsp+50h] [rbp-58h]
  _OWORD v25[5]; // [rsp+58h] [rbp-50h] BYREF
  ULONG v26; // [rsp+B0h] [rbp+8h] BYREF
  PULONG v27; // [rsp+B8h] [rbp+10h]
  PVOID v28; // [rsp+C0h] [rbp+18h]
  ULONG v29; // [rsp+C8h] [rbp+20h]

  v29 = DataSize;
  v28 = Data;
  v27 = Type;
  v5 = DataSize;
  v25[0] = 0LL;
  v8 = 0;
  P = 0LL;
  v26 = 0;
  memset(Size, 0, sizeof(Size));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( ValueName && (v10 = ResultDataSize) != 0LL && (Data || !DataSize) )
  {
    if ( DataSize > 0x800000 )
    {
      v8 = -1073741801;
    }
    else if ( PreviousMode )
    {
      if ( (unsigned __int64)ValueName >= 0x7FFFFFFF0000LL )
        ValueName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
      v11 = *(_DWORD *)&ValueName->Length;
      LODWORD(v25[0]) = *(_DWORD *)&ValueName->Length;
      Buffer = ValueName->Buffer;
      *((_QWORD *)&v25[0] + 1) = Buffer;
      if ( Buffer && (_WORD)v11 && (v11 & 1) == 0 )
      {
        if ( ((unsigned __int8)Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v13 = (unsigned __int64)Buffer + (unsigned __int16)v11;
        if ( v13 > 0x7FFFFFFF0000LL || v13 < (unsigned __int64)Buffer )
          MEMORY[0x7FFFFFFF0000] = 0;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, LOWORD(v25[0]), 0x20534C53u);
        P = PoolWithTag;
        if ( PoolWithTag )
        {
          v15 = PoolWithTag;
          memmove(PoolWithTag, *((const void **)&v25[0] + 1), LOWORD(v25[0]));
          *((_QWORD *)&v25[0] + 1) = v15;
          if ( Type )
          {
            v16 = (__int64)Type;
            if ( (unsigned __int64)Type >= 0x7FFFFFFF0000LL )
              v16 = 0x7FFFFFFF0000LL;
            *(_DWORD *)v16 = *(_DWORD *)v16;
            v26 = *Type;
          }
          if ( Data
            && (_DWORD)v5
            && (ProbeForWrite(Data, v5, 1u),
                (*(_QWORD *)&Size[1] = ExAllocatePoolWithTag(PagedPool, v5, 0x20534C53u)) == 0LL) )
          {
            v8 = -1073741801;
          }
          else
          {
            v17 = (__int64)v10;
            if ( (unsigned __int64)v10 >= 0x7FFFFFFF0000LL )
              v17 = 0x7FFFFFFF0000LL;
            *(_DWORD *)v17 = *(_DWORD *)v17;
            Size[0] = *v10;
          }
        }
        else
        {
          v8 = -1073741801;
        }
      }
      else
      {
        v8 = -1073741811;
      }
      if ( v8 >= 0 )
      {
        v18 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 113);
        if ( qword_140D2D500 )
          v19 = qword_140D2D500(v18, v25, &v26, *(_QWORD *)&Size[1], v5, Size);
        else
          v19 = SLQueryLicenseValueInternal(v18, v25, &v26, *(_QWORD *)&Size[1], v5, Size);
        v20 = v19;
        v8 = v19;
        if ( Type )
          *Type = v26;
        v21 = Size[0];
        *v10 = Size[0];
        if ( v20 >= 0 && Data )
        {
          if ( (unsigned int)v5 < v21 )
            v8 = -1073741789;
          else
            memmove(Data, *(const void **)&Size[1], v21);
        }
      }
    }
    else
    {
      v8 = ntoskrnl_27((__int64)ValueName, (__int64)Type, (__int64)Data, DataSize, (__int64)ResultDataSize);
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( *(_QWORD *)&Size[1] )
    ExFreePoolWithTag(*(PVOID *)&Size[1], 0);
  return v8;
}
