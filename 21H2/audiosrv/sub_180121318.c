/*
 * XREFs of sub_180121318 @ 0x180121318
 * Callers:
 *     sub_180120BC4 @ 0x180120BC4 (sub_180120BC4.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180120C98 @ 0x180120C98 (sub_180120C98.c)
 */

__int64 __fastcall sub_180121318(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  HRESULT v8; // edi
  unsigned int v9; // ebx
  int v10; // edx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v8 = PSCreateMemoryPropertyStore(&stru_18015B940, (void **)(a1 + 24));
  v9 = 0;
  if ( v8 < 0 )
  {
    v10 = 63;
LABEL_3:
    sub_18004BD84(
      (int)retaddr,
      v10,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\hybridpropertystore.cpp",
      v8);
    return (unsigned int)v8;
  }
  v12 = *(_QWORD *)(a1 + 16);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a2 + 32LL))(a2, 0LL, a1 + 16);
  if ( v8 < 0 )
  {
    v10 = 66;
    goto LABEL_3;
  }
  try
  {
    while ( v9 < a3 )
    {
      v13 = a4 + 20LL * v9;
      v14 = *(_QWORD *)(a1 + 40);
      if ( *(_QWORD *)(a1 + 48) == v14 )
      {
        sub_180120C98((const void **)(a1 + 32), (_BYTE *)v14, v13);
      }
      else
      {
        *(_OWORD *)v14 = *(_OWORD *)v13;
        *(_DWORD *)(v14 + 16) = *(_DWORD *)(v13 + 16);
        *(_QWORD *)(a1 + 40) += 20LL;
      }
      ++v9;
    }
  }
  catch ( std::bad_alloc )
  {
    sub_18004BD84(
      (int)retaddr,
      78,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\hybridpropertystore.cpp",
      -2147024882);
    return 2147942414LL;
  }
  return 0LL;
}
