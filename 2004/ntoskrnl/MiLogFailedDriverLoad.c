/*
 * XREFs of MiLogFailedDriverLoad @ 0x1408C47A0
 * Callers:
 *     MmLoadSystemImageEx @ 0x14074603C (MmLoadSystemImageEx.c)
 *     MiResolveImageReferences @ 0x140747778 (MiResolveImageReferences.c)
 *     MiCreateSectionForDriver @ 0x140748F3C (MiCreateSectionForDriver.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402770E0 (RtlInitAnsiString.c)
 *     MiIsRetryIoStatus @ 0x1402F8164 (MiIsRetryIoStatus.c)
 *     IoWriteErrorLogEntry @ 0x14037E510 (IoWriteErrorLogEntry.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     IoAllocateGenericErrorLogEntry @ 0x140500438 (IoAllocateGenericErrorLogEntry.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063D070 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 */

void __fastcall MiLogFailedDriverLoad(unsigned __int16 *a1, unsigned __int16 *a2, const CHAR *a3, NTSTATUS a4)
{
  int v4; // esi
  __int64 v5; // rdi
  NTSTATUS v6; // ebx
  int v7; // r12d
  NTSTATUS v8; // r14d
  __int64 v9; // r15
  __int64 v10; // rcx
  int v11; // ecx
  __int128 v12; // xmm0
  int v13; // eax
  int v14; // edi
  unsigned int v15; // esi
  _WORD *GenericErrorLogEntry; // rax
  _WORD *v17; // rdi
  char *v18; // rsi
  const void **v19; // r14
  size_t v20; // rbx
  char *v21; // rsi
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-49h] BYREF
  STRING DestinationString; // [rsp+30h] [rbp-39h] BYREF
  __int128 v24; // [rsp+40h] [rbp-29h] BYREF
  __int16 v25; // [rsp+50h] [rbp-19h]
  const wchar_t *v26; // [rsp+58h] [rbp-11h]
  __int128 v27; // [rsp+60h] [rbp-9h]
  UNICODE_STRING v28; // [rsp+70h] [rbp+7h]

  v4 = *a1 + 2;
  DestinationString = 0LL;
  v5 = -1LL;
  v6 = a4;
  v7 = 0;
  v8 = 0;
  LODWORD(v9) = 1;
  v24 = *(_OWORD *)a1;
  UnicodeString = 0LL;
  if ( !a2 || a4 != -1073741702 && a4 != -1073741772 && (unsigned int)(a4 + 1073741214) > 1 )
    goto LABEL_14;
  v10 = -1LL;
  v26 = L"cannot find";
  do
    ++v10;
  while ( aCannotFind[v10] );
  v11 = 2 * v10;
  v12 = *(_OWORD *)a2;
  v13 = v11 + *a2;
  v25 = v11;
  v9 = 3LL;
  v4 += v13 + 4;
  v27 = v12;
  if ( a3 )
  {
    if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      RtlInitAnsiString(&DestinationString, a3);
      v9 = 4LL;
      if ( RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) < 0 )
        v7 = 1;
      v4 += UnicodeString.Length + 2;
      v28 = UnicodeString;
    }
    else
    {
      v8 = (int)a3;
    }
    if ( v7 == 1 )
    {
LABEL_14:
      v8 = v6;
      v26 = L"failed to load";
      do
        ++v5;
      while ( aFailedToLoad[v5] );
      v14 = 2 * v5;
      v9 = (unsigned int)(v9 + 1);
      v25 = v14;
      v4 += v14 + 2;
      v6 = MiIsRetryIoStatus(v6, 0x1000uLL) ? -1073741670 : -1073741204;
    }
  }
  v15 = v4 + 48;
  if ( v15 < 0xFF )
  {
    GenericErrorLogEntry = IoAllocateGenericErrorLogEntry(v15);
    v17 = GenericErrorLogEntry;
    if ( GenericErrorLogEntry )
    {
      *((_DWORD *)GenericErrorLogEntry + 3) = 1073741850;
      v18 = (char *)(GenericErrorLogEntry + 24);
      *((_DWORD *)GenericErrorLogEntry + 5) = v6;
      *((_DWORD *)GenericErrorLogEntry + 4) = v8;
      GenericErrorLogEntry[3] = 48;
      if ( (_DWORD)v9 )
      {
        v19 = (const void **)&v24 + 1;
        do
        {
          v20 = *((unsigned __int16 *)v19 - 4);
          memmove(v18, *v19, v20);
          v19 += 2;
          v21 = &v18[2 * (v20 >> 1)];
          *(_WORD *)v21 = 32;
          v18 = v21 + 2;
          --v9;
        }
        while ( v9 );
      }
      *((_WORD *)v18 - 1) = 0;
      v17[2] = 1;
      IoWriteErrorLogEntry(v17);
    }
  }
  RtlFreeAnsiString(&UnicodeString);
}
