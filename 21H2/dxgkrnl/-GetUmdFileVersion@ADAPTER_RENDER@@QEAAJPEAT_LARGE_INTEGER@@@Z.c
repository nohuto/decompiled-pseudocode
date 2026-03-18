/*
 * XREFs of ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C01D1C14
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018C4C0 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?GetUMDFileName@ADAPTER_RENDER@@AEBAJW4_KMTUMDVERSION@@AEAU_UNICODE_STRING@@@Z @ 0x1C0184474 (-GetUMDFileName@ADAPTER_RENDER@@AEBAJW4_KMTUMDVERSION@@AEAU_UNICODE_STRING@@@Z.c)
 *     ?IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z @ 0x1C01D1EC4 (-IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z.c)
 *     ?DxgkpGetFileVersion@@YAJPEAU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@PEAJ@Z @ 0x1C0215344 (-DxgkpGetFileVersion@@YAJPEAU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@PEAJ@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetUmdFileVersion(union _LARGE_INTEGER *this, union _LARGE_INTEGER *a2)
{
  __int64 v3; // rdi
  unsigned int v5; // ebx
  unsigned __int64 v6; // r13
  const WCHAR *v7; // r15
  size_t v8; // r12
  size_t v9; // rax
  __int64 v10; // r9
  __int16 v11; // bx
  int FileVersion; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  size_t v15; // rbx
  __int64 v16; // r9
  unsigned __int16 MaximumLength; // ax
  size_t v18; // rbx
  const WCHAR *v19; // rax
  int v20; // eax
  struct _UNICODE_STRING Destination; // [rsp+50h] [rbp-20h] BYREF
  wchar_t *Src[2]; // [rsp+60h] [rbp-10h] BYREF
  int v23; // [rsp+B0h] [rbp+40h] BYREF
  union _LARGE_INTEGER *v24; // [rsp+B8h] [rbp+48h]

  v24 = a2;
  v23 = 0;
  Destination = 0LL;
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 3608LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pFileVersion != NULL", 3608LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( this[76].QuadPart != -1 )
  {
    LODWORD(v3) = 0;
LABEL_5:
    *v24 = this[76];
    goto LABEL_6;
  }
  v5 = 0;
  *(_OWORD *)Src = 0LL;
  while ( (int)ADAPTER_RENDER::GetUMDFileName((ADAPTER_RENDER *)this, v5, (struct _UNICODE_STRING *)Src) < 0
       || (unsigned int)IsNullUmdDriver((const struct _UNICODE_STRING *)Src) )
  {
    if ( ++v5 >= 4 )
    {
      if ( v5 == 4 )
      {
        LODWORD(v3) = -1073741811;
        goto LABEL_6;
      }
      break;
    }
  }
  v6 = WORD1(Src[0]);
  v7 = Src[1];
  v8 = (unsigned __int64)WORD1(Src[0]) >> 1;
  v9 = wcsnlen(Src[1], v8);
  v11 = 2 * v9;
  if ( 2 * v9 >= v6 )
  {
    WdLogSingleEntry1(1LL, 3645LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Size < UmdDriverName.MaximumLength",
      3645LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Destination.MaximumLength = v11 + 12;
  Destination.Buffer = (wchar_t *)operator new[]((unsigned __int16)(v11 + 12), 0x4B677844u, 256LL, v10);
  if ( !Destination.Buffer )
  {
    LODWORD(v3) = -1073741801;
    ((void (__fastcall *)(_QWORD, _QWORD))WdLogSingleEntry1)(6LL, (union _LARGE_INTEGER)this[2].QuadPart);
LABEL_35:
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for the user mode driver name string on adapter 0x%I64x.",
      this[2].QuadPart,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_6;
  }
  RtlAppendUnicodeToString(&Destination, L"\\??\\");
  RtlAppendUnicodeToString(&Destination, v7);
  FileVersion = DxgkpGetFileVersion(&Destination, this + 76, &v23);
  LODWORD(v3) = FileVersion;
  if ( FileVersion >= 0 )
    goto LABEL_5;
  if ( FileVersion == v23 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v13) + 24) = 3676LL;
    v15 = 2 * wcsnlen(v7, v8);
    if ( v15 >= v6 )
    {
      WdLogSingleEntry1(1LL, 3682LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"Size < UmdDriverName.MaximumLength",
        3682LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    MaximumLength = v15 + 56;
    Destination.Length = 0;
    Destination.MaximumLength = v15 + 56;
    if ( Destination.Buffer )
    {
      operator delete(Destination.Buffer);
      MaximumLength = Destination.MaximumLength;
      Destination.Buffer = 0LL;
    }
    Destination.Buffer = (wchar_t *)operator new[](MaximumLength, 0x4B677844u, 256LL, v16);
    if ( Destination.Buffer )
    {
      RtlAppendUnicodeToString(&Destination, L"\\Systemroot\\System32\\");
      RtlAppendUnicodeToString(&Destination, v7);
      v18 = v15 >> 1;
      if ( v18 )
      {
        v19 = &v7[v18 - 1];
        while ( *v19 != 46 )
        {
          --v19;
          if ( !--v18 )
            goto LABEL_26;
        }
      }
      else
      {
LABEL_26:
        RtlAppendUnicodeToString(&Destination, L".DLL");
      }
      v20 = DxgkpGetFileVersion(&Destination, this + 76, 0LL);
      v3 = v20;
      if ( v20 < 0 )
      {
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))WdLogSingleEntry2)(
          2LL,
          (union _LARGE_INTEGER)this[2].QuadPart,
          v20);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to open the user mode driver DLL on adapter %I64d (ntStatus = %I64d).",
          this[2].QuadPart,
          v3,
          0LL,
          0LL,
          0LL);
        goto LABEL_6;
      }
      goto LABEL_5;
    }
    LODWORD(v3) = -1073741801;
    ((void (__fastcall *)(_QWORD, _QWORD))WdLogSingleEntry1)(6LL, (union _LARGE_INTEGER)this[2].QuadPart);
    goto LABEL_35;
  }
LABEL_6:
  if ( Destination.Buffer )
    operator delete(Destination.Buffer);
  return (unsigned int)v3;
}
