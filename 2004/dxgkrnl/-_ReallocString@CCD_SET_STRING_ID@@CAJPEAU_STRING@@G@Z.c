/*
 * XREFs of ?_ReallocString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@G@Z @ 0x1C012F724
 * Callers:
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C012F26C (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C012F3B0 (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ?_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z @ 0x1C012F6DC (-_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 */

__int64 __fastcall CCD_SET_STRING_ID::_ReallocString(struct _STRING *a1, USHORT a2)
{
  __int64 v2; // rdi
  CHAR *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  CHAR *v9; // rbp
  __int64 v11; // rax

  v2 = a2;
  if ( a2 <= a1->MaximumLength )
    return 0LL;
  v4 = (CHAR *)operator new[](a2, 0x63644356u, PagedPool);
  v9 = v4;
  if ( v4 )
  {
    memmove(v4, a1->Buffer, a1->Length);
    operator delete[](a1->Buffer);
    a1->Buffer = v9;
    a1->MaximumLength = v2;
    return 0LL;
  }
  v11 = WdLogNewEntry5_WdLowResource(v6, v5, v7, v8);
  *(_QWORD *)(v11 + 24) = v2;
  WdLogEvent5_WdLowResource(v11);
  return 3221225495LL;
}
