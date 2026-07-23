/*
 * XREFs of KiErrata704Present @ 0x140A11FD0
 * Callers:
 *     sub_1403DDFC0 @ 0x1403DDFC0 (sub_1403DDFC0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x1409F9010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     <none>
 */

__int64 KiErrata704Present()
{
  unsigned __int64 v0; // rax
  unsigned __int64 v1; // kr00_8
  unsigned int v3; // [rsp+8h] [rbp-10h]
  unsigned int v4; // [rsp+10h] [rbp-8h]

  v0 = __readmsr(0xC0000084);
  v4 = HIDWORD(v0);
  v3 = v0;
  __writemsr(0xC0000084, __PAIR64__(HIDWORD(v0), (unsigned int)v0 & 0xFFFFFEFF));
  v1 = __readeflags();
  __writeeflags(v1 | 0x100);
  __asm { syscall; Low latency system call }
  __writemsr(0xC0000084, __PAIR64__(v4, v3));
  return 3221225604LL;
}
