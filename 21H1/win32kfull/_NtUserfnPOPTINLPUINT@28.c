/*
 * XREFs of _NtUserfnPOPTINLPUINT@28 @ 0x16D3B6
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserfnPOPTINLPUINT(int a1, int a2, unsigned int a3, volatile void *Address, int a5, char a6, int a7)
{
  int v8; // [esp+0h] [ebp-2Ch]
  int v9; // [esp+4h] [ebp-28h]
  int v10; // [esp+8h] [ebp-24h]
  int v11; // [esp+Ch] [ebp-20h]
  int v12; // [esp+10h] [ebp-1Ch]
  int ms_exc; // [esp+14h] [ebp-18h]
  int ms_exc_4; // [esp+18h] [ebp-14h]
  int ms_exc_8; // [esp+1Ch] [ebp-10h]

  if ( Address )
  {
    if ( a3 > 0x3FFFFFFF )
      ExRaiseAccessViolation();
    ProbeForRead(Address, 4 * a3, 1u);
  }
  return ((int (__stdcall *)(int, int, unsigned int, volatile void *, int, int, int, int, int, int, int, int, int))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           Address,
           a5,
           v8,
           v9,
           v10,
           v11,
           v12,
           ms_exc,
           ms_exc_4,
           ms_exc_8);
}
