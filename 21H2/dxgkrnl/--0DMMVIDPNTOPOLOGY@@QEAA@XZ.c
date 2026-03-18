/*
 * XREFs of ??0DMMVIDPNTOPOLOGY@@QEAA@XZ @ 0x1C0010744
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C018A4B0 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C01A6FD0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 */

DMMVIDPNTOPOLOGY *__fastcall DMMVIDPNTOPOLOGY::DMMVIDPNTOPOLOGY(
        DMMVIDPNTOPOLOGY *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int8 (__fastcall ***v4)(_QWORD); // r14
  char *v6; // rsi
  void *v7; // rax
  __int64 v8; // r9
  void *v9; // rax
  unsigned __int8 (__fastcall **v10)(char *); // rax
  unsigned __int8 (__fastcall **v11)(_QWORD); // rax
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rcx

  v4 = (unsigned __int8 (__fastcall ***)(_QWORD))((char *)this + 8);
  *(_QWORD *)this = &Set<DMMVIDPNPRESENTPATH>::`vftable';
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = &DoublyLinkedList<DMMVIDPNPRESENTPATH,DoubleLinkedListElementDeleter<DMMVIDPNPRESENTPATH>>::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  v6 = (char *)this + 80;
  *((_DWORD *)this + 12) = 2;
  *((_QWORD *)this + 4) = (char *)this + 24;
  *((_QWORD *)this + 3) = (char *)this + 24;
  *((_BYTE *)this + 192) = 1;
  *((_QWORD *)this + 7) = &ProtectableFromChange::`vftable';
  *((_DWORD *)this + 16) = 0;
  *((_BYTE *)this + 76) = 4;
  *((_WORD *)this + 39) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 10) = &Vector<unsigned __int64>::`vftable';
  *((_QWORD *)this + 12) = 4LL;
  *((_DWORD *)this + 28) = 1;
  v7 = (void *)operator new[](4uLL, 0x4E506456u, 256LL, a4);
  *((_QWORD *)v6 + 3) = v7;
  if ( v7 )
  {
    memset(v7, 0, *((_QWORD *)v6 + 2));
    *((_DWORD *)v6 + 8) = 2;
  }
  else
  {
    WdLogSingleEntry0(6LL);
    *((_DWORD *)v6 + 2) = -1073741801;
  }
  *((_DWORD *)this + 32) = 0;
  *((_QWORD *)this + 15) = &Vector<unsigned __int64>::`vftable';
  *((_QWORD *)this + 17) = 4LL;
  *((_DWORD *)this + 38) = 1;
  v9 = (void *)operator new[](0x20uLL, 0x4E506456u, 256LL, v8);
  *((_QWORD *)this + 18) = v9;
  if ( v9 )
  {
    memset(v9, 0, 8LL * *((_QWORD *)this + 17));
    *((_DWORD *)this + 38) = 2;
  }
  else
  {
    WdLogSingleEntry0(6LL);
    *((_DWORD *)this + 32) = -1073741801;
  }
  v10 = *(unsigned __int8 (__fastcall ***)(char *))v6;
  *((_DWORD *)this + 18) = 1;
  if ( (*v10)(v6) && (**((unsigned __int8 (__fastcall ***)(char *))this + 15))((char *)this + 120) )
  {
    *((_DWORD *)this + 18) = 2;
  }
  else
  {
    v13 = *((_DWORD *)this + 22);
    if ( v13 >= 0 )
      v13 = *((_DWORD *)this + 32);
    *((_DWORD *)this + 16) = v13;
  }
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 46) = 1833173002;
  *(_QWORD *)this = &DMMVIDPNTOPOLOGY::`vftable'{for `Set<DMMVIDPNPRESENTPATH>'};
  *((_QWORD *)this + 7) = &DMMVIDPNTOPOLOGY::`vftable'{for `ProtectableFromChange'};
  *((_QWORD *)this + 20) = &DMMVIDPNTOPOLOGY::`vftable'{for `ContainedBy<DMMVIDPN>'};
  *((_QWORD *)this + 22) = &DMMVIDPNTOPOLOGY::`vftable'{for `SignedWithClassSignature<DMMVIDPNTOPOLOGY>'};
  v11 = *v4;
  *((_DWORD *)this + 49) = 0;
  *((_BYTE *)this + 200) = 0;
  if ( !(*v11)(v4) )
  {
    v14 = WdLogNewEntry5_WdTrace();
    v15 = *((int *)this + 4);
LABEL_18:
    *(_QWORD *)(v14 + 24) = v15;
    return this;
  }
  if ( *((_DWORD *)this + 18) != 2 )
  {
    v14 = WdLogNewEntry5_WdTrace();
    v15 = *((int *)this + 16);
    goto LABEL_18;
  }
  return this;
}
