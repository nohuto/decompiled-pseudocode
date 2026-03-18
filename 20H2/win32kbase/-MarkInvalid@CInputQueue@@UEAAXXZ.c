/*
 * XREFs of ?MarkInvalid@CInputQueue@@UEAAXXZ @ 0x1C00A67C0
 * Callers:
 *     ??_GCInputQueue@@UEAAPEAXI@Z @ 0x1C0099300 (--_GCInputQueue@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CInputQueue::MarkInvalid(CInputQueue *this)
{
  int v2; // eax
  __int64 v3; // rcx

  if ( qword_1C0250D58 )
    v2 = qword_1C0250D58();
  else
    v2 = -1073741637;
  if ( v2 < 0 )
  {
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
  else if ( *((_QWORD *)this + 3) )
  {
    *((_QWORD *)this + 3) = 0LL;
    v3 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = 0LL;
    if ( qword_1C0250D60 )
      qword_1C0250D60(v3, this);
  }
  *(_OWORD *)((char *)this + 40) = 0LL;
  *(_OWORD *)((char *)this + 56) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 3) = 0;
}
