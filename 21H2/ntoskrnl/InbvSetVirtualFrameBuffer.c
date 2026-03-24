/*
 * XREFs of InbvSetVirtualFrameBuffer @ 0x1403CFF80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 InbvSetVirtualFrameBuffer()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C50B68 && (v0 = *(__int64 (**)(void))(qword_140C50B68 + 176)) != 0LL )
    return v0();
  else
    return 3221225474LL;
}
