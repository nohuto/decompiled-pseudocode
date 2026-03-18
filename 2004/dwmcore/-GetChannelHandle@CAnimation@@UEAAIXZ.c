/*
 * XREFs of ?GetChannelHandle@CAnimation@@UEAAIXZ @ 0x1800D6060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimation::GetChannelHandle(CAnimation *this)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *((_QWORD *)this - 1);
  result = 0LL;
  if ( v1 )
    return *(unsigned int *)(v1 + 16);
  return result;
}
