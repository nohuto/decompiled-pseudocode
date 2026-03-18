/*
 * XREFs of ?IsAnimate@CAnimation@@UEAA_NXZ @ 0x1800CAAE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CAnimation::IsAnimate(CAnimation *this)
{
  char v2; // al
  char v3; // dl
  char v4; // al

  v2 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 7) + 208LL))((char *)this - 56);
  v3 = 0;
  if ( !v2 )
  {
    if ( *((_DWORD *)this + 8) )
    {
      v4 = *((_BYTE *)this + 56);
      if ( (v4 & 4) == 0 )
        return (v4 & 0x11) != 17;
    }
  }
  return v3;
}
