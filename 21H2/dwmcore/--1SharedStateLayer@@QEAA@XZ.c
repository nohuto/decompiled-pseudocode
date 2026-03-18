/*
 * XREFs of ??1SharedStateLayer@@QEAA@XZ @ 0x1800FFDC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SharedStateLayer::~SharedStateLayer(SharedStateLayer *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 4);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
}
