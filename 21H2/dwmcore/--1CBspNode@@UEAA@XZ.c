/*
 * XREFs of ??1CBspNode@@UEAA@XZ @ 0x1801FA620
 * Callers:
 *     ??_ECBspNode@@UEAAPEAXI@Z @ 0x1801FA6F0 (--_ECBspNode@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8E4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ??$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z @ 0x180199724 (--$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z.c)
 */

void __fastcall CBspNode::~CBspNode(CBspNode *this)
{
  _QWORD *v2; // rdi
  __int64 v3; // rsi
  unsigned __int64 v4; // rbp
  void *v5; // rcx

  *(_QWORD *)this = &CBspNode::`vftable';
  ReleaseInterface<CPolygon>((__int64 *)this + 2);
  ReleaseInterface<CPolygon>((__int64 *)this + 3);
  v2 = (_QWORD *)*((_QWORD *)this + 4);
  v3 = 0LL;
  v4 = (unsigned __int64)(*((_QWORD *)this + 5) - (_QWORD)v2 + 7LL) >> 3;
  if ( (unsigned __int64)v2 > *((_QWORD *)this + 5) )
    v4 = 0LL;
  if ( v4 )
  {
    do
    {
      if ( *v2 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 8LL))(*v2);
      ++v2;
      ++v3;
    }
    while ( v3 != v4 );
  }
  v5 = (void *)*((_QWORD *)this + 4);
  if ( v5 )
  {
    std::_Deallocate<16,0>(v5, (*((_QWORD *)this + 6) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
}
