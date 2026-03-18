/*
 * XREFs of ?vSet@RGNOBJ@@QEAAXXZ @ 0x1C0080C80
 * Callers:
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0086240 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNOBJ::vSet(RGNOBJ *this)
{
  __int64 v1; // rdx
  __int64 v2; // rax

  v1 = *(_QWORD *)this;
  v2 = *(_QWORD *)(*(_QWORD *)this + 88LL);
  *(_DWORD *)(v1 + 80) = 16;
  *(_DWORD *)(v1 + 84) = 1;
  *(_QWORD *)(v1 + 96) = 0LL;
  *(_QWORD *)(v1 + 104) = 0LL;
  *(_DWORD *)v2 = 0;
  *(_DWORD *)(v2 + 4) = 0x80000000;
  *(_QWORD *)(v2 + 8) = 0x7FFFFFFFLL;
  *(_QWORD *)(v1 + 40) = v2 + 16;
}
