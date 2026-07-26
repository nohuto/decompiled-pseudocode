/*
 * XREFs of ?netsetupBuildBindingRegistryPath@@YAXW4NetSetupStoreType@@W4NetSetupSubkeyType@@AEBU_GUID@@PEBU3@33PEA_W@Z @ 0x1C012973C
 * Callers:
 *     ndisIsLwfBindingEnabled @ 0x1C0124D50 (ndisIsLwfBindingEnabled.c)
 *     ndisIsLwfBindingEnabled_0 @ 0x1C0124DF4 (ndisIsLwfBindingEnabled_0.c)
 *     ndisIsProtocolBindingEnabled @ 0x1C0124E84 (ndisIsProtocolBindingEnabled.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     ??$swprintf_s@$0CI@@@YAHAEAY0CI@_WPEB_WZZ @ 0x1C00C66DC (--$swprintf_s@$0CI@@@YAHAEAY0CI@_WPEB_WZZ.c)
 */

void __fastcall netsetupBuildBindingRegistryPath(
        enum NetSetupStoreType a1,
        enum NetSetupSubkeyType a2,
        const struct _GUID *a3,
        const struct _GUID *a4,
        const struct _GUID *a5,
        const struct _GUID *a6,
        wchar_t *a7)
{
  const struct _GUID *v8; // rdx
  const wchar_t *v9; // rcx
  unsigned int Data1; // r14d
  unsigned int v11; // ecx
  unsigned int v12; // r9d
  unsigned int v13; // ebx
  int v14; // eax
  unsigned int v15; // r11d
  __int64 v16; // [rsp+20h] [rbp-130h]
  __int64 v17; // [rsp+28h] [rbp-128h]
  __int64 v18; // [rsp+30h] [rbp-120h]
  __int64 v19; // [rsp+38h] [rbp-118h]
  __int64 v20; // [rsp+40h] [rbp-110h]
  __int64 v21; // [rsp+48h] [rbp-108h]
  __int64 v22; // [rsp+50h] [rbp-100h]
  __int64 v23; // [rsp+58h] [rbp-F8h]
  __int64 v24; // [rsp+60h] [rbp-F0h]
  unsigned int Data2; // [rsp+80h] [rbp-D0h]
  unsigned int Data3; // [rsp+88h] [rbp-C8h]
  unsigned int v27; // [rsp+90h] [rbp-C0h]
  unsigned int v28; // [rsp+98h] [rbp-B8h]
  unsigned int v29; // [rsp+A0h] [rbp-B0h]
  unsigned int v30; // [rsp+A8h] [rbp-A8h]
  unsigned __int16 v31; // [rsp+10Ch] [rbp-44h]
  int v32; // [rsp+110h] [rbp-40h]
  unsigned __int8 v33; // [rsp+114h] [rbp-3Ch]
  wchar_t Src[40]; // [rsp+120h] [rbp-30h] BYREF

  if ( a1 )
  {
    if ( a1 == Mutable )
    {
      v8 = a4;
      if ( !a4 )
        v8 = a5;
      v9 = L"Protocols";
      if ( !a4 )
        v9 = L"Filters";
      Data2 = v8->Data2;
      Data3 = v8->Data3;
      v27 = v8->Data4[0];
      v28 = v8->Data4[1];
      v29 = v8->Data4[2];
      v30 = v8->Data4[3];
      swprintf_s(
        a7,
        0x100uLL,
        L"\\Registry\\Machine\\DEVICES\\Networking\\NetAdapters\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\Bindi"
         "ngs\\%ws\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
        a3->Data1,
        a3->Data2,
        a3->Data3,
        a3->Data4[0],
        a3->Data4[1],
        a3->Data4[2],
        a3->Data4[3],
        a3->Data4[4],
        a3->Data4[5],
        a3->Data4[6],
        a3->Data4[7],
        v9,
        v8->Data1,
        Data2,
        Data3,
        v27,
        v28,
        v29,
        v30,
        v8->Data4[4],
        v8->Data4[5],
        v8->Data4[6],
        v8->Data4[7],
        __PAIR64__(v29, v30),
        __PAIR64__(v27, v28),
        __PAIR64__(Data2, Data3));
      if ( a6 )
      {
        LODWORD(v24) = a6->Data4[7];
        LODWORD(v23) = a6->Data4[6];
        LODWORD(v22) = a6->Data4[5];
        LODWORD(v21) = a6->Data4[4];
        LODWORD(v20) = a6->Data4[3];
        LODWORD(v19) = a6->Data4[2];
        LODWORD(v18) = a6->Data4[1];
        LODWORD(v17) = a6->Data4[0];
        LODWORD(v16) = a6->Data3;
        swprintf_s<40>(
          Src,
          L"-{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
          a6->Data1,
          a6->Data2,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24);
        wcscat_s(a7, 0x100uLL, Src);
      }
    }
  }
  else
  {
    Data1 = a3->Data1;
    v11 = a3->Data1 ^ *(_DWORD *)&a3->Data4[4];
    v12 = *(_DWORD *)&a3->Data2;
    v13 = v11;
    v14 = *(_DWORD *)a3->Data4;
    v15 = v12;
    v31 = v12;
    v32 = v14;
    v33 = v11;
    if ( a4 )
    {
      Data1 = v12 ^ a4->Data1;
      v12 = v14 ^ *(_DWORD *)&a4->Data2;
      v14 = v11 ^ *(_DWORD *)a4->Data4;
      v31 = v12;
      v15 = v12;
      v11 = Data1 ^ *(_DWORD *)&a4->Data4[4];
      v32 = v14;
      v33 = v11;
      v13 = v11;
    }
    if ( a5 )
    {
      v12 = v14 ^ *(_DWORD *)&a5->Data2;
      Data1 = v15 ^ a5->Data1;
      v14 = v13 ^ *(_DWORD *)a5->Data4;
      v11 = Data1 ^ *(_DWORD *)&a5->Data4[4];
      v31 = v12;
      v33 = v11;
      v13 = v11;
      v32 = v14;
      v15 = v12;
    }
    if ( a6 )
    {
      v12 = v14 ^ *(_DWORD *)&a6->Data2;
      Data1 = v15 ^ a6->Data1;
      v11 = Data1 ^ *(_DWORD *)&a6->Data4[4];
      v31 = v12;
      v33 = v11;
      v32 = v13 ^ *(_DWORD *)a6->Data4;
    }
    swprintf_s(
      a7,
      0x100uLL,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\BindPaths\\{%08x-%04x-%04x-%02x%02x-%02x%0"
       "2x%02x%02x%02x%02x}\\Properties",
      Data1,
      v31,
      HIWORD(v12),
      v32 & 0x1F | 0xC0,
      BYTE1(v32),
      BYTE2(v32),
      HIBYTE(v32),
      v33,
      BYTE1(v11),
      BYTE2(v11),
      HIBYTE(v11));
  }
}
