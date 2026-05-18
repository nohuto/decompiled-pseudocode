/*
 * XREFs of sub_18002DB2C @ 0x18002DB2C
 * Callers:
 *     sub_1800312E8 @ 0x1800312E8 (sub_1800312E8.c)
 * Callees:
 *     sub_18002E094 @ 0x18002E094 (sub_18002E094.c)
 *     ?uncaught_exception@std@@YA_NXZ @ 0x18011F9BE (-uncaught_exception@std@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18002DB2C(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rbx
  unsigned int v6; // edi
  unsigned __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  char v15; // [rsp+28h] [rbp-20h]
  int v17; // [rsp+68h] [rbp+20h]

  v5 = a1;
  v6 = 0;
  v17 = 0;
  if ( std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) <= 0
    || std::ios_base::width((std::ios_base *)(v5 + *(int *)(*(_QWORD *)v5 + 4LL))) <= a3 )
  {
    v7 = 0LL;
  }
  else
  {
    v7 = std::ios_base::width((std::ios_base *)(v5 + *(int *)(*(_QWORD *)v5 + 4LL))) - a3;
  }
  sub_18002E094(&v14, v5);
  if ( v15 )
  {
    try
    {
      if ( (std::ios_base::flags((std::ios_base *)(v5 + *(int *)(*(_QWORD *)v5 + 4LL))) & 0x1C0) != 0x40 )
      {
        while ( v7 )
        {
          v9 = *(int *)(*(_QWORD *)v5 + 4LL);
          LOBYTE(v8) = *(_BYTE *)(v9 + v5 + 88);
          if ( (unsigned int)std::streambuf::sputc(*(_QWORD *)(v9 + v5 + 72), v8) == -1 )
          {
            v6 = 4;
            v17 = 4;
            goto LABEL_11;
          }
          --v7;
        }
      }
      if ( std::streambuf::sputn(*(_QWORD *)(*(int *)(*(_QWORD *)v5 + 4LL) + v5 + 72), a2, a3) == a3 )
      {
LABEL_11:
        while ( v7 )
        {
          v10 = *(int *)(*(_QWORD *)v5 + 4LL);
          LOBYTE(v8) = *(_BYTE *)(v10 + v5 + 88);
          if ( (unsigned int)std::streambuf::sputc(*(_QWORD *)(v10 + v5 + 72), v8) == -1 )
          {
            v6 |= 4u;
            goto LABEL_14;
          }
          --v7;
        }
      }
      else
      {
        v6 = 4;
LABEL_14:
        v17 = v6;
      }
      std::ios_base::width((std::ios_base *)(v5 + *(int *)(*(_QWORD *)v5 + 4LL)), 0LL);
    }
    catch ( ... )
    {
      LOBYTE(v11) = 1;
      std::ios::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), 4LL, v11);
      v5 = a1;
      v6 = v17;
    }
  }
  else
  {
    v6 = 4;
  }
  std::ios::setstate(v5 + *(int *)(*(_QWORD *)v5 + 4LL), v6, 0LL);
  if ( !std::uncaught_exception() )
    std::ostream::_Osfx(v14);
  v12 = *(_QWORD *)(*(int *)(*(_QWORD *)v14 + 4LL) + v14 + 72);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return v5;
}
