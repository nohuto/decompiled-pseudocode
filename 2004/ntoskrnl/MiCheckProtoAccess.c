/*
 * XREFs of MiCheckProtoAccess @ 0x140315B68
 * Callers:
 *     MiDispatchFault @ 0x1402A0EE0 (MiDispatchFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPrototypePteVadLookup @ 0x140315EC0 (MiIsPrototypePteVadLookup.c)
 *     MiCheckVirtualAddress @ 0x140315F00 (MiCheckVirtualAddress.c)
 */

__int64 __fastcall MiCheckProtoAccess(unsigned __int64 a1, _DWORD *a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 result; // rax
  int v12; // [rsp+38h] [rbp+10h] BYREF
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  v13 = 0LL;
  v12 = 0;
  v4 = MI_READ_PTE_LOCK_FREE(a1);
  v5 = (v4 >> 5) & 0x1F;
  if ( (unsigned int)MiIsPrototypePteVadLookup(v4, v6, v4, v7) )
  {
    v10 = MiCheckVirtualAddress((__int64)(a1 << 25) >> 16, &v12, &v13);
  }
  else
  {
    v9 = v8;
    if ( qword_140C4DD40 )
    {
      if ( (v8 & 0x10) != 0 )
        v9 = v8 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v9 = v8 & ~qword_140C4DD40;
    }
    v10 = v9 >> 16;
    LODWORD(v5) = (v8 & 8) != 0 ? 1 : 256;
  }
  result = v10;
  *a2 = v5;
  return result;
}
