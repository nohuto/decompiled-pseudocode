/*
 * XREFs of MiRebuildPageTableLeafAges @ 0x140274030
 * Callers:
 *     MiConvertPrivateToProto @ 0x140272A10 (MiConvertPrivateToProto.c)
 *     MiFreeWsleList @ 0x1402C1D70 (MiFreeWsleList.c)
 *     MmUnmapViewInSystemCache @ 0x140335870 (MmUnmapViewInSystemCache.c)
 * Callees:
 *     MiCountWslesInPageTable @ 0x140274720 (MiCountWslesInPageTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall MiRebuildPageTableLeafAges(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r8
  __int64 v4; // rcx
  unsigned __int64 *v5; // rbx
  unsigned __int64 result; // rax
  unsigned __int8 v7; // cl
  int v8; // edx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v13[8]; // [rsp+28h] [rbp-30h] BYREF

  v3 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v4 = *(_QWORD *)v3;
  if ( v3 >= 0xFFFFF6FB7DBED000uLL
    && v3 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v10 = *((_QWORD *)&Flink->Flink + ((v3 >> 3) & 0x1FF));
      v11 = v4 | 0x20;
      if ( (v10 & 0x20) == 0 )
        v11 = v4;
      v4 = v11;
      if ( (v10 & 0x42) != 0 )
        v4 = v11 | 0x42;
    }
  }
  v12 = v4;
  v5 = (unsigned __int64 *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v12) >> 12) & 0xFFFFFFFFFFLL)
                          - 0x220000000000LL);
  result = (unsigned __int64)*(unsigned int *)v5 >> 4;
  if ( (result & 0x3FF) == 0 )
  {
    MiCountWslesInPageTable(0xFFFFFFFFFFLL, a2, v13);
    v7 = 8;
    while ( 1 )
    {
      result = --v7;
      v8 = v13[v7];
      if ( v8 )
        break;
      if ( !v7 )
        return result;
    }
    result = *v5 & 0xFFFFFFFFFFFE000FuLL;
    *v5 = result | (16 * (v8 & 0x3FF | ((unsigned __int64)(v7 & 7) << 10)));
  }
  return result;
}
