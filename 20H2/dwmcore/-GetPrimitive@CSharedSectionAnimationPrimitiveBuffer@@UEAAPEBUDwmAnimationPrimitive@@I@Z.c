/*
 * XREFs of ?GetPrimitive@CSharedSectionAnimationPrimitiveBuffer@@UEAAPEBUDwmAnimationPrimitive@@I@Z @ 0x1800BCA60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct DwmAnimationPrimitive *__fastcall CSharedSectionAnimationPrimitiveBuffer::GetPrimitive(
        CSharedSectionAnimationPrimitiveBuffer *this,
        unsigned int a2)
{
  __int64 v2; // r10
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rcx

  v2 = *((_QWORD *)this + 2);
  v3 = *((unsigned int *)this + 7);
  v4 = *(unsigned int *)(v2 + 64);
  if ( v3 < v4 && *((unsigned int *)this + 6) <= v4 - v3 && (v5 = *(_QWORD *)(v2 + 72)) != 0 )
    v6 = v5 + v3;
  else
    v6 = 0LL;
  if ( v6 )
    return (const struct DwmAnimationPrimitive *)(v6 + 32LL * a2);
  else
    return 0LL;
}
