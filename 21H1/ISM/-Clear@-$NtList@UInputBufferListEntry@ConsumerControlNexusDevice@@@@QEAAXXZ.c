/*
 * XREFs of ?Clear@?$NtList@UInputBufferListEntry@ConsumerControlNexusDevice@@@@QEAAXXZ @ 0x1800A31A0
 * Callers:
 *     ??1ConsumerControlNexusDevice@@EEAA@XZ @ 0x1800A2FF4 (--1ConsumerControlNexusDevice@@EEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall NtList<ConsumerControlNexusDevice::InputBufferListEntry>::Clear(_QWORD *a1)
{
  _QWORD *v2; // rcx
  __int64 result; // rax

  while ( 1 )
  {
    v2 = (_QWORD *)*a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (result = *v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *a1 = result;
    *(_QWORD *)(result + 8) = a1;
    if ( v2 == a1 )
      break;
    operator delete(v2, (const struct std::nothrow_t *)0x58);
    --a1[2];
  }
  return result;
}
