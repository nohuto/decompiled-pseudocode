/*
 * XREFs of CmpAddDriverToList @ 0x140A6197C
 * Callers:
 *     CmpFindDrivers @ 0x140A61F64 (CmpFindDrivers.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1402539E0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     RtlAppendUnicodeStringToString @ 0x14026D4E0 (RtlAppendUnicodeStringToString.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpFindValueByName @ 0x14065E45C (CmpFindValueByName.c)
 *     CmpValueToData @ 0x1407AD0F4 (CmpValueToData.c)
 *     CmpFindTagIndex @ 0x140A617B0 (CmpFindTagIndex.c)
 *     CmpGetNodeName @ 0x140A62278 (CmpGetNodeName.c)
 */

char __fastcall CmpAddDriverToList(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        ULONG_PTR a3,
        unsigned int a4,
        PCUNICODE_STRING Source,
        char **a6)
{
  char *v7; // r14
  char *v8; // rdi
  __int64 (__fastcall *v9)(ULONG_PTR, __int64, _DWORD *); // rax
  __int64 v10; // rax
  __int64 v11; // r15
  const WCHAR *NodeName; // rax
  const WCHAR *v13; // r13
  char *v14; // rax
  PCUNICODE_STRING v15; // rax
  _WORD *v16; // r12
  unsigned __int16 v17; // cx
  unsigned int ValueByName; // esi
  ULONG_PTR v19; // rax
  PVOID v20; // rsi
  unsigned int v21; // r15d
  wchar_t *v22; // rax
  wchar_t *Buffer; // rsi
  void (__fastcall *v24)(ULONG_PTR, __int64 *); // rax
  __int64 (__fastcall *v25)(_QWORD, _QWORD, __int64); // rax
  char v26; // r12
  __int64 v27; // rcx
  __int64 v28; // rcx
  char **v29; // rax
  char *v30; // rcx
  unsigned int v31; // esi
  ULONG_PTR v32; // rax
  _DWORD *v33; // rsi
  unsigned int v34; // esi
  ULONG_PTR v35; // rax
  __int64 v36; // rsi
  unsigned __int16 v37; // ax
  unsigned int v38; // r15d
  unsigned int v39; // eax
  __int64 (__fastcall *v41)(__int64, _QWORD, __int64); // rax
  __int64 v42; // rcx
  ULONG_PTR v43; // rax
  unsigned __int16 v44; // ax
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  size_t Size; // [rsp+38h] [rbp-61h] BYREF
  __int64 v49; // [rsp+40h] [rbp-59h]
  _DWORD v50[2]; // [rsp+48h] [rbp-51h] BYREF
  UNICODE_STRING v51; // [rsp+50h] [rbp-49h] BYREF
  UNICODE_STRING Destination; // [rsp+60h] [rbp-39h] BYREF
  __int64 v53; // [rsp+70h] [rbp-29h] BYREF
  __int64 v54; // [rsp+78h] [rbp-21h] BYREF
  __int64 v55; // [rsp+80h] [rbp-19h] BYREF
  __int64 v56; // [rsp+88h] [rbp-11h] BYREF
  _DWORD v57[2]; // [rsp+90h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-1h] BYREF
  unsigned __int16 v59; // [rsp+E8h] [rbp+4Fh] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+F8h] [rbp+5Fh]
  unsigned int v61; // [rsp+100h] [rbp+67h]

  v61 = a4;
  BugCheckParameter3a = a3;
  v57[1] = 0;
  v57[0] = -1;
  v56 = 0xFFFFFFFFLL;
  v55 = 0xFFFFFFFFLL;
  v7 = 0LL;
  v54 = 0xFFFFFFFFLL;
  v8 = 0LL;
  v53 = 0xFFFFFFFFLL;
  v50[0] = -1;
  v50[1] = 0;
  v9 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter3 + 8);
  LODWORD(Size) = 0;
  DestinationString = 0LL;
  v59 = 0;
  v51 = 0LL;
  Destination = 0LL;
  v10 = v9(BugCheckParameter3, a2, v57);
  v49 = v10;
  v11 = v10;
  if ( !v10 )
  {
    v11 = 0LL;
    goto LABEL_64;
  }
  NodeName = (const WCHAR *)CmpGetNodeName(BugCheckParameter3, v10, &v59);
  v13 = NodeName;
  if ( !NodeName )
  {
LABEL_64:
    v26 = 0;
    goto LABEL_36;
  }
  if ( RtlInitUnicodeStringEx(&DestinationString, NodeName) < 0
    || (v14 = (char *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter3 + 24))(
                        144LL,
                        0LL,
                        540101955LL),
        (v8 = v14) == 0LL) )
  {
    v26 = 0;
    goto LABEL_34;
  }
  memset(v14, 0, 0x90uLL);
  v15 = Source;
  v16 = v8 + 120;
  v17 = v59;
  *((_QWORD *)v8 + 8) = BugCheckParameter3;
  v7 = v8;
  *(UNICODE_STRING *)(v8 + 72) = *v15;
  *((_QWORD *)v8 + 5) = 0LL;
  *((_QWORD *)v8 + 3) = 0LL;
  *((_QWORD *)v8 + 16) = v13;
  v13 = 0LL;
  *((_WORD *)v8 + 60) = v17 - 2;
  *((_WORD *)v8 + 61) = v17;
  ValueByName = CmpFindValueByName(BugCheckParameter3, v11, (__int64)&CmpImagePathString);
  if ( ValueByName == -1 )
  {
    v41 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter3 + 24);
    v42 = (unsigned int)(unsigned __int16)*v16 + 46;
    v51.MaximumLength = *v16 + 46;
    v51.Buffer = (wchar_t *)v41(v42, 0LL, 540233027LL);
    if ( !v51.Buffer )
    {
      v26 = 0;
      goto LABEL_39;
    }
    if ( RtlAppendUnicodeToString(&v51, L"System32\\Drivers\\") >= 0
      && RtlAppendUnicodeStringToString(&v51, (PCUNICODE_STRING)(v8 + 120)) >= 0
      && RtlAppendUnicodeToString(&v51, L".sys") >= 0 )
    {
      Buffer = v51.Buffer;
      goto LABEL_10;
    }
    goto LABEL_64;
  }
  v19 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
          BugCheckParameter3,
          ValueByName,
          v50);
  if ( !v19
    || (v20 = CmpValueToData(BugCheckParameter3, ValueByName, v19, (unsigned int *)&Size, (__int64)&v53),
        *(_QWORD *)&DestinationString.Length = v20,
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v50),
        !v20) )
  {
    v11 = v49;
    v26 = 0;
LABEL_36:
    Buffer = v51.Buffer;
    goto LABEL_37;
  }
  v21 = Size;
  v22 = (wchar_t *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter3 + 24))(
                     (unsigned int)Size,
                     0LL,
                     540233027LL);
  v51.Buffer = v22;
  Buffer = v22;
  if ( !v22 )
  {
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v53);
    v11 = v49;
    v26 = 0;
    goto LABEL_39;
  }
  memmove(v22, *(const void **)&DestinationString.Length, v21);
  v24 = *(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16);
  v51.Length = v21;
  v51.MaximumLength = v21;
  v24(BugCheckParameter3, &v53);
  v11 = v49;
