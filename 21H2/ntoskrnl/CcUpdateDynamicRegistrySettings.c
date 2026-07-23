/*
 * XREFs of CcUpdateDynamicRegistrySettings @ 0x14039A360
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x14037F370 (DbgPrintEx.c)
 *     CcQueryRegKeyValue @ 0x14039A670 (CcQueryRegKeyValue.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall CcUpdateDynamicRegistrySettings(__int64 a1)
{
  bool v1; // di
  unsigned int v2; // r12d
  unsigned int v3; // ebx
  int v4; // r13d
  int v5; // r15d
  int v6; // r14d
  int v7; // eax
  PVOID v8; // rsi
  const char *v9; // rcx
  const char *v10; // rdx
  const char *v11; // r10
  const char *v12; // r9
  const char *v13; // r8
  const char *v14; // rax
  __int64 v15; // rax
  int v16; // ecx
  char v17; // [rsp+80h] [rbp-80h] BYREF
  char v18; // [rsp+81h] [rbp-7Fh]
  char v19; // [rsp+82h] [rbp-7Eh]
  char v20; // [rsp+83h] [rbp-7Dh]
  char v21; // [rsp+84h] [rbp-7Ch]
  char v22; // [rsp+85h] [rbp-7Bh]
  PVOID P; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v24[2]; // [rsp+90h] [rbp-70h] BYREF
  const wchar_t *v25; // [rsp+98h] [rbp-68h]
  const char *v26; // [rsp+A0h] [rbp-60h] BYREF
  int v27; // [rsp+A8h] [rbp-58h]
  _DWORD v28[2]; // [rsp+B0h] [rbp-50h] BYREF
  const WCHAR *v29; // [rsp+B8h] [rbp-48h]
  char v30; // [rsp+C0h] [rbp-40h] BYREF

  LODWORD(v26) = 156;
  v28[1] = 0;
  v24[1] = 0;
  P = &v30;
  v17 = 0;
  v1 = 0;
  v2 = 0;
  v27 = 0;
  v21 = 0;
  v3 = 0;
  v18 = 0;
  v4 = 0;
  v19 = 0;
  v5 = 0;
  v20 = 0;
  v6 = 0;
  v22 = 0;
  DbgPrintEx(0x7Fu, 2u, "CcUpdateDynamicRegistrySettings: Updating Dynamic Registry Keys under: \"%wZ\"\n", a1 + 56);
  v28[0] = 11141288;
  v29 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management";
  v24[0] = 2359330;
  v25 = L"TopBottomDPTEqual";
  if ( (int)CcQueryRegKeyValue(v28, v24, &v26, &P, &v17) >= 0 )
  {
    v2 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
    v1 = v2 < 3;
  }
  v24[0] = 4063292;
  v25 = L"LazyWriterPercentageOfNumProcs";
  if ( (int)CcQueryRegKeyValue(v28, v24, &v26, &P, &v17) >= 0 )
  {
    v21 = 1;
    v27 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  }
  v24[0] = 1966108;
  v25 = L"LargeWriteSize";
  if ( (int)CcQueryRegKeyValue(v28, v24, &v26, &P, &v17) >= 0 )
  {
    v18 = 1;
    v3 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  }
  v24[0] = 3670070;
  v25 = L"SoftThrottleLargeWriteAtPct";
  if ( (int)CcQueryRegKeyValue(v28, v24, &v26, &P, &v17) >= 0 )
  {
    v19 = 1;
    v4 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  }
  v24[0] = 2883626;
  v25 = L"SoftThrottleDelayInMs";
  if ( (int)CcQueryRegKeyValue(v28, v24, &v26, &P, &v17) >= 0 )
  {
    v20 = 1;
    v5 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  }
  v24[0] = 2359330;
  v25 = L"MaxLazyWritePages";
  v7 = CcQueryRegKeyValue(v28, v24, &v26, &P, &v17);
  v8 = P;
  v26 = "not found";
  v9 = "valid";
  if ( v7 >= 0 )
  {
    v15 = *((unsigned int *)P + 2);
    v10 = "valid";
    v22 = 1;
    v6 = *(_DWORD *)((char *)P + v15);
  }
  else
  {
    v10 = "not found";
  }
  v11 = "valid";
  if ( !v20 )
    v11 = "not found";
  v12 = "valid";
  if ( !v19 )
    v12 = "not found";
  v13 = "valid";
  if ( !v18 )
    v13 = "not found";
  v14 = "valid";
  if ( !v21 )
    v14 = v26;
  if ( !v1 )
    v9 = "not found";
  DbgPrintEx(
    0x7Fu,
    2u,
    "CcUpdateDynamicRegistrySettings: \n"
    "\tTopBottom                  : 0x%04lx(%s)\n"
    "\tLazyWriterPct              : 0x%04lx(%s) (unsupported)\n"
    "\tLargeWriteSize             : 0x%04lx(%s)\n"
    "\tSoftThrottleAt             : 0x%04lx(%s)\n"
    "\tSoftThrottleDelay          : 0x%04lx(%s)\n"
    "\tMaxLazyWritePages          : 0x%04lx(%s)\n",
    v2,
    v9,
    v27,
    v14,
    v3,
    v13,
    v4,
    v12,
    v5,
    v11,
    v6,
    v10);
  if ( v17 )
    ExFreePoolWithTag(v8, 0x78666343u);
  if ( v1 )
    CcAzure_TopBottomDPTEqual = v2;
  if ( v18 )
  {
    if ( !v3 || (CcAzure_LargeWriteSize = v3 << 10, v3 << 10 <= v3) )
      CcAzure_LargeWriteSize = 0;
  }
  if ( v19 )
  {
    v16 = 0;
    if ( (unsigned int)(v4 - 1) <= 0x63 )
      v16 = v4;
    CcAzure_SoftThrottleLargeWriteAtPct = v16;
  }
  if ( v20 && v5 )
    CcSoftThrottleDelay = v5;
  if ( v22 )
  {
    if ( (unsigned int)(v6 - 1) <= 0x7FFF )
      CcMaxLazyWritePages = v6;
  }
}
