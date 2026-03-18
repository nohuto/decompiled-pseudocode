/*
 * XREFs of MiCheckProtoAccess @ 0x140344EA8
 * Callers:
 *     MiDispatchFault @ 0x14020E3D0 (MiDispatchFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPrototypePteVadLookup @ 0x140345200 (MiIsPrototypePteVadLookup.c)
 *     MiCheckVirtualAddress @ 0x140345240 (MiCheckVirtualAddress.c)
 */

__int64 __fastcall MiCheckProtoAccess(unsigned __int64 a1, _DWORD *a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 result; // rax
  int v10; // [rsp+38h] [rbp+10h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0LL;
  v10 = 0;
  v4 = MI_READ_PTE_LOCK_FREE(a1);
  v5 = (v4 >> 5) & 0x1F;
  if ( (unsigned int)MiIsPrototypePteVadLookup(v4) )
  {
    v8 = MiCheckVirtualAddress((__int64)(a1 << 25) >> 16, &v10, &v11);
  }
  else
  {
    v7 = v6;
    if ( qword_140C4DE80 )
    {
      if ( (v6 & 0x10) != 0 )
        v7 = v6 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v7 = v6 & ~qword_140C4DE80;
    }
    v8 = v7 >> 16;
    LODWORD(v5) = (v6 & 8) != 0 ? 1 : 256;
  }
  result = v8;
  *a2 = v5;
  return result;
}
