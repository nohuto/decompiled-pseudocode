/*
 * XREFs of sub_18004FCD0 @ 0x18004FCD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 */

__int64 __fastcall sub_18004FCD0(_DWORD *a1, _QWORD *a2)
{
  unsigned __int64 v4; // rcx
  void *v5; // rax
  void *v6; // rbx
  unsigned int v7; // ebp
  int v8; // eax

  RtlAcquireResourceShared(&Resource, 1u);
  v4 = *(unsigned int *)lpMem;
  if ( v4 <= 0x40000 && (v5 = (void *)sub_18006A1B0(v4, &unk_18019F848), (v6 = v5) != 0LL) )
  {
    memcpy(v5, lpMem, *(unsigned int *)lpMem);
    v7 = 0;
    v8 = *(_DWORD *)lpMem;
  }
  else
  {
    v8 = 0;
    v7 = 14;
    v6 = 0LL;
  }
  *a1 = v8;
  *a2 = v6;
  RtlReleaseResource(&Resource);
  return v7;
}
