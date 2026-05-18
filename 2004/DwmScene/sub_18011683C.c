/*
 * XREFs of sub_18011683C @ 0x18011683C
 * Callers:
 *     sub_1801168B8 @ 0x1801168B8 (sub_1801168B8.c)
 * Callees:
 *     memset @ 0x18011E09A (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 *     _Mtx_init_in_situ @ 0x18011F9A6 (_Mtx_init_in_situ.c)
 *     _Cnd_init_in_situ @ 0x18011FAA4 (_Cnd_init_in_situ.c)
 */

_QWORD *__fastcall sub_18011683C(_QWORD *a1)
{
  char *v2; // rax
  char *v3; // rbx

  v2 = (char *)operator new(0xE8uLL);
  v3 = v2;
  if ( v2 )
  {
    memset(v2, 0, 0xE8uLL);
    Mtx_init_in_situ((_Mtx_t)v3, 2);
    Cnd_init_in_situ((_Cnd_t)(v3 + 80));
    Cnd_init_in_situ((_Cnd_t)(v3 + 152));
    *((_DWORD *)v3 + 56) = 0;
    v3[228] = 0;
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  return a1;
}
