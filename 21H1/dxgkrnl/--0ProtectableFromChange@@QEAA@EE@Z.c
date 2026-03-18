/*
 * XREFs of ??0ProtectableFromChange@@QEAA@EE@Z @ 0x1C0010554
 * Callers:
 *     ??0DMMVIDPNTOPOLOGY@@QEAA@XZ @ 0x1C0010470 (--0DMMVIDPNTOPOLOGY@@QEAA@XZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 */

ProtectableFromChange *__fastcall ProtectableFromChange::ProtectableFromChange(ProtectableFromChange *this)
{
  char *v1; // rsi
  PVOID v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  PVOID v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int8 (__fastcall **v13)(char *); // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // eax

  v1 = (char *)this + 24;
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &ProtectableFromChange::`vftable';
  *((_WORD *)this + 11) = 0;
  *((_BYTE *)this + 20) = 4;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 3) = &Vector<unsigned __int64>::`vftable';
  *((_QWORD *)this + 5) = 4LL;
  *((_DWORD *)this + 14) = 1;
  v3 = operator new[](4uLL, 0x4E506456u, PagedPool);
  *((_QWORD *)v1 + 3) = v3;
  if ( v3 )
  {
    memset(v3, 0, *((_QWORD *)v1 + 2));
    *((_DWORD *)v1 + 8) = 2;
  }
  else
  {
    v15 = WdLogNewEntry5_WdLowResource(v5, v4, v6, v7);
    WdLogEvent5_WdLowResource(v15);
    *((_DWORD *)v1 + 2) = -1073741801;
  }
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 8) = &Vector<unsigned __int64>::`vftable';
  *((_QWORD *)this + 10) = 4LL;
  *((_DWORD *)this + 24) = 1;
  v8 = operator new[](0x20uLL, 0x4E506456u, PagedPool);
  *((_QWORD *)this + 11) = v8;
  if ( v8 )
  {
    memset(v8, 0, 8LL * *((_QWORD *)this + 10));
    *((_DWORD *)this + 24) = 2;
  }
  else
  {
    v16 = WdLogNewEntry5_WdLowResource(v10, v9, v11, v12);
    WdLogEvent5_WdLowResource(v16);
    *((_DWORD *)this + 18) = -1073741801;
  }
  v13 = *(unsigned __int8 (__fastcall ***)(char *))v1;
  *((_DWORD *)this + 4) = 1;
  if ( (*v13)(v1) && (**((unsigned __int8 (__fastcall ***)(char *))this + 8))((char *)this + 64) )
  {
    *((_DWORD *)this + 4) = 2;
  }
  else
  {
    v17 = *((_DWORD *)this + 8);
    if ( v17 >= 0 )
      v17 = *((_DWORD *)this + 18);
    *((_DWORD *)this + 2) = v17;
  }
  return this;
}
