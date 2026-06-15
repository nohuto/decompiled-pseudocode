/*
 * XREFs of sub_180019ECC @ 0x180019ECC
 * Callers:
 *     sub_180019E90 @ 0x180019E90 (sub_180019E90.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800398A0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

void __fastcall sub_180019ECC(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  char *v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  char *v7; // r8
  char *v8; // rcx

  *(_QWORD *)a1 = off_18003EF00;
  `eh vector destructor iterator'((void *)(a1 + 168), 8uLL, 9uLL, sub_18001A370);
  `eh vector destructor iterator'((void *)(a1 + 96), 8uLL, 9uLL, sub_18001A370);
  v2 = *(void **)(a1 + 88);
  if ( v2 )
    CoTaskMemFree(v2);
  v3 = *(void **)(a1 + 80);
  if ( v3 )
    CoTaskMemFree(v3);
  v4 = *(char **)(a1 + 56);
  if ( v4 )
  {
    v5 = (*(_QWORD *)(a1 + 72) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v5 >= 0x1000 )
    {
      v6 = v5 + 39;
      v7 = (char *)*((_QWORD *)v4 - 1);
      v8 = (char *)(v4 - v7);
      if ( (unsigned __int64)(v8 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v8, v6);
        JUMPOUT(0x180019FB8LL);
      }
      v4 = v7;
    }
    sub_180039D98(v4);
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 64) = 0LL;
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
}
