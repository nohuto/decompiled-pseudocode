/*
 * XREFs of AdtpBuildStagingReasonAuditStringInternal @ 0x1405C3354
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x1405C237C (AdtpBuildAccessReasonAuditString.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140265A40 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14027F0B0 (RtlAppendUnicodeStringToString.c)
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     AdtpFormatPrefix @ 0x1405C36FC (AdtpFormatPrefix.c)
 *     StringCchPrintfExW @ 0x1405C37E0 (StringCchPrintfExW.c)
 *     AdtpBuildAccessesString @ 0x14096E2B8 (AdtpBuildAccessesString.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AdtpBuildStagingReasonAuditStringInternal(
        int a1,
        int a2,
        size_t a3,
        size_t a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int16 Length; // si
  unsigned __int8 v9; // bl
  unsigned int v10; // eax
  size_t v11; // rdx
  int v12; // edi
  __int64 v13; // r8
  _DWORD *v14; // r9
  unsigned int v15; // ebx
  unsigned int v16; // r14d
  unsigned int v17; // ebx
  unsigned int v18; // r14d
  bool v19; // zf
  ULONG v20; // r15d
  unsigned int v21; // eax
  unsigned int v23; // ebx
  NTSTATUS appended; // eax
  size_t v25; // r14
  unsigned int v26; // ebx
  _WORD *PoolWithTag; // rax
  _WORD *v28; // rsi
  __int64 v29; // rcx
  __int16 v30; // bx
  __int64 v31; // [rsp+30h] [rbp-D0h]
  __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING v33; // [rsp+58h] [rbp-A8h] BYREF
  size_t pcchRemaining; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING Destination; // [rsp+70h] [rbp-90h] BYREF
  void *Src[2]; // [rsp+80h] [rbp-80h] BYREF
  int v37; // [rsp+90h] [rbp-70h]
  UNICODE_STRING Source; // [rsp+98h] [rbp-68h] BYREF
  size_t v39; // [rsp+A8h] [rbp-58h]
  __int64 v40; // [rsp+B0h] [rbp-50h]
  wchar_t pszFormat[8]; // [rsp+B8h] [rbp-48h] BYREF
  wchar_t pszDest[20]; // [rsp+C8h] [rbp-38h] BYREF
  char v43; // [rsp+F0h] [rbp-10h] BYREF

  v40 = a8;
  v39 = a4;
  Source.Buffer = (wchar_t *)&v43;
  Length = 2;
  v9 = 0;
  pcchRemaining = a3;
  *(_OWORD *)Src = 0LL;
  v33.Buffer = (wchar_t *)L"-";
  v10 = a5;
  Destination = 0LL;
  LOBYTE(v32) = 0;
  *(_QWORD *)&Source.Length = 1966080LL;
  wcscpy(pszFormat, L"# %d");
  *(_QWORD *)&v33.Length = 131074LL;
  while ( 1 )
  {
    v10 >>= 1;
    if ( !v10 )
      break;
    ++v9;
  }
  v12 = AdtpBuildAccessesString(a1, a2, a5, 2, (PUNICODE_STRING)Src, 0LL, 0LL, 0LL, (__int64)&v32);
  if ( v12 < 0 )
    goto LABEL_33;
  v37 = LOWORD(Src[0]) >> 1;
  v15 = *(_DWORD *)(a7 + 4LL * v9);
  v16 = HIBYTE(v15);
  v17 = v15 & 0xFF0000;
  v18 = v16 & 0x7F;
  if ( v17 > 0x200000 )
  {
    if ( v17 == 3145728 )
      goto LABEL_25;
    if ( v17 != 0x400000 )
    {
      if ( v17 == 5242880 )
        goto LABEL_25;
      if ( v17 != 6291456 && v17 != 7340032 )
      {
        v19 = v17 == 0x800000;
LABEL_22:
        if ( !v19 )
        {
          v20 = 1809;
          goto LABEL_26;
        }
        goto LABEL_25;
      }
    }
LABEL_24:
    v20 = 1814;
    goto LABEL_26;
  }
  if ( v17 == 0x200000 || v17 == 0x10000 )
    goto LABEL_24;
  if ( v17 != 0x20000 )
  {
    if ( v17 == 196608 )
    {
      v20 = 1816;
      goto LABEL_26;
    }
    if ( v17 != 327680 )
    {
      if ( v17 == 393216 )
      {
        v20 = 1815;
        goto LABEL_26;
      }
      if ( v17 != 458752 )
      {
        v19 = v17 == 0x100000;
        goto LABEL_22;
      }
    }
  }
LABEL_25:
  v20 = 1813;
LABEL_26:
  v12 = AdtpFormatPrefix(&Source, v20);
  if ( v12 >= 0 )
  {
    if ( v17 == 196608 || v17 == 393216 )
      v11 = v39;
    else
      v11 = pcchRemaining;
    v21 = *(_DWORD *)(v11 + 8);
    if ( v21 )
    {
      if ( v18 >= v21 )
      {
        v12 = -1073741811;
        goto LABEL_33;
      }
      v33 = *(UNICODE_STRING *)(*(_QWORD *)(v11 + 16) + 16LL * v18);
      Length = v33.Length;
    }
    if ( Length <= 2u )
    {
      LODWORD(v31) = v18;
      pcchRemaining = 0LL;
      if ( StringCchPrintfExW(pszDest, 0x14uLL, 0LL, &pcchRemaining, 0, pszFormat, v31) >= 0 )
      {
        v33.MaximumLength = 40;
        Length = 2 * (20 - pcchRemaining);
        v33.Length = Length;
        v33.Buffer = pszDest;
      }
    }
    v23 = Length + 54;
    Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v23, 0x6B416553u);
    if ( Destination.Buffer )
    {
      Destination.Length = 0;
      Destination.MaximumLength = 2 * v23;
      RtlAppendUnicodeStringToString(&Destination, &Source);
      if ( v20 != 1809 )
        RtlAppendUnicodeStringToString(&Destination, &v33);
      appended = RtlAppendUnicodeToString(&Destination, L"\r\n\t\t\t\t");
      v25 = Destination.Length;
      v12 = appended;
      v26 = v37 + 1 + (Destination.Length >> 1);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v26, 0x6B416553u);
      v28 = PoolWithTag;
      if ( PoolWithTag )
      {
        if ( LOWORD(Src[0]) )
          memmove(PoolWithTag, Src[1], LOWORD(Src[0]));
        if ( (_WORD)v25 )
          memmove((char *)v28 + LOWORD(Src[0]), Destination.Buffer, v25);
        v29 = v40;
        v28[v26 - 1] = 0;
        v30 = 2 * v26;
        *(_WORD *)(v29 + 2) = v30;
        *(_QWORD *)(v29 + 8) = v28;
        *(_WORD *)v29 = v30 - 2;
      }
      else
      {
        v12 = -1073741801;
      }
    }
    else
    {
      v12 = -1073741801;
    }
  }
LABEL_33:
  if ( (_BYTE)v32 && Src[1] )
    ExFreeHeapPool((ULONG_PTR)Src[1], v11, v13, v14);
  if ( Destination.Buffer )
    ExFreeHeapPool((ULONG_PTR)Destination.Buffer, v11, v13, v14);
  return (unsigned int)v12;
}
