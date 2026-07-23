/*
 * XREFs of MiCompareUserSidHotPatchNodes @ 0x1408C99BC
 * Callers:
 *     MiFindUserSidHotPatchContext @ 0x1408C9FAC (MiFindUserSidHotPatchContext.c)
 *     MiLoadHotPatchForUserSid @ 0x1408CB090 (MiLoadHotPatchForUserSid.c)
 * Callees:
 *     RtlLengthSid @ 0x14026CA10 (RtlLengthSid.c)
 *     RtlCompareMemory @ 0x140408390 (RtlCompareMemory.c)
 */

__int64 __fastcall MiCompareUserSidHotPatchNodes(_QWORD *a1, __int64 a2)
{
  void *v3; // rbp
  void *v4; // rsi
  ULONG v5; // edi
  ULONG v6; // eax
  unsigned int v7; // eax

  if ( *a1 < *(_QWORD *)(a2 + 32) )
    return 0xFFFFFFFFLL;
  if ( *a1 <= *(_QWORD *)(a2 + 32) )
  {
    v3 = (void *)a1[1];
    v4 = (void *)(a2 + 40);
    v5 = RtlLengthSid(v3);
    v6 = RtlLengthSid(v4);
    if ( v5 < v6 )
      return 0xFFFFFFFFLL;
    if ( v5 <= v6 )
    {
      v7 = RtlCompareMemory(v3, v4, v5);
      if ( v7 == v5 )
        return 0LL;
      if ( *(_BYTE *)(v7 + a1[1]) < *((_BYTE *)v4 + v7) )
        return 0xFFFFFFFFLL;
    }
  }
  return 1LL;
}
