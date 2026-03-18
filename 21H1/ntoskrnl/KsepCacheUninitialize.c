/*
 * XREFs of KsepCacheUninitialize @ 0x1408BC8F0
 * Callers:
 *     KsepEngineUninitialize @ 0x140A90078 (KsepEngineUninitialize.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x14036E4B4 (KsepPoolFreePaged.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

void __fastcall KsepCacheUninitialize(__int64 a1)
{
  _QWORD *v1; // rsi
  _QWORD *v3; // rdi
  _QWORD *v4; // rcx

  v1 = (_QWORD *)(a1 + 32);
  v3 = *(_QWORD **)(a1 + 32);
  while ( v3 != v1 )
  {
    v4 = v3 - 3;
    v3 = (_QWORD *)*v3;
    (*(void (__fastcall **)(_QWORD *))(a1 + 88))(v4);
  }
  KsepPoolFreePaged(*(void **)(a1 + 16));
  KsepPoolFreePaged((void *)a1);
}
