/*
 * XREFs of ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C0125CB8
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C01248A0 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z @ 0x1C0125C0C (-IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z.c)
 *     ?GetUMDFileName@ADAPTER_RENDER@@AEBAJW4_KMTUMDVERSION@@AEAU_UNICODE_STRING@@@Z @ 0x1C0125C34 (-GetUMDFileName@ADAPTER_RENDER@@AEBAJW4_KMTUMDVERSION@@AEAU_UNICODE_STRING@@@Z.c)
 *     ?DxgkpGetFileVersion@@YAJPEAU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@PEAJ@Z @ 0x1C0177210 (-DxgkpGetFileVersion@@YAJPEAU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@PEAJ@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetUmdFileVersion(union _LARGE_INTEGER *this, union _LARGE_INTEGER *a2)
{
  __int64 v4; // rbx
  unsigned __int64 v6; // r12
  const WCHAR *v7; // r14
  size_t v8; // r15
  size_t v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int16 v12; // bx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int FileVersion; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  size_t v24; // rbx
  unsigned __int16 MaximumLength; // ax
  size_t v26; // rbx
  const WCHAR *v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-20h] BYREF
  wchar_t *Src[2]; // [rsp+30h] [rbp-10h] BYREF
  int v38; // [rsp+70h] [rbp+30h] BYREF

  v38 = 0;
  Destination = 0LL;
  if ( !a2 )
  {
    v31 = WdLogNewEntry5_WdAssertion(this, 0LL);
    *(_QWORD *)(v31 + 24) = 3523LL;
    WdLogEvent5_WdAssertion(v31);
  }
  LODWORD(v4) = 0;
  if ( this[75].QuadPart != -1 )
    goto LABEL_4;
  *(_OWORD *)Src = 0LL;
  do
  {
    if ( (int)ADAPTER_RENDER::GetUMDFileName((ADAPTER_RENDER *)this, (unsigned int)v4, (struct _UNICODE_STRING *)Src) >= 0
      && !(unsigned int)IsNullUmdDriver((const struct _UNICODE_STRING *)Src) )
    {
      break;
    }
    LODWORD(v4) = v4 + 1;
  }
  while ( (unsigned int)v4 < 4 );
  if ( (_DWORD)v4 == 4 )
  {
    LODWORD(v4) = -1073741811;
  }
  else
  {
    v6 = WORD1(Src[0]);
    v7 = Src[1];
    v8 = (unsigned __int64)WORD1(Src[0]) >> 1;
    v9 = wcsnlen(Src[1], v8);
    v12 = 2 * v9;
    if ( 2 * v9 >= v6 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v11, v10);
      *(_QWORD *)(v32 + 24) = 3560LL;
      WdLogEvent5_WdAssertion(v32);
    }
    Destination.MaximumLength = v12 + 12;
    Destination.Buffer = (wchar_t *)operator new[]((unsigned __int16)(v12 + 12), 0x4B677844u, PagedPool);
    if ( Destination.Buffer )
    {
      RtlAppendUnicodeToString(&Destination, L"\\??\\");
      RtlAppendUnicodeToString(&Destination, v7);
      FileVersion = DxgkpGetFileVersion(&Destination, this + 75, &v38);
      LODWORD(v4) = FileVersion;
      if ( FileVersion >= 0 )
        goto LABEL_4;
      if ( FileVersion != v38 )
        goto LABEL_5;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v19, v18, v20, v21) + 24) = 3591LL;
      v24 = 2 * wcsnlen(v7, v8);
      if ( v24 >= v6 )
      {
        v34 = WdLogNewEntry5_WdAssertion(v23, v22);
        *(_QWORD *)(v34 + 24) = 3597LL;
        WdLogEvent5_WdAssertion(v34);
      }
      MaximumLength = v24 + 56;
      Destination.MaximumLength = v24 + 56;
      Destination.Length = 0;
      if ( Destination.Buffer )
      {
        operator delete(Destination.Buffer);
        MaximumLength = Destination.MaximumLength;
        Destination.Buffer = 0LL;
      }
      Destination.Buffer = (wchar_t *)operator new[](MaximumLength, 0x4B677844u, PagedPool);
      if ( Destination.Buffer )
      {
        RtlAppendUnicodeToString(&Destination, L"\\Systemroot\\System32\\");
        RtlAppendUnicodeToString(&Destination, v7);
        v26 = v24 >> 1;
        if ( v26 )
        {
          v27 = &v7[v26 - 1];
          do
          {
            if ( *v27 == 46 )
              break;
            --v27;
            --v26;
          }
          while ( v26 );
        }
        if ( !v26 )
          RtlAppendUnicodeToString(&Destination, L".DLL");
        v28 = DxgkpGetFileVersion(&Destination, this + 75, 0LL);
        v4 = v28;
        if ( v28 < 0 )
        {
          v35 = WdLogNewEntry5_WdError(v30, v29);
          *(union _LARGE_INTEGER *)(v35 + 24) = this[2];
          *(_QWORD *)(v35 + 32) = v4;
          WdLogEvent5_WdError(v35);
          goto LABEL_5;
        }
LABEL_4:
        *a2 = this[75];
        goto LABEL_5;
      }
    }
    LODWORD(v4) = -1073741801;
    v33 = WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
    *(union _LARGE_INTEGER *)(v33 + 24) = this[2];
    WdLogEvent5_WdLowResource(v33);
  }
LABEL_5:
  if ( Destination.Buffer )
    operator delete(Destination.Buffer);
  return (unsigned int)v4;
}
