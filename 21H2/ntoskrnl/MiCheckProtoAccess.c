/*
 * XREFs of MiCheckProtoAccess @ 0x14020A320
 * Callers:
 *     MiDispatchFault @ 0x1402B3800 (MiDispatchFault.c)
 * Callees:
 *     MiIsPrototypePteVadLookup @ 0x14020A670 (MiIsPrototypePteVadLookup.c)
 *     MiCheckVirtualAddress @ 0x14020A6B0 (MiCheckVirtualAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiCheckProtoAccess(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 result; // rax
  int v11; // [rsp+38h] [rbp+10h] BYREF
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v12 = 0LL;
  v11 = 0;
  v4 = MI_READ_PTE_LOCK_FREE(a1);
  v5 = (v4 >> 5) & 0x1F;
  if ( (unsigned int)MiIsPrototypePteVadLookup(v4, v6) )
  {
    v9 = MiCheckVirtualAddress(a1 << 25 >> 16, &v11, &v12);
  }
  else
  {
    v8 = v7;
    if ( qword_140C4DF80 )
    {
      if ( (v7 & 0x10) != 0 )
        v8 = v7 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v8 = v7 & ~qword_140C4DF80;
    }
    v9 = v8 >> 16;
    LODWORD(v5) = (v7 & 8) != 0 ? 1 : 256;
  }
  result = v9;
  *a2 = v5;
  return result;
}
