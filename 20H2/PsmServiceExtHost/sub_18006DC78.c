/*
 * XREFs of sub_18006DC78 @ 0x18006DC78
 * Callers:
 *     sub_180032330 @ 0x180032330 (sub_180032330.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

int __fastcall sub_18006DC78(__int64 a1, __int64 *a2)
{
  _UNKNOWN **v2; // rax
  __int64 v3; // rbp
  unsigned int v5; // esi
  _BYTE *v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  int v8; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v2 = &retaddr;
  v3 = *a2;
  if ( !*(_DWORD *)(*a2 + 16) )
  {
    *(_DWORD *)(a1 + 80) = 0;
    RtlReleaseSRWLockExclusive(a1 + 72);
    v5 = 0;
    v6 = &unk_180093ED0;
    do
    {
      v7 = (__int64 (__fastcall *)(__int64, __int64))*((_QWORD *)v6 - 4);
      if ( v7 )
      {
        if ( *v6 )
        {
          v8 = v7(a1, v3 - 88);
          if ( v8 >= 0 && v8 != 255 )
            *(_DWORD *)(a1 + 128) |= 1 << v5;
        }
      }
      ++v5;
      v6 += 40;
    }
    while ( v5 < 5 );
    RtlAcquireSRWLockExclusive(a1 + 72);
    LODWORD(v2) = GetCurrentThreadId();
    *(_DWORD *)(a1 + 80) = (_DWORD)v2;
  }
  return (int)v2;
}
