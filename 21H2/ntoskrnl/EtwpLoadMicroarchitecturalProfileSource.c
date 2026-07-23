/*
 * XREFs of EtwpLoadMicroarchitecturalProfileSource @ 0x14093AA40
 * Callers:
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x14093A75C (EtwpLoadMicroarchitecturalProfileGroup.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x1403461A0 (KeCopyAffinityEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     wcsnlen @ 0x1403D4240 (wcsnlen.c)
 *     wcsncpy_s @ 0x1403D8590 (wcsncpy_s.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlpQueryRegistryValues @ 0x140635878 (RtlpQueryRegistryValues.c)
 *     KiGetCpuVendor @ 0x14099CF68 (KiGetCpuVendor.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpLoadMicroarchitecturalProfileSource(const WCHAR *a1, unsigned __int16 *a2, const wchar_t *a3)
{
  unsigned int v6; // r14d
  __int64 result; // rax
  wchar_t *PoolWithTag; // rax
  wchar_t *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int CpuVendor; // eax
  int v13; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+34h] [rbp-CCh] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  int v16; // [rsp+3Ch] [rbp-C4h] BYREF
  int v17; // [rsp+40h] [rbp-C0h] BYREF
  int v18; // [rsp+44h] [rbp-BCh] BYREF
  int v19; // [rsp+48h] [rbp-B8h] BYREF
  int v20; // [rsp+4Ch] [rbp-B4h] BYREF
  int v21; // [rsp+50h] [rbp-B0h] BYREF
  int *v22; // [rsp+58h] [rbp-A8h]
  int v23; // [rsp+60h] [rbp-A0h] BYREF
  int *v24; // [rsp+68h] [rbp-98h]
  int v25; // [rsp+70h] [rbp-90h] BYREF
  int *v26; // [rsp+78h] [rbp-88h]
  int v27; // [rsp+80h] [rbp-80h] BYREF
  int *v28; // [rsp+88h] [rbp-78h]
  int v29; // [rsp+90h] [rbp-70h] BYREF
  int *v30; // [rsp+98h] [rbp-68h]
  int v31; // [rsp+A0h] [rbp-60h] BYREF
  int *v32; // [rsp+A8h] [rbp-58h]
  int v33; // [rsp+B0h] [rbp-50h] BYREF
  int *v34; // [rsp+B8h] [rbp-48h]
  int v35; // [rsp+C0h] [rbp-40h] BYREF
  int *v36; // [rsp+C8h] [rbp-38h]
  _QWORD v37[64]; // [rsp+E0h] [rbp-20h] BYREF

  if ( !a3 )
    return 3221225473LL;
  v20 = 0;
  v17 = 0;
  v15 = 0;
  v16 = 0;
  v6 = wcsnlen(a3, 0xFEuLL) + 1;
  v18 = 0;
  v13 = -1;
  v14 = -1;
  v19 = 0x10000;
  memset(v37, 0, 0x1F8uLL);
  v37[0] = EtwpQueryRegistryCallback;
  v37[3] = &v21;
  v37[2] = L"Event";
  v22 = &v13;
  v37[10] = &v23;
  v37[9] = L"Unit";
  v24 = &v14;
  v37[17] = &v25;
  v37[16] = L"Interval";
  v26 = &v19;
  v37[24] = &v27;
  v37[23] = L"AllowsHalt";
  v28 = &v20;
  v37[31] = &v29;
  v37[30] = L"CMask";
  v30 = &v15;
  v37[38] = &v31;
  v37[37] = L"EdgeDetect";
  v32 = &v18;
  v37[45] = &v33;
  v37[44] = L"AnyThread";
  LODWORD(v37[4]) = 4;
  v21 = 4;
  v37[7] = EtwpQueryRegistryCallback;
  LODWORD(v37[11]) = 4;
  v23 = 4;
  v37[14] = EtwpQueryRegistryCallback;
  LODWORD(v37[18]) = 4;
  v25 = 4;
  v37[21] = EtwpQueryRegistryCallback;
  LODWORD(v37[25]) = 4;
  v27 = 4;
  v37[28] = EtwpQueryRegistryCallback;
  LODWORD(v37[32]) = 4;
  v29 = 4;
  v37[35] = EtwpQueryRegistryCallback;
  LODWORD(v37[39]) = 4;
  v31 = 4;
  v37[42] = EtwpQueryRegistryCallback;
  LODWORD(v37[46]) = 4;
  v33 = 4;
  v34 = &v17;
  v37[49] = EtwpQueryRegistryCallback;
  v37[52] = &v35;
  LODWORD(v37[53]) = 4;
  v37[51] = L"CMaskInvert";
  v35 = 4;
  v36 = &v16;
  result = RtlpQueryRegistryValues(0x40000000LL, a1, (__int64)v37, 0LL);
  if ( (int)result < 0 )
    return result;
  if ( v13 == -1 || v14 == -1 )
    return 3221225473LL;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2 * v6 + 184, 0x50777445u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  wcsncpy_s(PoolWithTag + 92, v6, a3, v6);
  KeCopyAffinityEx((__int64)(v9 + 8), a2);
  CpuVendor = KiGetCpuVendor(v11, v10);
  if ( CpuVendor == 2 )
  {
    *(_BYTE *)v9 = v13;
    *((_BYTE *)v9 + 1) = v14;
    *((_BYTE *)v9 + 2) = v15;
    *((_BYTE *)v9 + 3) = v16;
    *((_BYTE *)v9 + 4) = v17;
    *((_BYTE *)v9 + 5) = v18;
  }
  else if ( CpuVendor == 1 )
  {
    *(_BYTE *)v9 = v13;
    *((_BYTE *)v9 + 1) = v14;
  }
  *((_DWORD *)v9 + 2) = v19;
  ((void (__fastcall *)(__int64, _QWORD, wchar_t *))off_140C00A70[0])(20LL, 2 * v6 + 184, v9);
  ExFreePoolWithTag(v9, 0x50777445u);
  return 0LL;
}
