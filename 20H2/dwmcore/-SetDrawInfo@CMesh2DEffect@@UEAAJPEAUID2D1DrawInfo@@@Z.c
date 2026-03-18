/*
 * XREFs of ?SetDrawInfo@CMesh2DEffect@@UEAAJPEAUID2D1DrawInfo@@@Z @ 0x18026A440
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMesh2DEffect::SetDrawInfo(CMesh2DEffect *this, struct ID2D1DrawInfo *a2)
{
  *((_QWORD *)this + 15) = a2;
  (*(void (__fastcall **)(struct ID2D1DrawInfo *))(*(_QWORD *)a2 + 8LL))(a2);
  return 0LL;
}
