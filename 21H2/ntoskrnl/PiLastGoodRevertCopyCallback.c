/*
 * XREFs of PiLastGoodRevertCopyCallback @ 0x140A91820
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     IopFileUtilRename @ 0x140A700E4 (IopFileUtilRename.c)
 */

__int64 __fastcall PiLastGoodRevertCopyCallback(UNICODE_STRING *a1, __int64 a2, __int64 a3, _WORD *a4)
{
  SIZE_T Length; // rdx
  unsigned __int16 v6; // bx
  wchar_t *PoolWithTag; // rsi
  wchar_t *Buffer; // rax
  __int16 v10; // ax
  unsigned int v11; // ebx
  UNICODE_STRING v12; // [rsp+20h] [rbp-18h] BYREF

  Length = a1->Length;
  v6 = *a4 + 2;
  v12 = 0LL;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, Length, 0x674C7050u);
  if ( !PoolWithTag )
    return 3221225626LL;
  Buffer = a1->Buffer;
  *(_OWORD *)PoolWithTag = *(_OWORD *)Buffer;
  *((_QWORD *)PoolWithTag + 2) = *((_QWORD *)Buffer + 2);
  memmove(PoolWithTag + 12, &a1->Buffer[(unsigned __int64)v6 >> 1], a1->Length - (unsigned __int64)v6);
  v10 = a1->Length - v6;
  v12.Buffer = PoolWithTag;
  v12.Length = v10 + 24;
  v12.MaximumLength = v10 + 24;
  v11 = IopFileUtilRename(a1, &v12, 1);
  ExFreePoolWithTag(PoolWithTag, 0);
  return v11;
}
