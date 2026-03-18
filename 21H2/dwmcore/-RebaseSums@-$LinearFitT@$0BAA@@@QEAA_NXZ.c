/*
 * XREFs of ?RebaseSums@?$LinearFitT@$0BAA@@@QEAA_NXZ @ 0x180078B0C
 * Callers:
 *     ?Update@?$LinearFitT@$0BAA@@@QEAA_N_J0@Z @ 0x180079568 (-Update@-$LinearFitT@$0BAA@@@QEAA_N_J0@Z.c)
 * Callees:
 *     ?AddToSums@?$LinearFitT@$0BAA@@@QEAA_NAEBUPoint@1@@Z @ 0x180078C0C (-AddToSums@-$LinearFitT@$0BAA@@@QEAA_NAEBUPoint@1@@Z.c)
 */

char __fastcall LinearFitT<256>::RebaseSums(__int64 a1)
{
  int v1; // ebp
  char v3; // di
  unsigned int v4; // esi
  char result; // al

  v1 = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 80) = 0LL;
  v3 = 1;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  v4 = 0;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 112);
  while ( (unsigned __int8)LinearFitT<256>::AddToSums(a1, 16LL * v4 + a1 + 104) )
  {
    if ( ++v4 >= 0x100 )
      goto LABEL_4;
  }
  v3 = 0;
LABEL_4:
  result = v3;
  *(_DWORD *)(a1 + 8) = v1;
  return result;
}
