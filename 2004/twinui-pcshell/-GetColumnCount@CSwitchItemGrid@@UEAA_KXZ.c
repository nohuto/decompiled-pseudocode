/*
 * XREFs of ?GetColumnCount@CSwitchItemGrid@@UEAA_KXZ @ 0x1803A7160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CSwitchItemGrid::GetColumnCount(CSwitchItemGrid *this)
{
  __int64 v1; // rdx
  unsigned __int64 result; // rax
  __int64 v3; // r8
  unsigned __int64 v4; // rcx

  v1 = *((_QWORD *)this + 76);
  result = 0LL;
  v3 = v1 + 56LL * *((_QWORD *)this + 77);
  while ( v1 != v3 )
  {
    v4 = result;
    result = *(_QWORD *)(v1 + 32);
    if ( result <= v4 )
      result = v4;
    v1 += 56LL;
  }
  return result;
}
