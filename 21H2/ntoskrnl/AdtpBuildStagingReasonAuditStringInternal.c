/*
 * XREFs of AdtpBuildStagingReasonAuditStringInternal @ 0x1405C3584
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x1405C25AC (AdtpBuildAccessReasonAuditString.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1402539E0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14026D4E0 (RtlAppendUnicodeStringToString.c)
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     AdtpFormatPrefix @ 0x1405C392C (AdtpFormatPrefix.c)
 *     StringCchPrintfExW @ 0x1405C3A10 (StringCchPrintfExW.c)
 *     AdtpBuildAccessesString @ 0x14096E498 (AdtpBuildAccessesString.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  int v11; // edi
  unsigned int v12; // ebx
  unsigned int v13; // r14d
  unsigned int v14; // ebx
  unsigned int v15; // r14d
  bool v16; // zf
  ULONG v17; // r15d
  size_t v18; // rdx
  unsigned int v19; // eax
  unsigned int v21; // ebx
  NTSTATUS appended; // eax
  size_t v23; // r14
  unsigned int v24; // ebx
  _WORD *PoolWithTag; // rax
  _WORD *v26; // rsi
  __int64 v27; // rcx
  __int16 v28; // bx
  __int64 v29; // [rsp+30h] [rbp-D0h]
  __int64 v30; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING v31; // [rsp+58h] [rbp-A8h] BYREF
  size_t pcchRemaining; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING Destination; // [rsp+70h] [rbp-90h] BYREF
  void *Src[2]; // [rsp+80h] [rbp-80h] BYREF
  int v35; // [rsp+90h] [rbp-70h]
  UNICODE_STRING Source; // [rsp+98h] [rbp-68h] BYREF
  size_t v37; // [rsp+A8h] [rbp-58h]
  __int64 v38; // [rsp+B0h] [rbp-50h]
  wchar_t pszFormat[8]; // [rsp+B8h] [rbp-48h] BYREF
  wchar_t pszDest[20]; // [rsp+C8h] [rbp-38h] BYREF
  char v41; // [rsp+F0h] [rbp-10h] BYREF

  v38 = a8;
  v37 = a4;
  Source.Buffer = (wchar_t *)&v41;
  Length = 2;
  v9 = 0;
  pcchRemaining = a3;
  *(_OWORD *)Src = 0LL;
  v31.Buffer = (wchar_t *)L"-";
  v10 = a5;
  Destination = 0LL;
  LOBYTE(v30) = 0;
  *(_QWORD *)&Source.Length = 1966080LL;
  wcscpy(pszFormat, L"# %d");
  *(_QWORD *)&v31.Length = 131074LL;
  while ( 1 )
  {
    v10 >>= 1;
    if ( !v10 )
      break;
    ++v9;
  }
  v11 = AdtpBuildAccessesString(a1, a2, a5, 2, (PUNICODE_STRING)Src, 0LL, 0LL, 0LL, (__int64)&v30);
  if ( v11 < 0 )
    goto LABEL_33;
  v35 = LOWORD(Src[0]) >> 1;
  v12 = *(_DWORD *)(a7 + 4LL * v9);
  v13 = HIBYTE(v12);
  v14 = v12 & 0xFF0000;
  v15 = v13 & 0x7F;
  if ( v14 > 0x200000 )
  {
    if ( v14 == 3145728 )
      goto LABEL_25;
    if ( v14 != 0x400000 )
    {
      if ( v14 == 5242880 )
        goto LABEL_25;
      if ( v14 != 6291456 && v14 != 7340032 )
      {
        v16 = v14 == 0x800000;
LABEL_22:
        if ( !v16 )
        {
          v17 = 1809;
          goto LABEL_26;
        }
        goto LABEL_25;
      }
    }
LABEL_24:
    v17 = 1814;
    goto LABEL_26;
  }
  if ( v14 == 0x200000 || v14 == 0x10000 )
    goto LABEL_24;
  if ( v14 != 0x20000 )
  {
    if ( v14 == 196608 )
    {
      v17 = 1816;
      goto LABEL_26;
    }
    if ( v14 != 327680 )
    {
      if ( v14 == 393216 )
      {
        v17 = 1815;
        goto LABEL_26;
      }
      if ( v14 != 458752 )
      {
        v16 = v14 == 0x100000;
        goto LABEL_22;
      }
    }
  }
LABEL_25:
  v17 = 1813;
LABEL_26:
  v11 = AdtpFormatPrefix(&Source, v17);
  if ( v11 >= 0 )
  {
    if ( v14 == 196608 || v14 == 393216 )
      v18 = v37;
    else
      v18 = pcchRemaining;
    v19 = *(_DWORD *)(v18 + 8);
    if ( v19 )
    {
      if ( v15 >= v19 )
      {
        v11 = -1073741811;
        goto LABEL_33;
      }
      v31 = *(UNICODE_STRING *)(*(_QWORD *)(v18 + 16) + 16LL * v15);
      Length = v31.Length;
    }
    if ( Length <= 2u )
    {
      LODWORD(v29) = v15;
      pcchRemaining = 0LL;
      if ( StringCchPrintfExW(pszDest, 0x14uLL, 0LL, &pcchRemaining, 0, pszFormat, v29) >= 0 )
      {
        v31.MaximumLength = 40;
        Length = 2 * (20 - pcchRemaining);
        v31.Length = Length;
        v31.Buffer = pszDest;
      }
    }
    v21 = Length + 54;
    Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v21, 0x6B416553u);
    if ( Destination.Buffer )
    {
      Destination.Length = 0;
      Destination.MaximumLength = 2 * v21;
      RtlAppendUnicodeStringToString(&Destination, &Source);
      if ( v17 != 1809 )
        RtlAppendUnicodeStringToString(&Destination, &v31);
      appended = RtlAppendUnicodeToString(&Destination, L"\r\n\t\t\t\t");
      v23 = Destination.Length;
      v11 = appended;
      v24 = v35 + 1 + (Destination.Length >> 1);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v24, 0x6B416553u);
      v26 = PoolWithTag;
      if ( PoolWithTag )
      {
        if ( LOWORD(Src[0]) )
          memmove(PoolWithTag, Src[1], LOWORD(Src[0]));
        if ( (_WORD)v23 )
          memmove((char *)v26 + LOWORD(Src[0]), Destination.Buffer, v23);
        v27 = v38;
        v26[v24 - 1] = 0;
        v28 = 2 * v24;
        *(_WORD *)(v27 + 2) = v28;
        *(_QWORD *)(v27 + 8) = v26;
        *(_WORD *)v27 = v28 - 2;
      }
      else
      {
        v11 = -1073741801;
      }
    }
    else
    {
      v11 = -1073741801;
    }
  }
LABEL_33:
  if ( (_BYTE)v30 && Src[1] )
    ExFreeHeapPool((ULONG_PTR)Src[1]);
  if ( Destination.Buffer )
    ExFreeHeapPool((ULONG_PTR)Destination.Buffer);
  return (unsigned int)v11;
}
