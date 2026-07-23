/*
 * XREFs of ?SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z @ 0x14028BD6C
 * Callers:
 *     SmPageRead @ 0x14022DCBC (SmPageRead.c)
 *     MiStoreEvictPageFile @ 0x140241F98 (MiStoreEvictPageFile.c)
 *     MiStoreWriteIssue @ 0x140288CD0 (MiStoreWriteIssue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmKeyConvert(union _MM_STORE_KEY *a1, union _SM_PAGE_KEY *a2)
{
  unsigned __int64 v2; // r8
  __int64 result; // rax

  v2 = a1->EntireKey >> 60;
  if ( v2 == 15 || (a1->EntireKey & 0xFFFFFFFFFFFFFFFLL) > 0xFFFFFFF )
  {
    result = 3221226537LL;
    if ( v2 != 15 )
      return 3221226124LL;
  }
  else
  {
    *(_DWORD *)a2 = *(_DWORD *)&a1->0 & 0xFFFFFFF | ((_DWORD)v2 << 28);
    return 0LL;
  }
  return result;
}
