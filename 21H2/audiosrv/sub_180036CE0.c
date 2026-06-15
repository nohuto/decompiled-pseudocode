/*
 * XREFs of sub_180036CE0 @ 0x180036CE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800516F0 @ 0x1800516F0 (sub_1800516F0.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     sub_180071940 @ 0x180071940 (sub_180071940.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800C41E0 @ 0x1800C41E0 (sub_1800C41E0.c)
 */

__int64 __fastcall sub_180036CE0(__int64 a1, __int64 *a2)
{
  signed __int64 v2; // rdi
  __int64 result; // rax
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  bool v11; // zf
  signed __int64 v12; // rax
  signed __int64 v13; // rdi
  signed __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rdx

  v2 = *(_QWORD *)(a1 + 24);
  *a2 = 0LL;
  if ( v2 >= 0 )
  {
    v7 = sub_18006A18C(32LL, &unk_18019F848);
    v8 = v7;
    if ( v7 )
    {
      v9 = qword_18019E418;
      *(_DWORD *)(v7 + 12) = 1;
      *(_QWORD *)v7 = &off_180148598;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      *(_QWORD *)(v8 + 24) = a1 - 16;
      *(_QWORD *)v8 = &off_180148570;
      *(_DWORD *)(v8 + 16) = 0x3FFFFFFF;
      v10 = (v8 >> 1) | 0x8000000000000000uLL;
      *(_DWORD *)(v8 + 12) = 2;
      *(_DWORD *)(v8 + 16) = v2;
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v10, v2);
      v11 = v2 == v12;
      v13 = v12;
      if ( v11 )
      {
LABEL_9:
        *a2 = v8;
        return 0LL;
      }
      else
      {
        while ( v13 >= 0 )
        {
          v14 = v13;
          *(_DWORD *)(v8 + 16) = v13;
          v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v10, v13);
          if ( v13 == v14 )
            goto LABEL_9;
        }
        sub_1800516F0(v8, 1LL);
        v15 = 2 * v13;
        sub_1800C41E0(v15, v16);
        result = 0LL;
        *a2 = v15;
      }
    }
    else
    {
      return 2147942414LL;
    }
  }
  else
  {
    sub_180071940(2 * v2, a2);
    result = 0LL;
    *a2 = v6;
  }
  return result;
}
