/*
 * XREFs of EditionPostInputEvent @ 0x1C00458E4
 * Callers:
 *     ?PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z @ 0x1C00458A0 (-PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z.c)
 *     PostEvent @ 0x1C01B18E8 (PostEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EditionPostInputEvent(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  if ( qword_1C0259028 )
    return qword_1C0259028(a1, a2, a3, a4, a5, a6, 0LL);
  else
    return 3221225659LL;
}
