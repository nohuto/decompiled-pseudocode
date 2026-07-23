/*
 * XREFs of IopExecuteHardwareProfileChange @ 0x1408B8CA4
 * Callers:
 *     PnpProfileUpdateHardwareProfile @ 0x1408AB2DC (PnpProfileUpdateHardwareProfile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     RtlCompareUnicodeString @ 0x1406DDA80 (RtlCompareUnicodeString.c)
 *     CmSetAcpiHwProfile @ 0x1407A5B08 (CmSetAcpiHwProfile.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopExecuteHardwareProfileChange(__int64 a1, PCWSTR *a2, unsigned int a3, HANDLE *a4, _BYTE *a5)
{
  __int64 v6; // rsi
  UNICODE_STRING *PoolWithTag; // rax
  UNICODE_STRING *v8; // r15
  unsigned int v9; // ebx
  __int16 v10; // bp
  UNICODE_STRING *v11; // rbx
  __int64 v12; // r14
  __int64 v13; // r12
  UNICODE_STRING *v14; // rdi
  __int64 v15; // r12
  UNICODE_STRING *v16; // rbx
  UNICODE_STRING v17; // xmm0
  int v18; // r14d
  UNICODE_STRING *v19; // rdx
  __int64 v20; // r8
  int Length; // eax
  unsigned int v22; // r14d
  unsigned __int16 *v23; // rax
  __int64 v24; // r8
  unsigned __int16 *v25; // rdi
  _WORD *v26; // r13
  _WORD *v27; // r12
  const void **v28; // r13
  __int64 v29; // r15
  size_t v30; // rbx
  UNICODE_STRING *v32; // [rsp+30h] [rbp-38h]

  v6 = a3;
  PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(NonPagedPoolNx, 16 * a3, 0x33706E50u);
  v32 = PoolWithTag;
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    v10 = 1;
    if ( (_DWORD)v6 )
    {
      v11 = PoolWithTag;
      v12 = v6;
      v13 = v6;
      do
      {
        RtlInitUnicodeString(v11++, *a2++);
        --v13;
      }
      while ( v13 );
      do
      {
        if ( (_DWORD)v6 != 1 )
        {
          v14 = v8;
          v15 = (unsigned int)(v6 - 1);
          v16 = v8 + 1;
          do
          {
            if ( RtlCompareUnicodeString(v16 - 1, v16, 0) > 0 )
            {
              v17 = *v16;
              *v16 = *v14;
              *v14 = v17;
            }
            ++v16;
            ++v14;
            --v15;
          }
          while ( v15 );
        }
        --v12;
      }
      while ( v12 );
    }
    v18 = 0;
    if ( (_DWORD)v6 )
    {
      v19 = v8;
      v20 = v6;
      do
      {
        Length = v19->Length;
        ++v19;
        v18 += Length;
        --v20;
      }
      while ( v20 );
    }
    v22 = v18 + 2;
    v23 = (unsigned __int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, v22 + 6LL, 0x33706E50u);
    v25 = v23;
    if ( v23 )
    {
      v26 = v23 + 2;
      v27 = v23 + 2;
      if ( (_DWORD)v6 )
      {
        v28 = (const void **)v8;
        v29 = v6;
        do
        {
          v30 = *(unsigned __int16 *)v28;
          memmove(v27, v28[1], v30);
          v27 = (_WORD *)((char *)v27 + v30);
          v28 += 2;
          --v29;
        }
        while ( v29 );
        v8 = v32;
        v26 = v25 + 2;
      }
      *v27 = 0;
      v25[1] = v22;
      if ( (unsigned int)v6 > 1 || *v26 )
        v10 = 2;
      *v25 = v10;
      v9 = CmSetAcpiHwProfile(
             v25,
             (__int64 (__fastcall *)(PVOID, unsigned int *, _QWORD))IopExecuteHwpDefaultSelect,
             v24,
             a4,
             a5);
    }
    else
    {
      v9 = -1073741670;
    }
    ExFreePoolWithTag(v8, 0x33706E50u);
    if ( v25 )
      ExFreePoolWithTag(v25, 0x33706E50u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v9;
}