LABEL_10:
  v25 = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter3 + 24);
  Destination.MaximumLength = *v16 + Source->Length + 92;
  Destination.Buffer = (wchar_t *)v25(Destination.MaximumLength, 0LL, 540298563LL);
  if ( !Destination.Buffer
    || RtlAppendUnicodeStringToString(&Destination, &CmpRegistryRootKeyPath) < 0
    || RtlAppendUnicodeStringToString(&Destination, Source) < 0
    || RtlAppendUnicodeStringToString(&Destination, &CmpServicesSubKeyPath) < 0
    || (v26 = 0, RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)(v8 + 120)) < 0) )
  {
    v26 = 0;
    goto LABEL_66;
  }
  v27 = *((_QWORD *)v8 + 3);
  if ( v27 )
    (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter3 + 32))(v27, *((unsigned __int16 *)v8 + 8));
  v28 = *((_QWORD *)v8 + 5);
  *((UNICODE_STRING *)v8 + 1) = v51;
  v51 = 0LL;
  if ( v28 )
    (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter3 + 32))(v28, *((unsigned __int16 *)v8 + 16));
  v29 = a6;
  *((UNICODE_STRING *)v8 + 2) = Destination;
  v30 = *v29;
  Destination = 0LL;
  if ( *((char ***)v30 + 1) != v29 )
    __fastfail(3u);
  *(_QWORD *)v8 = v30;
  *((_QWORD *)v8 + 1) = v29;
  *((_QWORD *)v30 + 1) = v8;
  v7 = 0LL;
  *v29 = v8;
  v31 = CmpFindValueByName(BugCheckParameter3, v11, (__int64)&CmpErrorControlString);
  if ( v31 == -1 )
  {
    *((_DWORD *)v8 + 35) = 1;
  }
  else
  {
    v32 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
            BugCheckParameter3,
            v31,
            v50);
    if ( !v32 )
      goto LABEL_56;
    v33 = CmpValueToData(BugCheckParameter3, v31, v32, (unsigned int *)&Size, (__int64)&v54);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v50);
    if ( !v33 )
      goto LABEL_56;
    *((_DWORD *)v8 + 35) = *v33;
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v54);
  }
  v34 = CmpFindValueByName(BugCheckParameter3, v11, (__int64)&CmpGroupString);
  if ( v34 == -1 )
  {
    v36 = (__int64)(v8 + 104);
    *((_WORD *)v8 + 52) = 0;
    *((_WORD *)v8 + 53) = 0;
    *((_QWORD *)v8 + 14) = 0LL;
    goto LABEL_29;
  }
  v35 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(BugCheckParameter3, v34, v50);
  if ( v35 )
  {
    *((_QWORD *)v8 + 14) = CmpValueToData(BugCheckParameter3, v34, v35, (unsigned int *)&Size, (__int64)&v55);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v50);
    if ( *((_QWORD *)v8 + 14) )
    {
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v55);
      v36 = (__int64)(v8 + 104);
      v37 = Size - 2;
      *((_WORD *)v8 + 52) = Size - 2;
      if ( v37 <= (unsigned __int16)Size )
      {
        *((_WORD *)v8 + 53) = v37;
LABEL_29:
        v38 = CmpFindValueByName(BugCheckParameter3, v11, (__int64)&CmpDriverDependencyString);
        if ( v38 == -1 )
        {
          *((_DWORD *)v8 + 22) = 0;
          *((_QWORD *)v8 + 12) = 0LL;
LABEL_31:
          v11 = v49;
          v39 = CmpFindValueByName(BugCheckParameter3, v49, (__int64)&CmpTagString);
          if ( v39 == -1 )
            *((_DWORD *)v8 + 34) = -1;
          else
            *((_DWORD *)v8 + 34) = CmpFindTagIndex(BugCheckParameter3a, v39, v61, v36);
          v26 = 1;
LABEL_34:
          v7 = 0LL;
          if ( v13 )
            (*(void (__fastcall **)(const WCHAR *, _QWORD))(BugCheckParameter3 + 32))(v13, v59);
          goto LABEL_36;
        }
        v43 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
                BugCheckParameter3,
                v38,
                v50);
        if ( v43 )
        {
          *((_QWORD *)v8 + 12) = CmpValueToData(BugCheckParameter3, v38, v43, (unsigned int *)&Size, (__int64)&v56);
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v50);
          if ( *((_QWORD *)v8 + 12) )
          {
            (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v56);
            v44 = Size - 2;
            *((_WORD *)v8 + 44) = Size - 2;
            if ( v44 <= (unsigned __int16)Size )
            {
              *((_WORD *)v8 + 45) = v44;
              goto LABEL_31;
            }
          }
        }
      }
    }
  }
LABEL_56:
  Buffer = v51.Buffer;
LABEL_66:
  v11 = v49;
LABEL_37:
  if ( Buffer )
    (*(void (__fastcall **)(wchar_t *, _QWORD))(BugCheckParameter3 + 32))(Buffer, v51.Length);
LABEL_39:
  if ( Destination.Buffer )
    (*(void (__fastcall **)(wchar_t *, _QWORD))(BugCheckParameter3 + 32))(Destination.Buffer, Destination.Length);
  if ( v7 )
  {
    v45 = *((_QWORD *)v7 + 3);
    if ( v45 )
      (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter3 + 32))(v45, *((unsigned __int16 *)v7 + 8));
    v46 = *((_QWORD *)v7 + 5);
    if ( v46 )
      (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter3 + 32))(v46, *((unsigned __int16 *)v7 + 16));
    v47 = *((_QWORD *)v8 + 16);
    if ( v47 )
      (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter3 + 32))(v47, *((unsigned __int16 *)v8 + 60));
    (*(void (__fastcall **)(char *, __int64))(BugCheckParameter3 + 32))(v8, 144LL);
  }
  if ( v11 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v57);
  return v26;
}
