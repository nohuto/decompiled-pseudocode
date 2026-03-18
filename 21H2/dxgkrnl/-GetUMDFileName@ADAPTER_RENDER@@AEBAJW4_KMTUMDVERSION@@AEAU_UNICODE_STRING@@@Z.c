/*
 * XREFs of ?GetUMDFileName@ADAPTER_RENDER@@AEBAJW4_KMTUMDVERSION@@AEAU_UNICODE_STRING@@@Z @ 0x1C0184474
 * Callers:
 *     ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C01D1C14 (-GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z @ 0x1C01D1E68 (-CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetUMDFileName(ADAPTER_RENDER *this, unsigned int a2, struct _UNICODE_STRING *a3)
{
  __int64 v3; // rbx
  int v6; // ecx
  __int64 v7; // rax
  struct _UNICODE_STRING v8; // xmm0

  v3 = a2;
  if ( a2 >= 4 )
  {
    WdLogSingleEntry1(1LL, 3197LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(UINT)umdVersion < (UINT)NUM_KMTUMDVERSIONS",
      3197LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGPROCESS::GetCurrent() )
  {
    WdLogSingleEntry1(1LL, 3198LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DXGPROCESS::GetCurrent() != NULL",
      3198LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = *((_DWORD *)DXGPROCESS::GetCurrent() + 106);
  if ( (v6 & 8) != 0 )
  {
    v7 = v3 + 24;
    goto LABEL_8;
  }
  if ( (v6 & 0x30) == 0 )
  {
    v7 = v3 + 20;
LABEL_8:
    v8 = (struct _UNICODE_STRING)*((_OWORD *)this + v7);
LABEL_9:
    *a3 = v8;
    return 0LL;
  }
  if ( (_DWORD)v3 == 3 )
  {
    v8 = (struct _UNICODE_STRING)*((_OWORD *)this + 30);
    goto LABEL_9;
  }
  return 3221225485LL;
}
