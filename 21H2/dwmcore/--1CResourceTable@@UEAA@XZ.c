/*
 * XREFs of ??1CResourceTable@@UEAA@XZ @ 0x18005E954
 * Callers:
 *     ??_ECResourceTable@@UEAAPEAXI@Z @ 0x18005E910 (--_ECResourceTable@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x180061544 (--$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CResourceTable::~CResourceTable(CResourceTable *this)
{
  _QWORD **v2; // rdi
  _QWORD *v3; // rcx
  void *v4; // rcx
  _QWORD *v5; // rax
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx

  *(_QWORD *)this = &CResourceTable::`vftable';
  v2 = (_QWORD **)((char *)this + 64);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] != v2 || (v5 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v5;
    v6 = v3 - 1;
    v5[1] = v2;
    v7 = *v6;
    v8 = (unsigned __int64)(v6 + 1) & -(__int64)(v6 != 0LL);
    v6[1] = v8;
    v6[2] = v8;
    (*(void (**)(void))(v7 + 8))();
  }
  ReleaseInterface<CProcessAttribution>((char *)this + 56);
  v4 = (void *)*((_QWORD *)this + 5);
  *((_QWORD *)this + 2) = &HANDLE_TABLE::`vftable';
  DefaultHeap::Free(v4);
}
