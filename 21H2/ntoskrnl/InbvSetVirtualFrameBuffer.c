/*
 * XREFs of InbvSetVirtualFrameBuffer @ 0x1403D00F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 InbvSetVirtualFrameBuffer()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C50BA8 && (v0 = *(__int64 (**)(void))(qword_140C50BA8 + 176)) != 0LL )
    return v0();
  else
    return 3221225474LL;
}
