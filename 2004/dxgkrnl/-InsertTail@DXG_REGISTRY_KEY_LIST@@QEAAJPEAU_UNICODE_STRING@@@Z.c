/*
 * XREFs of ?InsertTail@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C0263284
 * Callers:
 *     ?AppendSubKeys@DXG_REGISTRY_KEY_LIST@@QEAAJPEAXPEAU_KEY_FULL_INFORMATION@@PEAU_UNICODE_STRING@@@Z @ 0x1C0261718 (-AppendSubKeys@DXG_REGISTRY_KEY_LIST@@QEAAJPEAXPEAU_KEY_FULL_INFORMATION@@PEAU_UNICODE_STRING@@@.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0004548 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x1C003E33C (-RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DXG_REGISTRY_KEY_LIST::InsertTail(DXG_REGISTRY_KEY_LIST *this, struct _UNICODE_STRING *a2)
{
  PVOID v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  DXG_REGISTRY_KEY_LIST **v11; // rcx

  v4 = operator new(0x218uLL, 0x4B677844u, 1, PagedPool);
  if ( v4 )
  {
    v11 = (DXG_REGISTRY_KEY_LIST **)*((_QWORD *)this + 1);
    if ( *v11 != this )
      __fastfail(3u);
    *((_QWORD *)v4 + 1) = v11;
    *(_QWORD *)v4 = this;
    *v11 = (DXG_REGISTRY_KEY_LIST *)v4;
    *((_QWORD *)this + 1) = v4;
    return RtlStringCbCopyUnicodeString((char *)v4 + 16, 0x208uLL, a2);
  }
  else
  {
    v9 = WdLogNewEntry5_WdLowResource(v6, v5, v7, v8);
    *(_QWORD *)(v9 + 24) = 2198LL;
    WdLogEvent5_WdLowResource(v9);
    return 3221225495LL;
  }
}
