/*
 * XREFs of CmpQueryKeyData @ 0x14065F49C
 * Callers:
 *     CmQueryKey @ 0x1406E4F70 (CmQueryKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpQueryKeyDataFromCache @ 0x14065F57C (CmpQueryKeyDataFromCache.c)
 *     CmpQueryKeyDataFromNode @ 0x14065F940 (CmpQueryKeyDataFromNode.c)
 */

__int64 __fastcall CmpQueryKeyData(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  unsigned int KeyDataFromNode; // ebx
  __int64 v12; // rax
  _DWORD v13[6]; // [rsp+40h] [rbp-18h] BYREF

  v13[0] = -1;
  v13[1] = 0;
  if ( a2 == 4 )
  {
    return (unsigned int)CmpQueryKeyDataFromCache(a1, 4, a3, a4, a5, a6);
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(a1 + 32) + 8LL))(
            *(_QWORD *)(a1 + 32),
            *(unsigned int *)(a1 + 40),
            v13);
    if ( v12 )
    {
      KeyDataFromNode = CmpQueryKeyDataFromNode(*(_QWORD *)(a1 + 32), v12, a2, a3, a4, a5, a1, a6);
      (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), v13);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return KeyDataFromNode;
}
