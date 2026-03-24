/*
 * XREFs of ?ScaleOverrideTestHookCore@DpiInternal@@YAXQEBGPEAK@Z @ 0x1C000C358
 * Callers:
 *     ?ScaleOverrideTestHook@@YAXQEBGPEAK@Z @ 0x1C000C334 (-ScaleOverrideTestHook@@YAXQEBGPEAK@Z.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C000C518 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 */

void __fastcall DpiInternal::ScaleOverrideTestHookCore(DpiInternal *this, unsigned __int16 *a2, unsigned int *a3)
{
  __int64 v4; // rax
  DpiInternal *v5; // r8
  unsigned int v6; // ebx
  unsigned int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  int v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  int v23; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v24; // [rsp+40h] [rbp-C0h] BYREF
  int v25; // [rsp+48h] [rbp-B8h]
  wchar_t *v26; // [rsp+50h] [rbp-B0h]
  __int64 v27; // [rsp+58h] [rbp-A8h]
  int v28; // [rsp+60h] [rbp-A0h]
  __int64 v29; // [rsp+68h] [rbp-98h]
  int v30; // [rsp+70h] [rbp-90h]
  __int64 v31; // [rsp+78h] [rbp-88h]
  int v32; // [rsp+80h] [rbp-80h]
  const wchar_t *v33; // [rsp+88h] [rbp-78h]
  int *v34; // [rsp+90h] [rbp-70h]
  int v35; // [rsp+98h] [rbp-68h]
  int *v36; // [rsp+A0h] [rbp-60h]
  int v37; // [rsp+A8h] [rbp-58h]
  __int64 v38; // [rsp+B0h] [rbp-50h]
  int v39; // [rsp+B8h] [rbp-48h]
  __int128 v40; // [rsp+C0h] [rbp-40h]
  __int128 v41; // [rsp+D0h] [rbp-30h]
  __int64 v42; // [rsp+E0h] [rbp-20h]
  wchar_t Dest[16]; // [rsp+F0h] [rbp-10h] BYREF
  wchar_t v44[80]; // [rsp+110h] [rbp+10h] BYREF

  *(_DWORD *)a2 = 0;
  v4 = -1LL;
  v5 = this;
  v6 = 314159269;
  do
    ++v4;
  while ( *((_WORD *)this + v4) );
  v7 = 2 * v4;
  if ( v7 )
  {
    v8 = v7;
    do
    {
      v9 = *(unsigned __int8 *)v5;
      v5 = (DpiInternal *)((char *)v5 + 1);
      v6 ^= v9 + (v6 >> 2) + 2080 * v6;
      --v8;
    }
    while ( v8 );
  }
  v10 = v6 & 0x7FFFFFFF;
  v11 = RtlStringCbPrintfW(Dest, 0x16uLL, L"%d", v10);
  v14 = v11;
  if ( v11 < 0
    || (v15 = RtlStringCbPrintfW(
                v44,
                0xA0uLL,
                L"%s\\%s\\%s",
                L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Scaling",
                L"Monitors",
                Dest),
        v14 = v15,
        v15 < 0) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v13, v12);
    *(_QWORD *)(v20 + 24) = v14;
    *(_QWORD *)(v20 + 32) = v10;
    WdLogEvent5_WdAssertion(v20);
  }
  else
  {
    v22 = 0;
    v23 = 0;
    v26 = v44;
    v24 = 0LL;
    v33 = L"DesktopScaleFactor";
    v25 = 5;
    v34 = &v22;
    v27 = 0LL;
    v36 = &v23;
    v28 = 0;
    v42 = 0LL;
    v29 = 0LL;
    v30 = 0;
    v31 = 0LL;
    v32 = 288;
    v35 = 0x4000000;
    v37 = 4;
    v38 = 0LL;
    v39 = 0;
    v40 = 0LL;
    v41 = 0LL;
    v16 = RtlQueryRegistryValuesEx(0LL, L"\\Registry\\Machine\\", &v24, 0LL, 0LL);
    v19 = v16;
    if ( v16 >= 0 )
    {
      if ( v22 != v23 )
        *(_DWORD *)a2 = v22;
    }
    else if ( v16 != -1073741772 )
    {
      v21 = WdLogNewEntry5_WdError(v18, v17);
      *(_QWORD *)(v21 + 24) = v19;
      WdLogEvent5_WdError(v21);
    }
  }
}
