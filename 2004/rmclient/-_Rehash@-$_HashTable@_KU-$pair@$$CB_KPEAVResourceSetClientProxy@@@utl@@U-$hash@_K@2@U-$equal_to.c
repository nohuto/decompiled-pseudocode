/*
 * XREFs of ?_Rehash@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAA_NE@Z @ 0x180013D98
 * Callers:
 *     ?_InsertNode@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@2@@2@PEAU?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@0_K@Z @ 0x180013D00 (-_InsertNode@-$_HashTable@_KU-$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U-$hash@_K@2@U-$equa.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000A2A4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000A938 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_InitBuckets@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAAXXZ @ 0x180013CC4 (-_InitBuckets@-$_HashTable@_KU-$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U-$hash@_K@2@U-$equ.c)
 */

char __fastcall utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::_Rehash(
        __int64 a1,
        unsigned __int8 a2)
{
  char v2; // r14
  void *v5; // rbp
  void *v6; // rcx
  _QWORD *v7; // r9
  __int64 v8; // rdi
  _QWORD *v9; // r11
  _QWORD *v10; // r10
  _QWORD *v11; // r8
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rdx

  v2 = 0;
  if ( a2 <= 0x38u )
  {
    v5 = (unsigned __int64)(8LL << a2) > 0xFFFFFFFFFFFFFFFLL
       ? 0LL
       : operator new(16 * (8LL << a2), (const struct std::nothrow_t *)&std::nothrow);
    if ( v5 )
    {
      v6 = *(void **)(a1 + 16);
      v2 = 1;
      if ( v6 )
        operator delete(v6);
      *(_QWORD *)(a1 + 16) = v5;
      *(_BYTE *)(a1 + 32) = a2;
      utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::_InitBuckets(a1);
      v7 = *(_QWORD **)a1;
      v8 = (8LL << *(_BYTE *)(a1 + 32)) - 1;
      while ( 1 )
      {
        v9 = v7;
        if ( v7 == (_QWORD *)a1 )
          break;
        v10 = v7;
        v7 = (_QWORD *)*v7;
        v11 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 16 * (v8 & v10[2]));
        v12 = (_QWORD *)v11[1];
        if ( v12 )
        {
          v13 = (_QWORD *)*v12;
          if ( v13 != v10 )
          {
            v14 = (_QWORD *)v7[1];
            *(_QWORD *)v10[1] = v7;
            v7[1] = v10[1];
            v10[1] = v13[1];
            *(_QWORD *)v13[1] = v10;
            *v14 = v13;
            v13[1] = v14;
          }
        }
        else
        {
          *v11 = v10;
        }
        v11[1] = v9;
      }
    }
  }
  return v2;
}
