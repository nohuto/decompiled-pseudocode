/*
 * XREFs of ?InsertTail@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C0303AF4
 * Callers:
 *     ?AppendSubKeys@DXG_REGISTRY_KEY_LIST@@QEAAJPEAXPEAU_KEY_FULL_INFORMATION@@PEAU_UNICODE_STRING@@@Z @ 0x1C0301DD4 (-AppendSubKeys@DXG_REGISTRY_KEY_LIST@@QEAAJPEAXPEAU_KEY_FULL_INFORMATION@@PEAU_UNICODE_STRING@@@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x1C004A2B4 (-RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 */

NTSTATUS __fastcall DXG_REGISTRY_KEY_LIST::InsertTail(
        DXG_REGISTRY_KEY_LIST *this,
        struct _UNICODE_STRING *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  DXG_REGISTRY_KEY_LIST **v8; // rcx

  v6 = operator new[](0x218uLL, 0x4B677844u, 256LL, a4);
  if ( v6 )
  {
    v8 = (DXG_REGISTRY_KEY_LIST **)*((_QWORD *)this + 1);
    if ( *v8 != this )
      __fastfail(3u);
    *(_QWORD *)(v6 + 8) = v8;
    *(_QWORD *)v6 = this;
    *v8 = (DXG_REGISTRY_KEY_LIST *)v6;
    *((_QWORD *)this + 1) = v6;
    return RtlStringCbCopyUnicodeString((char *)(v6 + 16), 0x208uLL, a2);
  }
  else
  {
    WdLogSingleEntry1(6LL, 2202LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Cannot allocate memory for DXG_REGISTRY_KEY_ENTRY",
      2202LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return -1073741801;
  }
}
